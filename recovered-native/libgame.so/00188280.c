/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188280  Symbol: FUN_00188280 */

int FUN_00188280(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  
  iVar8 = DAT_00188454 + 0x18828c;
  iVar2 = 1;
  if ((param_1 != (int *)0x0) && ((iVar2 = param_1[0x15], iVar2 == 0 || (param_1[0x35] != 1)))) {
    if (param_1[0x2b] == 0) {
      FUN_0017c4fc(param_1);
    }
    if ((((param_3 < 1) || (param_2 == 0)) || (param_4 != 0)) ||
       (*(char *)(param_2 + param_3 + -1) != '\r')) {
      bVar1 = false;
    }
    else {
      param_3 = param_3 + -1;
      bVar1 = true;
    }
    if (((param_3 < 1) || (param_2 == 0)) ||
       ((piVar5 = (int *)param_1[9], piVar5 == (int *)0x0 ||
        ((iVar2 = *piVar5, iVar2 == 0 || (param_1[0x2b] == -1)))))) {
      if (((param_1[0x2b] != -1) &&
          ((((int *)param_1[9] != (int *)0x0 && (iVar2 = *(int *)param_1[9], iVar2 != 0)) &&
           (*(int *)(iVar2 + 0xc) != 0)))) &&
         (((*(int *)(iVar2 + 0x10) != 0 && (*(int *)(iVar2 + 0x14) != 0)) &&
          (iVar2 = FUN_001a3b7c(), iVar2 < 0)))) {
        (***(code ***)(iVar8 + DAT_00188458))
                  (**(undefined4 **)(iVar8 + DAT_0018845c),iVar8 + DAT_00188460);
        return 0x51;
      }
    }
    else {
      iVar3 = piVar5[3];
      iVar4 = **(int **)(iVar2 + 0x10);
      iVar6 = piVar5[4];
      iVar2 = FUN_00190bbc(iVar2,param_3,param_2);
      if (iVar2 < 0) {
        param_1[0x15] = -1;
        param_1[0x35] = 1;
        return -1;
      }
      ((int *)param_1[9])[3] = **(int **)(*(int *)param_1[9] + 0x10) + (iVar3 - iVar4);
      *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0xc) + (iVar6 - iVar3);
      piVar5 = *(int **)(*(int *)param_1[9] + 0x10);
      ((int *)param_1[9])[5] = *piVar5 + piVar5[1];
    }
    FUN_0018743c(param_1,param_4);
    if (((bVar1) && ((int *)param_1[9] != (int *)0x0)) && (iVar2 = *(int *)param_1[9], iVar2 != 0))
    {
      FUN_00190bbc(iVar2,1,iVar8 + DAT_00188464);
    }
    iVar2 = param_1[0x15];
    if ((iVar2 == 0) || (param_1[0x35] != 1)) {
      if (param_4 != 0) {
        piVar5 = (int *)param_1[9];
        iVar2 = 0;
        if (piVar5 != (int *)0x0) {
          if (*piVar5 == 0) {
            iVar2 = (piVar5[3] + piVar5[6]) - piVar5[4];
          }
          else {
            iVar2 = (piVar5[3] - piVar5[4]) + *(int *)(*(int *)(*piVar5 + 0x10) + 4);
          }
        }
        if ((param_1[0x2b] != 0xe) && (param_1[0x2b] != -1)) {
          FUN_0017b7fc(param_1,5,0);
        }
        if ((0 < iVar2) && (param_1[0x2b] == 0xe)) {
          FUN_0017b7fc(param_1,5,0);
        }
        if (((param_1[0x2b] != -1) && (*param_1 != 0)) &&
           (pcVar7 = *(code **)(*param_1 + 0x34), pcVar7 != (code *)0x0)) {
          (*pcVar7)(param_1[1]);
        }
        param_1[0x2b] = -1;
      }
      iVar2 = param_1[0x15];
    }
  }
  return iVar2;
}


