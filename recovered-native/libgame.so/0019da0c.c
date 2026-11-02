/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019da0c  Symbol: FUN_0019da0c */

void FUN_0019da0c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0019da3c + 0x19da18;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x6c) == 0)) {
    FUN_0019d8c8(param_1,*(undefined4 *)(iVar1 + DAT_0019da40));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + DAT_0019da44);
    }
  }
  return;
}


