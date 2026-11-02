/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013722a  Symbol: stop */

/* cocos2d::CCFollow::stop() */

void __thiscall cocos2d::CCFollow::stop(CCFollow *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  CCAction::stop((CCAction *)this);
  return;
}


