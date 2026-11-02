/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c8514  Symbol: FUN_001c8514 */

int * FUN_001c8514(int *param_1,int param_2)

{
  int iVar1;
  undefined auStack_1c [8];
  int local_14;
  
  FUN_001eed40(&local_14,DAT_001c85ac + 0x1c8530,auStack_1c);
  FUN_001c7a74(param_1,&local_14);
  if (((void *)(local_14 + -0xc) != *(void **)(DAT_001c85b0 + 0x1c8554)) &&
     (iVar1 = FUN_0021100c(local_14 + -4,0xffffffff), iVar1 < 1)) {
    operator_delete((void *)(local_14 + -0xc));
  }
  iVar1 = DAT_001c85b4;
  param_1[2] = param_2;
  *param_1 = iVar1 + 0x1c8574;
  return param_1;
}


