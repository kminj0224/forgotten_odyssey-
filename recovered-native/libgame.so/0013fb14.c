/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fb14  Symbol: ~CCProgressTo */

/* cocos2d::CCProgressTo::~CCProgressTo() */

CCProgressTo * __thiscall cocos2d::CCProgressTo::~CCProgressTo(CCProgressTo *this)

{
  *(int *)this = *(int *)(DAT_0013fb2c + 0x13fb1e) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


