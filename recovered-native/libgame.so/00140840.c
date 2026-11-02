/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140840  Symbol: ~CCWavesTiles3D */

/* cocos2d::CCWavesTiles3D::~CCWavesTiles3D() */

CCWavesTiles3D * __thiscall cocos2d::CCWavesTiles3D::~CCWavesTiles3D(CCWavesTiles3D *this)

{
  *(int *)this = *(int *)(DAT_00140858 + 0x14084a) + 8;
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


