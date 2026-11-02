/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff6cc  Symbol: FUN_001ff6cc */

void FUN_001ff6cc(wchar_t **param_1,size_t param_2,int param_3,int param_4)

{
  int iVar1;
  wchar_t *__s2;
  wchar_t wVar2;
  size_t __n;
  wchar_t *pwVar3;
  undefined auStack_24 [4];
  
  pwVar3 = *param_1;
  wVar2 = (param_4 - param_3) + pwVar3[-3];
  __n = (pwVar3[-3] - param_2) - param_3;
  if (((uint)pwVar3[-2] < (uint)wVar2) || (L'\0' < pwVar3[-1])) {
    iVar1 = FUN_001ff4e0(wVar2,pwVar3[-2],auStack_24);
    if (param_2 == 0) {
      __s2 = *param_1;
    }
    else {
      __s2 = *param_1;
      if (param_2 == 1) {
        *(wchar_t *)(iVar1 + 0xc) = *__s2;
      }
      else {
        wmemcpy((wchar_t *)(iVar1 + 0xc),__s2,param_2);
        __s2 = *param_1;
      }
    }
    pwVar3 = (wchar_t *)(iVar1 + 0xc);
    if (__n != 0) {
      if (__n == 1) {
        pwVar3[param_4 + param_2] = __s2[param_3 + param_2];
      }
      else {
        wmemcpy(pwVar3 + param_4 + param_2,__s2 + param_3 + param_2,__n);
        __s2 = *param_1;
      }
    }
    if (__s2 + -3 != (wchar_t *)(DAT_001ff844 + 0x1ff740)) {
      FUN_001ff644(__s2 + -3,auStack_24);
    }
    *param_1 = pwVar3;
  }
  else if (param_3 != param_4 && __n != 0) {
    if (__n == 1) {
      pwVar3[param_4 + param_2] = pwVar3[param_3 + param_2];
    }
    else {
      wmemmove(pwVar3 + param_4 + param_2,pwVar3 + param_3 + param_2,__n);
      pwVar3 = *param_1;
    }
  }
  if (pwVar3 + -3 != (wchar_t *)(DAT_001ff848 + 0x1ff75c)) {
    pwVar3[-1] = L'\0';
    pwVar3[-3] = wVar2;
    pwVar3[wVar2] = L'\0';
  }
  return;
}


