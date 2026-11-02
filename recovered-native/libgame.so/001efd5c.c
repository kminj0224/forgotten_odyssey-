/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001efd5c  Symbol: FUN_001efd5c */

wchar_t ** FUN_001efd5c(wchar_t **param_1,undefined4 param_2,int param_3,int param_4)

{
  wchar_t *pwVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t wVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined auStack_34 [8];
  wchar_t *local_2c;
  
  pwVar10 = *(wchar_t **)(DAT_001eff20 + 0x1efd70);
  *param_1 = pwVar10 + 3;
  pwVar1 = (wchar_t *)FUN_00200cb8(param_3,param_4,auStack_34,0);
  uVar8 = param_4 - param_3 >> 1;
  pwVar11 = pwVar1 + pwVar1[-3];
  local_2c = pwVar1;
  pvVar2 = operator_new__(uVar8 << 2);
  while( true ) {
    uVar3 = FUN_00206824(param_2,pvVar2,pwVar1,uVar8);
    if (uVar8 <= uVar3) {
      uVar8 = uVar3 + 1;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      pvVar2 = operator_new__(uVar8 * 4);
      uVar3 = FUN_00206824(param_2,pvVar2,pwVar1,uVar8);
    }
    FUN_00200474(param_1,pvVar2,uVar3);
    sVar4 = wcslen(pwVar1);
    if (pwVar1 + sVar4 == pwVar11) break;
    pwVar7 = *param_1;
    pwVar1 = pwVar1 + sVar4 + 1;
    wVar6 = pwVar7[-3];
    wVar9 = wVar6 + L'\x01';
    if (((uint)pwVar7[-2] < (uint)wVar9) || (L'\0' < pwVar7[-1])) {
      FUN_00200268(param_1,wVar9);
      pwVar7 = *param_1;
      wVar6 = pwVar7[-3];
    }
    pwVar7[wVar6] = L'\0';
    if (pwVar7 + -3 != pwVar10) {
      pwVar7[-1] = L'\0';
      pwVar7[-3] = wVar9;
      pwVar7[wVar9] = L'\0';
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pwVar1 = local_2c + -3;
  if ((pwVar1 != pwVar10) && (iVar5 = FUN_0021100c(local_2c + -1,0xffffffff), iVar5 < 1)) {
    operator_delete(pwVar1);
  }
  return param_1;
}


