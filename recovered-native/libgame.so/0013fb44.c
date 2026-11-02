/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fb44  Symbol: ~CCProgressFromTo */

/* cocos2d::CCProgressFromTo::~CCProgressFromTo() */

CCProgressFromTo * __thiscall cocos2d::CCProgressFromTo::~CCProgressFromTo(CCProgressFromTo *this)

{
  *(int *)this = *(int *)(DAT_0013fb5c + 0x13fb4e) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


