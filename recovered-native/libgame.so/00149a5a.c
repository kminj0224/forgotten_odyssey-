/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149a5a  Symbol: onExit */

/* cocos2d::CCLayer::onExit() */

void __thiscall cocos2d::CCLayer::onExit(CCLayer *this)

{
  CCTouchDispatcher *this_00;
  CCAccelerometer *this_01;
  CCKeypadDispatcher *this_02;
  
  if (this[0x108] != (CCLayer)0x0) {
    this_00 = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
    CCTouchDispatcher::removeDelegate(this_00,(CCTouchDelegate *)(this + 0xfc));
    unregisterScriptTouchHandler(this);
  }
  if (this[0x109] != (CCLayer)0x0) {
    this_01 = (CCAccelerometer *)CCAccelerometer::sharedAccelerometer();
    CCAccelerometer::setDelegate(this_01,(CCAccelerometerDelegate *)0x0);
  }
  if (this[0x10a] != (CCLayer)0x0) {
    this_02 = (CCKeypadDispatcher *)CCKeypadDispatcher::sharedDispatcher();
    CCKeypadDispatcher::removeDelegate(this_02,(CCKeypadDelegate *)(this + 0x104));
  }
  CCNode::onExit();
  return;
}


