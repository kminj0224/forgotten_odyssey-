/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015953c  Symbol: animationWithFrames */

/* cocos2d::CCAnimation::animationWithFrames(cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>*,
   float) */

int * cocos2d::CCAnimation::animationWithFrames(CCMutableArray *param_1,float param_2)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x20);
  memset(this,0,0x20);
  fVar1 = (float)CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_00159580 + 0x159562) + 8;
  this[5] = *(int *)(DAT_00159584 + 0x15956e) + 0xc;
  initWithFrames((CCAnimation *)this,param_1,fVar1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


