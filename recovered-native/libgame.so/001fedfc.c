/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fedfc  Symbol: FUN_001fedfc */

uint FUN_001fedfc(int *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  wchar_t *__s1;
  bool bVar3;
  
  uVar2 = *(uint *)(*param_1 + -0xc);
  if (param_4 <= uVar2) {
    uVar2 = uVar2 - param_4;
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    __s1 = (wchar_t *)(*param_1 + uVar2 * 4);
    do {
      iVar1 = wmemcmp(__s1,param_2,param_4);
      __s1 = __s1 + -1;
      if (iVar1 == 0) {
        return uVar2;
      }
      bVar3 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar3);
  }
  return 0xffffffff;
}


