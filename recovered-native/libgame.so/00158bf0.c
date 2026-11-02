/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158bf0  Symbol: ~CCTouch */

/* cocos2d::CCTouch::~CCTouch() */

CCTouch * __thiscall cocos2d::CCTouch::~CCTouch(CCTouch *this)

{
  *(int *)this = *(int *)(DAT_00158c08 + 0x158bfa) + 8;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


