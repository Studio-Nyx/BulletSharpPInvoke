#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
	EXPORT btCollisionDispatcher* btCollisionDispatcherMt_new(btCollisionConfiguration* collisionConfiguration, int grainSize);
	EXPORT int btCollisionDispatcherMt_getNumManifoldsCache(btCollisionDispatcherMt* obj);
	EXPORT btPersistentManifold* btCollisionDispatcherMt_getManifoldsCacheByIndexInternal(btCollisionDispatcherMt* obj, int index);
	EXPORT int btCollisionDispatcherMt_getNumParticlesManifolds(btCollisionDispatcherMt* obj);
	EXPORT btPersistentManifold* btCollisionDispatcherMt_getParticlesManifoldsByIndexInternal(btCollisionDispatcherMt* obj, int index);
#ifdef __cplusplus
}
#endif
