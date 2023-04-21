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

        public Cable(SoftBodyWorldInfo worldInfo, int nodeCount, Vector3[] positions, double[] masses) :
			 base(CreateCable(worldInfo, nodeCount, positions, masses))
		{
			WorldInfo = worldInfo;
		}

		private static IntPtr CreateCable(SoftBodyWorldInfo worldInfo, int nodeCount, Vector3[] positions, double[] masses)
		{
			return btCable_new(worldInfo.Native, nodeCount, positions, masses);
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

		public void SetRestLenghtLink(int index, double distance)
		{
			btCable_setRestLengtLink(Native, index, distance);
		}

		public double GetRestLenghtLink(int index)
		{
			return btCable_getRestLengtLink(Native, index);
		}

		public void SwapNodes(int index0, int index1)
		{
			btCable_swapNodes(Native, index0, index1);
		}

		public double GetLength()
        {
			return btCable_getLength(Native);
        }

		public Vector3Array GetImpulses(int size)
        {
			return new Vector3Array(btCable_getImpulses(Native), size);
		}
	}
}
