/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149892  Symbol: setIsTouchEnabled */

/* cocos2d::CCLayer::setIsTouchEnabled(bool) */

void __thiscall cocos2d::CCLayer::setIsTouchEnabled(CCLayer *this,bool param_1)

{
  CCTouchDispatcher *this_00;
  
  if ((this[0x108] != (CCLayer)param_1) &&
     (this[0x108] = (CCLayer)param_1, this[0x70] != (CCLayer)0x0)) {
    if (param_1) {
      (**(code **)(*(int *)this + 0x10c))();
    }
    else {
      this_00 = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
      CCTouchDispatcher::removeDelegate(this_00,(CCTouchDelegate *)(this + 0xfc));
    }
  }
  return;
}


