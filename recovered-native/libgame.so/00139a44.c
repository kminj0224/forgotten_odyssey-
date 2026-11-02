/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139a44  Symbol: ~CCReuseGrid */

/* cocos2d::CCReuseGrid::~CCReuseGrid() */

CCReuseGrid * __thiscall cocos2d::CCReuseGrid::~CCReuseGrid(CCReuseGrid *this)

{
  *(int *)this = *(int *)(DAT_00139a5c + 0x139a4e) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


