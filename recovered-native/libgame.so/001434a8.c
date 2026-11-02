/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001434a8  Symbol: CCRect */

/* cocos2d::CCRect::CCRect() */

CCRect * __thiscall cocos2d::CCRect::CCRect(CCRect *this)

{
  CCPoint::CCPoint((CCPoint *)this);
  CCSize::CCSize((CCSize *)(this + 8));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


