/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fd30  Symbol: actionWithDuration */

/* cocos2d::CCProgressFromTo::actionWithDuration(float, float, float) */

int * cocos2d::CCProgressFromTo::actionWithDuration(float param_1,float param_2,float param_3)

{
  int *this;
  undefined8 uVar1;
  float extraout_s2;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  uVar1 = CCAction::CCAction((CCAction *)this);
  this[8] = 0;
  *this = *(int *)(DAT_0013fd74 + 0x13fd5c) + 8;
  initWithDuration((float)uVar1,(float)((ulonglong)uVar1 >> 0x20),extraout_s2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


