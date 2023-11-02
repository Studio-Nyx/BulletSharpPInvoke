using System;
using static BulletSharp.UnsafeNativeMethods;

namespace BulletSharp.SoftBody
{
	public class SoftRigidDynamicsWorld : DiscreteDynamicsWorld
	{
		private AlignedSoftBodyArray _softBodyArray;
		private SoftBodySolver _softBodySolver; // private ref passed to bodies during AddSoftBody
		private bool _ownsSolver;

		public SoftRigidDynamicsWorld(SoftBodyWorldInfo worldInfo,
			ConstraintSolver constraintSolver, CollisionConfiguration collisionConfiguration,
			SoftBodySolver softBodySolver = null)
		{
			if (softBodySolver != null)
			{
				_softBodySolver = softBodySolver;
				_ownsSolver = false;
			}
			else
			{
				_softBodySolver = new DefaultSoftBodySolver();
				_ownsSolver = true;
			}

			IntPtr native = btSoftRigidDynamicsWorld_new(worldInfo.Native,
				(constraintSolver != null) ? constraintSolver.Native : IntPtr.Zero,
				collisionConfiguration.Native, _softBodySolver.Native);
			InitializeUserOwned(native);
			InitializeMembers(worldInfo.Dispatcher, worldInfo.Broadphase, constraintSolver);

			WorldInfo = worldInfo;
		}

		public void AddSoftBody(SoftBody body)
		{
			body.SoftBodySolver = _softBodySolver;
			CollisionObjectArray.Add(body);
		}

		public void AddSoftBody(SoftBody body, CollisionFilterGroups collisionFilterGroup, CollisionFilterGroups collisionFilterMask)
		{
			body.SoftBodySolver = _softBodySolver;
			CollisionObjectArray.Add(body, (int)collisionFilterGroup, (int)collisionFilterMask);
		}

		public void AddSoftBody(SoftBody body, int collisionFilterGroup, int collisionFilterMask)
		{
			body.SoftBodySolver = _softBodySolver;
			CollisionObjectArray.Add(body, collisionFilterGroup, collisionFilterMask);
		}

		public void RemoveSoftBody(SoftBody body)
		{
			CollisionObjectArray.Remove(body);
		}

		public int DrawFlags
		{
			get => btSoftRigidDynamicsWorld_getDrawFlags(Native);
			set => btSoftRigidDynamicsWorld_setDrawFlags(Native, value);
		}

		public AlignedSoftBodyArray SoftBodyArray
		{
			get
			{
				if (_softBodyArray == null)
				{
					_softBodyArray = new AlignedSoftBodyArray(btSoftRigidDynamicsWorld_getSoftBodyArray(Native));
				}
				return _softBodyArray;
			}
		}

		public SoftBodyWorldInfo WorldInfo { get; }

		protected override void Dispose(bool disposing)
		{
			if (disposing)
			{
				if (_ownsSolver)
				{
					_softBodySolver.Dispose();
				}
			}
			base.Dispose(disposing);
		}

		public int GetHydroNodesNumber()
		{
			return btGetHydroNodesNumber(Native);
		}
		
		public int GetActiveNodesNumber()
		{
			return btGetActiveNodesNumber(Native);
		}

		public bool UpdateCableForces(IntPtr strc, int size)
		{
			return btUpdateCableForces(Native, strc, size);
		}

		public IntPtr GetCablesData()
		{
			return btGetCablesData(Native);
		}

		public IntPtr GetNodesPos()
		{
			return btGetNodesPos(Native);
		}
		
		public IntPtr GetNodesData()
		{
			return btGetNodesData(Native);
		}

		public IntPtr GetCableIndexesArray()
		{
			return btGetCableIndexesArray(Native);
		}
	}
}
