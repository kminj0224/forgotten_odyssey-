/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153584  Symbol: setIsBlendAdditive */

/* cocos2d::CCParticleSystem::setIsBlendAdditive(bool) */

void __thiscall cocos2d::CCParticleSystem::setIsBlendAdditive(CCParticleSystem *this,bool param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_001535c4;
  if (param_1) {
    *(undefined4 *)(this + 0x1e4) = DAT_001535c0;
    *(undefined4 *)(this + 0x1e8) = 1;
  }
  else {
    if ((*(int **)(this + 0x1e0) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(this + 0x1e0) + 0x38))(), uVar3 = DAT_001535c0, iVar2 != 0))
    {
      uVar3 = 1;
    }
    *(undefined4 *)(this + 0x1e4) = uVar3;
    *(undefined4 *)(this + 0x1e8) = uVar1;
  }
  return;
}


