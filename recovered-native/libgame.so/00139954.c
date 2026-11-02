/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139954  Symbol: ~CCGrid3DAction */

/* cocos2d::CCGrid3DAction::~CCGrid3DAction() */

CCGrid3DAction * __thiscall cocos2d::CCGrid3DAction::~CCGrid3DAction(CCGrid3DAction *this)

{
  *(int *)this = *(int *)(DAT_0013996c + 0x13995e) + 8;
  CCGridAction::~CCGridAction((CCGridAction *)this);
  return this;
}


