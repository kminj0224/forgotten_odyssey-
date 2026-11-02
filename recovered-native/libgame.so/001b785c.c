/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b785c  Symbol: FUN_001b785c */

void FUN_001b785c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int local_3c;
  
  iVar9 = DAT_001b79d8 + 0x1b7872;
  iVar14 = param_1[0x6f];
  if (param_2 == 0) {
    if (*(int *)(param_1[0x76] + 8) == 0) {
      *(int *)(iVar14 + 4) = iVar9 + DAT_001b79dc;
    }
    else {
      *(int *)(iVar14 + 4) = iVar9 + DAT_001b79e4;
      iVar13 = param_1[0x6f];
      iVar9 = param_1[0x51];
      iVar12 = param_1[0x36];
      if (0 < param_1[9]) {
        iVar15 = 0;
        iVar1 = iVar9;
        local_3c = iVar13;
        while( true ) {
          iVar1 = __divsi3(*(int *)(iVar12 + 0x28) * *(int *)(iVar12 + 0xc),iVar1);
          iVar3 = *(int *)(*(int *)(iVar13 + 0x3c) + iVar15 * 4);
          puVar7 = *(undefined4 **)(*(int *)(iVar13 + 0x38) + iVar15 * 4);
          iVar2 = *(int *)(local_3c + 8);
          iVar10 = (iVar9 + 2) * iVar1;
          if (0 < iVar10) {
            iVar4 = 0;
            iVar11 = 0;
            do {
              uVar8 = *(undefined4 *)(iVar2 + iVar4);
              iVar11 = iVar11 + 1;
              *(undefined4 *)(iVar3 + iVar4) = uVar8;
              *(undefined4 *)((int)puVar7 + iVar4) = uVar8;
              iVar4 = iVar4 + 4;
            } while (iVar11 != iVar10);
          }
          if (0 < iVar1 * 2) {
            iVar10 = iVar9 * iVar1 * 4;
            puVar5 = (undefined4 *)(iVar10 + iVar2);
            iVar11 = 0;
            iVar4 = (iVar9 + -2) * iVar1 * 4;
            puVar17 = (undefined4 *)(iVar3 + iVar4);
            puVar16 = (undefined4 *)(iVar4 + iVar2);
            puVar6 = (undefined4 *)(iVar3 + iVar10);
            do {
              uVar8 = *puVar5;
              puVar5 = puVar5 + 1;
              iVar11 = iVar11 + 1;
              *puVar17 = uVar8;
              puVar17 = puVar17 + 1;
              uVar8 = *puVar16;
              puVar16 = puVar16 + 1;
              *puVar6 = uVar8;
              puVar6 = puVar6 + 1;
            } while (iVar11 != iVar1 * 2);
          }
          if (0 < iVar1) {
            puVar16 = puVar7 + -iVar1;
            iVar2 = 0;
            do {
              iVar2 = iVar2 + 1;
              *puVar16 = *puVar7;
              puVar16 = puVar16 + 1;
            } while (iVar2 != iVar1);
          }
          iVar15 = iVar15 + 1;
          local_3c = local_3c + 4;
          if (param_1[9] <= iVar15) break;
          iVar12 = iVar12 + 0x58;
          iVar1 = param_1[0x51];
        }
      }
      *(undefined4 *)(iVar14 + 0x40) = 0;
      *(undefined4 *)(iVar14 + 0x44) = 0;
      *(undefined4 *)(iVar14 + 0x4c) = 0;
    }
    *(undefined4 *)(iVar14 + 0x30) = 0;
    *(undefined4 *)(iVar14 + 0x34) = 0;
  }
  else if (param_2 == 2) {
    *(int *)(iVar14 + 4) = iVar9 + DAT_001b79e0;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 3;
    (**(code **)*param_1)();
  }
  return;
}


