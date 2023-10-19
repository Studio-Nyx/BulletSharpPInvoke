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

void btCable_removeLinkAt(btCable* obj, int index)
{
	obj->m_links.removeAtIndex(index);
}

void btCable_removeNodeAt(btCable* obj, int index)
{
	obj->m_nodes.removeAtIndex(index);
}

void btCable_removeAnchorAt(btCable* obj, int index)
{
	obj->m_anchors[index].m_node->m_battach = 0;
	obj->m_anchors.removeAtIndex(index);
}

void btCable_getImpulseAt(btCable* obj, int index, btVector3* impulse)
{
	BTVECTOR3_SET(impulse, obj->getImpulse(index));
}

int btCable_getNumberOfNode(btCable* obj)
{
	return obj->m_nodes.size();
}

int btCable_getNumberOfAnchor(btCable* obj)
{
	return obj->m_anchors.size();
}

int btCable_getNumberOfLink(btCable* obj)
{
	return obj->m_links.size();
}

btScalar btCable_getLengthOfCableByPositions(btCable* obj)
{
	return obj->getLengthPosition();
}

btScalar btCable_getLengthOfCableByLinks(btCable* obj)
{
	return obj->getLengthRestlength();
}

void btCable_Node_GetPosition(btCable* obj, int index, btVector3* position)
{
	BTVECTOR3_SET(position, obj->m_nodes[index].m_x);
}

void btCable_Node_SetPosition(btCable* obj, int index, btVector3 position)
{
	BTVECTOR3_SET(&obj->m_nodes[index].m_x, position);
}

void btCable_Node_GetVelocity(btCable* obj, int index, btVector3* velocity)
{
	BTVECTOR3_SET(velocity, obj->m_nodes[index].m_v);
}

void btCable_Node_SetVelocity(btCable* obj, int index, btVector3 velocity)
{
	BTVECTOR3_SET(&obj->m_nodes[index].m_v, velocity);
}

void btCable_Node_GetForce(btCable* obj, int index, btVector3* force)
{
	BTVECTOR3_SET(force, obj->m_nodes[index].m_f);
}

void btCable_Node_SetForce(btCable* obj, int index, btVector3 force)
{
	BTVECTOR3_SET(&obj->m_nodes[index].m_f, force);
}

btScalar btCable_Node_GetInverseMass(btCable* obj, int index)
{
	return obj->m_nodes[index].m_im;
}

void btCable_Node_SetInverseMass(btCable* obj, int index, btScalar inverseMass)
{
	obj->m_nodes[index].m_im = inverseMass;
}

btScalar btCable_Node_GetArea(btCable* obj, int index)
{
	return obj->m_nodes[index].m_area;
}

void btCable_Node_SetArea(btCable* obj, int index, btScalar area)
{
	obj->m_nodes[index].m_area = area;
}

int btCable_Node_GetIsAttached(btCable* obj, int index)
{
	return obj->m_nodes[index].m_battach;
}

void btCable_Node_SetIsAttached(btCable* obj, int index, int isAttached)
{
	obj->m_nodes[index].m_battach = isAttached;
}

int btCable_Node_GetIndex(btCable* obj, int index)
{
	return obj->m_nodes[index].index;
}

void btCable_Node_SetIndex(btCable* obj, int index, int newIndex)
{
	obj->m_nodes[index].index = newIndex;
}

bool btCable_Anchor_HasNode(btCable* obj, int index)
{
	try
	{
		return obj->m_anchors[index].m_node != nullptr;
	}
	catch(exception e)
	{
		return false;
	}
}

int btCable_Anchor_GetIndexOfNode(btCable* obj, int index)
{
	return obj->m_anchors[index].m_node->index;
}

void btCable_Anchor_SetNode(btCable* obj, int indexAnchor, int indexNode)
{
	obj->m_anchors[indexAnchor].m_node = &obj->m_nodes[indexNode];
}

int btCable_Link_GetNode0(btCable* obj, int index)
{
	return obj->m_links[index].m_n[0]->index;
}

void btCable_Link_SetNode0(btCable* obj, int indexLink, int indexNode)
{
	obj->m_links[indexLink].m_n[0] = &obj->m_nodes[indexNode];
}

int btCable_Link_GetNode1(btCable* obj, int index)
{
	return obj->m_links[index].m_n[1]->index;
}

void btCable_Link_SetNode1(btCable* obj, int indexLink, int indexNode)
{
	obj->m_links[indexLink].m_n[1] = &obj->m_nodes[indexNode];
}

btScalar btCable_Link_GetRestLength(btCable* obj, int index)
{
	return obj->m_links[index].m_rl;
}

void btCable_Link_SetRestLength(btCable* obj, int index, btScalar rl)
{
	obj->m_links[index].m_rl = rl;
	obj->m_links[index].m_c1 = obj->m_links[index].m_rl * obj->m_links[index].m_rl;
}

bool btCable_LRA_GetActive(btCable* obj) 
{
	return obj->getUseLRA();
}

void btCable_LRA_SetActive(btCable* obj, bool active)
{
	obj->setUseLRA(active);
}

bool btCable_Bending_GetActive(btCable* obj)
{
	return  obj->getUseBending();
}

void btCable_Bending_SetActive(btCable* obj, bool active)
{
	obj->setUseBending(active);
}

btScalar btCable_Bending_GetBendingMaxAngle(btCable* obj)
{
	return obj->getBendingMaxAngle();
}

void btCable_Bending_SetBendingMaxAngle(btCable* obj, btScalar angle)
{
	obj->setBendingMaxAngle(angle);
}

btScalar btCable_Bending_GetBendingStiffness(btCable* obj)
{
	return obj->getBendingStiffness();
}

void btCable_Bending_SetBendingStiffness(btCable* obj, btScalar stiffness)
{
	obj->setBendingStiffness(stiffness);
}

bool btCable_Gravity_GetActive(btCable* obj)
{
	return obj->getUseGravity();
}

void btCable_Gravity_SetActive(btCable* obj, bool active)
{
	return obj->setUseGravity(active);
}

bool btCable_Collision_GetActive(btCable* obj)
{
	return obj->getUseCollision();
}

void btCable_Collision_SetActive(btCable* obj, bool active)
{
	obj->setUseCollision(active);
}

bool btUpdateCableData(btCable* obj, btCable::CableData &cableData)
{
	return obj->UpdateCableData(cableData);
}


bool btGetUseHydroAero(btCable* obj)
{
	return obj->getUseHydroAero();
}

void btSetUseHydroAero(btCable* obj, bool active)
{
	obj->setUseHydroAero(active);
}

void btSetHorizonDrop(btCable* obj, float value)
{
	obj->setHorizonDrop(value);
}
