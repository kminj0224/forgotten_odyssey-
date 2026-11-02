/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ac48  Symbol: ~CCWaves */

/* cocos2d::CCWaves::~CCWaves() */

CCWaves * __thiscall cocos2d::CCWaves::~CCWaves(CCWaves *this)

{
  *(int *)this = *(int *)(DAT_0013ac60 + 0x13ac52) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


