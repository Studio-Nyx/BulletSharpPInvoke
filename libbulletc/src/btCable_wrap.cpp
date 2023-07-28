#include <BulletCollision/BroadphaseCollision/btBroadphaseInterface.h>
#include <BulletCollision/BroadphaseCollision/btDispatcher.h>
#include <BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h>
#include <BulletSoftBody/btSoftBody.h>
#include <BulletCable/btCable.h>
#include <BulletSoftBody/btSoftBodySolvers.h>

#include "conversion.h"
#include "btSoftBody_wrap.h"
#include "btCable_wrap.h"

btCable* btCable_new(btSoftBodyWorldInfo* worldInfo, btCollisionWorld* world, int node_count, const btScalar* x, const btScalar* m)
{
	btVector3* xTemp = Vector3ArrayIn(x, node_count);
	btCable* ret = new btCable(worldInfo, world, node_count, xTemp, m);
	delete[] xTemp;
	return ret;
}

void btCable_removeLink(btCable* obj, int index)
{
	obj->removeLink(index);
}

void btCable_removeNode(btCable* obj, int index)
{
	obj->removeNode(index);
}

void btCable_removeAnchor(btCable* obj, int index)
{
	obj->removeAnchor(index);
}

void btCable_setRestLengthLink(btCable* obj, int index, btScalar distance)
{
	obj->setRestLengthLink(index, distance);
}

btScalar btCable_getRestLengthLink(btCable* obj, int index)
{
	return obj->getRestLengthLink(index);
}

void btCable_swapNodes(btCable* obj, int index0, int index1)
{
	return obj->swapNodes(index0, index1);
}

void btCable_swapAnchors(btCable* obj, int index0, int index1)
{
	return obj->swapAnchors(index0, index1);
}

btScalar btCable_getLengthPosition(btCable* obj)
{
	return obj->getLengthPosition();
}

btScalar btCable_getLengthRestlength(btCable* obj)
{
	return obj->getLengthRestlength();
}

btVector3* btCable_getImpulses(btCable* obj)
{
	return obj->getImpulses();
}

int btCable_getNumberNodes(btCable* obj)
{
	return obj->m_nodes.size();
}

btVector3* btCable_getPositionNodes(btCable* obj)
{
	return obj->getPositionNodes();
}

btVector3* btCable_getPositionNodesArray(btCable* obj)
{
	return obj->getPositionNodesArray();
}

void btCable_getPositionNode(btCable* obj, btVector3* v, int index)
{
	BTVECTOR3_COPY(v, &obj->m_nodes[index].m_x);
}

btCollisionShape* btCable_getNodeCollisionShape(btCable* obj) {
	return obj->getCollisionShapeNode();
}

void btCable_setNodeCollisionShape(btCable* obj, btCollisionShape* nodeShape)
{
	return obj->setCollisionShape(nodeShape);
}

void btCable_setWorldRef(btCable* obj, btCollisionWorld* world) {
	return obj->setWorldRef(world);
}

void btCable_updatePositionNodes(btCable* obj, Vector3* vecArray, int length)
{
	for (int i = 0; i < length; ++i)
	{
		btVector3 pos = obj->getPositionNode(i);
		vecArray[i].x = pos.x();
		vecArray[i].y = pos.y();
		vecArray[i].z = pos.z();
	}
}

void btCable_updateImpulses(btCable* obj, Vector3* vecArray, int length)
{
	for (int i = 0; i < length; ++i) {
		btVector3 imp = obj->getImpulse(i);
		vecArray[i].x = imp.x();
		vecArray[i].y = imp.y();
		vecArray[i].z = imp.z();
	}
}

bool btCable_checkIfCollisionWithWorldArrayPos(btCable* obj, int objWorldArrayPos)
{
	return obj->checkIfCollisionWithWorldArrayPos(objWorldArrayPos);
}

void btCable_setBlackHolePos(btCable* obj, bool activeState, btVector3 pos) {
	return obj->setBlackHolePos(activeState, pos);
}


void btCable_setBendingMaxAngle(btCable* obj, btScalar angle) {
	obj->setBendingMaxAngle(angle);
}
btScalar btCable_getBendingMaxAngle(btCable* obj) {
	return obj->getBendingMaxAngle();
}
void btCable_setBendingStiffness(btCable* obj, btScalar stiffness) {
	obj->setBendingStiffness(stiffness);
}
btScalar btCable_getBendingStiffness(btCable* obj) {
	return obj->getBendingStiffness();
}