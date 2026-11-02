/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158538  Symbol: FUN_00158538 */

undefined4 FUN_00158538(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)cocos2d::JniHelper::getJavaVM();
  iVar2 = (**(code **)(*piVar1 + 0x18))
                    (piVar1,param_1,DAT_00158588,*(code **)(*piVar1 + 0x18),param_4);
  if (iVar2 == 0) {
    piVar1 = (int *)cocos2d::JniHelper::getJavaVM();
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_1,0);
    uVar3 = 1;
    if (iVar2 < 0) {
      __android_log_print(3,DAT_00158594 + 0x15857e,DAT_00158598 + 0x158580);
      uVar3 = 0;
    }
  }
  else {
    __android_log_print(3,DAT_0015858c + 0x158558,DAT_00158590 + 0x15855a);
    uVar3 = 0;
  }
  return uVar3;
}


