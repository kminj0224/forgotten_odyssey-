/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014985e  Symbol: setIsAccelerometerEnabled */

/* cocos2d::CCLayer::setIsAccelerometerEnabled(bool) */

void __thiscall cocos2d::CCLayer::setIsAccelerometerEnabled(CCLayer *this,bool param_1)

{
  CCAccelerometer *this_00;
  CCAccelerometerDelegate *pCVar1;
  
  if ((this[0x109] != (CCLayer)param_1) &&
     (this[0x109] = (CCLayer)param_1, this[0x70] != (CCLayer)0x0)) {
    if (param_1) {
      this_00 = (CCAccelerometer *)CCAccelerometer::sharedAccelerometer();
      pCVar1 = (CCAccelerometerDelegate *)(this + 0x100);
    }
    else {
      this_00 = (CCAccelerometer *)CCAccelerometer::sharedAccelerometer();
      pCVar1 = (CCAccelerometerDelegate *)0x0;
    }
    CCAccelerometer::setDelegate(this_00,pCVar1);
  }
  return;
}


