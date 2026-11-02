/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e240  Symbol: actionWithDuration */

/* cocos2d::CCScaleBy::actionWithDuration(float, float) */

int * cocos2d::CCScaleBy::actionWithDuration(float param_1,float param_2)

{
  int *this;
  undefined8 uVar1;
  
  this = (int *)operator_new(0x4c);
  memset(this,0,0x4c);
  uVar1 = CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e27c + 0x13e266) + 8;
  CCScaleTo::initWithDuration((float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  CCObject::autorelease((CCObject *)this);
  return this;
}


