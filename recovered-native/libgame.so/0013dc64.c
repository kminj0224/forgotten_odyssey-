/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013dc64  Symbol: actionWithDuration */

/* cocos2d::CCSkewBy::actionWithDuration(float, float, float) */

int * cocos2d::CCSkewBy::actionWithDuration(float param_1,float param_2,float param_3)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  
  this = (int *)operator_new(0x4c);
  memset(this,0,0x4c);
  uVar2 = CCSkewTo::CCSkewTo((CCSkewTo *)this);
  *this = *(int *)(DAT_0013dcb4 + 0x13dc8c) + 8;
  iVar1 = initWithDuration((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


