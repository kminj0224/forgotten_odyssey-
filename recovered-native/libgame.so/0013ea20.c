/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ea20  Symbol: actionWithAnimation */

/* cocos2d::CCAnimate::actionWithAnimation(cocos2d::CCAnimation*) */

int * cocos2d::CCAnimate::actionWithAnimation(CCAnimation *param_1)

{
  int *this;
  
  this = (int *)operator_new(0x38);
  memset(this,0,0x38);
  CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013ea58 + 0x13ea44) + 8;
  initWithAnimation((CCAnimate *)this,param_1,true);
  CCObject::autorelease((CCObject *)this);
  return this;
}


