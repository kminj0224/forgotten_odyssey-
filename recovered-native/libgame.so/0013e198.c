/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e198  Symbol: actionWithDuration */

/* cocos2d::CCScaleTo::actionWithDuration(float, float, float) */

int * cocos2d::CCScaleTo::actionWithDuration(float param_1,float param_2,float param_3)

{
  int *this;
  undefined8 uVar1;
  float extraout_s2;
  
  this = (int *)operator_new(0x4c);
  memset(this,0,0x4c);
  uVar1 = CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e1d8 + 0x13e1c0) + 8;
  initWithDuration((float)uVar1,(float)((ulonglong)uVar1 >> 0x20),extraout_s2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


