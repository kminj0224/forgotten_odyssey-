/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cb18  Symbol: update */

/* cocos2d::CCFadeOut::update(float) */

float __thiscall cocos2d::CCFadeOut::update(CCFadeOut *this,float param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  float extraout_s0;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (piVar2 = (int *)__dynamic_cast(*(int *)(this + 0x18),*(undefined4 *)(DAT_0013cb5c + 0x13cb2c),
                                     *(undefined4 *)(DAT_0013cb60 + 0x13cb2e),0xfffffffe),
     param_1 = extraout_s0, piVar2 != (int *)0x0)) {
    uVar3 = __subsf3(0x3f800000,in_r1);
    __mulsf3(uVar3,DAT_0013cb64);
    uVar1 = __fixunssfsi();
    param_1 = (float)(**(code **)(*piVar2 + 0xc))(piVar2,uVar1);
  }
  return param_1;
}


