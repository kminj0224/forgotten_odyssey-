/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8d20  Symbol: FUN_001a8d20 */

void FUN_001a8d20(int param_1,int param_2,int param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined uVar17;
  undefined *puVar18;
  byte *pbVar19;
  int iVar20;
  undefined *puVar21;
  byte *pbVar22;
  byte **ppbVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  int iVar30;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  undefined *local_40;
  int local_38;
  
  iVar26 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar28 = *(int *)(param_1 + 0x1c);
  iVar30 = iVar26 * 2 - iVar28;
  iVar20 = *(int *)(param_1 + 0x110);
  if ((0 < iVar30) && (iVar20 + 1 < 0 == SCARRY4(iVar20,1))) {
    piVar29 = (int *)(param_3 + -4);
    iVar27 = 0;
    do {
      puVar21 = (undefined *)(*piVar29 + iVar28);
      uVar17 = puVar21[-1];
      puVar18 = puVar21 + iVar30;
      do {
        *puVar21 = uVar17;
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar18);
      iVar27 = iVar27 + 1;
      piVar29 = piVar29 + 1;
    } while (iVar27 != iVar20 + 2);
    iVar20 = *(int *)(param_1 + 0x110);
  }
  iVar30 = *(int *)(param_1 + 0xe4) * -0x50 + 0x4000;
  iVar28 = *(int *)(param_1 + 0xe4) * 0x10;
  if (0 < iVar20) {
    ppbVar23 = (byte **)(param_3 + -4);
    iVar26 = iVar26 + -2;
    iVar20 = iVar26 * 2;
    local_38 = 0;
    do {
      local_40 = (undefined *)(*param_4 + 1);
      pbVar19 = ppbVar23[1];
      pbVar22 = ppbVar23[2];
      pbVar24 = *ppbVar23;
      pbVar25 = ppbVar23[3];
      local_44 = pbVar19 + 2;
      local_48 = pbVar22 + 2;
      local_4c = pbVar24 + 2;
      local_50 = pbVar25 + 2;
      *(char *)*param_4 =
           (char)(((uint)*pbVar22 + (uint)*pbVar19 + (uint)pbVar19[1] + (uint)pbVar22[1]) * iVar30 +
                  0x8000 + ((uint)*pbVar24 * 3 + (uint)*pbVar25 * 3 +
                            ((uint)*pbVar22 + (uint)*pbVar19) * 2 + (uint)pbVar24[1] * 2 +
                            (uint)pbVar25[1] * 2 + (uint)pbVar19[2] * 2 + (uint)pbVar22[2] * 2 +
                            (uint)pbVar24[2] + (uint)pbVar25[2]) * iVar28 >> 0x10);
      iVar27 = iVar26;
      puVar18 = local_40;
      if (iVar26 != 0) {
        do {
          pbVar1 = pbVar24 + 3;
          pbVar2 = pbVar24 + 2;
          iVar27 = iVar27 + -1;
          pbVar3 = pbVar25 + 2;
          pbVar4 = pbVar25 + 3;
          pbVar5 = pbVar19 + 1;
          pbVar6 = pbVar19 + 4;
          pbVar7 = pbVar22 + 1;
          pbVar8 = pbVar22 + 4;
          pbVar9 = pbVar24 + 1;
          pbVar10 = pbVar24 + 4;
          pbVar24 = pbVar24 + 2;
          pbVar11 = pbVar25 + 1;
          pbVar12 = pbVar19 + 2;
          pbVar13 = pbVar19 + 3;
          pbVar19 = pbVar19 + 2;
          pbVar14 = pbVar22 + 2;
          pbVar15 = pbVar22 + 3;
          pbVar22 = pbVar22 + 2;
          pbVar16 = pbVar25 + 4;
          pbVar25 = pbVar25 + 2;
          *puVar18 = (char)(((uint)*pbVar13 + (uint)*pbVar12 + (uint)*pbVar14 + (uint)*pbVar15) *
                            iVar30 + 0x8000 +
                            (((uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar3 + (uint)*pbVar4 +
                              (uint)*pbVar5 + (uint)*pbVar6 + (uint)*pbVar7 + (uint)*pbVar8) * 2 +
                             (uint)*pbVar9 + (uint)*pbVar10 + (uint)*pbVar11 + (uint)*pbVar16) *
                            iVar28 >> 0x10);
          puVar18 = puVar18 + 1;
        } while (iVar27 != 0);
        local_44 = local_44 + iVar20;
        local_48 = local_48 + iVar20;
        local_4c = local_4c + iVar20;
        local_50 = local_50 + iVar20;
        local_40 = local_40 + iVar26;
      }
      *local_40 = (char)(((uint)*local_48 + (uint)*local_44 + (uint)local_44[1] + (uint)local_48[1])
                         * iVar30 + 0x8000 +
                         ((uint)local_4c[1] * 3 + (uint)local_50[1] * 3 +
                          ((uint)local_44[1] + (uint)local_48[1] + (uint)*local_4c) * 2 +
                          (uint)*local_50 * 2 + (uint)local_44[-1] * 2 + (uint)local_48[-1] * 2 +
                          (uint)local_4c[-1] + (uint)local_50[-1]) * iVar28 >> 0x10);
      local_38 = local_38 + 2;
      param_4 = param_4 + 1;
      ppbVar23 = ppbVar23 + 2;
    } while (local_38 < *(int *)(param_1 + 0x110));
  }
  return;
}


