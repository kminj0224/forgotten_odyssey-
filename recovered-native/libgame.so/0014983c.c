/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014983c  Symbol: onEnterTransitionDidFinish */

/* cocos2d::CCLayer::onEnterTransitionDidFinish() */

void __thiscall cocos2d::CCLayer::onEnterTransitionDidFinish(CCLayer *this)

{
  CCAccelerometer *this_00;
  
  if (this[0x109] != (CCLayer)0x0) {
    this_00 = (CCAccelerometer *)CCAccelerometer::sharedAccelerometer();
    CCAccelerometer::setDelegate(this_00,(CCAccelerometerDelegate *)(this + 0x100));
  }
  CCNode::onEnterTransitionDidFinish();
  return;
}


