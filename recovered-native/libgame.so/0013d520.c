/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d520  Symbol: actionWithDuration */

/* cocos2d::CCActionInterval::actionWithDuration(float) */

CCActionInterval * cocos2d::CCActionInterval::actionWithDuration(float param_1)

{
  CCActionInterval *this;
  float fVar1;
  
  this = (CCActionInterval *)operator_new(0x2c);
  memset(this,0,0x2c);
  fVar1 = (float)CCActionInterval(this);
  initWithDuration(this,fVar1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


