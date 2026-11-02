/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eccb4  Symbol: FUN_001eccb4 */

size_t FUN_001eccb4(int *param_1,undefined *param_2,uint param_3,uint param_4)

{
  uint __n;
  int iVar1;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + -0xc) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_001c45d0((int)&DAT_001ecd24 + DAT_001ecd24);
  }
  __n = *(uint *)(iVar1 + -0xc) - param_4;
  if (param_3 <= __n) {
    __n = param_3;
  }
  if (__n == 0) {
    return 0;
  }
  if (__n != 1) {
    memcpy(param_2,(void *)(iVar1 + param_4),__n);
    return __n;
  }
  *param_2 = *(undefined *)(iVar1 + param_4);
  return 1;
}


