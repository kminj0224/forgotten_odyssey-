/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001498c6  Symbol: onEnter */

/* cocos2d::CCLayer::onEnter() */

void __thiscall cocos2d::CCLayer::onEnter(CCLayer *this)

{
  CCAccelerometer *this_00;
  CCKeypadDispatcher *this_01;
  
  if (this[0x108] != (CCLayer)0x0) {
    (**(code **)(*(int *)this + 0x10c))();
  }
  CCNode::onEnter((CCNode *)this);
  if (this[0x109] != (CCLayer)0x0) {
    this_00 = (CCAccelerometer *)CCAccelerometer::sharedAccelerometer();
    CCAccelerometer::setDelegate(this_00,(CCAccelerometerDelegate *)(this + 0x100));
  }
  if (this[0x10a] != (CCLayer)0x0) {
    this_01 = (CCKeypadDispatcher *)CCKeypadDispatcher::sharedDispatcher();
    CCKeypadDispatcher::addDelegate(this_01,(CCKeypadDelegate *)(this + 0x104));
  }
  return;
}


