/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013eaf0  Symbol: actionWithDuration */

/* cocos2d::CCAnimate::actionWithDuration(float, cocos2d::CCAnimation*, bool) */

int * cocos2d::CCAnimate::actionWithDuration(float param_1,CCAnimation *param_2,bool param_3)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x38);
  memset(this,0,0x38);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013eb30 + 0x13eb18) + 8;
  initWithDuration(fVar1,(CCAnimation *)this,SUB41(param_2,0));
  CCObject::autorelease((CCObject *)this);
  return this;
}


