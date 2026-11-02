/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139938  Symbol: ~CCGridAction */

/* cocos2d::CCGridAction::~CCGridAction() */

CCGridAction * __thiscall cocos2d::CCGridAction::~CCGridAction(CCGridAction *this)

{
  *(int *)this = *(int *)(DAT_00139950 + 0x139942) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


