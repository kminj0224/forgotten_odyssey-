/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001feef0  Symbol: FUN_001feef0 */

uint FUN_001feef0(int *param_1,wchar_t *param_2,uint param_3,size_t param_4)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  
  if ((param_4 != 0) && (iVar2 = *param_1, param_3 < *(uint *)(iVar2 + -0xc))) {
    iVar3 = param_3 << 2;
    do {
      pwVar1 = wmemchr(param_2,*(wchar_t *)(iVar2 + iVar3),param_4);
      iVar3 = iVar3 + 4;
      if (pwVar1 != (wchar_t *)0x0) {
        return param_3;
      }
      iVar2 = *param_1;
      param_3 = param_3 + 1;
    } while (param_3 < *(uint *)(iVar2 + -0xc));
  }
  return 0xffffffff;
}


