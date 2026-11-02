/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b378c  Symbol: FUN_001b378c */

undefined4 FUN_001b378c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint local_30;
  
  iVar6 = param_1[0x69];
  *(undefined4 *)(iVar6 + 0x70) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar6 + 0x74) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x3b] != 0) && (*(int *)(iVar6 + 0x24) == 0)) {
    FUN_001b2494(iVar6,*(undefined4 *)(iVar6 + 0x28));
  }
  iVar1 = param_1[0x5b];
  uVar2 = param_1[0x5d];
  iVar7 = *param_2;
  iVar11 = param_1[0x5a];
  if (iVar11 <= iVar1) {
    piVar10 = (int *)(param_1[0x5f] + iVar11 * 4);
    uVar12 = 0;
    do {
      while (iVar3 = (int)*(short *)(*piVar10 * 2 + iVar7), iVar3 == 0) {
LAB_001b3914:
        iVar11 = iVar11 + 1;
        uVar12 = uVar12 + 1;
        piVar10 = piVar10 + 1;
        if (iVar1 < iVar11) goto LAB_001b38ce;
      }
      if (iVar3 < 0) {
        uVar4 = -iVar3 >> (uVar2 & 0xff);
        local_30 = ~uVar4;
      }
      else {
        uVar4 = iVar3 >> (uVar2 & 0xff);
        local_30 = uVar4;
      }
      if (uVar4 == 0) goto LAB_001b3914;
      if (*(int *)(iVar6 + 0x80) != 0) {
        FUN_001b23d4(iVar6);
      }
      uVar8 = uVar12;
      if (0xf < (int)uVar12) {
        do {
          while (*(int *)(iVar6 + 0x6c) != 0) {
            piVar13 = (int *)(*(int *)(iVar6 + (*(int *)(iVar6 + 0x7c) + 0x16) * 4 + 4) + 0x3c0);
            uVar8 = uVar8 - 0x10;
            *piVar13 = *piVar13 + 1;
            if ((int)uVar8 < 0x10) goto LAB_001b3878;
          }
          iVar3 = *(int *)(iVar6 + (*(int *)(iVar6 + 0x7c) + 0xe) * 4 + 4);
          uVar8 = uVar8 - 0x10;
          FUN_001b2318(iVar6,*(undefined4 *)(iVar3 + 0x3c0),*(undefined *)(iVar3 + 0x4f0));
        } while (0xf < (int)uVar8);
LAB_001b3878:
        uVar12 = uVar12 & 0xf;
      }
      iVar3 = (int)uVar4 >> 1;
      iVar9 = 1;
      if (iVar3 != 0) {
        do {
          iVar3 = iVar3 >> 1;
          iVar9 = iVar9 + 1;
        } while (iVar3 != 0);
        if (10 < iVar9) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)(param_1);
        }
      }
      iVar3 = iVar9 + uVar12 * 0x10;
      if (*(int *)(iVar6 + 0x6c) == 0) {
        iVar5 = *(int *)(iVar6 + (*(int *)(iVar6 + 0x7c) + 0xe) * 4 + 4);
        FUN_001b2318(iVar6,*(undefined4 *)(iVar3 * 4 + iVar5),*(undefined *)(iVar5 + iVar3 + 0x400))
        ;
      }
      else {
        piVar13 = (int *)(*(int *)(iVar6 + (*(int *)(iVar6 + 0x7c) + 0x16) * 4 + 4) + iVar3 * 4);
        *piVar13 = *piVar13 + 1;
      }
      FUN_001b2318(iVar6,local_30,iVar9);
      iVar11 = iVar11 + 1;
      uVar12 = 0;
      piVar10 = piVar10 + 1;
    } while (iVar11 <= iVar1);
LAB_001b38ce:
    if ((uVar12 != 0) &&
       (iVar1 = *(int *)(iVar6 + 0x80) + 1, *(int *)(iVar6 + 0x80) = iVar1, iVar1 == DAT_001b398c))
    {
      FUN_001b23d4(iVar6);
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)(iVar6 + 0x70);
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(iVar6 + 0x74);
  iVar1 = param_1[0x3b];
  if (iVar1 != 0) {
    iVar7 = *(int *)(iVar6 + 0x24);
    if (iVar7 == 0) {
      *(int *)(iVar6 + 0x24) = iVar1;
      *(uint *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 1U & 7;
      iVar7 = iVar1;
    }
    *(int *)(iVar6 + 0x24) = iVar7 + -1;
  }
  return 1;
}


