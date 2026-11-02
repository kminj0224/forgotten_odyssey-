/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ac18  Symbol: ~CCLiquid */

/* cocos2d::CCLiquid::~CCLiquid() */

CCLiquid * __thiscall cocos2d::CCLiquid::~CCLiquid(CCLiquid *this)

{
  *(int *)this = *(int *)(DAT_0013ac30 + 0x13ac22) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


