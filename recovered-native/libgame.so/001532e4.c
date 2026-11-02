/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001532e4  Symbol: setEndColor */

/* cocos2d::CCParticleSystem::setEndColor(cocos2d::_ccColor4F const&) */

void __thiscall cocos2d::CCParticleSystem::setEndColor(CCParticleSystem *this,_ccColor4F *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x1a8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar2;
  *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(param_1 + 0xc);
  return;
}


