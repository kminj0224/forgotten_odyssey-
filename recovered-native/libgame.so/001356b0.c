/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001356b0  Symbol: timerWithScriptHandler */

/* cocos2d::CCTimer::timerWithScriptHandler(int, float) */

CCTimer * cocos2d::CCTimer::timerWithScriptHandler(int param_1,float param_2)

{
  CCTimer *this;
  float fVar1;
  
  this = (CCTimer *)operator_new(0x2c);
  fVar1 = (float)CCTimer(this);
  initWithScriptHandler(this,param_1,fVar1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


