/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140900  Symbol: ~CCTurnOffTiles */

/* cocos2d::CCTurnOffTiles::~CCTurnOffTiles() */

CCTurnOffTiles * __thiscall cocos2d::CCTurnOffTiles::~CCTurnOffTiles(CCTurnOffTiles *this)

{
  *(int *)this = *(int *)(DAT_00140928 + 0x14090a) + 8;
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3c));
    *(undefined4 *)(this + 0x3c) = 0;
  }
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


