/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001185a8  Symbol: Stage_Settring */

/* Stage_Settring(_Stage_UI*) */

void Stage_Settring(_Stage_UI *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  iVar7 = DAT_001186a8 + 0x1185b4;
  piVar8 = *(int **)(iVar7 + DAT_001186ac);
  piVar9 = *(int **)(iVar7 + DAT_001186b0);
  iVar6 = *piVar8;
  iVar4 = *piVar9;
  iVar3 = *(int *)(iVar7 + DAT_001186b4);
  iVar5 = iVar4 * 0x6c;
  uVar1 = __floatsisf(*(short *)((*(char *)(iVar6 + *(char *)(iVar6 + iVar4 + DAT_001186b8 + 4) *
                                                    0xc + iVar5 + DAT_001186bc) + 0x4d) * 2 + iVar3)
                      + 0x28 + (int)*(short *)((*(char *)(iVar6 + iVar5 + DAT_001186c0) + 0x21) * 2
                                              + *(int *)(iVar7 + DAT_001186c4)));
  *(undefined4 *)param_1 = 0;
  iVar5 = *piVar8;
  *(undefined4 *)(param_1 + 4) = uVar1;
  iVar6 = *piVar9;
  iVar4 = iVar5 + *(char *)(iVar5 + iVar6 + DAT_001186b8 + 4) * 0x50 + iVar6 * 0x2d0;
  if (*(int *)(*(int *)(iVar7 + DAT_001186c8) + *(int *)(iVar4 + DAT_001186cc) * 0x18 + 0x14) == 0xe
     ) {
    uVar2 = __floatsisf(*(undefined4 *)(iVar4 + DAT_001186d0 + 4));
    uVar1 = __addsf3(uVar1,uVar2);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  uVar1 = __floatsisf(*(short *)(iVar3 + (*(char *)(iVar5 + *(char *)(iVar5 + iVar6 + DAT_001186b8 +
                                                                     4) * 0xc + iVar6 * 0x6c +
                                                   DAT_001186d4) + 99) * 2) + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


