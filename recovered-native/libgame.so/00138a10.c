/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138a10  Symbol: copyWithZone */

/* cocos2d::CCEaseBounceOut::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCEaseBounceOut::copyWithZone(CCEaseBounceOut *this,CCZone *param_1)

{
  CCObject *this_00;
  int *this_01;
  CCZone *this_02;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(int **)param_1;
    this_02 = (CCZone *)0x0;
    if (this_01 != (int *)0x0) goto LAB_00138a4e;
  }
  this_01 = (int *)operator_new(0x30);
  memset(this_01,0,0x30);
  CCActionEase::CCActionEase((CCActionEase *)this_01);
  *this_01 = *(int *)(DAT_00138a70 + 0x138a3e) + 8;
  this_02 = (CCZone *)operator_new(4);
  CCZone::CCZone(this_02,(CCObject *)this_01);
LAB_00138a4e:
  this_00 = (CCObject *)CCObject::copy();
  CCObject::autorelease(this_00);
  CCActionEase::initWithAction((CCActionInterval *)this_01);
  if (this_02 != (CCZone *)0x0) {
    operator_delete(this_02);
  }
  return this_01;
}


