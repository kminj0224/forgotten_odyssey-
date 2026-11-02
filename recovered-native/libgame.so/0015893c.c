/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015893c  Symbol: Java_org_cocos2dx_lib_Cocos2dxActivity_nativeSetPaths */

undefined8
Java_org_cocos2dx_lib_Cocos2dxActivity_nativeSetPaths
          (int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = param_2;
  uStack_18 = param_3;
  uVar1 = (**(code **)(*param_1 + 0x2a4))(param_1,param_3,(int)&uStack_1c + 3);
  if (uStack_1c._3_1_ != '\0') {
    cocos2d::CCFileUtils::setResourcePath((CCFileUtils *)uVar1,(char *)((ulonglong)uVar1 >> 0x20));
    (**(code **)(*param_1 + 0x2a8))(param_1,param_3,(CCFileUtils *)uVar1);
  }
  return CONCAT44(uStack_1c,param_1);
}


