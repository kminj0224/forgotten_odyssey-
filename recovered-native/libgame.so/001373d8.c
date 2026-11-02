/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001373d8  Symbol: CCFollow */

/* cocos2d::CCFollow::CCFollow() */

CCFollow * __thiscall cocos2d::CCFollow::CCFollow(CCFollow *this)

{
  CCAction::CCAction((CCAction *)this);
  *(int *)this = *(int *)(DAT_00137414 + 0x1373ea) + 8;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (CCFollow)0x0;
  this[0x25] = (CCFollow)0x0;
  CCPoint::CCPoint((CCPoint *)(this + 0x28));
  CCPoint::CCPoint((CCPoint *)(this + 0x30));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  return this;
}


