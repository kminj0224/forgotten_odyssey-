/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001379d0  Symbol: copyWithZone */

/* cocos2d::CCOrbitCamera::copyWithZone(cocos2d::CCZone*) */

CCOrbitCamera * __thiscall cocos2d::CCOrbitCamera::copyWithZone(CCOrbitCamera *this,CCZone *param_1)

{
  CCOrbitCamera *this_00;
  CCZone *pCVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  
  if (param_1 != (CCZone *)0x0) {
    this_00 = *(CCOrbitCamera **)param_1;
    pCVar1 = (CCZone *)0x0;
    if (this_00 != (CCOrbitCamera *)0x0) goto LAB_001379fc;
  }
  this_00 = (CCOrbitCamera *)operator_new(0x78);
  CCOrbitCamera(this_00);
  param_1 = (CCZone *)operator_new(4);
  CCZone::CCZone(param_1,(CCObject *)this_00);
  pCVar1 = param_1;
LAB_001379fc:
  uVar2 = CCActionInterval::copyWithZone((CCActionInterval *)this,param_1);
  initWithDuration((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,extraout_s3,
                   extraout_s4,extraout_s5,extraout_s6);
  if (pCVar1 != (CCZone *)0x0) {
    operator_delete(pCVar1);
  }
  return this_00;
}


