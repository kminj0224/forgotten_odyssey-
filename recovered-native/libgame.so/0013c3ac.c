/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c3ac  Symbol: ~CCMoveBy */

/* cocos2d::CCMoveBy::~CCMoveBy() */

CCMoveBy * __thiscall cocos2d::CCMoveBy::~CCMoveBy(CCMoveBy *this)

{
  *(int *)this = *(int *)(DAT_0013c3c4 + 0x13c3b6) + 8;
  CCMoveTo::~CCMoveTo((CCMoveTo *)this);
  return this;
}


