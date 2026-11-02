/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cba0  Symbol: transitionWithDuration */

/* cocos2d::CCTransitionZoomFlipAngular::transitionWithDuration(float, cocos2d::CCScene*,
   cocos2d::tOrientation) */

undefined8
cocos2d::CCTransitionZoomFlipAngular::transitionWithDuration
          (float param_1,CCScene *param_2,tOrientation param_3)

{
  int *this;
  undefined4 in_r2;
  
  this = (int *)operator_new(0x110);
  CCTransitionZoomFlipAngular((CCTransitionZoomFlipAngular *)this);
  (**(code **)(*this + 0xf0))(this,param_2,param_3,in_r2);
  CCObject::autorelease((CCObject *)this);
  return CONCAT44(param_2,this);
}


