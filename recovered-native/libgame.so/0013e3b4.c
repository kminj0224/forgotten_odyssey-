/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e3b4  Symbol: actionWithDuration */

/* cocos2d::CCFadeIn::actionWithDuration(float) */

int * cocos2d::CCFadeIn::actionWithDuration(float param_1)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x2c);
  memset(this,0,0x2c);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e3ec + 0x13e3d8) + 8;
  CCActionInterval::initWithDuration((CCActionInterval *)this,fVar1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


