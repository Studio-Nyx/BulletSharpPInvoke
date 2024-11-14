#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>
#include <BulletCollision/CollisionDispatch/btCollisionDispatcherMt.h>

#include "btCollisionDispatcherMt_wrap.h"

btCollisionDispatcher* btCollisionDispatcherMt_new(btCollisionConfiguration* collisionConfiguration, int grainSize)
{
	return new btCollisionDispatcherMt(collisionConfiguration, grainSize);
}

int btCollisionDispatcherMt_getNumManifoldsCache(btCollisionDispatcherMt* obj)
{
	return obj->getNumManifoldsCache();
}

btPersistentManifold* btCollisionDispatcherMt_getManifoldsCacheByIndexInternal(btCollisionDispatcherMt* obj,
	int index)
{
	return obj->getManifoldsCacheByIndexInternal(index);
}

int btCollisionDispatcherMt_getNumParticlesManifolds(btCollisionDispatcherMt* obj)
{
	return obj->getNumParticlesManifolds();
}

btPersistentManifold* btCollisionDispatcherMt_getParticlesManifoldsByIndexInternal(btCollisionDispatcherMt* obj,
	int index)
{
	return obj->getParticlesManifoldsByIndexInternal(index);
}

