/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e0dc  Symbol: actionWithDuration */

/* cocos2d::CCScaleTo::actionWithDuration(float, float) */

int * cocos2d::CCScaleTo::actionWithDuration(float param_1,float param_2)

{
  int *this;
  undefined8 uVar1;
  
  this = (int *)operator_new(0x4c);
  memset(this,0,0x4c);
  uVar1 = CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013e118 + 0x13e102) + 8;
  initWithDuration((float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  CCObject::autorelease((CCObject *)this);
  return this;
}


