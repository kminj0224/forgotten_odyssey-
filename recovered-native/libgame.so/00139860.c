/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139860  Symbol: actionWithAction */

/* cocos2d::CCEaseBackOut::actionWithAction(cocos2d::CCActionInterval*) */

int * cocos2d::CCEaseBackOut::actionWithAction(CCActionInterval *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x30);
  memset(this,0,0x30);
  CCActionEase::CCActionEase((CCActionEase *)this);
  *this = *(int *)(DAT_001398a4 + 0x139884) + 8;
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


