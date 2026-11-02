/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ab2c  Symbol: ~CCFlipX3D */

/* cocos2d::CCFlipX3D::~CCFlipX3D() */

CCFlipX3D * __thiscall cocos2d::CCFlipX3D::~CCFlipX3D(CCFlipX3D *this)

{
  *(int *)this = *(int *)(DAT_0013ab44 + 0x13ab36) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


