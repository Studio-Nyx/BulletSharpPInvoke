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

void btCable_getImpulse(btCable* obj, btVector3* v, int index)
{
	BTVECTOR3_COPY(v, &obj->getImpulse(index));
}

int btCable_getNumberNodes(btCable* obj)
{
	return obj->m_nodes.size();
}

void btCable_getPositionNode(btCable* obj, btVector3* v, int index)
{
	BTVECTOR3_COPY(v, &obj->m_nodes[index].m_x);
}

void btCable_updateImpulses(btCable* obj, btVector3* vecArray, int length)
{
	for (int i = 0; i < length; ++i) {
		vecArray[i] = obj->getImpulses()[i];
	}
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

void btCable_setAnchorIndex(btCable* obj, int idx)
{
	obj->setAnchorIndex(idx);
}

int btCable_getAnchorIndex(btCable* obj)
{
	return obj->getAnchorIndex();
}

void btCable_setUseLRA(btCable* obj, bool active)
{
	obj->setUseLRA(active);
}

bool btCable_getUseLRA(btCable* obj)
{
	return obj->getUseLRA();
}

void btCable_setUseBending(btCable* obj, bool active)
{
	obj->setUseBending(active);
}

bool btCable_getUseBending(btCable* obj)
{
	return obj->getUseBending();
}

void btCable_setUseGravity(btCable* obj, bool active)
{
	obj->setUseGravity(active);
}

bool btCable_getUseGravity(btCable* obj)
{
	return obj->getUseGravity();
}

void btCable_setUseCollision(btCable* obj, bool active)
{
	obj->setUseCollision(active);
}

bool btCable_getUseCollision(btCable* obj)
{
	return obj->getUseCollision();
}

