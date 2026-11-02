/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bca0  Symbol: actionWithFlipX */

/* cocos2d::CCFlipX::actionWithFlipX(bool) */

int * cocos2d::CCFlipX::actionWithFlipX(bool param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x28);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013bce4 + 0x13bcba) + 8;
  *(CCActionInstant *)(this + 9) = (CCActionInstant)0x0;
  iVar1 = initWithFlipX((CCFlipX *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


