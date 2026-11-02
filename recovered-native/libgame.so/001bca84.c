/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bca84  Symbol: jpeg_fdct_10x5 */

void jpeg_fdct_10x5(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
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
  
  memset(param_1 + 0x28,0,0x60);
  iVar5 = 0;
  piVar7 = param_1;
  do {
    iVar15 = DAT_001bccb0;
    piVar6 = (int *)(param_2 + iVar5);
    iVar5 = iVar5 + 4;
    pbVar3 = (byte *)(*piVar6 + param_3);
    iVar11 = (uint)*pbVar3 - (uint)pbVar3[9];
    iVar9 = (uint)pbVar3[9] + (uint)*pbVar3;
    iVar1 = (uint)pbVar3[1] - (uint)pbVar3[8];
    iVar13 = (uint)pbVar3[8] + (uint)pbVar3[1];
    iVar8 = (uint)pbVar3[2] - (uint)pbVar3[7];
    iVar14 = (uint)pbVar3[7] + (uint)pbVar3[2];
    iVar10 = (uint)pbVar3[3] - (uint)pbVar3[6];
    iVar2 = (uint)pbVar3[3] + (uint)pbVar3[6];
    iVar16 = (uint)pbVar3[4] + (uint)pbVar3[5];
    iVar4 = (uint)pbVar3[4] - (uint)pbVar3[5];
    iVar12 = iVar9 - iVar16;
    iVar16 = iVar16 + iVar9;
    iVar9 = iVar2 + iVar13;
    iVar13 = iVar13 - iVar2;
    *piVar7 = (iVar14 + DAT_001bccac + iVar16 + iVar9) * 4;
    piVar7[4] = DAT_001bccb4 * (iVar14 * 2 - iVar9) + iVar15 * (iVar16 + iVar14 * -2) + 0x400 >> 0xb
    ;
    iVar15 = DAT_001bccc0;
    iVar2 = DAT_001bccb8 * (iVar13 + iVar12);
    piVar7[2] = DAT_001bccbc * iVar12 + 0x400 + iVar2 >> 0xb;
    piVar7[6] = iVar15 * iVar13 + 0x400 + iVar2 >> 0xb;
    iVar15 = iVar1 - iVar10;
    piVar7[5] = (((iVar11 + iVar4) - iVar15) - iVar8) * 4;
    piVar7[1] = iVar10 * DAT_001bccd0 +
                iVar8 * 0x2000 + 0x400 + iVar11 * DAT_001bccc4 + iVar1 * DAT_001bccc8 +
                iVar4 * DAT_001bcccc >> 0xb;
    iVar2 = iVar15 * 0x1000 + iVar8 * -0x2000 + (iVar15 + iVar11 + iVar4) * DAT_001bccd4;
    iVar15 = DAT_001bccd8 * (iVar10 + iVar1) + 0x400 + DAT_001bccdc * (iVar11 - iVar4);
    piVar7[3] = iVar15 + iVar2 >> 0xb;
    piVar7[7] = iVar15 - iVar2 >> 0xb;
    iVar13 = DAT_001bccec;
    iVar2 = DAT_001bcce8;
    iVar1 = DAT_001bcce4;
    iVar15 = DAT_001bcce0;
    piVar7 = piVar7 + 8;
  } while (iVar5 != 0x14);
  piVar7 = param_1 + 8;
  piVar6 = param_1 + 0x18;
  do {
    iVar9 = *param_1 - piVar6[8];
    iVar8 = piVar6[8] + *param_1;
    iVar4 = param_1[8] - *piVar6;
    iVar5 = *piVar6 + param_1[8];
    iVar11 = iVar5 + iVar8;
    iVar10 = (iVar8 - iVar5) * iVar1;
    *param_1 = (param_1[0x10] + iVar11) * iVar15 + 0x4000 >> 0xf;
    iVar8 = (iVar11 + param_1[0x10] * -4) * iVar2;
    param_1[0x10] = iVar10 + iVar8 + 0x4000 >> 0xf;
    iVar5 = DAT_001bccf0;
    piVar6[8] = (iVar10 + 0x4000) - iVar8 >> 0xf;
    iVar8 = (iVar4 + iVar9) * iVar13;
    iVar4 = DAT_001bccf4 * iVar4;
    param_1[8] = iVar5 * iVar9 + 0x4000 + iVar8 >> 0xf;
    *piVar6 = iVar4 + 0x4000 + iVar8 >> 0xf;
    piVar6 = piVar6 + 1;
    param_1 = param_1 + 1;
  } while (param_1 != piVar7);
  return;
}


