/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2520  Symbol: FUN_001b2520 */

undefined4 FUN_001b2520(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_30;
  
  iVar7 = param_1[0x69];
  uVar4 = param_1[0x5d];
  *(undefined4 *)(iVar7 + 0x70) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x3b] != 0) && (*(int *)(iVar7 + 0x24) == 0)) {
    FUN_001b2494(iVar7,*(undefined4 *)(iVar7 + 0x28));
  }
  if (0 < param_1[0x4f]) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      iVar1 = *(int *)((int)param_1 + iVar8 + 0x140);
      iVar5 = param_1[iVar1 + 0x49];
      iVar2 = iVar7 + (iVar1 + 4) * 4;
      iVar1 = (int)**(short **)(param_2 + iVar8) >> (uVar4 & 0xff);
      iVar3 = *(int *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = iVar1;
      iVar1 = iVar1 - iVar3;
      if (iVar1 < 0) {
        local_30 = iVar1 + -1;
        iVar1 = -iVar1;
LAB_001b25a2:
        iVar2 = 0;
        do {
          iVar1 = iVar1 >> 1;
          iVar2 = iVar2 + 1;
        } while (iVar1 != 0);
        if (0xb < iVar2) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)(param_1);
        }
      }
      else {
        local_30 = iVar1;
        if (iVar1 != 0) goto LAB_001b25a2;
        local_30 = 0;
        iVar2 = 0;
      }
      if (*(int *)(iVar7 + 0x6c) == 0) {
        iVar1 = *(int *)(iVar7 + (*(int *)(iVar5 + 0x14) + 10) * 4 + 4);
        FUN_001b2318(iVar7,*(undefined4 *)(iVar2 * 4 + iVar1),*(undefined *)(iVar1 + iVar2 + 0x400))
        ;
      }
      else {
        piVar6 = (int *)(*(int *)(iVar7 + (*(int *)(iVar5 + 0x14) + 0x12) * 4 + 4) + iVar2 * 4);
        *piVar6 = *piVar6 + 1;
      }
      if (iVar2 != 0) {
        FUN_001b2318(iVar7,local_30,iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < param_1[0x4f]);
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)(iVar7 + 0x70);
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(iVar7 + 0x74);
  iVar8 = param_1[0x3b];
  if (iVar8 != 0) {
    iVar9 = *(int *)(iVar7 + 0x24);
    if (iVar9 == 0) {
      *(int *)(iVar7 + 0x24) = iVar8;
      *(uint *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1U & 7;
      iVar9 = iVar8;
    }
    *(int *)(iVar7 + 0x24) = iVar9 + -1;
  }
  return 1;
}


