/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149a44  Symbol: unregisterScriptTouchHandler */

/* cocos2d::CCLayer::unregisterScriptTouchHandler() */

void __thiscall cocos2d::CCLayer::unregisterScriptTouchHandler(CCLayer *this)

{
  if (*(CCObject **)(this + 0x10c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x10c));
    *(undefined4 *)(this + 0x10c) = 0;
  }
  return;
}


