/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d3ea  Symbol: ccpCompMult */

/* cocos2d::ccpCompMult(cocos2d::CCPoint const&, cocos2d::CCPoint const&) */

CCPoint * cocos2d::ccpCompMult(CCPoint *param_1,CCPoint *param_2)

{
  undefined4 *in_r2;
  undefined8 uVar1;
  
  __mulsf3(*param_2,*in_r2);
  uVar1 = __mulsf3(param_2[1],in_r2[1]);
  CCPoint::CCPoint((CCPoint *)param_1,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  return param_1;
}


