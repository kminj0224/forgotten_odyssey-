/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013abb8  Symbol: ~CCRipple3D */

/* cocos2d::CCRipple3D::~CCRipple3D() */

CCRipple3D * __thiscall cocos2d::CCRipple3D::~CCRipple3D(CCRipple3D *this)

{
  *(int *)this = *(int *)(DAT_0013abd0 + 0x13abc2) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


