/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138ba0  Symbol: copyWithZone */

/* cocos2d::CCEaseBackInOut::copyWithZone(cocos2d::CCZone*) */

int * __thiscall cocos2d::CCEaseBackInOut::copyWithZone(CCEaseBackInOut *this,CCZone *param_1)

{
  CCObject *this_00;
  int *this_01;
  CCZone *this_02;
  
  if (param_1 != (CCZone *)0x0) {
    this_01 = *(int **)param_1;
    this_02 = (CCZone *)0x0;
    if (this_01 != (int *)0x0) goto LAB_00138bde;
  }
  this_01 = (int *)operator_new(0x30);
  memset(this_01,0,0x30);
  CCActionEase::CCActionEase((CCActionEase *)this_01);
  *this_01 = *(int *)(DAT_00138c00 + 0x138bce) + 8;
  this_02 = (CCZone *)operator_new(4);
  CCZone::CCZone(this_02,(CCObject *)this_01);
LAB_00138bde:
  this_00 = (CCObject *)CCObject::copy();
  CCObject::autorelease(this_00);
  CCActionEase::initWithAction((CCActionInterval *)this_01);
  if (this_02 != (CCZone *)0x0) {
    operator_delete(this_02);
  }
  return this_01;
}


