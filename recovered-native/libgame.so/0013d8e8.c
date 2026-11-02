/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d8e8  Symbol: actionWithDuration */

/* cocos2d::CCRotateTo::actionWithDuration(float, float) */

int * cocos2d::CCRotateTo::actionWithDuration(float param_1,float param_2)

{
  int *this;
  undefined8 uVar1;
  
  this = (int *)operator_new(0x38);
  memset(this,0,0x38);
  uVar1 = CCActionInterval::CCActionInterval((CCActionInterval *)this);
  *this = *(int *)(DAT_0013d924 + 0x13d90e) + 8;
  initWithDuration((float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  CCObject::autorelease((CCObject *)this);
  return this;
}


