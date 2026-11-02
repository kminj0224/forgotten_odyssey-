/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bbf1c  Symbol: jpeg_fdct_6x12 */

void jpeg_fdct_6x12(int *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
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
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_a8 [6];
  int aiStack_90 [27];
  
  iVar11 = DAT_001bc1f8;
  iVar10 = DAT_001bc1f4;
  iVar9 = DAT_001bc1f0;
  memset(param_1,0,0x100);
  piVar6 = local_a8;
  iVar5 = 0;
  piVar2 = param_1;
  while( true ) {
    do {
      piVar7 = piVar2;
      iVar3 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      pbVar1 = (byte *)(*(int *)(iVar3 + param_2) + param_3);
      iVar8 = (uint)*pbVar1 - (uint)pbVar1[5];
      iVar15 = (uint)pbVar1[5] + (uint)*pbVar1;
      iVar4 = (uint)pbVar1[1] - (uint)pbVar1[4];
      iVar12 = (uint)pbVar1[4] + (uint)pbVar1[1];
      iVar3 = (uint)pbVar1[2] - (uint)pbVar1[3];
      iVar16 = (uint)pbVar1[3] + (uint)pbVar1[2];
      iVar13 = iVar16 + iVar15;
      *piVar7 = (DAT_001bc1fc + iVar12 + iVar13) * 4;
      piVar7[2] = (iVar15 - iVar16) * iVar9 + 0x400 >> 0xb;
      piVar7[4] = (iVar13 + iVar12 * -2) * iVar10 + 0x400 >> 0xb;
      iVar12 = (iVar3 + iVar8) * iVar11 + 0x400 >> 0xb;
      piVar7[1] = iVar12 + (iVar4 + iVar8) * 4;
      piVar7[3] = ((iVar8 - iVar4) - iVar3) * 4;
      piVar7[5] = iVar12 + (iVar3 - iVar4) * 4;
      piVar2 = piVar6;
    } while (iVar5 == 8);
    if (iVar5 == 0xc) break;
    piVar2 = piVar7 + 8;
  }
  piVar2 = param_1 + 8;
  piVar7 = param_1 + 0x20;
  piVar14 = param_1 + 0x38;
  do {
    iVar3 = *param_1 - piVar6[0x18];
    iVar5 = piVar6[0x18] + *param_1;
    iVar15 = *piVar2 - piVar6[0x10];
    iVar4 = piVar6[0x10] + *piVar2;
    iVar16 = param_1[0x10] - piVar6[8];
    iVar8 = piVar6[8] + param_1[0x10];
    iVar17 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar9 = piVar2[0x10] - iVar17;
    iVar17 = iVar17 + piVar2[0x10];
    iVar18 = *piVar7 - *piVar14;
    iVar12 = *piVar14 + *piVar7;
    iVar10 = piVar7[8] - piVar7[0x10];
    iVar11 = piVar7[0x10] + piVar7[8];
    iVar13 = iVar11 + iVar5;
    iVar5 = iVar5 - iVar11;
    iVar11 = iVar4 - iVar12;
    iVar19 = iVar8 - iVar17;
    iVar17 = iVar17 + iVar8;
    *param_1 = DAT_001bc200 * (iVar4 + iVar12 + iVar13 + iVar17) + 0x4000 >> 0xf;
    piVar7[0x10] = DAT_001bc200 * ((iVar5 - iVar11) - iVar19) + 0x4000 >> 0xf;
    *piVar7 = DAT_001bc204 * (iVar13 - iVar17) + 0x4000 >> 0xf;
    param_1[0x10] =
         DAT_001bc208 * (iVar5 + iVar19) + 0x4000 + DAT_001bc200 * (iVar11 - iVar19) >> 0xf;
    param_1 = param_1 + 1;
    iVar8 = DAT_001bc20c * (iVar18 + iVar15);
    iVar12 = iVar15 * DAT_001bc210 + iVar8;
    iVar8 = iVar18 * DAT_001bc214 + iVar8;
    iVar11 = (iVar16 + iVar3) * DAT_001bc218;
    iVar5 = (iVar9 + iVar3) * DAT_001bc21c;
    iVar4 = (iVar9 + iVar16) * DAT_001bc220;
    *piVar2 = iVar3 * DAT_001bc224 + iVar12 + 0x4000 + iVar11 + iVar5 + iVar10 * 0x540 >> 0xf;
    piVar2[0x10] = (iVar10 + iVar16) * DAT_001bc228 + 0x4000 + iVar8 +
                   (iVar3 - iVar9) * DAT_001bc22c >> 0xf;
    piVar2 = piVar2 + 1;
    piVar7[8] = (iVar11 + 0x4000 + iVar4 + iVar10 * DAT_001bc21c + iVar16 * DAT_001bc230) - iVar8 >>
                0xf;
    piVar7 = piVar7 + 1;
    *piVar14 = (DAT_001bc234 * iVar10 + iVar4 + iVar5 + 0x4000 + iVar9 * DAT_001bc238) - iVar12 >>
               0xf;
    piVar14 = piVar14 + 1;
  } while (piVar6 != aiStack_90);
  return;
}


