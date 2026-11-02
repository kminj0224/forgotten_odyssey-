/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153234  Symbol: setPosVar */

/* cocos2d::CCParticleSystem::setPosVar(cocos2d::CCPoint const&) */

void __thiscall cocos2d::CCParticleSystem::setPosVar(CCParticleSystem *this,CCPoint *param_1)

{
  *(CCPoint *)(this + 0x160) = *param_1;
  *(CCPoint *)(this + 0x164) = param_1[1];
  return;
}


