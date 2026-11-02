/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d27c  Symbol: ccpLerp */

/* cocos2d::ccpLerp(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float) */

cocos2d * __thiscall cocos2d::ccpLerp(cocos2d *this,CCPoint *param_1,CCPoint *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __subsf3(0x3f800000,in_r3);
  __mulsf3(uVar1,*param_1);
  uVar2 = __mulsf3(uVar1,param_1[1]);
  CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  __mulsf3(in_r3,*param_2);
  uVar2 = __mulsf3(in_r3,param_2[1]);
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  __addsf3(local_28,local_20);
  uVar2 = __addsf3(local_24,local_1c);
  CCPoint::CCPoint((CCPoint *)this,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  return this;
}


