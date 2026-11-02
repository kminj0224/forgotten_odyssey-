/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140940  Symbol: ~CCShuffleTiles */

/* cocos2d::CCShuffleTiles::~CCShuffleTiles() */

CCShuffleTiles * __thiscall cocos2d::CCShuffleTiles::~CCShuffleTiles(CCShuffleTiles *this)

{
  *(int *)this = *(int *)(DAT_00140974 + 0x14094a) + 8;
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3c));
    *(undefined4 *)(this + 0x3c) = 0;
  }
  if (*(void **)(this + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x40));
    *(undefined4 *)(this + 0x40) = 0;
  }
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


