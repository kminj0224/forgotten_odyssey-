/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c464  Symbol: ~CCJumpTo */

/* cocos2d::CCJumpTo::~CCJumpTo() */

CCJumpTo * __thiscall cocos2d::CCJumpTo::~CCJumpTo(CCJumpTo *this)

{
  *(int *)this = *(int *)(DAT_0013c47c + 0x13c46e) + 8;
  CCJumpBy::~CCJumpBy((CCJumpBy *)this);
  return this;
}


