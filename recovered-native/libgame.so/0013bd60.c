/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bd60  Symbol: actionWithFlipY */

/* cocos2d::CCFlipY::actionWithFlipY(bool) */

int * cocos2d::CCFlipY::actionWithFlipY(bool param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x28);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013bda4 + 0x13bd7a) + 8;
  *(CCActionInstant *)(this + 9) = (CCActionInstant)0x0;
  iVar1 = initWithFlipY((CCFlipY *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


