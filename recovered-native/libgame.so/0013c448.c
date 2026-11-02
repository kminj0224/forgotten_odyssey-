/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c448  Symbol: ~CCJumpBy */

/* cocos2d::CCJumpBy::~CCJumpBy() */

CCJumpBy * __thiscall cocos2d::CCJumpBy::~CCJumpBy(CCJumpBy *this)

{
  *(int *)this = *(int *)(DAT_0013c460 + 0x13c452) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


