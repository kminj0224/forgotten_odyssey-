/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cb68  Symbol: update */

/* cocos2d::CCFadeIn::update(float) */

float __thiscall cocos2d::CCFadeIn::update(CCFadeIn *this,float param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined4 in_r1;
  float extraout_s0;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (piVar2 = (int *)__dynamic_cast(*(int *)(this + 0x18),*(undefined4 *)(DAT_0013cba4 + 0x13cb7c),
                                     *(undefined4 *)(DAT_0013cba8 + 0x13cb7e),0xfffffffe),
     param_1 = extraout_s0, piVar2 != (int *)0x0)) {
    __mulsf3(in_r1,DAT_0013cbac);
    uVar1 = __fixunssfsi();
    param_1 = (float)(**(code **)(*piVar2 + 0xc))(piVar2,uVar1);
  }
  return param_1;
}


