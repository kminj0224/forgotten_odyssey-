/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001377f0  Symbol: ~CCActionCamera */

/* cocos2d::CCActionCamera::~CCActionCamera() */

CCActionCamera * __thiscall cocos2d::CCActionCamera::~CCActionCamera(CCActionCamera *this)

{
  *(int *)this = *(int *)(DAT_00137808 + 0x1377fa) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


