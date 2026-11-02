/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ab88  Symbol: ~CCLens3D */

/* cocos2d::CCLens3D::~CCLens3D() */

CCLens3D * __thiscall cocos2d::CCLens3D::~CCLens3D(CCLens3D *this)

{
  *(int *)this = *(int *)(DAT_0013aba0 + 0x13ab92) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


