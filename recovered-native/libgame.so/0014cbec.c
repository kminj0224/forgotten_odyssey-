/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cbec  Symbol: transitionWithDuration */

/* cocos2d::CCTransitionFade::transitionWithDuration(float, cocos2d::CCScene*, cocos2d::_ccColor3B
   const&) */

undefined8
cocos2d::CCTransitionFade::transitionWithDuration
          (float param_1,CCScene *param_2,_ccColor3B *param_3)

{
  int *this;
  undefined4 in_r2;
  
  this = (int *)operator_new(0x110);
  CCTransitionFade((CCTransitionFade *)this);
  (**(code **)(*this + 0xf0))(this,param_2,param_3,in_r2);
  CCObject::autorelease((CCObject *)this);
  return CONCAT44(param_2,this);
}


