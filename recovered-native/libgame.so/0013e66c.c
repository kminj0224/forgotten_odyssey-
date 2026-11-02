/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e66c  Symbol: actionWithDuration */

/* cocos2d::CCTintBy::actionWithDuration(float, short, short, short) */

int * cocos2d::CCTintBy::actionWithDuration(float param_1,short param_2,short param_3,short param_4)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x38);
  memset(this,0,0x38);
  fVar1 = (float)CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e6b4 + 0x13e698) + 8;
  initWithDuration(fVar1,(short)this,param_2,param_3);
  CCObject::autorelease((CCObject *)this);
  return this;
}


