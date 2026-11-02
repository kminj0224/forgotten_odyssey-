/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013780c  Symbol: ~CCOrbitCamera */

/* cocos2d::CCOrbitCamera::~CCOrbitCamera() */

CCOrbitCamera * __thiscall cocos2d::CCOrbitCamera::~CCOrbitCamera(CCOrbitCamera *this)

{
  *(int *)this = *(int *)(DAT_00137824 + 0x137816) + 8;
  CCActionCamera::~CCActionCamera((CCActionCamera *)this);
  return this;
}


