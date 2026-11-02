/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d386  Symbol: ccpFuzzyEqual */

/* cocos2d::ccpFuzzyEqual(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float) */

undefined8 cocos2d::ccpFuzzyEqual(CCPoint *param_1,CCPoint *param_2,float param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_r2;
  CCPoint CVar4;
  CCPoint CVar5;
  
  CVar4 = *param_1;
  CVar5 = *param_2;
  uVar1 = __subsf3(CVar4,in_r2);
  iVar2 = __aeabi_fcmple(uVar1,CVar5);
  if (iVar2 != 0) {
    uVar1 = __addsf3(CVar4,in_r2);
    iVar2 = __aeabi_fcmple(CVar5,uVar1);
    if (iVar2 != 0) {
      CVar4 = param_1[1];
      CVar5 = param_2[1];
      uVar1 = __subsf3(CVar4,in_r2);
      iVar2 = __aeabi_fcmple(uVar1,CVar5);
      if (iVar2 != 0) {
        uVar1 = __addsf3(CVar4,in_r2);
        iVar2 = __aeabi_fcmple(CVar5,uVar1);
        uVar3 = (uint)(iVar2 != 0);
        goto LAB_0015d3e8;
      }
    }
  }
  uVar3 = 0;
LAB_0015d3e8:
  return CONCAT44(param_1,uVar3);
}


