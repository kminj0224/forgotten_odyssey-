/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eff24  Symbol: FUN_001eff24 */

int FUN_001eff24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  wchar_t *pwVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t wVar8;
  undefined auStack_34 [4];
  undefined auStack_30 [12];
  wchar_t *local_24;
  
  local_24 = (wchar_t *)FUN_00200cb8(param_2,param_3,auStack_34,0);
  pwVar1 = (wchar_t *)FUN_00200cb8(param_4,param_5,auStack_30,0);
  wVar8 = pwVar1[-3];
  pwVar7 = local_24 + local_24[-3];
  pwVar5 = local_24;
  pwVar6 = pwVar1;
  do {
    iVar3 = FUN_00206800(param_1,pwVar5,pwVar6);
    if (iVar3 != 0) {
LAB_001effec:
      pwVar5 = *(wchar_t **)(DAT_001f0080 + 0x1efffc);
      if ((pwVar1 + -3 != pwVar5) && (iVar4 = FUN_0021100c(pwVar1 + -1,0xffffffff), iVar4 < 1)) {
        operator_delete(pwVar1 + -3);
      }
      pwVar6 = local_24 + -3;
      if ((pwVar6 != pwVar5) && (iVar4 = FUN_0021100c(local_24 + -1,0xffffffff), iVar4 < 1)) {
        operator_delete(pwVar6);
      }
      return iVar3;
    }
    sVar2 = wcslen(pwVar5);
    pwVar5 = pwVar5 + sVar2;
    sVar2 = wcslen(pwVar6);
    pwVar6 = pwVar6 + sVar2;
    if (pwVar6 == pwVar1 + wVar8 && pwVar5 == pwVar7) goto LAB_001effec;
    if (pwVar5 == pwVar7) {
      iVar3 = -1;
      goto LAB_001effec;
    }
    if (pwVar6 == pwVar1 + wVar8) {
      iVar3 = 1;
      goto LAB_001effec;
    }
    pwVar5 = pwVar5 + 1;
    pwVar6 = pwVar6 + 1;
  } while( true );
}


