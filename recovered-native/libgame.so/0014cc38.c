/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cc38  Symbol: transitionWithDuration */

/* cocos2d::CCTransitionCrossFade::transitionWithDuration(float, cocos2d::CCScene*) */

int * cocos2d::CCTransitionCrossFade::transitionWithDuration(float param_1,CCScene *param_2)

{
  int *this;
  undefined4 in_r1;
  
  this = (int *)operator_new(0x10c);
  CCTransitionCrossFade((CCTransitionCrossFade *)this);
  (**(code **)(*this + 0xe8))(this,param_2,in_r1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


