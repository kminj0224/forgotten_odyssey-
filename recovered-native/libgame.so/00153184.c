/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153184  Symbol: setGravity */

/* cocos2d::CCParticleSystem::setGravity(cocos2d::CCPoint const&) */

void __thiscall cocos2d::CCParticleSystem::setGravity(CCParticleSystem *this,CCPoint *param_1)

{
  *(CCPoint *)(this + 0x108) = *param_1;
  *(CCPoint *)(this + 0x10c) = param_1[1];
  return;
}


