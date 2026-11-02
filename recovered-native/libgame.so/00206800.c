/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206800  Symbol: FUN_00206800 */

uint FUN_00206800(undefined4 param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = wcscoll(param_2,param_3);
  uVar2 = iVar1 >> 0x1e;
  if (iVar1 != 0) {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}


