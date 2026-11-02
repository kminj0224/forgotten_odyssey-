/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001408a0  Symbol: ~CCSplitRows */

/* cocos2d::CCSplitRows::~CCSplitRows() */

CCSplitRows * __thiscall cocos2d::CCSplitRows::~CCSplitRows(CCSplitRows *this)

{
  *(int *)this = *(int *)(DAT_001408b8 + 0x1408aa) + 8;
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


