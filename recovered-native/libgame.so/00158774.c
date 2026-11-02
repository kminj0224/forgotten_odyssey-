/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158774  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInsertText */

undefined8
Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInsertText
          (int *param_1,uint3 param_2,undefined4 param_3)

{
  char *__s;
  CCIMEDispatcher *this;
  size_t sVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (uint)param_2;
  uStack_18 = param_3;
  __s = (char *)(**(code **)(*param_1 + 0x2a4))(param_1,param_3,(int)&uStack_1c + 3);
  if (uStack_1c._3_1_ != '\0') {
    this = (CCIMEDispatcher *)cocos2d::CCIMEDispatcher::sharedDispatcher();
    sVar1 = strlen(__s);
    cocos2d::CCIMEDispatcher::dispatchInsertText(this,__s,sVar1);
    (**(code **)(*param_1 + 0x2a8))(param_1,param_3,__s);
  }
  return CONCAT44(uStack_1c,param_1);
}


