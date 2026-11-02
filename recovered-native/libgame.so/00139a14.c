/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139a14  Symbol: ~CCStopGrid */

/* cocos2d::CCStopGrid::~CCStopGrid() */

CCStopGrid * __thiscall cocos2d::CCStopGrid::~CCStopGrid(CCStopGrid *this)

{
  *(int *)this = *(int *)(DAT_00139a2c + 0x139a1e) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


