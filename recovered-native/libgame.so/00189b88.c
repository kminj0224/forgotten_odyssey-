/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189b88  Symbol: FUN_00189b88 */

int FUN_00189b88(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_00189bf8 + 0x189b92;
  if (param_1 == (int *)0x0) {
LAB_00189be2:
    iVar5 = -1;
  }
  else {
    if ((param_1[3] == 2) || ((uint)(param_2 + param_1[1]) < (uint)param_1[2])) {
      return 0;
    }
    iVar5 = param_2 + param_1[1] + 100;
    if ((param_1[3] == 3) && (iVar1 = param_1[4], iVar1 != 0)) {
      iVar6 = *param_1;
      iVar2 = (***(code ***)(iVar4 + DAT_00189bfc))(iVar1,iVar5 + (iVar6 - iVar1));
      if (iVar2 == 0) {
LAB_00189bda:
        FUN_001898e8(iVar4 + DAT_00189c00);
        goto LAB_00189be2;
      }
      param_1[4] = iVar2;
      *param_1 = iVar2 + (iVar6 - iVar1);
    }
    else {
      pcVar3 = **(code ***)(iVar4 + DAT_00189bfc);
      iVar1 = (*pcVar3)(*param_1,iVar5,*(code ***)(iVar4 + DAT_00189bfc),pcVar3,param_4);
      if (iVar1 == 0) goto LAB_00189bda;
      *param_1 = iVar1;
    }
    param_1[2] = iVar5;
    iVar5 = iVar5 - param_1[1];
  }
  return iVar5;
}


