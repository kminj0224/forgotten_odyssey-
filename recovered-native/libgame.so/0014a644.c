/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a644  Symbol: transitionWithDuration */

/* cocos2d::CCTransitionPageTurn::transitionWithDuration(float, cocos2d::CCScene*, bool) */

undefined8
cocos2d::CCTransitionPageTurn::transitionWithDuration(float param_1,CCScene *param_2,bool param_3)

{
  int *this;
  undefined4 in_r2;
  
  this = (int *)operator_new(0x10c);
  CCTransitionPageTurn((CCTransitionPageTurn *)this);
  (**(code **)(*this + 0xf0))(this,param_2,param_3,in_r2);
  CCObject::autorelease((CCObject *)this);
  return CONCAT44(param_2,this);
}


