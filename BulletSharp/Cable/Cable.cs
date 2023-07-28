using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Security;
using BulletSharp.Math;
using static BulletSharp.UnsafeNativeMethods;

namespace BulletSharp.SoftBody
{
	public class Cable : SoftBody
    {

        public Cable(SoftBodyWorldInfo worldInfo,CollisionWorld world , int nodeCount, Vector3[] positions, double[] masses) :
			 base(CreateCable(worldInfo,world, nodeCount, positions, masses))
		{
			WorldInfo = worldInfo;
		}

		private static IntPtr CreateCable(SoftBodyWorldInfo worldInfo,CollisionWorld world, int nodeCount, Vector3[] positions, double[] masses)
		{
			return btCable_new(worldInfo.Native, world.Native, nodeCount, positions, masses);
		}

		public void RemoveLink(int index)
		{
			btCable_removeLink(Native, index);
		}
		public void RemoveNode(int index)
		{
			btCable_removeNode(Native, index);
		}
		public void RemoveAnchor(int index)
		{
			btCable_removeAnchor(Native, index);
		}

		public void SetRestLengthLink(int index, double distance)
		{
			btCable_setRestLengthLink(Native, index, distance);
		}

		public double GetRestLengthLink(int index)
		{
			return btCable_getRestLengthLink(Native, index);
		}

		public void SwapNodes(int index0, int index1)
		{
			btCable_swapNodes(Native, index0, index1);
		}

		public double GetLengthRestlength()
        {
			return btCable_getLengthRestlength(Native);
        }
        
        public double GetLengthPosition()
        {
            return btCable_getLengthPosition(Native);
        }

		public Vector3Array GetImpulses(int size)
        {
			return new Vector3Array(btCable_getImpulses(Native), size);
		}

        public int GetNumberNodes()
        {
            return btCable_getNumberNodes(Native);
        }

        public Vector3Array GetPositionNodes()
        {
            var size = btCable_getNumberNodes(Native);
            return new Vector3Array(btCable_getPositionNodes(Native), size);
        }

        public Vector3Array GetPositionNodesArray()
        {           
            var size = btCable_getNumberNodes(Native);
            return new Vector3Array(btCable_getPositionNodesArray(Native), size);
        }
        
        public Vector3 GetPositionNode(int index)
        {
            Vector3 v;
            btCable_getPositionNode(Native, out v, index);
            return v;
        }

        public void SwapAnchors(int index0, int index1)
		{
            btCable_swapAnchors(Native, index0, index1);
        }

		public IntPtr GetNodeCollisionShape()
		{
			return btCable_getNodeCollisionShape(Native);
		}

		public void SetNodeCollisionShape(CollisionShape shape)
		{
			btCable_setNodeCollisionShape(Native, shape.Native);
		}

		public void SetWorldRef(CollisionWorld collisionWorld)
        {
			btCable_setWorldRef(Native, collisionWorld.Native);
		}

		public void UpdatePositionNodes(Vector3[] vecArray)
		{
            unsafe
            {
                //Pin array then send to C++
                fixed (Vector3* vecPtr = vecArray)
				{
                    btCable_updatePositionNodes(Native, vecPtr, vecArray.Length);
                }
            }
        } 

		public void UpdateImpulses(Vector3[] vecArray)
        {
            unsafe
            {
                //Pin array then send to C++
                fixed (Vector3* vecPtr = vecArray)
				{
                    btCable_updateImpulses(Native, vecPtr, vecArray.Length);
                }
            }
        }
		
		public bool checkIfCollisionWithWorldArrayPos( int objArrayPos)
		{
			return btCable_checkIfCollisionWithWorldArrayPos(Native, objArrayPos);
		}
		
		public void setBlackHolePos(bool state,Vector3 vecPtr)
		{
			btCable_setBlackHolePos(Native,state,out vecPtr);
		}


		public double getBendingMaxAngle()
		{
			return btCable_getBendingMaxAngle(Native);
		}
		
		public void setBendingMaxAngle(double stiffness)
		{
			btCable_setBendingMaxAngle(Native,stiffness);
		}
		
		public double getBendingStiffness()
		{
			return btCable_getBendingStiffness(Native);
		}
		public void setBendingStiffness(double angle)
		{
			btCable_setBendingStiffness(Native,angle);
		}

		
		
		
    }
}
