/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e9d4  Symbol: actionWithAnimation */

/* cocos2d::CCAnimate::actionWithAnimation(cocos2d::CCAnimation*, bool) */

int * cocos2d::CCAnimate::actionWithAnimation(CCAnimation *param_1,bool param_2)

{
  int *this;
  
  this = (int *)operator_new(0x38);
  memset(this,0,0x38);
  CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013ea10 + 0x13e9fa) + 8;
  initWithAnimation((CCAnimate *)this,param_1,param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


