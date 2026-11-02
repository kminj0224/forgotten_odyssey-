/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138fd4  Symbol: actionWithAction */

/* cocos2d::CCEaseExponentialInOut::actionWithAction(cocos2d::CCActionInterval*) */

int * cocos2d::CCEaseExponentialInOut::actionWithAction(CCActionInterval *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x30);
  memset(this,0,0x30);
  CCActionEase::CCActionEase((CCActionEase *)this);
  *this = *(int *)(DAT_00139018 + 0x138ff8) + 8;
  iVar1 = CCActionEase::initWithAction((CCActionInterval *)this);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


