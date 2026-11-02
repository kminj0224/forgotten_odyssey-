/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ac78  Symbol: ~CCTwirl */

/* cocos2d::CCTwirl::~CCTwirl() */

CCTwirl * __thiscall cocos2d::CCTwirl::~CCTwirl(CCTwirl *this)

{
  *(int *)this = *(int *)(DAT_0013ac90 + 0x13ac82) + 8;
  CCGrid3DAction::~CCGrid3DAction((CCGrid3DAction *)this);
  return this;
}


