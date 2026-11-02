/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff398  Symbol: FUN_001ff398 */

int FUN_001ff398(int *param_1,uint param_2,uint param_3,wchar_t *param_4)

{
  size_t sVar1;
  int iVar2;
  uint __n;
  uint uVar3;
  
  if (param_2 <= *(uint *)(*param_1 + -0xc)) {
    uVar3 = *(uint *)(*param_1 + -0xc) - param_2;
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    sVar1 = wcslen(param_4);
    __n = sVar1;
    if (uVar3 <= sVar1) {
      __n = uVar3;
    }
    iVar2 = wmemcmp((wchar_t *)(*param_1 + param_2 * 4),param_4,__n);
    if (iVar2 == 0) {
      iVar2 = uVar3 - sVar1;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c45d0((int)&DAT_001ff404 + DAT_001ff404);
}


