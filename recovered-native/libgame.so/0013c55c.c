/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c55c  Symbol: ~CCBlink */

/* cocos2d::CCBlink::~CCBlink() */

CCBlink * __thiscall cocos2d::CCBlink::~CCBlink(CCBlink *this)

{
  *(int *)this = *(int *)(DAT_0013c574 + 0x13c566) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


