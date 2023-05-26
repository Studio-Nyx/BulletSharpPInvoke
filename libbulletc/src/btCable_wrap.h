#include "main.h"
#include <vector> 
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

	struct Vector3
	{
		double x;
		double y;
		double z;
	};

	EXPORT btCable* btCable_new(btSoftBodyWorldInfo* worldInfo,btCollisionWorld* world, int node_count, const btScalar* x, const btScalar* m);

	EXPORT void btCable_removeLink(btCable* obj, int index);
	EXPORT void btCable_removeNode(btCable* obj, int index);
	EXPORT void btCable_removeAnchor(btCable* obj, int index);

	EXPORT void btCable_setRestLengthLink(btCable* obj, int index, btScalar distance);
	EXPORT btScalar btCable_getRestLengthLink(btCable* obj, int index);

	EXPORT void btCable_swapNodes(btCable* obj, int index0, int index1);
	EXPORT void btCable_swapAnchors(btCable* obj, int index0, int index1);

	EXPORT btScalar btCable_getLengthPosition(btCable* obj);
	EXPORT btScalar btCable_getLengthRestlength(btCable* obj);

	EXPORT btVector3* btCable_getImpulses(btCable* obj);
	EXPORT int btCable_getNumberNodes(btCable* obj);
	EXPORT btVector3* btCable_getPositionNodes(btCable* obj);
	EXPORT btVector3* btCable_getPositionNodesArray(btCable* obj);
	EXPORT void btCable_getPositionNode(btCable* obj, btVector3* v, int index);
	EXPORT void btCable_updatePositionNodes(btCable* obj, Vector3* vecPtr, int length);
	EXPORT void btCable_updateImpulses(btCable* obj, Vector3* vecPtr, int length);

	EXPORT btCollisionShape* btCable_getNodeCollisionShape(btCable* obj);
	EXPORT void btCable_setNodeCollisionShape(btCable* obj, btCollisionShape* nodeShape);
	EXPORT void btCable_setWorldRef(btCable* obj, btCollisionWorld* world);


#ifdef __cplusplus
}
#endif