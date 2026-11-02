/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c390  Symbol: ~CCMoveTo */

/* cocos2d::CCMoveTo::~CCMoveTo() */

CCMoveTo * __thiscall cocos2d::CCMoveTo::~CCMoveTo(CCMoveTo *this)

{
  *(int *)this = *(int *)(DAT_0013c3a8 + 0x13c39a) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


