/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013aafc  Symbol: ~CCWaves3D */

/* cocos2d::CCWaves3D::~CCWaves3D() */

CCWaves3D * __thiscall cocos2d::CCWaves3D::~CCWaves3D(CCWaves3D *this)

{
  *(int *)this = *(int *)(DAT_0013ab14 + 0x13ab06) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


