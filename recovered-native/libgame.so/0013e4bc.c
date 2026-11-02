/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e4bc  Symbol: actionWithDuration */

/* cocos2d::CCFadeTo::actionWithDuration(float, unsigned char) */

int * cocos2d::CCFadeTo::actionWithDuration(float param_1,uchar param_2)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x2c);
  memset(this,0,0x2c);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e4f8 + 0x13e4e2) + 8;
  initWithDuration(fVar1,(uchar)this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


