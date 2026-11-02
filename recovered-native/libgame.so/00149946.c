/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149946  Symbol: registerWithTouchDispatcher */

/* cocos2d::CCLayer::registerWithTouchDispatcher() */

void __thiscall cocos2d::CCLayer::registerWithTouchDispatcher(CCLayer *this)

{
  CCTouchDelegate *pCVar1;
  CCTouchDispatcher *this_00;
  
  if (*(int *)(this + 0x10c) == 0) {
    pCVar1 = (CCTouchDelegate *)CCTouchDispatcher::sharedDispatcher();
  }
  else {
    if (*(char *)(*(int *)(this + 0x10c) + 0x18) == '\0') {
      this_00 = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
      CCTouchDispatcher::addTargetedDelegate
                (this_00,(CCTouchDelegate *)(this + 0xfc),*(int *)(*(int *)(this + 0x10c) + 0x1c),
                 *(bool *)(*(int *)(this + 0x10c) + 0x20));
      return;
    }
    pCVar1 = (CCTouchDelegate *)CCTouchDispatcher::sharedDispatcher();
  }
  CCTouchDispatcher::addStandardDelegate(pCVar1,(int)(CCTouchDelegate *)(this + 0xfc));
  return;
}


