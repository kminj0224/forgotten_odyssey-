/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001677e6  Symbol: removeAllDelegates */

/* cocos2d::CCTouchDispatcher::removeAllDelegates() */

void __thiscall cocos2d::CCTouchDispatcher::removeAllDelegates(CCTouchDispatcher *this)

{
  if (this[0x20] == (CCTouchDispatcher)0x0) {
    forceRemoveAllDelegates(this);
  }
  else {
    this[0x2c] = (CCTouchDispatcher)0x1;
  }
  return;
}


