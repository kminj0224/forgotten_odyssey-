/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d726  Symbol: ccpAngle */

/* cocos2d::ccpAngle(cocos2d::CCPoint const&, cocos2d::CCPoint const&) */

uint cocos2d::ccpAngle(CCPoint *param_1,CCPoint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_r2;
  undefined4 in_r3;
  float __x;
  CCPoint *local_18;
  CCPoint *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = in_r2;
  local_c = in_r3;
  ccpNormalize((cocos2d *)&local_18,param_1);
  ccpNormalize((cocos2d *)&local_10,param_2);
  uVar1 = __mulsf3(local_18,local_10);
  uVar2 = __mulsf3(local_14,local_c);
  uVar3 = __addsf3(uVar1,uVar2);
  acosf(__x);
  iVar4 = __aeabi_fcmplt(uVar3 & 0x7fffffff,0x34000000);
  if (iVar4 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


