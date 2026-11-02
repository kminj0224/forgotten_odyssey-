/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001587cc  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeGetContentText */

undefined4 Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeGetContentText(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  CCIMEDispatcher *this;
  int *local_c;
  
  local_c = (int *)0x0;
  piVar1 = (int *)cocos2d::JniHelper::getJavaVM();
  iVar2 = (**(code **)(*piVar1 + 0x18))
                    (piVar1,&local_c,DAT_00158808,*(code **)(*piVar1 + 0x18),param_1);
  uVar3 = 0;
  if ((iVar2 == 0) && (local_c != (int *)0x0)) {
    this = (CCIMEDispatcher *)cocos2d::CCIMEDispatcher::sharedDispatcher();
    uVar3 = cocos2d::CCIMEDispatcher::getContentText(this);
    uVar3 = (**(code **)(*local_c + 0x29c))(local_c,uVar3);
  }
  return uVar3;
}


