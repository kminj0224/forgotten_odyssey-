/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200804  Symbol: FUN_00200804 */

int * FUN_00200804(int *param_1,int *param_2)

{
  int iVar1;
  undefined auStack_14 [8];
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -4) < 0) {
    iVar1 = FUN_00200188(iVar1 + -0xc,auStack_14,0);
  }
  else if (iVar1 + -0xc != DAT_00200868 + 0x200830) {
    FUN_0021100c(iVar1 + -4,1);
  }
  *param_1 = iVar1;
  return param_1;
}


