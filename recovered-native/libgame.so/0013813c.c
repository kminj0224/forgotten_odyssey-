/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013813c  Symbol: update */

/* cocos2d::CCEaseSineOut::update(float) */

void __thiscall cocos2d::CCEaseSineOut::update(CCEaseSineOut *this,float param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  int *piVar2;
  float __x;
  
  piVar2 = *(int **)(this + 0x2c);
  uVar1 = __mulsf3(in_r1,DAT_00138158);
  sinf(__x);
  (**(code **)(*piVar2 + 0x10))(piVar2,uVar1);
  return;
}


