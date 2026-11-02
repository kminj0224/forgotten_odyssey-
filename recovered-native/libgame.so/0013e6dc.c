/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e6dc  Symbol: actionWithDuration */

/* cocos2d::CCDelayTime::actionWithDuration(float) */

int * cocos2d::CCDelayTime::actionWithDuration(float param_1)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x2c);
  memset(this,0,0x2c);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e714 + 0x13e700) + 8;
  CCActionInterval::initWithDuration((CCActionInterval *)this,fVar1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


