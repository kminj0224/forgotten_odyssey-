/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015885c  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnResume */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnResume(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = cocos2d::CCDirector::sharedDirector();
  if (*(int *)(iVar1 + 0x14) != 0) {
    piVar2 = (int *)cocos2d::CCApplication::sharedApplication();
    (**(code **)(*piVar2 + 0x14))();
  }
  return;
}


