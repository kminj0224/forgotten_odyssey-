/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bdbd0  Symbol: jpeg_idct_float */

void jpeg_idct_float(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined *puVar21;
  short sVar22;
  short sVar23;
  short *local_16c;
  short *local_168;
  short *local_164;
  int local_160;
  short *local_15c;
  short *local_158;
  short *local_150;
  int *local_13c;
  short local_138;
  short local_134;
  undefined4 local_128 [64];
  undefined4 uStack_28;
  
  iVar16 = *(int *)(param_1 + 0x14c);
  puVar18 = local_128;
  puVar19 = *(undefined4 **)(param_2 + 0x54);
  local_164 = param_3 + 0x20;
  local_158 = param_3 + 0x30;
  local_168 = param_3 + 0x18;
  local_15c = param_3 + 0x28;
  local_150 = param_3 + 0x38;
  local_160 = 8;
  puVar17 = puVar18;
  local_16c = param_3;
  do {
    sVar1 = local_16c[8];
    if (sVar1 != 0) {
      sVar4 = local_16c[0x10];
      sVar22 = *local_164;
      sVar23 = *local_158;
      sVar2 = *local_168;
      goto LAB_001bde68;
    }
    sVar4 = local_16c[0x10];
    if (sVar4 != 0) {
      sVar22 = *local_164;
      sVar23 = *local_158;
      sVar2 = *local_168;
      local_138 = *local_15c;
      local_134 = *local_150;
      goto LAB_001bdc3a;
    }
    sVar2 = *local_168;
    if (sVar2 == 0) {
      sVar22 = *local_164;
      if (sVar22 != 0) {
        sVar23 = *local_158;
        goto LAB_001bde68;
      }
      local_138 = *local_15c;
      if (local_138 != 0) {
        sVar23 = *local_158;
        local_134 = *local_150;
        goto LAB_001bdc3a;
      }
      sVar23 = *local_158;
      if (sVar23 != 0) {
        local_134 = *local_150;
        goto LAB_001bdc3a;
      }
      local_134 = *local_150;
      if (local_134 != 0) goto LAB_001bdc3a;
      uVar5 = __floatsisf((int)*local_16c);
      uVar5 = __mulsf3(uVar5,*puVar19);
      *puVar17 = uVar5;
      puVar17[8] = uVar5;
      puVar17[0x10] = uVar5;
      puVar17[0x18] = uVar5;
      puVar17[0x20] = uVar5;
      puVar17[0x28] = uVar5;
      puVar17[0x30] = uVar5;
      puVar17[0x38] = uVar5;
    }
    else {
      sVar23 = *local_158;
      sVar22 = *local_164;
LAB_001bde68:
      local_138 = *local_15c;
      local_134 = *local_150;
LAB_001bdc3a:
      uVar5 = __floatsisf((int)sVar4);
      uVar5 = __mulsf3(uVar5,puVar19[0x10]);
      uVar6 = __floatsisf((int)sVar22);
      uVar6 = __mulsf3(uVar6,puVar19[0x20]);
      uVar7 = __floatsisf((int)sVar23);
      uVar7 = __mulsf3(uVar7,puVar19[0x30]);
      uVar8 = __floatsisf((int)*local_16c);
      uVar8 = __mulsf3(uVar8,*puVar19);
      uVar9 = __addsf3(uVar8,uVar6);
      uVar6 = __subsf3(uVar8,uVar6);
      uVar8 = __addsf3(uVar5,uVar7);
      uVar5 = __subsf3(uVar5,uVar7);
      uVar5 = __mulsf3(uVar5,DAT_001be04c);
      uVar5 = __subsf3(uVar5,uVar8);
      uVar7 = __addsf3(uVar9,uVar8);
      uVar8 = __subsf3(uVar9,uVar8);
      uVar9 = __addsf3(uVar6,uVar5);
      uVar5 = __subsf3(uVar6,uVar5);
      uVar6 = __floatsisf((int)sVar1);
      uVar6 = __mulsf3(uVar6,puVar19[8]);
      uVar10 = __floatsisf((int)sVar2);
      uVar10 = __mulsf3(uVar10,puVar19[0x18]);
      uVar11 = __floatsisf((int)local_138);
      uVar11 = __mulsf3(uVar11,puVar19[0x28]);
      uVar12 = __floatsisf((int)local_134);
      uVar12 = __mulsf3(uVar12,puVar19[0x38]);
      uVar13 = __addsf3(uVar11,uVar10);
      uVar10 = __subsf3(uVar11,uVar10);
      uVar11 = __addsf3(uVar6,uVar12);
      uVar6 = __subsf3(uVar6,uVar12);
      uVar12 = __addsf3(uVar11,uVar13);
      uVar14 = __addsf3(uVar10,uVar6);
      uVar14 = __mulsf3(uVar14,DAT_001be050);
      uVar10 = __mulsf3(uVar10,DAT_001be054);
      uVar10 = __addsf3(uVar10,uVar14);
      uVar10 = __subsf3(uVar10,uVar12);
      uVar11 = __subsf3(uVar11,uVar13);
      uVar11 = __mulsf3(uVar11,DAT_001be04c);
      uVar11 = __subsf3(uVar11,uVar10);
      uVar6 = __mulsf3(uVar6,DAT_001be058);
      uVar6 = __addsf3(uVar6,uVar14);
      uVar6 = __subsf3(uVar6,uVar11);
      uVar13 = __addsf3(uVar7,uVar12);
      *puVar17 = uVar13;
      uVar7 = __subsf3(uVar7,uVar12);
      puVar17[0x38] = uVar7;
      uVar7 = __addsf3(uVar9,uVar10);
      puVar17[8] = uVar7;
      uVar7 = __subsf3(uVar9,uVar10);
      puVar17[0x30] = uVar7;
      uVar7 = __addsf3(uVar5,uVar11);
      puVar17[0x10] = uVar7;
      uVar5 = __subsf3(uVar5,uVar11);
      puVar17[0x28] = uVar5;
      uVar5 = __addsf3(uVar8,uVar6);
      puVar17[0x18] = uVar5;
      uVar5 = __subsf3(uVar8,uVar6);
      puVar17[0x20] = uVar5;
    }
    uVar3 = DAT_001be05c;
    puVar19 = puVar19 + 1;
    local_160 = local_160 + -1;
    local_16c = local_16c + 1;
    local_164 = local_164 + 1;
    local_158 = local_158 + 1;
    local_168 = local_168 + 1;
    local_15c = local_15c + 1;
    local_150 = local_150 + 1;
    puVar17 = puVar17 + 1;
    if (local_160 == 0) {
      local_13c = param_4;
      do {
        iVar20 = *local_13c;
        local_13c = local_13c + 1;
        puVar21 = (undefined *)(iVar20 + param_5);
        uVar5 = __addsf3(*puVar18,DAT_001be060);
        uVar7 = puVar18[4];
        uVar6 = __addsf3(uVar7,uVar5);
        uVar5 = __subsf3(uVar5,uVar7);
        uVar8 = puVar18[2];
        uVar7 = __addsf3(uVar8,puVar18[6]);
        uVar8 = __subsf3(uVar8,puVar18[6]);
        uVar8 = __mulsf3(uVar8,DAT_001be04c);
        uVar8 = __subsf3(uVar8,uVar7);
        uVar9 = __addsf3(uVar6,uVar7);
        uVar6 = __subsf3(uVar6,uVar7);
        uVar7 = __addsf3(uVar5,uVar8);
        uVar5 = __subsf3(uVar5,uVar8);
        uVar10 = puVar18[3];
        uVar11 = puVar18[5];
        uVar8 = __addsf3(uVar11,uVar10);
        uVar10 = __subsf3(uVar11,uVar10);
        uVar12 = puVar18[1];
        uVar11 = __addsf3(uVar12,puVar18[7]);
        uVar12 = __subsf3(uVar12,puVar18[7]);
        uVar13 = __addsf3(uVar11,uVar8);
        uVar14 = __addsf3(uVar10,uVar12);
        uVar14 = __mulsf3(uVar14,DAT_001be050);
        uVar10 = __mulsf3(uVar10,DAT_001be054);
        uVar10 = __addsf3(uVar10,uVar14);
        uVar10 = __subsf3(uVar10,uVar13);
        uVar8 = __subsf3(uVar11,uVar8);
        uVar8 = __mulsf3(uVar8,DAT_001be04c);
        uVar8 = __subsf3(uVar8,uVar10);
        uVar11 = __mulsf3(uVar12,DAT_001be058);
        uVar11 = __addsf3(uVar11,uVar14);
        uVar11 = __subsf3(uVar11,uVar8);
        __addsf3(uVar9,uVar13);
        uVar15 = __fixsfsi();
        puVar18 = puVar18 + 8;
        *puVar21 = *(undefined *)(iVar16 + (uVar15 & uVar3));
        __subsf3(uVar9,uVar13);
        uVar15 = __fixsfsi();
        puVar21[7] = *(undefined *)(iVar16 + (uVar15 & uVar3));
        __addsf3(uVar7,uVar10);
        uVar15 = __fixsfsi();
        puVar21[1] = *(undefined *)(iVar16 + (uVar15 & uVar3));
        __subsf3(uVar7,uVar10);
        uVar15 = __fixsfsi();
        puVar21[6] = *(undefined *)(iVar16 + (uVar15 & uVar3));
        __addsf3(uVar5,uVar8);
        uVar15 = __fixsfsi();
        puVar21[2] = *(undefined *)(iVar16 + (uVar15 & uVar3));
        __subsf3(uVar5,uVar8);
        uVar15 = __fixsfsi();
        puVar21[5] = *(undefined *)(iVar16 + (uVar15 & uVar3));
        __addsf3(uVar6,uVar11);
        uVar15 = __fixsfsi();
        puVar21[3] = *(undefined *)(iVar16 + (uVar15 & uVar3));
        __subsf3(uVar6,uVar11);
        uVar15 = __fixsfsi();
        puVar21[4] = *(undefined *)(iVar16 + (uVar15 & uVar3));
      } while (puVar18 != &uStack_28);
      return;
    }
  } while( true );
}


