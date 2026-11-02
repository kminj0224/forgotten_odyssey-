/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00180540  Symbol: FUN_00180540 */

int ** FUN_00180540(int param_1)

{
  char cVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  char *pcVar7;
  int **ppiVar8;
  int iVar9;
  int **local_20;
  
  iVar6 = *(int *)(param_1 + 0x24);
  pcVar7 = *(char **)(iVar6 + 0x10);
  iVar9 = DAT_00180654 + 0x18054e;
  if (*pcVar7 == '(') {
    if (((*(int *)(param_1 + 0x124) == 0) && (500 < (int)pcVar7 - *(int *)(iVar6 + 0xc))) &&
       (*(int *)(iVar6 + 0x14) - (int)pcVar7 <= DAT_00180658)) {
      FUN_0017cc50(param_1);
    }
    local_20 = (int **)0x0;
    iVar6 = iVar9 + DAT_0018065c;
    ppiVar8 = (int **)0x0;
    do {
      FUN_0017a4a4(param_1);
      FUN_0017ff44(param_1);
      iVar3 = FUN_0017f6b8(param_1);
      ppiVar5 = local_20;
      if (iVar3 == 0) {
        FUN_0017bae0(param_1,0x44,iVar9 + DAT_00180660);
        return local_20;
      }
      for (; ppiVar2 = local_20, ppiVar5 != (int **)0x0; ppiVar5 = (int **)*ppiVar5) {
        iVar4 = FUN_0019c30c(iVar3,ppiVar5[1]);
        if (iVar4 != 0) {
          FUN_0017bb40(param_1,DAT_00180664,iVar6,iVar3,0);
          iVar4 = FUN_0019ccb4(*(undefined4 *)(param_1 + 0x128),iVar3);
          ppiVar5 = ppiVar8;
          if (iVar4 == 0) {
            (***(code ***)(iVar9 + DAT_00180668))(iVar3);
          }
          goto LAB_0018060a;
        }
      }
      ppiVar5 = (int **)FUN_00194830(iVar3);
      if (ppiVar5 == (int **)0x0) {
        return local_20;
      }
      ppiVar2 = ppiVar5;
      if (ppiVar8 != (int **)0x0) {
        *ppiVar8 = (int *)ppiVar5;
        ppiVar2 = local_20;
      }
LAB_0018060a:
      local_20 = ppiVar2;
      FUN_0017ff44(param_1);
      cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
      ppiVar8 = ppiVar5;
    } while (cVar1 == '|');
    if (cVar1 == ')') {
      FUN_0017a4a4(param_1);
    }
    else {
      FUN_0017b7fc(param_1,0x31,0);
      if ((ppiVar5 != local_20) && (ppiVar5 != (int **)0x0)) {
        FUN_00193e3c(ppiVar5);
      }
    }
  }
  else {
    FUN_0017b7fc(param_1,0x30,0);
    local_20 = (int **)0x0;
  }
  return local_20;
}


