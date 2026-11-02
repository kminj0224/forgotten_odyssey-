/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015884e  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnPause */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnPause(void)

{
  int *piVar1;
  
  piVar1 = (int *)cocos2d::CCApplication::sharedApplication();
  (**(code **)(*piVar1 + 0x10))();
  return;
}


