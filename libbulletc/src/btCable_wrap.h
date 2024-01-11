#include "main.h"
#include <vector> 
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif
	// Constructor
	EXPORT btCable* btCable_new(btSoftBodyWorldInfo* worldInfo,btCollisionWorld* world, int node_count,int section_count, const btScalar* x, const btScalar* m);

	EXPORT void btCable_removeLinkAt(btCable* obj, int index);
	EXPORT void btCable_removeNodeAt(btCable* obj, int index);
	EXPORT void btCable_removeAnchorAt(btCable* obj, int index);

	EXPORT void btCable_getTensionAt(btCable* obj, int index, btVector3* impulse);

	EXPORT int btCable_getNumberOfNode(btCable* obj);
	EXPORT int btCable_getNumberOfAnchor(btCable* obj);
	EXPORT int btCable_getNumberOfLink(btCable* obj);

	EXPORT btScalar btCable_getLength(btCable* obj);
	EXPORT btScalar btCable_getRestLength(btCable* obj);

	EXPORT void btCable_Node_GetPosition(btCable* obj, int index, btVector3* position);
	EXPORT void btCable_Node_SetPosition(btCable* obj, int index, btVector3 position);
	EXPORT void btCable_Node_GetVelocity(btCable* obj, int index, btVector3* velocity);
	EXPORT void btCable_Node_SetVelocity(btCable* obj, int index, btVector3 velocity);
	EXPORT void btCable_Node_GetForce(btCable* obj, int index, btVector3* force);
	EXPORT void btCable_Node_SetForce(btCable* obj, int index, btVector3 force);
	EXPORT btScalar btCable_Node_GetInverseMass(btCable* obj, int index);
	EXPORT void btCable_Node_SetInverseMass(btCable* obj, int index, btScalar inverseMass);
	EXPORT btScalar btCable_Node_GetArea(btCable* obj, int index);
	EXPORT void btCable_Node_SetArea(btCable* obj, int index, btScalar area);
	EXPORT int btCable_Node_GetIsAttached(btCable* obj, int index);
	EXPORT void btCable_Node_SetIsAttached(btCable* obj, int index, int isAttached);
	EXPORT int btCable_Node_GetIndex(btCable* obj, int index);
	EXPORT void btCable_Node_SetIndex(btCable* obj, int index, int newIndex);

	EXPORT bool btCable_Anchor_HasNode(btCable* obj, int index);
	EXPORT int btCable_Anchor_GetIndexOfNode(btCable* obj, int index);
	EXPORT void btCable_Anchor_SetNode(btCable* obj, int indexAnchor, int indexNode);

	EXPORT int btCable_Link_GetNode0(btCable* obj, int index);
	EXPORT void btCable_Link_SetNode0(btCable* obj, int indexLink, int indexNode);
	EXPORT int btCable_Link_GetNode1(btCable* obj, int index);
	EXPORT void btCable_Link_SetNode1(btCable* obj, int indexLink, int indexNode);
	EXPORT btScalar btCable_Link_GetRestLength(btCable* obj, int index);
	EXPORT void btCable_Link_SetRestLength(btCable* obj, int index, btScalar rl);

	EXPORT bool btCable_LRA_GetActive(btCable* obj);
	EXPORT void btCable_LRA_SetActive(btCable* obj, bool active);

	EXPORT bool btCable_Bending_GetActive(btCable* obj);
	EXPORT void btCable_Bending_SetActive(btCable* obj, bool active);
	EXPORT btScalar btCable_Bending_GetBendingMaxAngle(btCable* obj);
	EXPORT void btCable_Bending_SetBendingMaxAngle(btCable* obj, btScalar angle);

	EXPORT btScalar btCable_Bending_GetBendingStiffness(btCable* obj);
	EXPORT void btCable_Bending_SetBendingStiffness(btCable* obj, btScalar stiffness);

	EXPORT bool btCable_Gravity_GetActive(btCable* obj);
	EXPORT void btCable_Gravity_SetActive(btCable* obj, bool active);

	EXPORT bool btCable_Collision_GetActive(btCable* obj);
	EXPORT void btCable_Collision_SetActive(btCable* obj, bool active);

	EXPORT bool btUpdateCableData(btCable* obj, btCable::CableData &cableData);

	EXPORT bool btGetUseHydroAero(btCable* obj);

	EXPORT void btSetUseHydroAero(btCable* obj, bool active);

	EXPORT void btSetHorizonDrop(btCable* obj, float value);

	EXPORT void* btGetCableNodesPos(btCable* obj);

	EXPORT int btGetCableState(btCable* obj);

	EXPORT void btCable_appendNode(btSoftBody* obj, const btVector3* x, btScalar m);

	EXPORT void btCable_setCollisionParameters(btCable* obj, int substepDelayCollision, int subIterationCollision,btScalar sleepingThreshold);

	EXPORT float btCable_getCollisionMargin(btCable* obj);

	EXPORT void btCable_setCollisionMargin(btCable* obj, float collisionMargin);

	EXPORT void btCable_addSection(btCable* obj, btScalar rl, int start, int end, int nbNodes);

	EXPORT void btCable_setDefaultRestLength(btCable* obj, btScalar rl);

	EXPORT void btCable_setMinLength(btCable* obj, btScalar value);

	EXPORT void  btCable_setWantedGrowSpeedAndDistance(btCable* obj, btScalar speed, btScalar distance);

	EXPORT int btCable_getGrowingState(btCable* obj);

	EXPORT void btCable_setLinearMass(btCable* obj, btScalar mass);

#ifdef __cplusplus
}
#endif