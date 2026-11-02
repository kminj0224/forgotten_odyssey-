/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001532ce  Symbol: setStartColorVar */

/* cocos2d::CCParticleSystem::setStartColorVar(cocos2d::_ccColor4F const&) */

void __thiscall
cocos2d::CCParticleSystem::setStartColorVar(CCParticleSystem *this,_ccColor4F *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x198) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x19c) = uVar1;
  *(undefined4 *)(this + 0x1a0) = uVar2;
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0xc);
  return;
}


