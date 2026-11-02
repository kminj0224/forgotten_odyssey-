/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c1d2  Symbol: update */

/* cocos2d::CCRotateTo::update(float) */

float __thiscall cocos2d::CCRotateTo::update(CCRotateTo *this,float param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x18);
  if (piVar2 != (int *)0x0) {
    uVar1 = __mulsf3(in_r1,*(undefined4 *)(this + 0x34));
    uVar1 = __addsf3(uVar1,*(undefined4 *)(this + 0x30));
    param_1 = (float)(**(code **)(*piVar2 + 0x24))(piVar2,uVar1);
  }
  return param_1;
}


