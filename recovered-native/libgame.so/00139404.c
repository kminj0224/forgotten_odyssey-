/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139404  Symbol: actionWithAction */

/* cocos2d::CCEaseElasticOut::actionWithAction(cocos2d::CCActionInterval*) */

int * cocos2d::CCEaseElasticOut::actionWithAction(CCActionInterval *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  CCActionEase::CCActionEase((CCActionEase *)this);
  *this = *(int *)(DAT_00139448 + 0x139428) + 8;
  iVar1 = CCEaseElastic::initWithAction((CCActionInterval *)this);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


