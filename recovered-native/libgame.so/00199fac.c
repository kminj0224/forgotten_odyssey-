/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00199fac  Symbol: FUN_00199fac */

int FUN_00199fac(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_0019a0d0 + 0x199fb8;
  if ((param_1 == (int *)0x0) || (piVar3 = (int *)param_1[9], piVar3 == (int *)0x0)) {
    FUN_00195ba4(param_1,1,iVar6 + DAT_0019a0d4,0,0);
    iVar6 = 1;
  }
  else {
    if ((((param_3 < 1) || (param_2 == 0)) || (iVar1 = *piVar3, iVar1 == 0)) ||
       (param_1[0x2b] == -1)) {
      if ((((param_1[0x2b] != -1) && (iVar1 = *piVar3, iVar1 != 0)) &&
          ((*(int *)(iVar1 + 0xc) != 0 &&
           ((*(int *)(iVar1 + 0x10) != 0 && (*(int *)(iVar1 + 0x14) != 0)))))) &&
         (iVar1 = FUN_001a3b7c(), iVar1 < 0)) {
        FUN_00195ba4(param_1,0x51,iVar6 + DAT_0019a0d8,0,0);
        return 0x51;
      }
    }
    else {
      iVar7 = piVar3[3];
      iVar2 = **(int **)(iVar1 + 0x10);
      iVar4 = piVar3[4];
      iVar6 = FUN_00190bbc(iVar1,param_3,param_2);
      if (iVar6 < 0) {
        param_1[0x15] = -1;
        param_1[0x35] = 1;
        return -1;
      }
      ((int *)param_1[9])[3] = **(int **)(*(int *)param_1[9] + 0x10) + (iVar7 - iVar2);
      *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0xc) + (iVar4 - iVar7);
      piVar3 = *(int **)(*(int *)param_1[9] + 0x10);
      ((int *)param_1[9])[5] = *piVar3 + piVar3[1];
    }
    FUN_00199568(param_1,param_4);
    if (param_4 != 0) {
      iVar6 = param_1[0x2b];
      if (((iVar6 != 0xe) && (iVar6 != -1)) && (iVar6 != 1)) {
        param_1[0x15] = 5;
        param_1[3] = 0;
      }
      if (((param_1[0x2b] != -1) && (*param_1 != 0)) &&
         (pcVar5 = *(code **)(*param_1 + 0x34), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1[1]);
      }
      param_1[0x2b] = -1;
    }
    iVar6 = param_1[0x15];
  }
  return iVar6;
}


