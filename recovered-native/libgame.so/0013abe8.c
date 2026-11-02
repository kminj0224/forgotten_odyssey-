/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013abe8  Symbol: ~CCShaky3D */

/* cocos2d::CCShaky3D::~CCShaky3D() */

CCShaky3D * __thiscall cocos2d::CCShaky3D::~CCShaky3D(CCShaky3D *this)

{
  *(int *)this = *(int *)(DAT_0013ac00 + 0x13abf2) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


