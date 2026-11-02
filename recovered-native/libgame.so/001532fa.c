/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001532fa  Symbol: setEndColorVar */

/* cocos2d::CCParticleSystem::setEndColorVar(cocos2d::_ccColor4F const&) */

void __thiscall
cocos2d::CCParticleSystem::setEndColorVar(CCParticleSystem *this,_ccColor4F *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x1b8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x1bc) = uVar1;
  *(undefined4 *)(this + 0x1c0) = uVar2;
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(param_1 + 0xc);
  return;
}


