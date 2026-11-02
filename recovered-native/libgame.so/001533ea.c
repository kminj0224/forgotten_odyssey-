/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001533ea  Symbol: FUN_001533ea */

CCPoint * FUN_001533ea(CCPoint *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  __mulsf3(param_3,*param_2,param_3,param_4,param_4);
  uVar1 = __mulsf3(param_3,param_2[1]);
  cocos2d::CCPoint::CCPoint(param_1,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  return param_1;
}


