/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e820  Symbol: actionOneTwo */

/* cocos2d::CCSpawn::actionOneTwo(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) */

int * cocos2d::CCSpawn::actionOneTwo(CCFiniteTimeAction *param_1,CCFiniteTimeAction *param_2)

{
  int *this;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e85c + 0x13e846) + 8;
  initOneTwo((CCSpawn *)this,param_1,param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


