/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bcfbc  Symbol: jpeg_fdct_14x7 */

void jpeg_fdct_14x7(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
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
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  memset(param_1 + 0x38,0,0x20);
  iVar1 = 0;
  piVar4 = param_1;
  do {
    piVar3 = (int *)(param_2 + iVar1);
    iVar1 = iVar1 + 4;
    pbVar5 = (byte *)(*piVar3 + param_3);
    iVar2 = (uint)*pbVar5 - (uint)pbVar5[0xd];
    iVar12 = (uint)pbVar5[0xd] + (uint)*pbVar5;
    iVar16 = (uint)pbVar5[1] - (uint)pbVar5[0xc];
    iVar13 = (uint)pbVar5[0xc] + (uint)pbVar5[1];
    iVar14 = (uint)pbVar5[2] - (uint)pbVar5[0xb];
    iVar15 = (uint)pbVar5[0xb] + (uint)pbVar5[2];
    iVar18 = (uint)pbVar5[3] - (uint)pbVar5[10];
    iVar8 = (uint)pbVar5[10] + (uint)pbVar5[3];
    iVar17 = (uint)pbVar5[4] - (uint)pbVar5[9];
    iVar9 = (uint)pbVar5[4] + (uint)pbVar5[9];
    iVar10 = (uint)pbVar5[5] - (uint)pbVar5[8];
    iVar21 = (uint)pbVar5[5] + (uint)pbVar5[8];
    iVar20 = (uint)pbVar5[6] + (uint)pbVar5[7];
    iVar6 = (uint)pbVar5[6] - (uint)pbVar5[7];
    iVar11 = iVar20 + iVar12;
    iVar12 = iVar12 - iVar20;
    iVar20 = iVar13 - iVar21;
    iVar19 = iVar9 + iVar15;
    iVar21 = iVar21 + iVar13;
    iVar15 = iVar15 - iVar9;
    *piVar4 = (iVar8 + DAT_001bd314 + iVar11 + iVar21 + iVar19) * 4;
    piVar4[4] = DAT_001bd320 * (iVar8 * 2 - iVar19) +
                DAT_001bd31c * (iVar21 + iVar8 * -2) + DAT_001bd318 * (iVar11 + iVar8 * -2) + 0x400
                >> 0xb;
    iVar8 = DAT_001bd334;
    iVar9 = DAT_001bd324 * (iVar12 + iVar20);
    iVar20 = DAT_001bd330 * iVar20;
    piVar4[2] = DAT_001bd32c * iVar15 + iVar12 * DAT_001bd328 + 0x400 + iVar9 >> 0xb;
    piVar4[6] = iVar9 + iVar20 + iVar8 * iVar15 + 0x400 >> 0xb;
    piVar4[7] = ((((iVar18 + iVar2) - iVar6) - (iVar14 + iVar16)) - (iVar10 - iVar17)) * 4;
    iVar11 = (iVar14 + iVar16) * DAT_001bd33c + (iVar10 - iVar17) * DAT_001bd338 + iVar18 * -0x2000
             + 0x400;
    iVar9 = (iVar6 + iVar17) * DAT_001bd340 + (iVar14 + iVar2) * DAT_001bd344;
    piVar4[5] = iVar17 * DAT_001bd348 + iVar9 + iVar11 + iVar14 * DAT_001bd34c >> 0xb;
    iVar8 = DAT_001bd350 * (iVar10 - iVar6) + (iVar16 + iVar2) * DAT_001bd354;
    piVar4[3] = iVar10 * DAT_001bd358 + iVar8 + iVar11 + iVar16 * DAT_001bd35c >> 0xb;
    piVar4[1] = iVar6 + 0x400 + iVar18 * 0x2000 + iVar9 + iVar8 + DAT_001bd360 * (iVar6 + iVar2) >>
                0xb;
    piVar4 = piVar4 + 8;
  } while (iVar1 != 0x1c);
  piVar3 = param_1 + 8;
  piVar7 = param_1 + 0x20;
  piVar4 = piVar3;
  do {
    iVar1 = DAT_001bd368;
    iVar10 = *param_1 - piVar7[0x10];
    iVar6 = piVar7[0x10] + *param_1;
    iVar20 = *piVar4 - piVar7[8];
    iVar2 = piVar7[8] + *piVar4;
    iVar11 = param_1[0x10] - *piVar7;
    iVar12 = piVar4[0x10];
    iVar15 = *piVar7 + param_1[0x10];
    *param_1 = DAT_001bd364 * (iVar12 + iVar2 + iVar15 + iVar6) + 0x8000 >> 0x10;
    iVar8 = DAT_001bd374;
    iVar1 = iVar1 * (iVar15 + iVar6 + iVar12 * -4);
    iVar9 = DAT_001bd36c * (iVar6 - iVar15);
    iVar15 = DAT_001bd370 * (iVar2 - iVar15);
    param_1[0x10] = iVar9 + iVar15 + 0x8000 + iVar1 >> 0x10;
    iVar8 = iVar8 * (iVar6 - iVar2);
    *piVar7 = DAT_001bd378 * (iVar12 * 2 - iVar2) + iVar15 + iVar8 + 0x8000 >> 0x10;
    piVar7[0x10] = ((iVar8 + 0x8000) - iVar9) + iVar1 >> 0x10;
    iVar1 = DAT_001bd37c * (iVar10 - iVar20);
    iVar6 = DAT_001bd380 * (iVar20 + iVar10);
    iVar2 = (iVar11 + iVar20) * DAT_001bd384;
    param_1 = param_1 + 1;
    iVar8 = (iVar11 + iVar10) * DAT_001bd388;
    *piVar4 = (iVar6 + iVar8 + 0x8000) - iVar1 >> 0x10;
    piVar4[0x10] = iVar6 + iVar2 + 0x8000 + iVar1 >> 0x10;
    piVar4 = piVar4 + 1;
    piVar7[8] = DAT_001bd38c * iVar11 + 0x8000 + iVar2 + iVar8 >> 0x10;
    piVar7 = piVar7 + 1;
  } while (param_1 != piVar3);
  return;
}


