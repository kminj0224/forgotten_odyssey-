/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018040c  Symbol: FUN_0018040c */

int ** FUN_0018040c(int param_1)

{
  char cVar1;
  int **ppiVar2;
  int iVar3;
  int **ppiVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int **local_24;
  int **local_20;
  
  iVar7 = DAT_0018052c + 0x180418;
  iVar8 = *(int *)(param_1 + 0x24);
  pcVar9 = *(char **)(iVar8 + 0x10);
  if (*pcVar9 == '(') {
    if (((*(int *)(param_1 + 0x124) == 0) && (500 < (int)pcVar9 - *(int *)(iVar8 + 0xc))) &&
       (*(int *)(iVar8 + 0x14) - (int)pcVar9 <= DAT_00180530)) {
      FUN_0017cc50(param_1);
    }
    local_24 = (int **)0x0;
    local_20 = (int **)0x0;
    iVar8 = iVar7 + DAT_00180534;
    do {
      FUN_0017a4a4(param_1);
      FUN_0017ff44(param_1);
      iVar3 = FUN_0017efbc(param_1);
      ppiVar4 = local_20;
      if (iVar3 == 0) {
        uVar6 = 0x43;
        goto LAB_00180502;
      }
      for (; ppiVar2 = local_20, ppiVar4 != (int **)0x0; ppiVar4 = (int **)*ppiVar4) {
        iVar5 = FUN_0019c30c(iVar3,ppiVar4[1]);
        if (iVar5 != 0) {
          FUN_0017bb40(param_1,DAT_00180538,iVar8,iVar3,0);
          iVar5 = FUN_0019ccb4(*(undefined4 *)(param_1 + 0x128),iVar3);
          ppiVar4 = local_24;
          if (iVar5 == 0) {
            (***(code ***)(iVar7 + DAT_0018053c))(iVar3);
          }
          goto LAB_001804ea;
        }
      }
      ppiVar4 = (int **)FUN_00194830(iVar3);
      iVar5 = FUN_0019ccb4(*(undefined4 *)(param_1 + 0x128),iVar3);
      if (iVar5 == 0) {
        (***(code ***)(iVar7 + DAT_0018053c))(iVar3);
      }
      if (ppiVar4 == (int **)0x0) {
        return local_20;
      }
      ppiVar2 = ppiVar4;
      if (local_24 != (int **)0x0) {
        *local_24 = (int *)ppiVar4;
        ppiVar2 = local_20;
      }
LAB_001804ea:
      local_20 = ppiVar2;
      local_24 = ppiVar4;
      FUN_0017ff44(param_1);
      cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    } while (cVar1 == '|');
    if (cVar1 == ')') {
      FUN_0017a4a4(param_1);
    }
    else {
      uVar6 = 0x33;
LAB_00180502:
      FUN_0017b7fc(param_1,uVar6,0);
    }
  }
  else {
    FUN_0017b7fc(param_1,0x32,0);
    local_20 = (int **)0x0;
  }
  return local_20;
}


