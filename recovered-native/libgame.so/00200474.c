/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200474  Symbol: FUN_00200474 */

wchar_t ** FUN_00200474(wchar_t **param_1,wchar_t *param_2,uint param_3,undefined4 param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  int iVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    return param_1;
  }
  pwVar2 = *param_1;
  pwVar1 = (wchar_t *)pwVar2[-3];
  if (0xffffffeU - (int)pwVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_0020056c + DAT_00200570);
  }
  wVar3 = param_3 + (int)pwVar1;
  if (((uint)pwVar2[-2] < (uint)wVar3) || (L'\0' < pwVar2[-1])) {
    if ((param_2 < pwVar2) || (pwVar1 = pwVar2 + (int)pwVar1, pwVar1 < param_2)) {
      FUN_00200268(param_1,wVar3,pwVar1,pwVar2,param_4);
      pwVar2 = *param_1;
      pwVar1 = (wchar_t *)pwVar2[-3];
    }
    else {
      iVar4 = (int)param_2 - (int)pwVar2;
      FUN_00200268(param_1,wVar3,pwVar1,pwVar2,param_4);
      pwVar2 = *param_1;
      pwVar1 = (wchar_t *)pwVar2[-3];
      param_2 = pwVar2 + (iVar4 >> 2);
    }
  }
  if (param_3 == 1) {
    pwVar2[(int)pwVar1] = *param_2;
  }
  else {
    wmemcpy(pwVar2 + (int)pwVar1,param_2,param_3);
    pwVar2 = *param_1;
  }
  pwVar1 = (wchar_t *)(DAT_0020056c + 0x200524);
  bVar5 = pwVar2 + -3 != pwVar1;
  if (bVar5) {
    pwVar1 = (wchar_t *)0x0;
    pwVar2[-1] = L'\0';
    pwVar2[-3] = wVar3;
  }
  if (bVar5) {
    pwVar2[wVar3] = (wchar_t)pwVar1;
  }
  return param_1;
}


