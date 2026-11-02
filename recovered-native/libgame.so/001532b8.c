/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001532b8  Symbol: setStartColor */

/* cocos2d::CCParticleSystem::setStartColor(cocos2d::_ccColor4F const&) */

void __thiscall cocos2d::CCParticleSystem::setStartColor(CCParticleSystem *this,_ccColor4F *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x188) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x18c) = uVar1;
  *(undefined4 *)(this + 400) = uVar2;
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(param_1 + 0xc);
  return;
}


