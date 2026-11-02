/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001408d0  Symbol: ~CCSplitCols */

/* cocos2d::CCSplitCols::~CCSplitCols() */

CCSplitCols * __thiscall cocos2d::CCSplitCols::~CCSplitCols(CCSplitCols *this)

{
  *(int *)this = *(int *)(DAT_001408e8 + 0x1408da) + 8;
  CCTiledGrid3DAction::~CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  return this;
}


