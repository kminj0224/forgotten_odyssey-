/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001582e4  Symbol: setDelegate */

/* cocos2d::CCAccelerometer::setDelegate(cocos2d::CCAccelerometerDelegate*) */

void __thiscall
cocos2d::CCAccelerometer::setDelegate(CCAccelerometer *this,CCAccelerometerDelegate *param_1)

{
  *(CCAccelerometerDelegate **)this = param_1;
  if (param_1 == (CCAccelerometerDelegate *)0x0) {
    disableAccelerometerJNI();
  }
  else {
    enableAccelerometerJNI();
  }
  return;
}


