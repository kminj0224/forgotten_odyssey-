/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e972  Symbol: actionWithAction */

/* cocos2d::CCReverseTime::actionWithAction(cocos2d::CCFiniteTimeAction*) */

CCReverseTime * cocos2d::CCReverseTime::actionWithAction(CCFiniteTimeAction *param_1)

{
  CCReverseTime *this;
  
  this = (CCReverseTime *)operator_new(0x30);
  CCReverseTime(this);
  initWithAction((CCFiniteTimeAction *)this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


