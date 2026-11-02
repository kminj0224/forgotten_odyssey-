/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140724  Symbol: ~CCShakyTiles3D */

/* cocos2d::CCShakyTiles3D::~CCShakyTiles3D() */

CCShakyTiles3D * __thiscall cocos2d::CCShakyTiles3D::~CCShakyTiles3D(CCShakyTiles3D *this)

{
  *(int *)this = *(int *)(DAT_0014073c + 0x14072e) + 8;
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


