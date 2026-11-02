/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a998  Symbol: transitionWithDuration */

/* cocos2d::CCTransitionRadialCCW::transitionWithDuration(float, cocos2d::CCScene*) */

int * cocos2d::CCTransitionRadialCCW::transitionWithDuration(float param_1,CCScene *param_2)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x10c);
  fVar1 = (float)CCTransitionScene::CCTransitionScene((CCTransitionScene *)this);
  *this = *(int *)(DAT_0014a9cc + 0x14a9b6) + 8;
  CCTransitionScene::initWithDuration((CCTransitionScene *)this,fVar1,param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


