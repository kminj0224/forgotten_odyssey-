/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159054  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeKeyDown */

undefined4
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeKeyDown
          (undefined4 param_1,undefined4 param_2,int param_3)

{
  CCKeypadDispatcher *this;
  undefined4 uVar1;
  ccKeypadMSGType cVar2;
  
  if (param_3 == 4) {
    this = (CCKeypadDispatcher *)cocos2d::CCKeypadDispatcher::sharedDispatcher();
    cVar2 = 1;
  }
  else {
    if (param_3 != 0x52) {
      return 0;
    }
    this = (CCKeypadDispatcher *)cocos2d::CCKeypadDispatcher::sharedDispatcher();
    cVar2 = 2;
  }
  uVar1 = cocos2d::CCKeypadDispatcher::dispatchKeypadMSG(this,cVar2);
  return uVar1;
}


