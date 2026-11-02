/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015321c  Symbol: setSourcePosition */

/* cocos2d::CCParticleSystem::setSourcePosition(cocos2d::CCPoint const&) */

void __thiscall
cocos2d::CCParticleSystem::setSourcePosition(CCParticleSystem *this,CCPoint *param_1)

{
  *(CCPoint *)(this + 0x158) = *param_1;
  *(CCPoint *)(this + 0x15c) = param_1[1];
  return;
}


