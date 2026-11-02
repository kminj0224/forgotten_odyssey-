/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00135702  Symbol: timerWithTarget */

/* cocos2d::CCTimer::timerWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(float)) */

undefined8 cocos2d::CCTimer::timerWithTarget(CCObject *param_1,_func_void_float *param_2)

{
  CCTimer *this;
  
  this = (CCTimer *)operator_new(0x2c);
  CCTimer(this);
  initWithTarget(this,param_1,param_2);
  CCObject::autorelease((CCObject *)this);
  return CONCAT44(param_2,this);
}


