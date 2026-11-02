/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ab48  Symbol: ~CCFlipY3D */

/* cocos2d::CCFlipY3D::~CCFlipY3D() */

CCFlipY3D * __thiscall cocos2d::CCFlipY3D::~CCFlipY3D(CCFlipY3D *this)

{
  *(int *)this = *(int *)(DAT_0013ab60 + 0x13ab52) + 8;
  CCFlipX3D::~CCFlipX3D((CCFlipX3D *)this);
  return this;
}


