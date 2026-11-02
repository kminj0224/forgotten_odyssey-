/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fece0  Symbol: FUN_001fece0 */

uint FUN_001fece0(int *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = *(uint *)(*param_1 + -0xc);
  if (param_4 == 0) {
    if (uVar4 < param_3) {
      param_3 = 0xffffffff;
    }
    return param_3;
  }
  if ((param_4 <= uVar4) && (param_3 <= uVar4 - param_4)) {
    uVar2 = param_3 + 1;
    pwVar3 = (wchar_t *)(*param_1 + param_3 * 4);
    do {
      if ((*pwVar3 == *param_2) && (iVar1 = wmemcmp(pwVar3 + 1,param_2 + 1,param_4 - 1), iVar1 == 0)
         ) {
        return uVar2 - 1;
      }
      bVar5 = uVar2 <= uVar4 - param_4;
      uVar2 = uVar2 + 1;
      pwVar3 = pwVar3 + 1;
    } while (bVar5);
  }
  return 0xffffffff;
}


