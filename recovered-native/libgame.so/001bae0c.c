/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bae0c  Symbol: jpeg_fdct_16x8 */

void jpeg_fdct_16x8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  
  iVar14 = 0;
  piVar10 = param_1;
  do {
    piVar11 = (int *)(param_2 + iVar14);
    iVar14 = iVar14 + 4;
    pbVar12 = (byte *)(*piVar11 + param_3);
    iVar1 = (uint)*pbVar12 - (uint)pbVar12[0xf];
    iVar2 = (uint)pbVar12[0xf] + (uint)*pbVar12;
    iVar8 = (uint)pbVar12[1] - (uint)pbVar12[0xe];
    iVar15 = (uint)pbVar12[0xe] + (uint)pbVar12[1];
    iVar16 = (uint)pbVar12[2] - (uint)pbVar12[0xd];
    iVar3 = (uint)pbVar12[0xd] + (uint)pbVar12[2];
    iVar19 = (uint)pbVar12[3] - (uint)pbVar12[0xc];
    iVar4 = (uint)pbVar12[0xc] + (uint)pbVar12[3];
    iVar9 = (uint)pbVar12[4] - (uint)pbVar12[0xb];
    iVar5 = (uint)pbVar12[0xb] + (uint)pbVar12[4];
    iVar20 = (uint)pbVar12[5] - (uint)pbVar12[10];
    iVar6 = (uint)pbVar12[10] + (uint)pbVar12[5];
    iVar23 = (uint)pbVar12[6] + (uint)pbVar12[9];
    iVar21 = (uint)pbVar12[7] + (uint)pbVar12[8];
    iVar13 = (uint)pbVar12[7] - (uint)pbVar12[8];
    iVar7 = (uint)pbVar12[6] - (uint)pbVar12[9];
    iVar17 = iVar2 - iVar21;
    iVar21 = iVar21 + iVar2;
    iVar18 = iVar15 - iVar23;
    iVar2 = iVar3 - iVar6;
    iVar23 = iVar23 + iVar15;
    iVar6 = iVar6 + iVar3;
    iVar3 = iVar5 + iVar4;
    iVar4 = iVar4 - iVar5;
    *piVar10 = (iVar21 + DAT_001bb220 + iVar23 + iVar6 + iVar3) * 4;
    piVar10[4] = DAT_001bb224 * (iVar21 - iVar3) + DAT_001bb228 * (iVar23 - iVar6) + 0x400 >> 0xb;
    iVar3 = DAT_001bb230 * (iVar4 - iVar18) + DAT_001bb22c * (iVar17 - iVar2);
    piVar10[2] = DAT_001bb238 * iVar2 + DAT_001bb234 * iVar18 + 0x400 + iVar3 >> 0xb;
    iVar2 = DAT_001bb244;
    piVar10[6] = DAT_001bb240 * iVar4 + iVar17 * DAT_001bb23c + 0x400 + iVar3 >> 0xb;
    iVar3 = DAT_001bb274;
    iVar15 = (iVar16 + iVar1) * DAT_001bb250 + (iVar13 + iVar20) * DAT_001bb24c;
    iVar17 = (iVar19 + iVar1) * DAT_001bb258 + (iVar9 - iVar13) * DAT_001bb254;
    iVar6 = (iVar16 + iVar8) * 0x470 + (iVar7 - iVar20) * DAT_001bb25c;
    iVar4 = (iVar7 + iVar9) * DAT_001bb260 + (iVar19 + iVar8) * DAT_001bb264;
    iVar5 = DAT_001bb244 * (iVar20 - iVar9) + (iVar19 + iVar16) * DAT_001bb268;
    iVar21 = iVar2 * (iVar7 - iVar13) + (iVar8 + iVar1) * DAT_001bb248 + 0x400;
    piVar10[1] = iVar21 + iVar15 + iVar17 + iVar13 * DAT_001bb26c + iVar1 * DAT_001bb270 >> 0xb;
    iVar2 = DAT_001bb27c;
    piVar10[3] = iVar21 + iVar6 + iVar4 + iVar3 * iVar7 + DAT_001bb278 * iVar8 >> 0xb;
    piVar10[5] = iVar15 + 0x400 + iVar6 + iVar5 + iVar20 * iVar2 + iVar16 * DAT_001bb280 >> 0xb;
    piVar10[7] = iVar17 + 0x400 + iVar4 + iVar5 + iVar9 * DAT_001bb284 + iVar19 * DAT_001bb288 >>
                 0xb;
    piVar10 = piVar10 + 8;
  } while (iVar14 != 0x20);
  piVar10 = param_1 + 0x10;
  piVar11 = param_1 + 0x28;
  piVar22 = param_1 + 8;
  do {
    iVar5 = *param_1 - piVar11[0x10];
    iVar3 = piVar11[0x10] + *param_1;
    iVar4 = param_1[8] - piVar11[8];
    iVar2 = piVar11[8] + param_1[8];
    iVar1 = *piVar10 - *piVar11;
    iVar6 = *piVar11 + *piVar10;
    iVar7 = piVar10[8] - piVar10[0x10];
    iVar14 = piVar10[8] + piVar10[0x10];
    iVar8 = iVar3 - iVar14;
    iVar14 = iVar14 + iVar3;
    iVar3 = iVar6 + iVar2;
    iVar2 = iVar2 - iVar6;
    *param_1 = iVar3 + iVar14 + 4 >> 3;
    piVar10[0x10] = (iVar14 + 4) - iVar3 >> 3;
    iVar14 = DAT_001bb228 * (iVar2 + iVar8);
    *piVar10 = DAT_001bb28c * iVar8 + 0x8000 + iVar14 >> 0x10;
    piVar11[8] = iVar14 + DAT_001bb290 * iVar2 + 0x8000 >> 0x10;
    iVar14 = DAT_001bb294 * (iVar1 + iVar4);
    iVar2 = DAT_001bb298 * (iVar7 + iVar4 + iVar1 + iVar5);
    iVar6 = DAT_001bb29c * (iVar1 + iVar5) + iVar2;
    iVar2 = iVar2 + DAT_001bb2a0 * (iVar7 + iVar4);
    iVar3 = DAT_001bb2a4 * (iVar7 + iVar5);
    param_1[8] = iVar5 * DAT_001bb2a8 + 0x8000 + iVar3 + iVar6 >> 0x10;
    param_1 = param_1 + 1;
    piVar10[8] = DAT_001bb2ac * iVar4 + 0x8000 + iVar14 + iVar2 >> 0x10;
    piVar10 = piVar10 + 1;
    *piVar11 = DAT_001bb2b0 * iVar1 + 0x8000 + iVar14 + iVar6 >> 0x10;
    piVar11[0x10] = DAT_001bb2b4 * iVar7 + 0x8000 + iVar3 + iVar2 >> 0x10;
    piVar11 = piVar11 + 1;
  } while (param_1 != piVar22);
  return;
}


