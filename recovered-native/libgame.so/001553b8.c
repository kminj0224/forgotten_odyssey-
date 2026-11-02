/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001553b8  Symbol: setDisplayFrame */

/* cocos2d::CCParticleSystemQuad::setDisplayFrame(cocos2d::CCSpriteFrame*) */

void cocos2d::CCParticleSystemQuad::setDisplayFrame(CCSpriteFrame *param_1)

{
  int iVar1;
  int iVar2;
  int in_r1;
  
  if (*(int *)(param_1 + 0x1e0) != 0) {
    iVar1 = (**(code **)(**(int **)(in_r1 + 0x48) + 0x20))();
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x20))();
    if (iVar1 == iVar2) {
      return;
    }
  }
  (**(code **)(*(int *)param_1 + 0x204))(param_1,*(undefined4 *)(in_r1 + 0x48));
  return;
}


