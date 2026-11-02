/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c0dd4  Symbol: jpeg_idct_15x15 */

void jpeg_idct_15x15(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_4;
  
  iVar2 = DAT_001c11d8;
  *(undefined4 *)(&stack0x0000001c + DAT_001c11d8) = param_4;
  iVar7 = *(int *)(param_1 + 0x14c);
  piVar4 = *(int **)(param_2 + 0x54);
  piVar6 = (int *)(&stack0x00000024 + DAT_001c11d8);
  *(int **)(&stack0x00000018 + DAT_001c11d8) = piVar6;
  *(undefined **)(&stack0x00000014 + DAT_001c11d8) = &stack0x00000044 + DAT_001c11d8;
  *(undefined4 *)(&stack0x00000010 + DAT_001c11d8) = 0x176;
  *(int *)(&stack0x00000020 + DAT_001c11d8) = iVar7 + 0x80;
  do {
    sVar1 = param_3[0x20];
    iVar11 = piVar4[0x20];
    iVar9 = piVar4[0x30] * (int)param_3[0x30] * DAT_001c11dc;
    iVar10 = piVar4[0x30] * (int)param_3[0x30] * DAT_001c11e0;
    iVar7 = *piVar4 * (int)*param_3 * 0x2000 + 0x400;
    *(int *)(&stack0xffffffe4 + DAT_001c11d8) = iVar7 - iVar10;
    *(int *)(&stack0xffffffec + DAT_001c11d8) = iVar7 + (iVar9 - iVar10) * -2;
    iVar7 = iVar7 + iVar9;
    iVar9 = piVar4[0x10] * (int)param_3[0x10];
    iVar10 = iVar9 - sVar1 * iVar11;
    iVar11 = sVar1 * iVar11 + iVar9;
    *(int *)((int)&iStack_4 + DAT_001c11d8) =
         (iVar10 * *(int *)(&stack0x00000010 + DAT_001c11d8) + iVar9 * DAT_001c11e4 +
         *(int *)(&stack0xffffffe4 + DAT_001c11d8)) - iVar11 * DAT_001c11e8;
    *(int *)(&stack0xfffffff4 + DAT_001c11d8) =
         (iVar7 - iVar11 * DAT_001c11ec) - iVar10 * DAT_001c11f0;
    iVar14 = iVar11 * DAT_001c11e8 + iVar10 * *(int *)(&stack0x00000010 + DAT_001c11d8) + iVar7;
    *(int *)(&stack0xfffffff0 + DAT_001c11d8) =
         ((iVar11 * DAT_001c11ec - iVar9 * DAT_001c11e4) + *(int *)(&stack0xffffffe4 + DAT_001c11d8)
         ) - iVar10 * DAT_001c11f0;
    *(int *)(&stack0xfffffff8 + DAT_001c11d8) = (iVar7 - DAT_001c11f4 * iVar11) + iVar10 * 0xb50;
    iVar7 = *(int *)(&stack0xffffffec + DAT_001c11d8);
    *(int *)(&stack0x00000004 + DAT_001c11d8) =
         iVar10 * 0xb50 + DAT_001c11f4 * iVar11 + *(int *)(&stack0xffffffe4 + DAT_001c11d8);
    *(int *)((int)&iStack_4 + DAT_001c11d8 + -0x20) = iVar10 * 0x16a0;
    *(int *)(&stack0x00000000 + DAT_001c11d8) = iVar7 + iVar10 * 0x16a0;
    iVar7 = piVar4[0x18];
    iVar11 = (int)param_3[0x28] * piVar4[0x28] * DAT_001c11f8;
    iVar9 = (int)param_3[0x38] * piVar4[0x38];
    sVar1 = param_3[0x18];
    *(int *)(&stack0xffffffe4 + DAT_001c11d8) = sVar1 * iVar7;
    iVar10 = sVar1 * iVar7 - iVar9;
    piVar8 = piVar4 + 8;
    piVar4 = piVar4 + 1;
    iVar7 = (int)param_3[8] * *piVar8;
    iVar12 = (iVar7 + iVar10) * DAT_001c11fc;
    param_3 = param_3 + 1;
    *(int *)(&stack0x0000000c + DAT_001c11d8) = iVar10 * DAT_001c1200 + iVar12;
    *(int *)(&stack0xffffffe8 + DAT_001c11d8) = iVar12 + iVar7 * DAT_001c1204;
    iVar12 = *(int *)(&stack0xffffffe4 + DAT_001c11d8) * DAT_001c1208;
    iVar13 = *(int *)(&stack0xffffffe4 + DAT_001c11d8) * DAT_001c120c;
    *(int *)(&stack0xffffffe4 + DAT_001c11d8) = (iVar7 - iVar9) * DAT_001c11f8 - iVar11;
    iVar10 = (iVar7 - iVar9) * DAT_001c1210 + iVar11;
    *(int *)(&stack0xffffffe0 + DAT_001c11d8) = (iVar9 * DAT_001c1214 - iVar13) + iVar10;
    *(int *)(&stack0x00000008 + DAT_001c11d8) = iVar7 * DAT_001c1218 + iVar12 + iVar10;
    iVar10 = (iVar9 + iVar7) * DAT_001c121c;
    *piVar6 = *(int *)(&stack0xffffffe0 + DAT_001c11d8) + iVar14 >> 0xb;
    iVar7 = ((iVar7 * DAT_001c1220 + iVar12) - iVar11) + iVar10;
    piVar6[0x70] = iVar14 - *(int *)(&stack0xffffffe0 + DAT_001c11d8) >> 0xb;
    iVar12 = *(int *)(&stack0xffffffe8 + DAT_001c11d8);
    iVar10 = iVar9 * DAT_001c1224 + iVar13 + iVar11 + iVar10;
    piVar6[8] = *(int *)(&stack0x00000004 + DAT_001c11d8) + iVar12 >> 0xb;
    piVar6[0x68] = *(int *)(&stack0x00000004 + DAT_001c11d8) - iVar12 >> 0xb;
    iVar9 = *(int *)(&stack0xffffffe4 + DAT_001c11d8);
    piVar6[0x10] = *(int *)(&stack0x00000000 + DAT_001c11d8) + iVar9 >> 0xb;
    piVar6[0x60] = *(int *)(&stack0x00000000 + DAT_001c11d8) - iVar9 >> 0xb;
    iVar9 = *(int *)((int)&iStack_4 + DAT_001c11d8);
    piVar6[0x18] = iVar9 + iVar7 >> 0xb;
    piVar6[0x58] = iVar9 - iVar7 >> 0xb;
    iVar7 = *(int *)(&stack0xfffffff8 + DAT_001c11d8);
    iVar9 = *(int *)(&stack0x0000000c + DAT_001c11d8);
    piVar6[0x20] = iVar7 + iVar9 >> 0xb;
    piVar6[0x50] = iVar7 - iVar9 >> 0xb;
    iVar7 = *(int *)(&stack0xfffffff4 + DAT_001c11d8);
    piVar6[0x28] = iVar7 + iVar10 >> 0xb;
    piVar6[0x48] = iVar7 - iVar10 >> 0xb;
    iVar7 = *(int *)(&stack0xfffffff0 + DAT_001c11d8);
    iVar9 = *(int *)(&stack0x00000008 + DAT_001c11d8);
    piVar6[0x30] = iVar7 + iVar9 >> 0xb;
    piVar6[0x40] = iVar7 - iVar9 >> 0xb;
    piVar8 = piVar6 + 0x38;
    piVar6 = piVar6 + 1;
    *piVar8 = *(int *)(&stack0xffffffec + DAT_001c11d8) +
              *(int *)((int)&iStack_4 + DAT_001c11d8 + -0x20) * -2 >> 0xb;
  } while (piVar6 != *(int **)(&stack0x00000014 + DAT_001c11d8));
  iVar7 = *(int *)(&stack0x00000020 + DAT_001c11d8);
  piVar6 = *(int **)(&stack0x00000018 + DAT_001c11d8);
  *(int *)(&stack0x00000014 + DAT_001c11d8) = *(int *)(&stack0x00000018 + DAT_001c11d8) + 0x1e0;
  *(undefined4 *)(&stack0x00000010 + DAT_001c11d8) = 0x176;
  piVar4 = *(int **)(&stack0x0000001c + DAT_001c11d8);
  do {
    uVar3 = DAT_001c133c;
    iVar11 = piVar6[6] * DAT_001c11e0;
    iVar12 = DAT_001c11dc * piVar6[6];
    iVar9 = (*piVar6 + 0x10) * 0x2000;
    iVar10 = iVar9 - iVar11;
    *(int *)(&stack0x0000000c + iVar2) = iVar9 + (iVar12 - iVar11) * -2;
    iVar11 = piVar6[2];
    iVar9 = iVar9 + iVar12;
    iVar12 = iVar11 - piVar6[4];
    iVar13 = piVar6[4] + iVar11;
    *(int *)(&stack0x0000001c + iVar2) =
         iVar12 * *(int *)(&stack0x00000010 + iVar2) + iVar13 * DAT_001c11e8 + iVar9;
    *(int *)(&stack0x00000008 + iVar2) =
         ((iVar12 * *(int *)(&stack0x00000010 + iVar2) + DAT_001c11e4 * iVar11) -
         iVar13 * DAT_001c11e8) + iVar10;
    *(int *)(&stack0x00000004 + iVar2) = (iVar9 - iVar13 * DAT_001c11ec) - iVar12 * DAT_001c11f0;
    *(int *)(&stack0x00000000 + iVar2) =
         ((iVar13 * DAT_001c11ec - DAT_001c11e4 * iVar11) - iVar12 * DAT_001c11f0) + iVar10;
    *(int *)((int)&iStack_4 + iVar2) = iVar12 * 0xb50 + DAT_001c11f4 * iVar13 + iVar10;
    *(int *)(&stack0xfffffff4 + iVar2) = *(int *)(&stack0x0000000c + iVar2) + iVar12 * 0x16a0;
    *(int *)(&stack0xfffffff8 + iVar2) = (iVar9 - DAT_001c11f4 * iVar13) + iVar12 * 0xb50;
    iVar9 = piVar6[7];
    iVar13 = piVar6[3];
    iVar10 = piVar6[1];
    iVar11 = ((iVar13 - iVar9) + iVar10) * DAT_001c11fc;
    *(int *)(&stack0xffffffec + iVar2) = iVar11 + (iVar13 - iVar9) * DAT_001c1200;
    *(int *)(&stack0xfffffff0 + iVar2) = iVar11 + iVar10 * DAT_001c1204;
    iVar11 = piVar6[5] * DAT_001c11f8;
    piVar6 = piVar6 + 8;
    *(int *)(&stack0xffffffe4 + iVar2) = (iVar10 - iVar9) * DAT_001c11f8 - iVar11;
    iVar14 = (iVar10 - iVar9) * DAT_001c1210 + iVar11;
    *(int *)(&stack0x00000018 + iVar2) = (iVar9 * DAT_001c1214 - DAT_001c120c * iVar13) + iVar14;
    *(int *)(&stack0xffffffe8 + iVar2) = iVar10 * DAT_001c1218 + DAT_001c1208 * iVar13 + iVar14;
    iVar14 = (iVar9 + iVar10) * DAT_001c121c;
    iVar10 = ((iVar10 * DAT_001c1220 + DAT_001c1208 * iVar13) - iVar11) + iVar14;
    iVar14 = iVar14 + iVar11 + DAT_001c120c * iVar13 + iVar9 * DAT_001c1338;
    puVar5 = (undefined *)(*piVar4 + *(int *)(&stack0x0000022c + iVar2));
    *puVar5 = *(undefined *)
               (iVar7 + (*(int *)(&stack0x0000001c + iVar2) + *(int *)(&stack0x00000018 + iVar2) >>
                         0x12 & DAT_001c133c));
    puVar5[0xe] = *(undefined *)
                   (iVar7 + (*(int *)(&stack0x0000001c + iVar2) - *(int *)(&stack0x00000018 + iVar2)
                             >> 0x12 & uVar3));
    puVar5[1] = *(undefined *)
                 (iVar7 + (*(int *)((int)&iStack_4 + iVar2) + *(int *)(&stack0xfffffff0 + iVar2) >>
                           0x12 & uVar3));
    puVar5[0xd] = *(undefined *)
                   (iVar7 + (*(int *)((int)&iStack_4 + iVar2) - *(int *)(&stack0xfffffff0 + iVar2)
                             >> 0x12 & uVar3));
    puVar5[2] = *(undefined *)
                 (iVar7 + (*(int *)(&stack0xfffffff4 + iVar2) + *(int *)(&stack0xffffffe4 + iVar2)
                           >> 0x12 & uVar3));
    puVar5[0xc] = *(undefined *)
                   (iVar7 + (*(int *)(&stack0xfffffff4 + iVar2) - *(int *)(&stack0xffffffe4 + iVar2)
                             >> 0x12 & uVar3));
    iVar9 = *(int *)(&stack0x00000008 + iVar2);
    puVar5[3] = *(undefined *)(iVar7 + (iVar9 + iVar10 >> 0x12 & uVar3));
    puVar5[0xb] = *(undefined *)(iVar7 + (iVar9 - iVar10 >> 0x12 & uVar3));
    iVar9 = *(int *)(&stack0xfffffff8 + iVar2);
    iVar10 = *(int *)(&stack0xffffffec + iVar2);
    puVar5[4] = *(undefined *)(iVar7 + (iVar9 + iVar10 >> 0x12 & uVar3));
    puVar5[10] = *(undefined *)(iVar7 + (iVar9 - iVar10 >> 0x12 & uVar3));
    puVar5[5] = *(undefined *)
                 (iVar7 + (*(int *)(&stack0x00000004 + iVar2) + iVar14 >> 0x12 & uVar3));
    puVar5[9] = *(undefined *)
                 (iVar7 + (*(int *)(&stack0x00000004 + iVar2) - iVar14 >> 0x12 & uVar3));
    iVar10 = *(int *)(&stack0x00000000 + iVar2);
    iVar9 = *(int *)(&stack0xffffffe8 + iVar2);
    puVar5[6] = *(undefined *)(iVar7 + (iVar10 + iVar9 >> 0x12 & uVar3));
    puVar5[8] = *(undefined *)(iVar7 + (iVar10 - iVar9 >> 0x12 & uVar3));
    puVar5[7] = *(undefined *)
                 (iVar7 + (uVar3 & *(int *)(&stack0x0000000c + iVar2) + iVar12 * -0x2d40 >> 0x12));
    piVar4 = piVar4 + 1;
  } while (piVar6 != *(int **)(&stack0x00000014 + iVar2));
  return;
}


