/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d216  Symbol: ccpNormalize */

/* cocos2d::ccpNormalize(cocos2d::CCPoint const&) */

cocos2d * __thiscall cocos2d::ccpNormalize(cocos2d *this,CCPoint *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = ccpLength(param_1);
  uVar1 = __divsf3(0x3f800000,uVar1);
  __mulsf3(uVar1,*param_1);
  uVar2 = __mulsf3(uVar1,param_1[1]);
  CCPoint::CCPoint((CCPoint *)this,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  return this;
}


