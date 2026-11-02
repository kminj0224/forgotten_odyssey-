/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bccf8  Symbol: jpeg_fdct_12x6 */

void jpeg_fdct_12x6(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  
  memset(param_1 + 0x30,0,0x40);
  iVar9 = 0;
  piVar7 = param_1;
  do {
    piVar18 = (int *)(param_2 + iVar9);
    iVar9 = iVar9 + 4;
    pbVar3 = (byte *)(*piVar18 + param_3);
    iVar8 = (uint)*pbVar3 - (uint)pbVar3[0xb];
    iVar5 = (uint)pbVar3[0xb] + (uint)*pbVar3;
    iVar10 = (uint)pbVar3[1] - (uint)pbVar3[10];
    iVar1 = (uint)pbVar3[10] + (uint)pbVar3[1];
    iVar2 = (uint)pbVar3[2] - (uint)pbVar3[9];
    iVar11 = (uint)pbVar3[9] + (uint)pbVar3[2];
    iVar13 = (uint)pbVar3[3] - (uint)pbVar3[8];
    iVar17 = (uint)pbVar3[8] + (uint)pbVar3[3];
    iVar6 = (uint)pbVar3[4] - (uint)pbVar3[7];
    iVar16 = (uint)pbVar3[7] + (uint)pbVar3[4];
    iVar4 = (uint)pbVar3[5] - (uint)pbVar3[6];
    iVar12 = (uint)pbVar3[5] + (uint)pbVar3[6];
    iVar14 = iVar5 + iVar12;
    iVar5 = iVar5 - iVar12;
    iVar12 = iVar1 - iVar16;
    iVar15 = iVar17 + iVar11;
    iVar11 = iVar11 - iVar17;
    *piVar7 = (iVar1 + DAT_001bcf70 + iVar16 + iVar14 + iVar15) * 4;
    piVar7[6] = ((iVar5 - iVar12) - iVar11) * 4;
    piVar7[4] = DAT_001bcf74 * (iVar14 - iVar15) + 0x400 >> 0xb;
    piVar7[2] = ((iVar12 + 0x400) - iVar11) + DAT_001bcf78 * (iVar5 + iVar11) >> 0xb;
    iVar5 = DAT_001bcf98;
    iVar11 = DAT_001bcf7c * (iVar6 + iVar10);
    iVar12 = iVar10 * DAT_001bcf80 + iVar11;
    iVar10 = (iVar2 + iVar8) * DAT_001bcf88;
    iVar11 = iVar6 * DAT_001bcf84 + iVar11;
    iVar14 = (iVar13 + iVar8) * DAT_001bcf8c;
    iVar6 = (iVar13 + iVar2) * DAT_001bcf90;
    piVar7[1] = iVar8 * DAT_001bcf94 + iVar12 + 0x400 + iVar10 + iVar14 + iVar4 * 0x5e8 >> 0xb;
    iVar1 = DAT_001bcf8c;
    piVar7[3] = (iVar4 + iVar2) * iVar5 + 0x400 + iVar11 + (iVar8 - iVar13) * DAT_001bcf9c >> 0xb;
    piVar7[5] = (iVar10 + 0x400 + iVar6 + iVar4 * iVar1 + DAT_001bcfa0 * iVar2) - iVar11 >> 0xb;
    piVar7[7] = (iVar14 + 0x400 + iVar6 + DAT_001bcfa4 * iVar4 + DAT_001bcfa8 * iVar13) - iVar12 >>
                0xb;
    iVar5 = DAT_001bcfb0;
    iVar1 = DAT_001bcfac;
    piVar7 = piVar7 + 8;
  } while (iVar9 != 0x18);
  piVar7 = param_1 + 0x18;
  piVar18 = param_1 + 8;
  do {
    iVar4 = *param_1 - piVar7[0x10];
    iVar9 = piVar7[0x10] + *param_1;
    iVar12 = param_1[8] - piVar7[8];
    iVar6 = piVar7[8] + param_1[8];
    iVar8 = *piVar7 + param_1[0x10];
    iVar2 = param_1[0x10] - *piVar7;
    iVar10 = iVar8 + iVar9;
    *param_1 = iVar5 * (iVar10 + iVar6) + 0x8000 >> 0x10;
    param_1[0x10] = (iVar9 - iVar8) * iVar1 + 0x8000 >> 0x10;
    iVar9 = DAT_001bcfb8;
    piVar7[8] = DAT_001bcfb4 * (iVar10 + iVar6 * -2) + 0x8000 >> 0x10;
    iVar9 = iVar9 * (iVar2 + iVar4);
    param_1[8] = iVar9 + iVar5 * (iVar12 + iVar4) + 0x8000 >> 0x10;
    param_1 = param_1 + 1;
    *piVar7 = iVar5 * ((iVar4 - iVar12) - iVar2) + 0x8000 >> 0x10;
    piVar7[0x10] = iVar9 + 0x8000 + iVar5 * (iVar2 - iVar12) >> 0x10;
    piVar7 = piVar7 + 1;
  } while (param_1 != piVar18);
  return;
}


