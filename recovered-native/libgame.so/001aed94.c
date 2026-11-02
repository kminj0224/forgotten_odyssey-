/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aed94  Symbol: FUN_001aed94 */

void FUN_001aed94(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int local_64;
  int local_54;
  int *local_50;
  int *local_40;
  int local_38;
  int local_34;
  
  iVar8 = param_1[0x78];
  param_1[0x22] = *(int *)(iVar8 + 0x10);
  iVar14 = *(int *)(iVar8 + 0x14);
  local_40 = (int *)(**(code **)param_1[1])(param_1,1,iVar14 << 5);
  local_40[3] = 0x3f;
  *local_40 = 0;
  local_40[1] = 0x1f;
  local_40[2] = 0;
  local_40[4] = 0;
  local_40[5] = 0x1f;
  FUN_001ae0d4(param_1,local_40);
  if (iVar14 < 2) {
    local_38 = 1;
  }
  else {
    local_38 = 1;
    piVar2 = local_40;
    do {
      piVar11 = piVar2 + 8;
      if (iVar14 + local_38 * -2 < 0 == SBORROW4(iVar14,local_38 * 2)) {
        iVar5 = 0;
        iVar12 = 0;
        piVar18 = (int *)0x0;
        piVar9 = local_40;
        while( true ) {
          if ((iVar12 < piVar9[7]) && (0 < piVar9[6])) {
            iVar12 = piVar9[7];
            piVar18 = piVar9;
          }
          if (local_38 <= iVar5 + 1) break;
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 8;
        }
      }
      else {
        iVar5 = 0;
        iVar12 = 0;
        piVar18 = (int *)0x0;
        piVar9 = local_40;
        while( true ) {
          iVar13 = piVar9[6];
          piVar3 = piVar9;
          if (piVar9[6] <= iVar12) {
            iVar13 = iVar12;
            piVar3 = piVar18;
          }
          piVar18 = piVar3;
          iVar12 = iVar13;
          if (local_38 <= iVar5 + 1) break;
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 8;
        }
      }
      if (piVar18 == (int *)0x0) break;
      piVar2[9] = piVar18[1];
      iVar15 = piVar18[1];
      piVar2[0xb] = piVar18[3];
      iVar13 = piVar18[3];
      piVar2[0xd] = piVar18[5];
      *piVar11 = *piVar18;
      piVar2[10] = piVar18[2];
      piVar2[0xc] = piVar18[4];
      iVar16 = (iVar15 - *piVar18) * 0x10;
      iVar12 = iVar13 - piVar18[2];
      iVar5 = iVar12 * 0xc;
      iVar12 = iVar16 + iVar12 * -0xc;
      bVar1 = iVar12 < 0 != SBORROW4(iVar16,iVar5);
      if (iVar12 != 0 && !bVar1) {
        iVar5 = iVar16;
      }
      if (iVar5 < (piVar18[5] - piVar18[4]) * 8) {
        iVar12 = (piVar18[4] + piVar18[5]) / 2;
        piVar18[5] = iVar12;
        piVar2[0xc] = iVar12 + 1;
      }
      else if (iVar12 == 0 || bVar1) {
        iVar12 = (iVar13 + piVar18[2]) / 2;
        piVar18[3] = iVar12;
        piVar2[10] = iVar12 + 1;
      }
      else {
        iVar12 = (*piVar18 + iVar15) / 2;
        piVar18[1] = iVar12;
        *piVar11 = iVar12 + 1;
      }
      FUN_001ae0d4(param_1);
      local_38 = local_38 + 1;
      FUN_001ae0d4(param_1,piVar11);
      piVar2 = piVar11;
    } while (local_38 < iVar14);
  }
  local_34 = 0;
  do {
    local_54 = *local_40;
    iVar12 = local_40[2];
    iVar14 = local_40[4];
    if (local_40[1] < local_54) {
      iVar13 = 0;
      iVar15 = 0;
      iVar5 = 0;
      local_64 = 0;
    }
    else {
      local_50 = (int *)(*(int *)(param_1[0x78] + 0x18) + local_54 * 4);
      iVar13 = 0;
      iVar15 = 0;
      iVar5 = 0;
      local_64 = 0;
      do {
        if (iVar12 <= local_40[3]) {
          iVar16 = iVar12;
          iVar17 = iVar12 * 0x20 + iVar14;
          do {
            if (iVar14 <= local_40[5]) {
              puVar6 = (ushort *)(*local_50 + iVar17 * 2);
              iVar7 = iVar14;
              do {
                uVar10 = (uint)*puVar6;
                puVar6 = puVar6 + 1;
                if (uVar10 != 0) {
                  local_64 = local_64 + uVar10;
                  iVar5 = iVar5 + uVar10 * (local_54 * 8 + 4);
                  iVar15 = iVar15 + uVar10 * (iVar16 * 4 + 2);
                  iVar13 = iVar13 + uVar10 * (iVar7 * 8 + 4);
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 <= local_40[5]);
            }
            iVar16 = iVar16 + 1;
            iVar17 = iVar17 + 0x20;
          } while (iVar16 <= local_40[3]);
        }
        local_54 = local_54 + 1;
        local_50 = local_50 + 1;
      } while (local_54 <= local_40[1]);
    }
    iVar12 = local_64 >> 1;
    iVar14 = *(int *)param_1[0x22];
    uVar4 = __divsi3(iVar12 + iVar5,local_64);
    *(undefined *)(iVar14 + local_34) = uVar4;
    iVar14 = *(int *)(param_1[0x22] + 4);
    uVar4 = __divsi3(iVar12 + iVar15,local_64);
    *(undefined *)(iVar14 + local_34) = uVar4;
    iVar14 = *(int *)(param_1[0x22] + 8);
    uVar4 = __divsi3(iVar12 + iVar13,local_64);
    *(undefined *)(iVar14 + local_34) = uVar4;
    local_34 = local_34 + 1;
    local_40 = local_40 + 8;
  } while (local_34 < local_38);
  param_1[0x21] = local_38;
  *(undefined4 *)(*param_1 + 0x14) = 0x62;
  *(int *)(*param_1 + 0x18) = local_38;
  (**(code **)(*param_1 + 4))(param_1,1);
  *(undefined4 *)(iVar8 + 0x1c) = 1;
  return;
}


