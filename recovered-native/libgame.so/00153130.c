/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153130  Symbol: getIsBlendAdditive */

/* cocos2d::CCParticleSystem::getIsBlendAdditive() */

bool __thiscall cocos2d::CCParticleSystem::getIsBlendAdditive(CCParticleSystem *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 0x1e4) == DAT_00153150) {
    bVar1 = *(int *)(this + 0x1e8) == 1;
  }
  return bVar1;
}


