/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140754  Symbol: ~CCShatteredTiles3D */

/* cocos2d::CCShatteredTiles3D::~CCShatteredTiles3D() */

CCShatteredTiles3D * __thiscall
cocos2d::CCShatteredTiles3D::~CCShatteredTiles3D(CCShatteredTiles3D *this)

{
  *(int *)this = *(int *)(DAT_0014076c + 0x14075e) + 8;
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


