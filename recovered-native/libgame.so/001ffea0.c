/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ffea0  Symbol: FUN_001ffea0 */

wchar_t ** FUN_001ffea0(wchar_t **param_1,wchar_t param_2,wchar_t *param_3)

{
  int iVar1;
  size_t __n;
  size_t __n_00;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *__s1;
  wchar_t wVar4;
  
  __n_00 = wcslen(param_3);
  pwVar3 = *param_1;
  wVar4 = pwVar3[-3];
  if ((uint)wVar4 < (uint)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_001c45d0((int)&DAT_001ffe98 + DAT_001ffe9c);
  }
  if (__n_00 <= (uint)(0xffffffeU - wVar4)) {
    if (((param_3 < pwVar3) || (pwVar3 + wVar4 < param_3)) || (L'\0' < pwVar3[-1])) {
      param_1 = (wchar_t **)FUN_001ff84c(param_1,param_2,0,param_3,__n_00);
    }
    else {
      FUN_001ff6cc(param_1,param_2,0);
      pwVar2 = *param_1;
      iVar1 = (int)param_3 - (int)pwVar3 >> 2;
      pwVar3 = pwVar2 + iVar1;
      __s1 = pwVar2 + param_2;
      if (__s1 < pwVar3 + __n_00) {
        if (pwVar3 < __s1) {
          __n = (int)__s1 - (int)pwVar3 >> 2;
          if (__n == 1) {
            pwVar2[param_2] = pwVar2[iVar1];
          }
          else {
            wmemcpy(__s1,pwVar3,__n);
          }
          if (__n_00 - __n == 1) {
            __s1[__n] = __s1[__n_00];
          }
          else {
            wmemcpy(__s1 + __n,__s1 + __n_00,__n_00 - __n);
          }
        }
        else if (__n_00 == 1) {
          pwVar2[param_2] = pwVar3[1];
        }
        else {
          wmemcpy(__s1,pwVar3 + __n_00,__n_00);
        }
      }
      else if (__n_00 == 1) {
        pwVar2[param_2] = pwVar2[iVar1];
      }
      else {
        wmemcpy(__s1,pwVar3,__n_00);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4558(DAT_001ffe98 + 0x1ffe8c);
}


