/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d326  Symbol: ccpClamp */

/* cocos2d::ccpClamp(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&) */

undefined8 __thiscall
cocos2d::ccpClamp(cocos2d *this,CCPoint *param_1,CCPoint *param_2,CCPoint *param_3)

{
  float in_s0;
  float in_s1;
  undefined8 uVar1;
  float in_s2;
  float extraout_s2;
  
  uVar1 = clampf(in_s0,in_s1,in_s2);
  uVar1 = clampf((float)uVar1,(float)((ulonglong)uVar1 >> 0x20),extraout_s2);
  CCPoint::CCPoint((CCPoint *)this,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  return CONCAT44(this,this);
}


