/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001386a4  Symbol: actionWithAction */

/* cocos2d::CCActionEase::actionWithAction(cocos2d::CCActionInterval*) */

CCActionEase * cocos2d::CCActionEase::actionWithAction(CCActionInterval *param_1)

{
  CCActionEase *this;
  int iVar1;
  
  this = (CCActionEase *)operator_new(0x30);
  memset(this,0,0x30);
  CCActionEase(this);
  iVar1 = initWithAction((CCActionInterval *)this);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (CCActionEase *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


