/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e364  Symbol: actionWithDuration */

/* cocos2d::CCBlink::actionWithDuration(float, unsigned int) */

int * cocos2d::CCBlink::actionWithDuration(float param_1,uint param_2)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x30);
  memset(this,0,0x30);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e3a0 + 0x13e38a) + 8;
  initWithDuration(fVar1,(uint)this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


