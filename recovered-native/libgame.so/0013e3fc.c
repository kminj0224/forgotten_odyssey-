/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e3fc  Symbol: actionWithDuration */

/* cocos2d::CCFadeOut::actionWithDuration(float) */

int * cocos2d::CCFadeOut::actionWithDuration(float param_1)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x2c);
  memset(this,0,0x2c);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e434 + 0x13e420) + 8;
  CCActionInterval::initWithDuration((CCActionInterval *)this,fVar1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


