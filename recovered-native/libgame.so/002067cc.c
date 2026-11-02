/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002067cc  Symbol: FUN_002067cc */

uint FUN_002067cc(undefined4 param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = strcoll(param_2,param_3);
  uVar2 = iVar1 >> 0x1e;
  if (iVar1 != 0) {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}


