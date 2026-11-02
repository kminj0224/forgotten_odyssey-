/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00187490  Symbol: caseD_12 */

void switchD_00187544::caseD_12(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_r4;
  char *pcVar6;
  undefined4 param_15;
  int param_16;
  
  do {
    if (*(int *)(unaff_r4 + 0x54) == 0) goto LAB_001874aa;
    if (*(int *)(unaff_r4 + 0xd4) != 1) goto LAB_001874aa;
    FUN_00188230();
    do {
      FUN_0017c6c4(unaff_r4);
LAB_001874aa:
      piVar4 = *(int **)(unaff_r4 + 0x24);
      pcVar6 = (char *)piVar4[4];
    } while ((*pcVar6 == '\0') && (1 < *(int *)(unaff_r4 + 0x28)));
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = (piVar4[3] + piVar4[6]) - (int)pcVar6;
    }
    else {
      if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(*(int *)(iVar1 + 0x14) + 4) != 0)) {
        iVar2 = piVar4[3];
        iVar3 = **(int **)(iVar1 + 0x10);
        FUN_00190bbc(iVar1,0,param_15);
        (*(int **)(unaff_r4 + 0x24))[3] =
             **(int **)(**(int **)(unaff_r4 + 0x24) + 0x10) + (iVar2 - iVar3);
        *(char **)(*(int *)(unaff_r4 + 0x24) + 0x10) =
             pcVar6 + (*(int *)(*(int *)(unaff_r4 + 0x24) + 0xc) - iVar2);
        piVar4 = *(int **)(**(int **)(unaff_r4 + 0x24) + 0x10);
        (*(int **)(unaff_r4 + 0x24))[5] = *piVar4 + piVar4[1];
      }
      piVar4 = *(int **)(unaff_r4 + 0x24);
      iVar1 = (piVar4[3] - piVar4[4]) + *(int *)(*(int *)(*piVar4 + 0x10) + 4);
    }
    if (iVar1 < 1) {
      caseD_ffffffff();
    }
    uVar5 = *(int *)(unaff_r4 + 0xac) + 1;
  } while (0x11 < uVar5);
                    /* WARNING: Could not recover jumptable at 0x00187544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(param_16 + uVar5 * 4) + param_16))();
  return;
}


