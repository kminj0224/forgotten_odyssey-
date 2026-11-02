/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b221c  Symbol: FUN_001b221c */

bool FUN_001b221c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1[8] + 0x18);
  iVar1 = (*(code *)puVar2[3])();
  if (iVar1 != 0) {
    *param_1 = *puVar2;
    param_1[1] = puVar2[1];
  }
  return iVar1 != 0;
}


