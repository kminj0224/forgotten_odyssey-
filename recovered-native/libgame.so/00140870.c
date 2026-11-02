/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140870  Symbol: ~CCJumpTiles3D */

/* cocos2d::CCJumpTiles3D::~CCJumpTiles3D() */

CCJumpTiles3D * __thiscall cocos2d::CCJumpTiles3D::~CCJumpTiles3D(CCJumpTiles3D *this)

{
  *(int *)this = *(int *)(DAT_00140888 + 0x14087a) + 8;
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


