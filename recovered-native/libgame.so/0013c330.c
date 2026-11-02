/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c330  Symbol: ~CCRotateTo */

/* cocos2d::CCRotateTo::~CCRotateTo() */

CCRotateTo * __thiscall cocos2d::CCRotateTo::~CCRotateTo(CCRotateTo *this)

{
  *(int *)this = *(int *)(DAT_0013c348 + 0x13c33a) + 8;
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


