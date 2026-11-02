/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001355d0  Symbol: ~CCTimer */

/* cocos2d::CCTimer::~CCTimer() */

CCTimer * __thiscall cocos2d::CCTimer::~CCTimer(CCTimer *this)

{
  *(int *)this = *(int *)(DAT_001355e8 + 0x1355da) + 8;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


