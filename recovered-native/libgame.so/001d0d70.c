/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d0d70  Symbol: FUN_001d0d70 */

int FUN_001d0d70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  if ((param_2 & *(uint *)(param_1 + 0x10)) == 0) {
    return param_1;
  }
  iVar1 = __cxa_rethrow();
  iVar2 = 1 - *(uint *)(iVar1 + 0x14);
  if (1 < *(uint *)(iVar1 + 0x14)) {
    iVar2 = 0;
  }
  return iVar2;
}


