/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fc6c  Symbol: actionWithDuration */

/* cocos2d::CCProgressTo::actionWithDuration(float, float) */

int * cocos2d::CCProgressTo::actionWithDuration(float param_1,float param_2)

{
  int *this;
  undefined8 uVar1;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  uVar1 = CCAction::CCAction((CCAction *)this);
  this[8] = 0;
  *this = *(int *)(DAT_0013fcac + 0x13fc96) + 8;
  initWithDuration((float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  CCObject::autorelease((CCObject *)this);
  return this;
}


