/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b85e4  Symbol: jpeg_fdct_9x9 */

void jpeg_fdct_9x9(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  int local_48 [8];
  int iStack_28;
  
  iVar5 = 0;
  piVar18 = param_1;
  while( true ) {
    do {
      piVar6 = piVar18;
      iVar4 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      pbVar10 = (byte *)(param_3 + *(int *)(iVar4 + param_2));
      iVar13 = (uint)*pbVar10 - (uint)pbVar10[8];
      iVar12 = (uint)pbVar10[8] + (uint)*pbVar10;
      iVar2 = (uint)pbVar10[7] + (uint)pbVar10[1];
      iVar8 = DAT_001b889c * ((uint)pbVar10[1] - (uint)pbVar10[7]);
      iVar11 = (uint)pbVar10[2] - (uint)pbVar10[6];
      iVar14 = (uint)pbVar10[6] + (uint)pbVar10[2];
      iVar15 = (uint)pbVar10[3] + (uint)pbVar10[5];
      iVar9 = (uint)pbVar10[3] - (uint)pbVar10[5];
      bVar1 = pbVar10[4];
      iVar17 = iVar2 + (uint)bVar1;
      iVar3 = iVar12 + iVar14 + iVar15;
      *piVar6 = (DAT_001b88a0 + iVar17 + iVar3) * 2;
      iVar4 = DAT_001b88a8;
      iVar2 = DAT_001b88a4 * (iVar2 + (uint)bVar1 * -2);
      piVar6[6] = DAT_001b88a4 * (iVar3 + iVar17 * -2) + 0x800 >> 0xc;
      iVar4 = iVar4 * (iVar12 - iVar14);
      iVar3 = DAT_001b88b0 * (iVar15 - iVar12);
      piVar6[2] = DAT_001b88ac * (iVar14 - iVar15) + iVar4 + iVar2 + 0x800 >> 0xc;
      piVar6[4] = (iVar3 + iVar4 + 0x800) - iVar2 >> 0xc;
      piVar6[3] = DAT_001b889c * ((iVar13 - iVar11) - iVar9) + 0x800 >> 0xc;
      iVar2 = DAT_001b88b4 * (iVar11 - iVar9);
      iVar3 = DAT_001b88b8 * (iVar11 + iVar13);
      iVar4 = DAT_001b88bc * (iVar9 + iVar13);
      piVar6[1] = iVar8 + iVar3 + 0x800 + iVar4 >> 0xc;
      piVar6[5] = ((iVar3 + 0x800) - iVar8) - iVar2 >> 0xc;
      piVar6[7] = (iVar4 + 0x800 + iVar2) - iVar8 >> 0xc;
      piVar18 = local_48;
    } while (iVar5 == 8);
    if (iVar5 == 9) break;
    piVar18 = piVar6 + 8;
  }
  piVar6 = param_1 + 0x10;
  piVar7 = param_1 + 0x28;
  do {
    piVar16 = piVar18 + 1;
    iVar2 = *param_1 - *piVar18;
    iVar9 = piVar7[0x10];
    iVar12 = *piVar18 + *param_1;
    iVar13 = param_1[8];
    iVar5 = iVar9 + iVar13;
    iVar3 = *piVar6 - piVar7[8];
    iVar14 = piVar7[8] + *piVar6;
    iVar4 = piVar6[8] - *piVar7;
    iVar15 = piVar6[8] + *piVar7;
    iVar8 = piVar6[0x10];
    iVar11 = iVar12 + iVar14 + iVar15;
    iVar17 = iVar5 + iVar8;
    *param_1 = DAT_001b88c0 * (iVar11 + iVar17) + 0x4000 >> 0xf;
    piVar7[8] = DAT_001b88c4 * (iVar11 + iVar17 * -2) + 0x4000 >> 0xf;
    iVar8 = DAT_001b88c4 * (iVar5 + iVar8 * -2);
    iVar5 = DAT_001b88c8 * (iVar12 - iVar14);
    iVar11 = DAT_001b88d0 * (iVar15 - iVar12);
    *piVar6 = DAT_001b88cc * (iVar14 - iVar15) + iVar5 + iVar8 + 0x4000 >> 0xf;
    piVar6[0x10] = (iVar11 + iVar5 + 0x4000) - iVar8 >> 0xf;
    piVar6[8] = DAT_001b88d4 * ((iVar2 - iVar3) - iVar4) + 0x4000 >> 0xf;
    piVar6 = piVar6 + 1;
    iVar8 = DAT_001b88d4 * (iVar13 - iVar9);
    iVar9 = DAT_001b88d8 * (iVar3 + iVar2);
    iVar2 = DAT_001b88dc * (iVar4 + iVar2);
    param_1[8] = iVar8 + iVar9 + 0x4000 + iVar2 >> 0xf;
    param_1 = param_1 + 1;
    iVar5 = DAT_001b88e0 * (iVar3 - iVar4);
    *piVar7 = ((iVar9 + 0x4000) - iVar8) - iVar5 >> 0xf;
    piVar7[0x10] = (iVar2 + 0x4000 + iVar5) - iVar8 >> 0xf;
    piVar7 = piVar7 + 1;
    piVar18 = piVar16;
  } while (piVar16 != &iStack_28);
  return;
}


