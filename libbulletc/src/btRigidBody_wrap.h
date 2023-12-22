#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
	EXPORT btRigidBody_btRigidBodyConstructionInfo* btRigidBody_btRigidBodyConstructionInfo_new(btScalar mass, btMotionState* motionState, btCollisionShape* collisionShape);
	EXPORT btRigidBody_btRigidBodyConstructionInfo* btRigidBody_btRigidBodyConstructionInfo_new2(btScalar mass, btMotionState* motionState, btCollisionShape* collisionShape, const btVector3* localInertia);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getAdditionalAngularDampingFactor(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getAdditionalAngularDampingThresholdSqr(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT bool btRigidBody_btRigidBodyConstructionInfo_getAdditionalDamping(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getAdditionalDampingFactor(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getAdditionalLinearDampingThresholdSqr(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getAngularDamping(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getAngularSleepingThreshold(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btCollisionShape* btRigidBody_btRigidBodyConstructionInfo_getCollisionShape(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getFriction(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getLinearDamping(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getLinearSleepingThreshold(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_getLocalInertia(btRigidBody_btRigidBodyConstructionInfo* obj, btVector3* value);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getMass(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btMotionState* btRigidBody_btRigidBodyConstructionInfo_getMotionState(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getRestitution(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT btScalar btRigidBody_btRigidBodyConstructionInfo_getRollingFriction(btRigidBody_btRigidBodyConstructionInfo* obj);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_getStartWorldTransform(btRigidBody_btRigidBodyConstructionInfo* obj, btTransform* value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setAdditionalAngularDampingFactor(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setAdditionalAngularDampingThresholdSqr(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setAdditionalDamping(btRigidBody_btRigidBodyConstructionInfo* obj, bool value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setAdditionalDampingFactor(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setAdditionalLinearDampingThresholdSqr(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setAngularDamping(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setAngularSleepingThreshold(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setCollisionShape(btRigidBody_btRigidBodyConstructionInfo* obj, btCollisionShape* value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setFriction(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setLinearDamping(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setLinearSleepingThreshold(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setLocalInertia(btRigidBody_btRigidBodyConstructionInfo* obj, const btVector3* value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setMass(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setMotionState(btRigidBody_btRigidBodyConstructionInfo* obj, btMotionState* value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setRestitution(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setRollingFriction(btRigidBody_btRigidBodyConstructionInfo* obj, btScalar value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_setStartWorldTransform(btRigidBody_btRigidBodyConstructionInfo* obj, const btTransform* value);
	EXPORT void btRigidBody_btRigidBodyConstructionInfo_delete(btRigidBody_btRigidBodyConstructionInfo* obj);

	EXPORT btRigidBody* btRigidBody_new(const btRigidBody_btRigidBodyConstructionInfo* constructionInfo);
	EXPORT void btRigidBody_addConstraintRef(btRigidBody* obj, btTypedConstraint* c);
	EXPORT void btRigidBody_applyCentralForce(btRigidBody* obj, const btVector3* force);
	EXPORT void btRigidBody_applyCentralImpulse(btRigidBody* obj, const btVector3* impulse);
	EXPORT void btRigidBody_applyDamping(btRigidBody* obj, btScalar timeStep);
	EXPORT void btRigidBody_applyForce(btRigidBody* obj, const btVector3* force, const btVector3* rel_pos);
	EXPORT void btRigidBody_applyGravity(btRigidBody* obj);
	EXPORT void btRigidBody_applyImpulse(btRigidBody* obj, const btVector3* impulse, const btVector3* rel_pos);
	EXPORT void btRigidBody_applyTorque(btRigidBody* obj, const btVector3* torque);
	EXPORT void btRigidBody_applyTorqueImpulse(btRigidBody* obj, const btVector3* torque);
	EXPORT void btRigidBody_clearForces(btRigidBody* obj);
	EXPORT void btRigidBody_clearGravity(btRigidBody* obj);
	EXPORT btScalar btRigidBody_computeAngularImpulseDenominator(btRigidBody* obj, const btVector3* axis);
	EXPORT void btRigidBody_computeGyroscopicForceExplicit(btRigidBody* obj, btScalar maxGyroscopicForce, btVector3* value);
	EXPORT void btRigidBody_computeGyroscopicImpulseImplicit_Body(btRigidBody* obj, btScalar step, btVector3* value);
	EXPORT void btRigidBody_computeGyroscopicImpulseImplicit_World(btRigidBody* obj, btScalar dt, btVector3* value);
	EXPORT btScalar btRigidBody_computeImpulseDenominator(btRigidBody* obj, const btVector3* pos, const btVector3* normal);
	EXPORT void btRigidBody_getAabb(btRigidBody* obj, btVector3* aabbMin, btVector3* aabbMax);
	EXPORT btScalar btRigidBody_getAngularDamping(btRigidBody* obj);
	EXPORT void btRigidBody_getAngularFactor(btRigidBody* obj, btVector3* value);
	EXPORT btScalar btRigidBody_getAngularSleepingThreshold(btRigidBody* obj);
	EXPORT void btRigidBody_getAngularVelocity(btRigidBody* obj, btVector3* value);
	EXPORT btBroadphaseProxy* btRigidBody_getBroadphaseProxy(btRigidBody* obj);
	EXPORT void btRigidBody_getCenterOfMassPosition(btRigidBody* obj, btVector3* value);
	EXPORT void btRigidBody_getCenterOfMassTransform(btRigidBody* obj, btTransform* value);
	EXPORT btTypedConstraint* btRigidBody_getConstraintRef(btRigidBody* obj, int index);
	EXPORT int btRigidBody_getContactSolverType(btRigidBody* obj);
	EXPORT int btRigidBody_getFlags(btRigidBody* obj);
	EXPORT int btRigidBody_getFrictionSolverType(btRigidBody* obj);
	EXPORT void btRigidBody_getGravity(btRigidBody* obj, btVector3* value);
	EXPORT void btRigidBody_getInvInertiaDiagLocal(btRigidBody* obj, btVector3* value);
	EXPORT void btRigidBody_getInvInertiaTensorWorld(btRigidBody* obj, btMatrix3x3* value);
	EXPORT btScalar btRigidBody_getInvMass(btRigidBody* obj);
	EXPORT btScalar btRigidBody_getLinearDamping(btRigidBody* obj);
	EXPORT void btRigidBody_getLinearFactor(btRigidBody* obj, btVector3* value);
	EXPORT btScalar btRigidBody_getLinearSleepingThreshold(btRigidBody* obj);
	EXPORT void btRigidBody_getLinearVelocity(btRigidBody* obj, btVector3* value);
	EXPORT void btRigidBody_getLocalInertia(btRigidBody* obj, btVector3* value);
	EXPORT btScalar btRigidBody_getMass(btRigidBody* obj);
	EXPORT btMotionState* btRigidBody_getMotionState(btRigidBody* obj);
	EXPORT int btRigidBody_getNumConstraintRefs(btRigidBody* obj);
	EXPORT void btRigidBody_getOrientation(btRigidBody* obj, btQuaternion* value);
	EXPORT void btRigidBody_getTotalForce(btRigidBody* obj, btVector3* value);
	EXPORT void btRigidBody_getTotalTorque(btRigidBody* obj, btVector3* value);
	EXPORT void btRigidBody_getVelocityInLocalPoint(btRigidBody* obj, const btVector3* rel_pos, btVector3* value);
	EXPORT void btRigidBody_integrateVelocities(btRigidBody* obj, btScalar step);
	EXPORT bool btRigidBody_isInWorld(btRigidBody* obj);
	EXPORT void btRigidBody_predictIntegratedTransform(btRigidBody* obj, btScalar step, btTransform* predictedTransform);
	EXPORT void btRigidBody_proceedToTransform(btRigidBody* obj, const btTransform* newTrans);
	EXPORT void btRigidBody_removeConstraintRef(btRigidBody* obj, btTypedConstraint* c);
	EXPORT void btRigidBody_saveKinematicState(btRigidBody* obj, btScalar step);
	EXPORT void btRigidBody_setAngularFactor(btRigidBody* obj, const btVector3* angFac);
	EXPORT void btRigidBody_setAngularFactor2(btRigidBody* obj, btScalar angFac);
	EXPORT void btRigidBody_setAngularVelocity(btRigidBody* obj, const btVector3* ang_vel);
	EXPORT void btRigidBody_setCenterOfMassTransform(btRigidBody* obj, const btTransform* xform);
	EXPORT void btRigidBody_setContactSolverType(btRigidBody* obj, int value);
	EXPORT void btRigidBody_setDamping(btRigidBody* obj, btScalar lin_damping, btScalar ang_damping);
	EXPORT void btRigidBody_setFlags(btRigidBody* obj, int flags);
	EXPORT void btRigidBody_setFrictionSolverType(btRigidBody* obj, int value);
	EXPORT void btRigidBody_setGravity(btRigidBody* obj, const btVector3* acceleration);
	EXPORT void btRigidBody_setInvInertiaDiagLocal(btRigidBody* obj, const btVector3* diagInvInertia);
	EXPORT void btRigidBody_setLinearFactor(btRigidBody* obj, const btVector3* linearFactor);
	EXPORT void btRigidBody_setLinearVelocity(btRigidBody* obj, const btVector3* lin_vel);
	EXPORT void btRigidBody_setMassProps(btRigidBody* obj, btScalar mass, const btVector3* inertia);
	EXPORT void btRigidBody_setMotionState(btRigidBody* obj, btMotionState* motionState);
	EXPORT void btRigidBody_setNewBroadphaseProxy(btRigidBody* obj, btBroadphaseProxy* broadphaseProxy);
	EXPORT void btRigidBody_setSleepingThresholds(btRigidBody* obj, btScalar linear, btScalar angular);
	EXPORT void btRigidBody_translate(btRigidBody* obj, const btVector3* v);
	EXPORT btRigidBody* btRigidBody_upcast(btCollisionObject* colObj);
	EXPORT void btRigidBody_updateDeactivation(btRigidBody* obj, btScalar timeStep);
	EXPORT void btRigidBody_updateInertiaTensor(btRigidBody* obj);
	EXPORT bool btRigidBody_wantsSleeping(btRigidBody* obj);
	EXPORT void btRigidBody_setMaxLinearVelocity(btRigidBody* obj, btScalar maxL);
	EXPORT void btRigidBody_setMaxAngularVelocity(btRigidBody* obj, btScalar maxA);

	EXPORT void btRigidBody_addKinematic(btRigidBody* obj, btRigidBody* toAdd);
	EXPORT void btRigidBody_removeKinematic(btRigidBody* obj, btRigidBody* toRemove);
	EXPORT void btRigidBody_setLocalTransform(btRigidBody* obj, const btTransform* transform);
#ifdef __cplusplus
}
#endif
