/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c828  Symbol: transitionWithDuration */

/* cocos2d::CCTransitionSlideInL::transitionWithDuration(float, cocos2d::CCScene*) */

int * cocos2d::CCTransitionSlideInL::transitionWithDuration(float param_1,CCScene *param_2)

{
  int *this;
  int iVar1;
  undefined4 in_r1;
  
  this = (int *)operator_new(0x110);
  CCTransitionSlideInL((CCTransitionSlideInL *)this);
  if (this != (int *)0x0) {
    iVar1 = (**(code **)(*this + 0xe8))(this,param_2,in_r1);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}


