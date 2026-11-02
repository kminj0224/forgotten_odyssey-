/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b3504  Symbol: FUN_001b3504 */

undefined4 FUN_001b3504(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *local_144;
  int aiStack_128 [65];
  
  iVar10 = *(int *)(param_1 + 0x1a4);
  *(undefined4 *)(iVar10 + 0x70) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar10 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xec) != 0) && (*(int *)(iVar10 + 0x24) == 0)) {
    FUN_001b2494(iVar10,*(undefined4 *)(iVar10 + 0x28));
  }
  iVar4 = *(int *)(param_1 + 0x16c);
  uVar12 = *(uint *)(param_1 + 0x174);
  iVar8 = *param_2;
  iVar5 = *(int *)(param_1 + 0x168);
  if (iVar5 <= iVar4) {
    local_144 = (int *)(*(int *)(param_1 + 0x17c) + iVar5 * 4);
    piVar16 = aiStack_128 + iVar5;
    piVar7 = piVar16;
    piVar3 = local_144;
    iVar2 = iVar5;
    iVar14 = 0;
    do {
      while (iVar13 = iVar2, iVar2 = (int)*(short *)(*piVar3 * 2 + iVar8), uVar11 = iVar2 >> 0x1f,
            iVar2 = (int)(iVar2 + uVar11 ^ uVar11) >> (uVar12 & 0xff), *piVar7 = iVar2, iVar2 == 1)
      {
        piVar3 = piVar3 + 1;
        piVar7 = piVar7 + 1;
        iVar2 = iVar13 + 1;
        iVar14 = iVar13;
        if (iVar13 + 1 == iVar4 + 1) goto LAB_001b35aa;
      }
      piVar3 = piVar3 + 1;
      piVar7 = piVar7 + 1;
      iVar2 = iVar13 + 1;
    } while (iVar13 + 1 != iVar4 + 1);
LAB_001b35aa:
    iVar2 = 0;
    iVar13 = *(int *)(iVar10 + 0x88) + *(int *)(iVar10 + 0x84);
    iVar15 = 0;
    do {
      iVar6 = *piVar16;
      if (iVar6 == 0) {
        iVar15 = iVar15 + 1;
      }
      else {
        if ((0xf < iVar15) && (iVar5 <= iVar14)) {
          do {
            FUN_001b23d4(iVar10);
            if (*(int *)(iVar10 + 0x6c) == 0) {
              iVar9 = *(int *)(iVar10 + (*(int *)(iVar10 + 0x7c) + 0xe) * 4 + 4);
              FUN_001b2318(iVar10,*(undefined4 *)(iVar9 + 0x3c0),*(undefined *)(iVar9 + 0x4f0));
            }
            else {
              piVar7 = (int *)(*(int *)(iVar10 + (*(int *)(iVar10 + 0x7c) + 0x16) * 4 + 4) + 0x3c0);
              *piVar7 = *piVar7 + 1;
            }
            iVar15 = iVar15 + -0x10;
            if ((*(int *)(iVar10 + 0x6c) == 0) && (iVar2 != 0)) {
              iVar9 = 0;
              do {
                puVar1 = (undefined *)(iVar13 + iVar9);
                iVar9 = iVar9 + 1;
                FUN_001b2318(iVar10,*puVar1,1);
              } while (iVar2 != iVar9);
            }
            iVar13 = *(int *)(iVar10 + 0x88);
            iVar2 = 0;
          } while (0xf < iVar15);
          iVar2 = 0;
        }
        if (iVar6 < 2) {
          FUN_001b23d4(iVar10);
          iVar15 = iVar15 * 0x10 + 1;
          if (*(int *)(iVar10 + 0x6c) == 0) {
            iVar6 = *(int *)(iVar10 + (*(int *)(iVar10 + 0x7c) + 0xe) * 4 + 4);
            FUN_001b2318(iVar10,*(undefined4 *)(iVar15 * 4 + iVar6),
                         *(undefined *)(iVar6 + iVar15 + 0x400));
          }
          else {
            piVar7 = (int *)(*(int *)(iVar10 + (*(int *)(iVar10 + 0x7c) + 0x16) * 4 + 4) +
                            iVar15 * 4);
            *piVar7 = *piVar7 + 1;
          }
          FUN_001b2318(iVar10,(uint)~(int)*(short *)(*local_144 * 2 + iVar8) >> 0x1f,1);
          if ((*(int *)(iVar10 + 0x6c) == 0) && (iVar2 != 0)) {
            iVar15 = 0;
            do {
              puVar1 = (undefined *)(iVar13 + iVar15);
              iVar15 = iVar15 + 1;
              FUN_001b2318(iVar10,*puVar1,1);
            } while (iVar15 != iVar2);
          }
          iVar2 = 0;
          iVar13 = *(int *)(iVar10 + 0x88);
          iVar15 = iVar2;
        }
        else {
          *(byte *)(iVar13 + iVar2) = (byte)iVar6 & 1;
          iVar2 = iVar2 + 1;
        }
      }
      local_144 = local_144 + 1;
      iVar5 = iVar5 + 1;
      piVar16 = piVar16 + 1;
    } while (iVar5 <= iVar4);
    if ((iVar2 != 0) || (0 < iVar15)) {
      iVar4 = *(int *)(iVar10 + 0x80) + 1;
      *(int *)(iVar10 + 0x80) = iVar4;
      uVar12 = iVar2 + *(int *)(iVar10 + 0x84);
      *(uint *)(iVar10 + 0x84) = uVar12;
      if ((iVar4 == DAT_001b3784) || (DAT_001b3788 < uVar12)) {
        FUN_001b23d4(iVar10);
      }
    }
  }
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(iVar10 + 0x70);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(iVar10 + 0x74);
  iVar4 = *(int *)(param_1 + 0xec);
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar10 + 0x24);
    if (*(int *)(iVar10 + 0x24) == 0) {
      *(int *)(iVar10 + 0x24) = iVar4;
      *(uint *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + 1U & 7;
      iVar5 = iVar4;
    }
    *(int *)(iVar10 + 0x24) = iVar5 + -1;
  }
  return 1;
}


