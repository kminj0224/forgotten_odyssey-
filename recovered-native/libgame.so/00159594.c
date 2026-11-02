/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159594  Symbol: animation */

/* cocos2d::CCAnimation::animation() */

int * cocos2d::CCAnimation::animation(void)

{
  int *this;
  
  this = (int *)operator_new(0x20);
  memset(this,0,0x20);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_001595d0 + 0x1595b4) + 8;
  this[5] = *(int *)(DAT_001595d4 + 0x1595be) + 0xc;
  init();
  CCObject::autorelease((CCObject *)this);
  return this;
}


