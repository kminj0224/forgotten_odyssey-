/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e58c  Symbol: actionWithDuration */

/* cocos2d::CCTintTo::actionWithDuration(float, unsigned char, unsigned char, unsigned char) */

int * cocos2d::CCTintTo::actionWithDuration(float param_1,uchar param_2,uchar param_3,uchar param_4)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x30);
  memset(this,0,0x30);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e5d4 + 0x13e5b8) + 8;
  initWithDuration(fVar1,(uchar)this,param_2,param_3);
  CCObject::autorelease((CCObject *)this);
  return this;
}


