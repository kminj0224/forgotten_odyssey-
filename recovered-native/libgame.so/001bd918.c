/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001bd918  Symbol: jpeg_fdct_7x7 */

void jpeg_fdct_7x7(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  
  memset(param_1,0,0x100);
  iVar3 = 0;
  piVar7 = param_1;
  do {
    piVar4 = (int *)(param_2 + iVar3);
    iVar3 = iVar3 + 4;
    pbVar13 = (byte *)(*piVar4 + param_3);
    iVar10 = (uint)*pbVar13 - (uint)pbVar13[6];
    iVar9 = (uint)pbVar13[6] + (uint)*pbVar13;
    iVar12 = (uint)pbVar13[1] - (uint)pbVar13[5];
    iVar5 = (uint)pbVar13[5] + (uint)pbVar13[1];
    iVar1 = (uint)pbVar13[2] - (uint)pbVar13[4];
    uVar14 = (uint)pbVar13[3];
    iVar15 = (uint)pbVar13[4] + (uint)pbVar13[2];
    *piVar7 = (uVar14 + DAT_001bdb7c + iVar5 + iVar9 + iVar15) * 4;
    iVar6 = DAT_001bdb8c;
    iVar2 = (iVar9 + iVar15 + uVar14 * -4) * 0xb50;
    iVar11 = DAT_001bdb80 * (iVar9 - iVar15);
    iVar15 = DAT_001bdb84 * (iVar5 - iVar15);
    iVar9 = DAT_001bdb88 * (iVar9 - iVar5);
    piVar7[2] = iVar11 + iVar15 + 0x400 + iVar2 >> 0xb;
    piVar7[4] = (int)(iVar6 * (uVar14 * 2 - iVar5) + iVar15 + iVar9 + 0x400) >> 0xb;
    piVar7[6] = (iVar9 + 0x400 + iVar2) - iVar11 >> 0xb;
    iVar2 = DAT_001bdb90 * (iVar12 + iVar10);
    iVar5 = DAT_001bdb94 * (iVar1 + iVar12);
    iVar6 = DAT_001bdb98 * (iVar10 - iVar12);
    iVar15 = DAT_001bdb9c * (iVar1 + iVar10);
    piVar7[1] = (iVar2 + iVar15 + 0x400) - iVar6 >> 0xb;
    piVar7[3] = iVar2 + iVar5 + 0x400 + iVar6 >> 0xb;
    piVar7[5] = DAT_001bdba0 * iVar1 + 0x400 + iVar5 + iVar15 >> 0xb;
    piVar7 = piVar7 + 8;
  } while (iVar3 != 0x1c);
  piVar7 = param_1 + 7;
  piVar4 = param_1 + 8;
  piVar8 = param_1 + 0x20;
  do {
    iVar3 = DAT_001bdba8;
    iVar5 = *param_1 - piVar8[0x10];
    iVar2 = piVar8[0x10] + *param_1;
    iVar11 = *piVar4 - piVar8[8];
    iVar1 = piVar8[8] + *piVar4;
    iVar9 = param_1[0x10] - *piVar8;
    iVar12 = piVar4[0x10];
    iVar10 = *piVar8 + param_1[0x10];
    *param_1 = DAT_001bdba4 * (iVar12 + iVar1 + iVar10 + iVar2) + 0x4000 >> 0xf;
    iVar6 = DAT_001bdbb4;
    iVar3 = iVar3 * (iVar10 + iVar2 + iVar12 * -4);
    iVar15 = DAT_001bdbac * (iVar2 - iVar10);
    iVar10 = DAT_001bdbb0 * (iVar1 - iVar10);
    param_1[0x10] = iVar15 + iVar10 + 0x4000 + iVar3 >> 0xf;
    iVar6 = iVar6 * (iVar2 - iVar1);
    *piVar8 = DAT_001bdbb8 * (iVar12 * 2 - iVar1) + iVar10 + iVar6 + 0x4000 >> 0xf;
    piVar8[0x10] = (iVar6 + 0x4000 + iVar3) - iVar15 >> 0xf;
    iVar3 = DAT_001bdbbc * (iVar5 - iVar11);
    iVar2 = DAT_001bdbc0 * (iVar11 + iVar5);
    iVar1 = (iVar9 + iVar11) * DAT_001bdbc4;
    param_1 = param_1 + 1;
    iVar6 = (iVar9 + iVar5) * DAT_001bdbc8;
    *piVar4 = (iVar2 + iVar6 + 0x4000) - iVar3 >> 0xf;
    piVar4[0x10] = iVar2 + iVar1 + 0x4000 + iVar3 >> 0xf;
    piVar4 = piVar4 + 1;
    piVar8[8] = DAT_001bdbcc * iVar9 + 0x4000 + iVar1 + iVar6 >> 0xf;
    piVar8 = piVar8 + 1;
  } while (param_1 != piVar7);
  return;
}


