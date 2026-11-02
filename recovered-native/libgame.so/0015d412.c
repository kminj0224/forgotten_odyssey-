/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d412  Symbol: ccpAngleSigned */

/* cocos2d::ccpAngleSigned(cocos2d::CCPoint const&, cocos2d::CCPoint const&) */

uint cocos2d::ccpAngleSigned(CCPoint *param_1,CCPoint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  ccpNormalize((cocos2d *)&local_28,param_1);
  ccpNormalize((cocos2d *)&local_20,param_2);
  uVar1 = __mulsf3(local_28,local_1c);
  uVar2 = __mulsf3(local_24,local_20);
  uVar3 = __subsf3(uVar1,uVar2);
  uVar1 = __mulsf3(local_28,local_20);
  uVar2 = __mulsf3(local_24,local_1c);
  uVar5 = __addsf3(uVar1,uVar2);
  atan2f((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  iVar4 = __aeabi_fcmplt(uVar3 & 0x7fffffff,0x34000000);
  if (iVar4 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


