/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001589a8  Symbol: Java_org_cocos2dx_lib_Cocos2dxAccelerometer_onSensorChanged */

void Java_org_cocos2dx_lib_Cocos2dxAccelerometer_onSensorChanged
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  CCEGLView *this;
  CCAccelerometer *this_00;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  
  cocos2d::CCEGLView::sharedOpenGLView();
  cocos2d::CCEGLView::getViewPort();
  this = (CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView();
  cocos2d::CCEGLView::getScreenScaleFactor(this);
  this_00 = (CCAccelerometer *)cocos2d::CCAccelerometer::sharedAccelerometer();
  cocos2d::CCAccelerometer::update(this_00,extraout_s0,extraout_s1,extraout_s2,param_3);
  return;
}


