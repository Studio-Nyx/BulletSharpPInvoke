#include "main.h"
#include <vector> 
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif
	EXPORT btCable* btCable_new(btSoftBodyWorldInfo* worldInfo,btCollisionWorld* world, int node_count, const btScalar* x, const btScalar* m);

	EXPORT void btCable_removeLink(btCable* obj, int index);
	EXPORT void btCable_removeNode(btCable* obj, int index);
	EXPORT void btCable_removeAnchor(btCable* obj, int index);

	EXPORT void btCable_setRestLengtLink(btCable* obj, int index, btScalar distance);
	EXPORT btScalar btCable_getRestLengtLink(btCable* obj, int index);

	EXPORT void btCable_swapNodes(btCable* obj, int index0, int index1);
	EXPORT void btCable_swapAnchors(btCable* obj, int index0, int index1);

	EXPORT btScalar btCable_getLength(btCable* obj);

	EXPORT btVector3* btCable_getImpulses(btCable* obj);

	EXPORT btCollisionShape* btCable_getNodeCollisionShape(btCable* obj);
	EXPORT void btCable_setNodeCollisionShape(btCable* obj, btCollisionShape* nodeShape);
	EXPORT void btCable_setWorldRef(btCable* obj, btCollisionWorld* world);


#ifdef __cplusplus
}
#endif