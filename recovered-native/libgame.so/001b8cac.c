/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b8cac  Symbol: jpeg_fdct_11x11 */

void jpeg_fdct_11x11(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int local_a4;
  int local_88 [8];
  int local_68 [17];
  
  piVar2 = local_88;
  local_a4 = 0;
  piVar18 = param_1;
  while( true ) {
    do {
      piVar6 = piVar18;
      pbVar14 = (byte *)(*(int *)(local_a4 * 4 + param_2) + param_3);
      iVar13 = (uint)*pbVar14 - (uint)pbVar14[10];
      iVar7 = (uint)pbVar14[10] + (uint)*pbVar14;
      iVar12 = (uint)pbVar14[1] - (uint)pbVar14[9];
      iVar3 = (uint)pbVar14[9] + (uint)pbVar14[1];
      iVar1 = (uint)pbVar14[2] - (uint)pbVar14[8];
      iVar4 = (uint)pbVar14[8] + (uint)pbVar14[2];
      iVar8 = (uint)pbVar14[3] - (uint)pbVar14[7];
      iVar19 = (uint)pbVar14[7] + (uint)pbVar14[3];
      iVar17 = (uint)pbVar14[4] + (uint)pbVar14[6];
      uVar15 = (uint)pbVar14[5];
      iVar5 = (uint)pbVar14[4] - (uint)pbVar14[6];
      *piVar6 = (DAT_001b8ed0 + iVar7 + iVar3 + iVar4 + iVar19 + iVar17 + uVar15) * 2;
      iVar7 = iVar7 + uVar15 * -2;
      iVar3 = iVar3 + uVar15 * -2;
      iVar4 = iVar4 + uVar15 * -2;
      iVar19 = iVar19 + uVar15 * -2;
      iVar17 = iVar17 + uVar15 * -2;
      iVar9 = DAT_001b8edc * (iVar3 - iVar19);
      iVar16 = DAT_001b8ee0 * (iVar7 - iVar3);
      iVar10 = DAT_001b8ed4 * (iVar17 + iVar4) + DAT_001b8ed8 * (iVar7 + iVar19) + 0x800;
      piVar6[2] = DAT_001b8ee8 * iVar19 + DAT_001b8ee4 * iVar17 + iVar10 + iVar9 >> 0xc;
      piVar6[4] = iVar3 * 0x1ff + iVar9 + 0x800 + iVar16 + DAT_001b8eec * iVar4 +
                  DAT_001b8ef0 * iVar17 >> 0xc;
      iVar3 = DAT_001b8efc;
      piVar6[6] = iVar10 + iVar16 + iVar4 * DAT_001b8ef4 + iVar7 * DAT_001b8ef8 >> 0xc;
      iVar7 = (iVar1 + iVar13) * DAT_001b8f00;
      iVar9 = (iVar8 + iVar13) * DAT_001b8f04;
      iVar10 = (iVar1 + iVar12) * DAT_001b8f08;
      iVar17 = (iVar8 + iVar12) * DAT_001b8f0c;
      iVar19 = (iVar8 + iVar1) * 0xcc0;
      iVar4 = (iVar12 + iVar13) * iVar3 + 0x800;
      piVar6[1] = DAT_001b8f10 * iVar13 + iVar4 + iVar7 + iVar9 + iVar5 * 0xcc0 >> 0xc;
      iVar3 = DAT_001b8f1c;
      piVar6[3] = iVar4 + iVar10 + iVar17 + iVar5 * DAT_001b8f14 + iVar12 * DAT_001b8f18 >> 0xc;
      iVar4 = DAT_001b8f24;
      piVar6[5] = iVar7 + 0x800 + iVar10 + iVar19 + iVar5 * iVar3 + DAT_001b8f20 * iVar1 >> 0xc;
      piVar6[7] = iVar17 + iVar9 + 0x800 + iVar19 + iVar4 * iVar5 + DAT_001b8f28 * iVar8 >> 0xc;
      local_a4 = local_a4 + 1;
      piVar18 = piVar2;
    } while (local_a4 == 8);
    if (local_a4 == 0xb) break;
    piVar18 = piVar6 + 8;
  }
  piVar6 = param_1 + 8;
  piVar11 = param_1 + 0x20;
  piVar18 = param_1 + 0x38;
  do {
    iVar19 = *param_1 - piVar2[0x10];
    iVar3 = piVar2[0x10] + *param_1;
    iVar4 = *piVar6 - piVar2[8];
    iVar7 = piVar2[8] + *piVar6;
    iVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar8 = param_1[0x10] - iVar5;
    iVar5 = iVar5 + param_1[0x10];
    iVar17 = piVar6[0x10] - *piVar18;
    iVar10 = *piVar18 + piVar6[0x10];
    iVar12 = *piVar11 - piVar11[0x10];
    iVar1 = piVar11[0x10] + *piVar11;
    iVar13 = piVar11[8];
    iVar9 = iVar5 + iVar13 * -2;
    *param_1 = DAT_001b918c * (iVar13 + iVar3 + iVar7 + iVar5 + iVar10 + iVar1) + 0x4000 >> 0xf;
    iVar10 = iVar10 + iVar13 * -2;
    iVar3 = iVar3 + iVar13 * -2;
    iVar7 = iVar7 + iVar13 * -2;
    iVar1 = iVar1 + iVar13 * -2;
    iVar13 = DAT_001b9194 * (iVar7 - iVar10);
    iVar16 = DAT_001b9190 * (iVar3 + iVar10) + (iVar9 + iVar1) * 0x6d0 + 0x4000;
    param_1[0x10] = DAT_001b919c * iVar10 + iVar1 * DAT_001b9198 + iVar16 + iVar13 >> 0xf;
    param_1 = param_1 + 1;
    iVar5 = DAT_001b91a0 * (iVar3 - iVar7);
    *piVar11 = iVar7 * 0x21c + iVar13 + 0x4000 + iVar5 + iVar9 * DAT_001b91a4 + iVar1 * DAT_001b91a8
               >> 0xf;
    piVar11[0x10] = iVar16 + iVar5 + DAT_001b91ac * iVar9 + DAT_001b91b0 * iVar3 >> 0xf;
    iVar5 = (iVar8 + iVar19) * DAT_001b91b8;
    iVar7 = (iVar17 + iVar19) * DAT_001b91bc;
    iVar9 = (iVar8 + iVar4) * DAT_001b91c0;
    iVar3 = (iVar17 + iVar4) * DAT_001b91c4;
    iVar1 = (iVar17 + iVar8) * DAT_001b91c8;
    iVar10 = (iVar4 + iVar19) * DAT_001b91b4 + 0x4000;
    *piVar6 = iVar19 * DAT_001b91cc + iVar12 * DAT_001b91c8 + iVar10 + iVar5 + iVar7 >> 0xf;
    piVar6[0x10] = iVar4 * DAT_001b91d4 + iVar10 + iVar9 + iVar3 + iVar12 * DAT_001b91d0 >> 0xf;
    piVar6 = piVar6 + 1;
    piVar11[8] = iVar12 * DAT_001b91d8 + iVar9 + iVar5 + 0x4000 + iVar1 + iVar8 * DAT_001b91dc >>
                 0xf;
    piVar11 = piVar11 + 1;
    *piVar18 = iVar7 + 0x4000 + iVar3 + iVar1 + iVar12 * DAT_001b91e0 + iVar17 * DAT_001b91e4 >> 0xf
    ;
    piVar18 = piVar18 + 1;
  } while (piVar2 != local_68);
  return;
}


