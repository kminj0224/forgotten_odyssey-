/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff050  Symbol: FUN_001ff050 */

uint FUN_001ff050(int *param_1,wchar_t *param_2,uint param_3,size_t param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (param_3 < *(uint *)(iVar1 + -0xc)) {
    iVar3 = param_3 << 2;
    do {
      pwVar2 = wmemchr(param_2,*(wchar_t *)(iVar1 + iVar3),param_4);
      iVar3 = iVar3 + 4;
      if (pwVar2 == (wchar_t *)0x0) {
        return param_3;
      }
      iVar1 = *param_1;
      param_3 = param_3 + 1;
    } while (param_3 < *(uint *)(iVar1 + -0xc));
  }
  return 0xffffffff;
}


