/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c314  Symbol: ~CCActionInterval */

/* cocos2d::CCActionInterval::~CCActionInterval() */

CCActionInterval * __thiscall cocos2d::CCActionInterval::~CCActionInterval(CCActionInterval *this)

{
  *(int *)this = *(int *)(DAT_0013c32c + 0x13c31e) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


