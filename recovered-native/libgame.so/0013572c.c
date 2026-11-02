/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013572c  Symbol: timerWithTarget */

/* cocos2d::CCTimer::timerWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(float), float)
    */

CCTimer * cocos2d::CCTimer::timerWithTarget
                    (CCObject *param_1,_func_void_float *param_2,float param_3)

{
  CCTimer *this;
  float fVar1;
  
  this = (CCTimer *)operator_new(0x2c);
  fVar1 = (float)CCTimer(this);
  initWithTarget((CCObject *)this,(_func_void_float *)param_1,fVar1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


