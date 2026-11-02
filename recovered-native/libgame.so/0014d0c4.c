/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d0c4  Symbol: registerWithTouchDispatcher */

/* cocos2d::CCMenu::registerWithTouchDispatcher() */

void __thiscall cocos2d::CCMenu::registerWithTouchDispatcher(CCMenu *this)

{
  CCTouchDispatcher *this_00;
  
  this_00 = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
  CCTouchDispatcher::addTargetedDelegate(this_00,(CCTouchDelegate *)(this + 0xfc),-0x80,true);
  return;
}


