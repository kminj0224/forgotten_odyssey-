/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fec04  Symbol: FUN_001fec04 */

size_t FUN_001fec04(int *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  uint __n;
  int iVar1;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + -0xc) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_001c45d0((int)&DAT_001fec74 + DAT_001fec74);
  }
  __n = *(uint *)(iVar1 + -0xc) - param_4;
  if (param_3 <= __n) {
    __n = param_3;
  }
  if (__n == 0) {
    return 0;
  }
  if (__n != 1) {
    wmemcpy(param_2,(wchar_t *)(iVar1 + param_4 * 4),__n);
    return __n;
  }
  *param_2 = *(wchar_t *)(iVar1 + param_4 * 4);
  return 1;
}


