/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4198  Symbol: jpeg_idct_2x4 */

void jpeg_idct_2x4(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_48 [9];
  
  uVar4 = DAT_001c427c;
  piVar8 = local_48;
  piVar6 = *(int **)(param_2 + 0x54);
  iVar5 = *(int *)(param_1 + 0x14c) + 0x80;
  piVar7 = piVar8;
  do {
    iVar10 = ((int)*param_3 * *piVar6 - piVar6[0x10] * (int)param_3[0x10]) * 0x2000;
    psVar2 = param_3 + 8;
    piVar1 = piVar6 + 8;
    iVar11 = piVar6[0x18];
    iVar13 = (piVar6[0x10] * (int)param_3[0x10] + (int)*param_3 * *piVar6) * 0x2000;
    sVar3 = param_3[0x18];
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 1;
    iVar9 = (sVar3 * iVar11 + (int)*psVar2 * *piVar1) * DAT_001c4270;
    iVar12 = iVar9 + DAT_001c4274 * (int)*psVar2 * *piVar1;
    piVar7[6] = iVar13 - iVar12;
    *piVar7 = iVar12 + iVar13;
    iVar9 = iVar9 + DAT_001c4278 * sVar3 * iVar11;
    piVar7[2] = iVar9 + iVar10;
    piVar7[4] = iVar10 - iVar9;
    piVar7 = piVar7 + 1;
  } while (piVar7 != local_48 + 2);
  do {
    iVar11 = *piVar8;
    iVar9 = piVar8[1];
    iVar10 = *param_4;
    param_4 = param_4 + 1;
    piVar8 = piVar8 + 2;
    *(undefined *)(iVar10 + param_5) =
         *(undefined *)(iVar5 + (iVar11 + 0x8000 + iVar9 >> 0x10 & uVar4));
    ((undefined *)(iVar10 + param_5))[1] =
         *(undefined *)(iVar5 + ((iVar11 + 0x8000) - iVar9 >> 0x10 & uVar4));
  } while (piVar8 != local_48 + 8);
  return;
}


