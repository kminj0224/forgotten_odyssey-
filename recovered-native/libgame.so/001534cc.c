/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001534cc  Symbol: ~CCParticleSystem */

/* cocos2d::CCParticleSystem::~CCParticleSystem() */

CCParticleSystem * __thiscall cocos2d::CCParticleSystem::~CCParticleSystem(CCParticleSystem *this)

{
  ~CCParticleSystem(this);
  operator_delete(this);
  return this;
}


