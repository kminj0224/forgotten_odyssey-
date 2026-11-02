/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d9a0  Symbol: actionWithDuration */

/* cocos2d::CCRotateBy::actionWithDuration(float, float) */

int * cocos2d::CCRotateBy::actionWithDuration(float param_1,float param_2)

{
  int *this;
  undefined8 uVar1;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  uVar1 = CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013d9dc + 0x13d9c6) + 8;
  initWithDuration((float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  CCObject::autorelease((CCObject *)this);
  return this;
}


