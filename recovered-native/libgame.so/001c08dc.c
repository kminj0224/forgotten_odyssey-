/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c08dc  Symbol: jpeg_idct_14x14 */

void jpeg_idct_14x14(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  int iStack_4;
  
  iVar2 = DAT_001c0ce4;
  *(undefined4 *)(&stack0x00000014 + DAT_001c0ce4) = param_4;
  iVar7 = *(int *)(param_1 + 0x14c);
  piVar4 = *(int **)(param_2 + 0x54);
  *(undefined **)(&stack0x00000010 + DAT_001c0ce4) = &stack0x0000001c + DAT_001c0ce4;
  *(undefined **)(&stack0x0000000c + DAT_001c0ce4) = &stack0x0000003c + DAT_001c0ce4;
  *(int *)(&stack0x00000018 + DAT_001c0ce4) = iVar7 + 0x80;
  piVar5 = (int *)(&stack0x0000001c + DAT_001c0ce4);
  do {
    iVar7 = (int)param_3[0x20] * piVar4[0x20];
    iVar8 = *piVar4 * (int)*param_3 * 0x2000 + 0x400;
    iVar10 = iVar8 + iVar7 * DAT_001c0cec;
    iVar11 = iVar8 - DAT_001c0cf0 * iVar7;
    *(int *)((int)&iStack_4 + DAT_001c0ce4) =
         iVar8 + ((iVar7 * DAT_001c0cec + iVar7 * DAT_001c0ce8) - DAT_001c0cf0 * iVar7) * -2 >> 0xb;
    iVar12 = (int)param_3[0x30] * piVar4[0x30];
    iVar8 = iVar8 + iVar7 * DAT_001c0ce8;
    iVar7 = piVar4[0x10] * (int)param_3[0x10];
    iVar9 = DAT_001c0cf8 * (iVar12 + iVar7);
    iVar13 = iVar9 + iVar7 * DAT_001c0cf4;
    iVar9 = iVar9 + DAT_001c0cfc * iVar12;
    *(int *)(&stack0x00000008 + DAT_001c0ce4) = iVar13 + iVar10;
    iVar7 = DAT_001c0d04 * iVar7 + DAT_001c0d00 * iVar12;
    *(int *)(&stack0xfffffff0 + DAT_001c0ce4) = iVar10 - iVar13;
    *(int *)(&stack0x00000000 + DAT_001c0ce4) = iVar11 + iVar7;
    *(int *)(&stack0x00000004 + DAT_001c0ce4) = iVar9 + iVar8;
    *(int *)(&stack0xfffffff4 + DAT_001c0ce4) = iVar8 - iVar9;
    *(int *)(&stack0xfffffff8 + DAT_001c0ce4) = iVar11 - iVar7;
    iVar7 = piVar4[0x28] * (int)param_3[0x28];
    *(int *)(&stack0xffffffec + DAT_001c0ce4) = (int)param_3[0x38] * piVar4[0x38];
    iVar12 = (int)param_3[8] * piVar4[8];
    iVar11 = (iVar7 + iVar12) * DAT_001c0d08;
    iVar13 = (iVar7 + iVar12) * DAT_001c0d0c;
    *(int *)((int)&iStack_4 + DAT_001c0ce4 + -0x20) =
         *(int *)(&stack0xffffffec + DAT_001c0ce4) << 0xd;
    psVar1 = param_3 + 0x18;
    piVar6 = piVar4 + 0x18;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
    iVar8 = *piVar6 * (int)*psVar1;
    *(int *)(&stack0xffffffe0 + DAT_001c0ce4) = (iVar8 + iVar12) * DAT_001c0d10;
    *(int *)(&stack0xffffffe8 + DAT_001c0ce4) =
         iVar12 * DAT_001c0d14 + *(int *)((int)&iStack_4 + DAT_001c0ce4 + -0x20) +
         *(int *)(&stack0xffffffe0 + DAT_001c0ce4) + iVar13;
    iVar9 = (iVar12 - iVar8) * DAT_001c0d18 - *(int *)((int)&iStack_4 + DAT_001c0ce4 + -0x20);
    *(int *)(&stack0xffffffe4 + DAT_001c0ce4) = iVar12 * DAT_001c0d1c + iVar11 + iVar9;
    iVar10 = (iVar7 + iVar8) * DAT_001c0d24 - *(int *)((int)&iStack_4 + DAT_001c0ce4 + -0x20);
    iVar14 = *(int *)(&stack0xffffffe0 + DAT_001c0ce4) + iVar8 * DAT_001c0d20 + iVar10;
    *(int *)(&stack0xffffffe0 + DAT_001c0ce4) = iVar10 + iVar13 + iVar7 * DAT_001c0d28;
    iVar10 = (iVar7 - iVar8) * DAT_001c0d2c;
    iVar11 = *(int *)((int)&iStack_4 + DAT_001c0ce4 + -0x20) + iVar7 * DAT_001c0d30 + iVar11 +
             iVar10;
    iVar9 = iVar9 + iVar10 + iVar8 * DAT_001c0d34;
    iVar7 = ((iVar12 - iVar8) - iVar7) + *(int *)(&stack0xffffffec + DAT_001c0ce4);
    *piVar5 = *(int *)(&stack0xffffffe8 + DAT_001c0ce4) + *(int *)(&stack0x00000008 + DAT_001c0ce4)
              >> 0xb;
    piVar5[0x68] = *(int *)(&stack0x00000008 + DAT_001c0ce4) -
                   *(int *)(&stack0xffffffe8 + DAT_001c0ce4) >> 0xb;
    piVar5[8] = *(int *)(&stack0x00000004 + DAT_001c0ce4) + iVar14 >> 0xb;
    piVar5[0x60] = *(int *)(&stack0x00000004 + DAT_001c0ce4) - iVar14 >> 0xb;
    iVar8 = *(int *)(&stack0x00000000 + DAT_001c0ce4);
    piVar5[0x10] = *(int *)(&stack0xffffffe0 + DAT_001c0ce4) + iVar8 >> 0xb;
    piVar5[0x58] = iVar8 - *(int *)(&stack0xffffffe0 + DAT_001c0ce4) >> 0xb;
    iVar8 = *(int *)((int)&iStack_4 + DAT_001c0ce4);
    piVar5[0x18] = iVar8 + iVar7 * 4;
    piVar5[0x50] = iVar8 + iVar7 * -4;
    iVar7 = *(int *)(&stack0xfffffff8 + DAT_001c0ce4);
    piVar5[0x20] = iVar11 + iVar7 >> 0xb;
    piVar5[0x48] = iVar7 - iVar11 >> 0xb;
    piVar5[0x28] = *(int *)(&stack0xfffffff4 + DAT_001c0ce4) + iVar9 >> 0xb;
    piVar5[0x40] = *(int *)(&stack0xfffffff4 + DAT_001c0ce4) - iVar9 >> 0xb;
    iVar7 = *(int *)(&stack0xffffffe4 + DAT_001c0ce4);
    iVar8 = *(int *)(&stack0xfffffff0 + DAT_001c0ce4);
    piVar6 = piVar5 + 1;
    piVar5[0x30] = iVar7 + iVar8 >> 0xb;
    piVar5[0x38] = iVar8 - iVar7 >> 0xb;
    piVar5 = piVar6;
  } while (piVar6 != *(int **)(&stack0x0000000c + DAT_001c0ce4));
  iVar7 = *(int *)(&stack0x00000018 + DAT_001c0ce4);
  piVar4 = *(int **)(&stack0x00000010 + DAT_001c0ce4);
  *(int *)(&stack0x00000008 + DAT_001c0ce4) = *(int *)(&stack0x00000010 + DAT_001c0ce4) + 0x1c0;
  piVar5 = *(int **)(&stack0x00000014 + DAT_001c0ce4);
  do {
    uVar3 = DAT_001c0d38;
    iVar8 = piVar4[4];
    iVar9 = (*piVar4 + 0x10) * 0x2000;
    iVar14 = iVar9 + iVar8 * DAT_001c0cec;
    iVar12 = iVar9 - iVar8 * DAT_001c0cf0;
    *(int *)(&stack0x00000004 + iVar2) =
         iVar9 + ((iVar8 * DAT_001c0cec + iVar8 * DAT_001c0ce8) - iVar8 * DAT_001c0cf0) * -2;
    iVar11 = piVar4[2];
    iVar13 = piVar4[6];
    iVar9 = iVar9 + iVar8 * DAT_001c0ce8;
    iVar8 = DAT_001c0cf8 * (iVar13 + iVar11);
    iVar10 = iVar8 + iVar11 * DAT_001c0cf4;
    iVar8 = iVar8 + DAT_001c0cfc * iVar13;
    *(int *)(&stack0x00000000 + iVar2) = iVar10 + iVar14;
    *(int *)((int)&iStack_4 + iVar2) = iVar14 - iVar10;
    iVar10 = DAT_001c0d04 * iVar11 + DAT_001c0d00 * iVar13;
    *(int *)(&stack0xfffffff8 + iVar2) = iVar8 + iVar9;
    *(int *)(&stack0xffffffec + iVar2) = iVar12 - iVar10;
    *(int *)(&stack0xfffffff4 + iVar2) = iVar9 - iVar8;
    *(int *)(&stack0xfffffff0 + iVar2) = iVar12 + iVar10;
    iVar9 = piVar4[5];
    iVar12 = piVar4[1];
    iVar15 = (iVar9 + iVar12) * DAT_001c0d08;
    iVar13 = (iVar9 + iVar12) * DAT_001c0d0c;
    iVar8 = piVar4[3];
    iVar10 = piVar4[7];
    iVar11 = iVar10 * 0x2000;
    piVar4 = piVar4 + 8;
    iVar14 = DAT_001c0d10 * (iVar8 + iVar12);
    *(int *)(&stack0x0000000c + iVar2) = iVar14;
    *(int *)(&stack0xffffffe8 + iVar2) = iVar14 + iVar12 * DAT_001c0d14 + iVar11 + iVar13;
    *(int *)(&stack0x00000010 + iVar2) = iVar12 - iVar8;
    iVar14 = (iVar12 - iVar8) * DAT_001c0d18 + iVar10 * -0x2000;
    *(int *)(&stack0xffffffe4 + iVar2) = iVar12 * DAT_001c0d1c + iVar15 + iVar14;
    iVar10 = (iVar9 + iVar8) * DAT_001c0d24 + iVar10 * -0x2000;
    iVar12 = *(int *)(&stack0x0000000c + iVar2) + iVar8 * DAT_001c0d20 + iVar10;
    *(int *)(&stack0x0000000c + iVar2) = iVar10 + iVar13 + iVar9 * DAT_001c0d28;
    iVar10 = (iVar9 - iVar8) * DAT_001c0d2c;
    iVar13 = iVar10 + iVar15 + iVar9 * DAT_001c0d30 + iVar11;
    iVar10 = iVar14 + iVar10 + iVar8 * DAT_001c0d34;
    iVar11 = (*(int *)(&stack0x00000010 + iVar2) - iVar9) * 0x2000 + iVar11;
    puVar16 = (undefined *)(*piVar5 + *(int *)(&stack0x00000204 + iVar2));
    iVar8 = *(int *)(&stack0x00000000 + iVar2);
    *puVar16 = *(undefined *)
                (iVar7 + (*(int *)(&stack0xffffffe8 + iVar2) + iVar8 >> 0x12 & DAT_001c0d38));
    puVar16[0xd] = *(undefined *)
                    (iVar7 + (iVar8 - *(int *)(&stack0xffffffe8 + iVar2) >> 0x12 & uVar3));
    puVar16[1] = *(undefined *)
                  (iVar7 + (*(int *)(&stack0xfffffff8 + iVar2) + iVar12 >> 0x12 & uVar3));
    puVar16[0xc] = *(undefined *)
                    (iVar7 + (*(int *)(&stack0xfffffff8 + iVar2) - iVar12 >> 0x12 & uVar3));
    iVar8 = *(int *)(&stack0xfffffff0 + iVar2);
    puVar16[2] = *(undefined *)
                  (iVar7 + (*(int *)(&stack0x0000000c + iVar2) + iVar8 >> 0x12 & uVar3));
    puVar16[0xb] = *(undefined *)
                    (iVar7 + (iVar8 - *(int *)(&stack0x0000000c + iVar2) >> 0x12 & uVar3));
    iVar8 = *(int *)(&stack0x00000004 + iVar2);
    puVar16[3] = *(undefined *)(iVar7 + (iVar8 + iVar11 >> 0x12 & uVar3));
    puVar16[10] = *(undefined *)(iVar7 + (iVar8 - iVar11 >> 0x12 & uVar3));
    puVar16[4] = *(undefined *)
                  (iVar7 + (*(int *)(&stack0xffffffec + iVar2) + iVar13 >> 0x12 & uVar3));
    puVar16[9] = *(undefined *)
                  (iVar7 + (*(int *)(&stack0xffffffec + iVar2) - iVar13 >> 0x12 & uVar3));
    puVar16[5] = *(undefined *)
                  (iVar7 + (*(int *)(&stack0xfffffff4 + iVar2) + iVar10 >> 0x12 & uVar3));
    puVar16[8] = *(undefined *)
                  (iVar7 + (*(int *)(&stack0xfffffff4 + iVar2) - iVar10 >> 0x12 & uVar3));
    iVar8 = *(int *)(&stack0xffffffe4 + iVar2);
    iVar9 = *(int *)((int)&iStack_4 + iVar2);
    puVar16[6] = *(undefined *)(iVar7 + (iVar8 + iVar9 >> 0x12 & uVar3));
    puVar16[7] = *(undefined *)(iVar7 + (uVar3 & iVar9 - iVar8 >> 0x12));
    piVar5 = piVar5 + 1;
  } while (piVar4 != *(int **)(&stack0x00000008 + iVar2));
  return;
}


