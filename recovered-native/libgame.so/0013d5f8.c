/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d5f8  Symbol: actionOneTwo */

/* cocos2d::CCSequence::actionOneTwo(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) */

int * cocos2d::CCSequence::actionOneTwo(CCFiniteTimeAction *param_1,CCFiniteTimeAction *param_2)

{
  int *this;
  
  this = (int *)operator_new(0x3c);
  memset(this,0,0x3c);
  CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013d634 + 0x13d61e) + 8;
  initOneTwo((CCSequence *)this,param_1,param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


