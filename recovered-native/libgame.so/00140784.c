/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140784  Symbol: ~CCFadeOutTRTiles */

/* cocos2d::CCFadeOutTRTiles::~CCFadeOutTRTiles() */

CCFadeOutTRTiles * __thiscall cocos2d::CCFadeOutTRTiles::~CCFadeOutTRTiles(CCFadeOutTRTiles *this)

{
  *(int *)this = *(int *)(DAT_0014079c + 0x14078e) + 8;
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


