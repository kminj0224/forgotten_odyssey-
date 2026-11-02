/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138754  Symbol: copyWithZone */

/* cocos2d::CCEaseExponentialOut::copyWithZone(cocos2d::CCZone*) */

int * __thiscall
cocos2d::CCEaseExponentialOut::copyWithZone(CCEaseExponentialOut *this,CCZone *param_1)

{
  CCObject *this_00;
  int *this_01;
  CCZone *this_02;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(int **)param_1;
    this_02 = (CCZone *)0x0;
    if (this_01 != (int *)0x0) goto LAB_00138792;
  }
  this_01 = (int *)operator_new(0x30);
  memset(this_01,0,0x30);
  CCActionEase::CCActionEase((CCActionEase *)this_01);
  *this_01 = *(int *)(DAT_001387b4 + 0x138782) + 8;
  this_02 = (CCZone *)operator_new(4);
  CCZone::CCZone(this_02,(CCObject *)this_01);
LAB_00138792:
  this_00 = (CCObject *)CCObject::copy();
  CCObject::autorelease(this_00);
  CCActionEase::initWithAction((CCActionInterval *)this_01);
  if (this_02 != (CCZone *)0x0) {
    operator_delete(this_02);
  }
  return this_01;
}


