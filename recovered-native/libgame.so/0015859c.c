/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015859c  Symbol: FUN_0015859c */

undefined8 FUN_0015859c(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  if (((param_2 != (int *)0x0) || (iVar1 = FUN_00158538(&local_14), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*local_14 + 0x18))(local_14,param_1), iVar1 == 0)) {
    __android_log_print(3,DAT_001585d4 + 0x1585c8,DAT_001585d8 + 0x1585ca,param_1);
  }
  return CONCAT44(param_1,iVar1);
}


