/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001594f4  Symbol: animationWithFrames */

/* cocos2d::CCAnimation::animationWithFrames(cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>*) */

int * cocos2d::CCAnimation::animationWithFrames(CCMutableArray *param_1)

{
  int *this;
  
  this = (int *)operator_new(0x20);
  memset(this,0,0x20);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_00159534 + 0x159518) + 8;
  this[5] = *(int *)(DAT_00159538 + 0x159522) + 0xc;
  initWithFrames((CCMutableArray *)this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


