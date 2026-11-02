/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136f30  Symbol: ~CCCamera */

/* cocos2d::CCCamera::~CCCamera() */

CCCamera * __thiscall cocos2d::CCCamera::~CCCamera(CCCamera *this)

{
  *(int *)this = *(int *)(DAT_00136f48 + 0x136f3a) + 8;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


