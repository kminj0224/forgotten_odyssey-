/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149910  Symbol: setIsKeypadEnabled */

/* cocos2d::CCLayer::setIsKeypadEnabled(bool) */

void __thiscall cocos2d::CCLayer::setIsKeypadEnabled(CCLayer *this,bool param_1)

{
  CCKeypadDispatcher *pCVar1;
  
  if ((this[0x10a] != (CCLayer)param_1) &&
     (this[0x10a] = (CCLayer)param_1, this[0x70] != (CCLayer)0x0)) {
    if (param_1) {
      pCVar1 = (CCKeypadDispatcher *)CCKeypadDispatcher::sharedDispatcher();
      CCKeypadDispatcher::addDelegate(pCVar1,(CCKeypadDelegate *)(this + 0x104));
    }
    else {
      pCVar1 = (CCKeypadDispatcher *)CCKeypadDispatcher::sharedDispatcher();
      CCKeypadDispatcher::removeDelegate(pCVar1,(CCKeypadDelegate *)(this + 0x104));
    }
  }
  return;
}


