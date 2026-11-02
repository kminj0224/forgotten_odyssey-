/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cd5c  Symbol: FUN_0015cd5c */

void FUN_0015cd5c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4);
  uVar2 = *puVar1;
  *puVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + param_3 * 4);
  *(undefined4 *)(*(int *)(param_1 + 8) + param_3 * 4) = uVar2;
  return;
}


