/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c5ec  Symbol: ~CCFadeTo */

/* cocos2d::CCFadeTo::~CCFadeTo() */

CCFadeTo * __thiscall cocos2d::CCFadeTo::~CCFadeTo(CCFadeTo *this)

{
  *(int *)this = *(int *)(DAT_0013c604 + 0x13c5f6) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


