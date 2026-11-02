/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c1340  Symbol: jpeg_idct_16x16 */

void jpeg_idct_16x16(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined *puVar6;
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
  int iStack_4;
  
  iVar3 = DAT_001c1748;
  *(undefined4 *)(&stack0x0000001c + DAT_001c1748) = param_4;
  iVar8 = *(int *)(param_1 + 0x14c);
  piVar5 = *(int **)(param_2 + 0x54);
  piVar7 = (int *)(&stack0x00000024 + DAT_001c1748);
  *(int **)(&stack0x00000018 + DAT_001c1748) = piVar7;
  *(undefined **)(&stack0x00000014 + DAT_001c1748) = &stack0x00000044 + DAT_001c1748;
  *(int *)(&stack0x00000020 + DAT_001c1748) = iVar8 + 0x80;
  do {
    iVar9 = (int)param_3[0x20] * piVar5[0x20] * DAT_001c174c;
    iVar13 = DAT_001c1750 * (int)param_3[0x20] * piVar5[0x20];
    iVar8 = *piVar5 * (int)*param_3 * 0x2000 + 0x400;
    iVar10 = iVar8 + iVar9;
    iVar11 = iVar8 + iVar13;
    *(int *)(&stack0xffffffe8 + DAT_001c1748) = iVar8 - iVar9;
    *(int *)(&stack0xffffffe4 + DAT_001c1748) = iVar8 - iVar13;
    iVar13 = (int)param_3[0x30] * piVar5[0x30];
    iVar8 = piVar5[0x10] * (int)param_3[0x10];
    iVar14 = (iVar8 - iVar13) * DAT_001c1754;
    iVar9 = (iVar8 - iVar13) * DAT_001c1758;
    iVar17 = iVar13 * DAT_001c1760 + iVar9;
    *(int *)(&stack0x0000000c + DAT_001c1748) = iVar17 + iVar10;
    *(int *)(&stack0xfffffff0 + DAT_001c1748) = iVar10 - iVar17;
    iVar10 = iVar8 * DAT_001c1764 + iVar14;
    *(int *)(&stack0x00000008 + DAT_001c1748) = iVar10 + iVar11;
    iVar9 = DAT_001c175c * iVar8 + iVar9;
    *(int *)(&stack0xfffffff4 + DAT_001c1748) = iVar11 - iVar10;
    *(int *)(&stack0xfffffff8 + DAT_001c1748) = *(int *)(&stack0xffffffe4 + DAT_001c1748) - iVar9;
    iVar14 = DAT_001c1768 * iVar13 + iVar14;
    *(int *)(&stack0x00000004 + DAT_001c1748) = iVar9 + *(int *)(&stack0xffffffe4 + DAT_001c1748);
    *(int *)((int)&iStack_4 + DAT_001c1748) = *(int *)(&stack0xffffffe8 + DAT_001c1748) - iVar14;
    *(int *)(&stack0x00000000 + DAT_001c1748) = iVar14 + *(int *)(&stack0xffffffe8 + DAT_001c1748);
    *(int *)((int)&iStack_4 + DAT_001c1748 + -0x20) = piVar5[0x28] * (int)param_3[0x28];
    iVar10 = piVar5[0x38] * (int)param_3[0x38];
    iVar15 = (int)param_3[8] * piVar5[8];
    iVar13 = *(int *)((int)&iStack_4 + DAT_001c1748 + -0x20) + iVar15;
    iVar17 = iVar13 * DAT_001c176c;
    iVar13 = iVar13 * DAT_001c1770;
    *(int *)(&stack0xffffffec + DAT_001c1748) = (iVar15 - iVar10) * DAT_001c1774;
    psVar2 = param_3 + 0x18;
    piVar1 = piVar5 + 0x18;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    iVar14 = *piVar1 * (int)*psVar2;
    iVar12 = DAT_001c1778 * (iVar15 - iVar14);
    iVar8 = (iVar14 + iVar15) * DAT_001c177c;
    iVar9 = (iVar10 + iVar15) * DAT_001c1780;
    *(int *)(&stack0xffffffe4 + DAT_001c1748) = iVar8 + iVar13 + iVar15 * DAT_001c1784 + iVar9;
    iVar11 = *(int *)((int)&iStack_4 + DAT_001c1748 + -0x20);
    *(int *)(&stack0xffffffe0 + DAT_001c1748) =
         DAT_001c1788 * iVar15 + iVar17 + *(int *)(&stack0xffffffec + DAT_001c1748) + iVar12;
    iVar15 = (iVar11 + iVar14) * 0x470;
    iVar16 = *(int *)((int)&iStack_4 + DAT_001c1748 + -0x20);
    *(int *)(&stack0x00000010 + DAT_001c1748) = iVar16 * DAT_001c1790 + iVar13 + iVar15;
    iVar11 = (iVar16 - iVar14) * DAT_001c1798;
    *(int *)(&stack0xffffffe8 + DAT_001c1748) = iVar17 + iVar16 * DAT_001c1794 + iVar11;
    iVar16 = (iVar10 + iVar14) * DAT_001c179c;
    iVar15 = iVar8 + iVar15 + iVar14 * DAT_001c178c + iVar16;
    iVar13 = (iVar10 + iVar14) * DAT_001c17a4;
    iVar11 = iVar14 * DAT_001c17a8 + iVar13 + iVar12 + iVar11;
    iVar17 = (iVar10 + *(int *)((int)&iStack_4 + DAT_001c1748 + -0x20)) * DAT_001c17b0;
    iVar8 = DAT_001c1778 * (iVar10 - *(int *)((int)&iStack_4 + DAT_001c1748 + -0x20));
    iVar14 = *(int *)(&stack0x00000010 + DAT_001c1748) + iVar17;
    iVar13 = *(int *)(&stack0xffffffec + DAT_001c1748) + iVar10 * DAT_001c17ac + iVar13 + iVar8;
    iVar17 = iVar9 + iVar16 + iVar10 * DAT_001c17a0 + iVar17;
    iVar8 = *(int *)(&stack0xffffffe8 + DAT_001c1748) + iVar8;
    *piVar7 = *(int *)(&stack0xffffffe4 + DAT_001c1748) + *(int *)(&stack0x0000000c + DAT_001c1748)
              >> 0xb;
    piVar7[0x78] = *(int *)(&stack0x0000000c + DAT_001c1748) -
                   *(int *)(&stack0xffffffe4 + DAT_001c1748) >> 0xb;
    piVar7[8] = *(int *)(&stack0x00000008 + DAT_001c1748) + iVar15 >> 0xb;
    piVar7[0x70] = *(int *)(&stack0x00000008 + DAT_001c1748) - iVar15 >> 0xb;
    piVar7[0x10] = *(int *)(&stack0x00000004 + DAT_001c1748) + iVar14 >> 0xb;
    piVar7[0x68] = *(int *)(&stack0x00000004 + DAT_001c1748) - iVar14 >> 0xb;
    piVar7[0x18] = *(int *)(&stack0x00000000 + DAT_001c1748) + iVar17 >> 0xb;
    piVar7[0x60] = *(int *)(&stack0x00000000 + DAT_001c1748) - iVar17 >> 0xb;
    piVar7[0x20] = *(int *)((int)&iStack_4 + DAT_001c1748) + iVar13 >> 0xb;
    piVar7[0x58] = *(int *)((int)&iStack_4 + DAT_001c1748) - iVar13 >> 0xb;
    iVar9 = *(int *)(&stack0xfffffff8 + DAT_001c1748);
    piVar7[0x28] = iVar8 + iVar9 >> 0xb;
    piVar7[0x50] = iVar9 - iVar8 >> 0xb;
    piVar7[0x30] = *(int *)(&stack0xfffffff4 + DAT_001c1748) + iVar11 >> 0xb;
    piVar7[0x48] = *(int *)(&stack0xfffffff4 + DAT_001c1748) - iVar11 >> 0xb;
    iVar8 = *(int *)(&stack0xffffffe0 + DAT_001c1748);
    iVar9 = *(int *)(&stack0xfffffff0 + DAT_001c1748);
    piVar7[0x38] = iVar8 + iVar9 >> 0xb;
    piVar7[0x40] = iVar9 - iVar8 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (piVar7 != *(int **)(&stack0x00000014 + DAT_001c1748));
  piVar7 = *(int **)(&stack0x00000018 + DAT_001c1748);
  iVar8 = *(int *)(&stack0x00000020 + DAT_001c1748);
  *(int **)(&stack0x00000014 + DAT_001c1748) = piVar7 + 0x80;
  piVar5 = *(int **)(&stack0x0000001c + DAT_001c1748);
  do {
    uVar4 = DAT_001c1968;
    iVar10 = piVar7[4] * DAT_001c174c;
    iVar13 = DAT_001c1750 * piVar7[4];
    iVar9 = (*piVar7 + 0x10) * 0x2000;
    iVar17 = iVar9 + iVar10;
    iVar11 = iVar9 + iVar13;
    *(int *)(&stack0xffffffe8 + iVar3) = iVar9 - iVar10;
    *(int *)(&stack0xffffffe4 + iVar3) = iVar9 - iVar13;
    iVar9 = piVar7[6];
    iVar12 = piVar7[2];
    iVar10 = (iVar12 - iVar9) * DAT_001c1754;
    iVar13 = (iVar12 - iVar9) * DAT_001c1758;
    iVar15 = iVar9 * DAT_001c1760 + iVar13;
    *(int *)(&stack0x0000000c + iVar3) = iVar15 + iVar17;
    iVar14 = iVar12 * DAT_001c1764 + iVar10;
    *(int *)(&stack0x00000008 + iVar3) = iVar17 - iVar15;
    *(int *)(&stack0x00000004 + iVar3) = iVar14 + iVar11;
    *(int *)(&stack0x00000000 + iVar3) = iVar11 - iVar14;
    iVar13 = DAT_001c175c * iVar12 + iVar13;
    iVar10 = DAT_001c1768 * iVar9 + iVar10;
    *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0xffffffe4 + iVar3) - iVar13;
    *(int *)(&stack0xfffffff4 + iVar3) = iVar10 + *(int *)(&stack0xffffffe8 + iVar3);
    *(int *)(&stack0xfffffff0 + iVar3) = *(int *)(&stack0xffffffe8 + iVar3) - iVar10;
    *(int *)((int)&iStack_4 + iVar3) = iVar13 + *(int *)(&stack0xffffffe4 + iVar3);
    iVar10 = piVar7[5];
    iVar12 = piVar7[1];
    iVar15 = (iVar10 + iVar12) * DAT_001c176c;
    iVar14 = (iVar10 + iVar12) * DAT_001c1770;
    iVar9 = piVar7[7];
    *(int *)(&stack0xffffffec + iVar3) = (iVar12 - iVar9) * DAT_001c1774;
    iVar13 = piVar7[3];
    piVar7 = piVar7 + 8;
    *(int *)(&stack0x00000018 + iVar3) = DAT_001c1778 * (iVar12 - iVar13);
    iVar11 = (iVar13 + iVar12) * DAT_001c177c;
    iVar17 = (iVar9 + iVar12) * DAT_001c1780;
    *(int *)(&stack0xffffffe4 + iVar3) = iVar11 + iVar14 + iVar12 * DAT_001c1784 + iVar17;
    *(int *)(&stack0x0000001c + iVar3) =
         DAT_001c1788 * iVar12 + iVar15 + *(int *)(&stack0xffffffec + iVar3) +
         *(int *)(&stack0x00000018 + iVar3);
    iVar12 = (iVar10 + iVar13) * 0x470;
    *(int *)(&stack0x00000010 + iVar3) = iVar10 * DAT_001c1944 + iVar14 + iVar12;
    iVar14 = (iVar10 - iVar13) * DAT_001c1798;
    *(int *)(&stack0xffffffe8 + iVar3) = iVar15 + iVar10 * DAT_001c1948 + iVar14;
    iVar15 = (iVar9 + iVar13) * DAT_001c194c;
    iVar16 = iVar11 + iVar12 + iVar13 * DAT_001c1940 + iVar15;
    iVar11 = (iVar9 + iVar13) * DAT_001c1954;
    *(int *)(&stack0x00000018 + iVar3) =
         iVar13 * DAT_001c1958 + iVar11 + *(int *)(&stack0x00000018 + iVar3) + iVar14;
    iVar13 = (iVar9 + iVar10) * DAT_001c195c;
    iVar14 = *(int *)(&stack0x00000010 + iVar3) + iVar13;
    iVar10 = DAT_001c1964 * (iVar9 - iVar10);
    iVar12 = iVar9 * DAT_001c1960 + iVar11 + *(int *)(&stack0xffffffec + iVar3) + iVar10;
    iVar10 = *(int *)(&stack0xffffffe8 + iVar3) + iVar10;
    iVar11 = *(int *)(&stack0xffffffe4 + iVar3);
    iVar13 = iVar13 + iVar17 + iVar15 + iVar9 * DAT_001c1950;
    puVar6 = (undefined *)(*piVar5 + *(int *)(&stack0x0000024c + iVar3));
    *puVar6 = *(undefined *)
               (iVar8 + (iVar11 + *(int *)(&stack0x0000000c + iVar3) >> 0x12 & DAT_001c1968));
    puVar6[0xf] = *(undefined *)
                   (iVar8 + (*(int *)(&stack0x0000000c + iVar3) - iVar11 >> 0x12 & uVar4));
    puVar6[1] = *(undefined *)
                 (iVar8 + (*(int *)(&stack0x00000004 + iVar3) + iVar16 >> 0x12 & uVar4));
    puVar6[0xe] = *(undefined *)
                   (iVar8 + (*(int *)(&stack0x00000004 + iVar3) - iVar16 >> 0x12 & uVar4));
    puVar6[2] = *(undefined *)(iVar8 + (*(int *)((int)&iStack_4 + iVar3) + iVar14 >> 0x12 & uVar4));
    puVar6[0xd] = *(undefined *)
                   (iVar8 + (*(int *)((int)&iStack_4 + iVar3) - iVar14 >> 0x12 & uVar4));
    puVar6[3] = *(undefined *)
                 (iVar8 + (*(int *)(&stack0xfffffff4 + iVar3) + iVar13 >> 0x12 & uVar4));
    puVar6[0xc] = *(undefined *)
                   (iVar8 + (*(int *)(&stack0xfffffff4 + iVar3) - iVar13 >> 0x12 & uVar4));
    puVar6[4] = *(undefined *)
                 (iVar8 + (*(int *)(&stack0xfffffff0 + iVar3) + iVar12 >> 0x12 & uVar4));
    puVar6[0xb] = *(undefined *)
                   (iVar8 + (*(int *)(&stack0xfffffff0 + iVar3) - iVar12 >> 0x12 & uVar4));
    iVar9 = *(int *)(&stack0xfffffff8 + iVar3);
    puVar6[5] = *(undefined *)(iVar8 + (iVar10 + iVar9 >> 0x12 & uVar4));
    puVar6[10] = *(undefined *)(iVar8 + (iVar9 - iVar10 >> 0x12 & uVar4));
    iVar9 = *(int *)(&stack0x00000018 + iVar3);
    iVar10 = *(int *)(&stack0x00000000 + iVar3);
    puVar6[6] = *(undefined *)(iVar8 + (iVar9 + iVar10 >> 0x12 & uVar4));
    puVar6[9] = *(undefined *)(iVar8 + (iVar10 - iVar9 >> 0x12 & uVar4));
    iVar9 = *(int *)(&stack0x0000001c + iVar3);
    puVar6[7] = *(undefined *)(iVar8 + (iVar9 + *(int *)(&stack0x00000008 + iVar3) >> 0x12 & uVar4))
    ;
    puVar6[8] = *(undefined *)(iVar8 + (uVar4 & *(int *)(&stack0x00000008 + iVar3) - iVar9 >> 0x12))
    ;
    piVar5 = piVar5 + 1;
  } while (piVar7 != *(int **)(&stack0x00000014 + iVar3));
  return;
}


