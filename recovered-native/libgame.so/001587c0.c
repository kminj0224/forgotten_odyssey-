/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001587c0  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeDeleteBackward */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeDeleteBackward(void)

{
  CCIMEDispatcher *this;
  
  this = (CCIMEDispatcher *)cocos2d::CCIMEDispatcher::sharedDispatcher();
  cocos2d::CCIMEDispatcher::dispatchDeleteBackward(this);
  return;
}


