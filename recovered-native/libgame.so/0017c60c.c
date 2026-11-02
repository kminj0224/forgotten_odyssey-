/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c60c  Symbol: FUN_0017c60c */

int FUN_0017c60c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int *piVar4;
  int iVar5;
  
  iVar1 = FUN_00179dd4();
  iVar5 = DAT_0017c6bc + 0x17c622;
  if (iVar1 != 0) {
    iVar2 = FUN_00193700(param_1,param_3);
    if (iVar2 == 0) {
      iVar5 = FUN_00190060(param_1,param_2,iVar1);
      if (iVar5 != 0) {
        piVar4 = (int *)(iVar1 + 0xb4);
        FUN_0017bfa0(iVar1);
        if (*piVar4 != 0) {
          return iVar1;
        }
        iVar5 = FUN_0018f794(param_1);
        if (iVar5 == 0) {
          return iVar1;
        }
        if (*piVar4 != 0) {
          return iVar1;
        }
        *piVar4 = iVar5;
        return iVar1;
      }
    }
    else {
      iVar3 = FUN_00190060(iVar2,param_2,iVar1);
      if (iVar3 != 0) {
        piVar4 = (int *)(iVar1 + 0xb4);
        FUN_0017bfa0(iVar1,iVar3);
        if (((*piVar4 == 0) && (iVar3 = FUN_0018f794(iVar2), iVar3 != 0)) && (*piVar4 == 0)) {
          *piVar4 = iVar3;
        }
        (***(code ***)(iVar5 + DAT_0017c6c0))(iVar2);
        return iVar1;
      }
      (***(code ***)(iVar5 + DAT_0017c6c0))(iVar2);
      iVar5 = extraout_r1;
    }
    FUN_00179908(iVar1,iVar5);
    iVar1 = 0;
  }
  return iVar1;
}


