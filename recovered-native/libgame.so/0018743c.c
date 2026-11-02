/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018743c  Symbol: FUN_0018743c */

void FUN_0018743c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined auStack_c0 [4];
  undefined auStack_bc [160];
  undefined4 local_1c;
  
  iVar7 = DAT_0018776c + 0x187448;
  local_1c = **(undefined4 **)(iVar7 + DAT_00187770);
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 0) {
    FUN_00188230();
  }
  if (0x1000 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) {
    FUN_0017cc50(param_1);
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  FUN_0017af10(param_1,auStack_bc,auStack_c0);
  iVar4 = iVar7 + DAT_00187774;
  iVar7 = iVar7 + DAT_00187778;
  do {
    if (*(int *)(param_1 + 0x54) == 0) goto LAB_001874aa;
    if (*(int *)(param_1 + 0xd4) != 1) goto LAB_001874aa;
    FUN_00188230();
    do {
      FUN_0017c6c4(param_1);
LAB_001874aa:
      piVar5 = *(int **)(param_1 + 0x24);
      pcVar8 = (char *)piVar5[4];
    } while ((*pcVar8 == '\0') && (1 < *(int *)(param_1 + 0x28)));
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      iVar1 = (piVar5[3] + piVar5[6]) - (int)pcVar8;
    }
    else {
      if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(*(int *)(iVar1 + 0x14) + 4) != 0)) {
        iVar2 = piVar5[3];
        iVar3 = **(int **)(iVar1 + 0x10);
        FUN_00190bbc(iVar1,0,iVar4);
        (*(int **)(param_1 + 0x24))[3] =
             **(int **)(**(int **)(param_1 + 0x24) + 0x10) + (iVar2 - iVar3);
        *(char **)(*(int *)(param_1 + 0x24) + 0x10) =
             pcVar8 + (*(int *)(*(int *)(param_1 + 0x24) + 0xc) - iVar2);
        piVar5 = *(int **)(**(int **)(param_1 + 0x24) + 0x10);
        (*(int **)(param_1 + 0x24))[5] = *piVar5 + piVar5[1];
      }
      piVar5 = *(int **)(param_1 + 0x24);
      iVar1 = (piVar5[3] - piVar5[4]) + *(int *)(*(int *)(*piVar5 + 0x10) + 4);
    }
    if (iVar1 < 1) {
      switchD_00187544::caseD_ffffffff();
    }
    uVar6 = *(int *)(param_1 + 0xac) + 1;
  } while (0x11 < uVar6);
                    /* WARNING: Could not emulate address calculation at 0x00187540 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(iVar7 + uVar6 * 4) + iVar7))();
  return;
}


