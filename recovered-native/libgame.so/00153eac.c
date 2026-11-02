/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153eac  Symbol: addParticle */

/* cocos2d::CCParticleSystem::addParticle() */

bool __thiscall cocos2d::CCParticleSystem::addParticle(CCParticleSystem *this)

{
  int iVar1;
  
  iVar1 = isFull(this);
  if (iVar1 == 0) {
    initParticle(this,(sCCParticle *)(*(int *)(this + 0x140) + *(int *)(this + 0x150) * 100));
    *(int *)(this + 0x150) = *(int *)(this + 0x150) + 1;
  }
  return iVar1 == 0;
}


