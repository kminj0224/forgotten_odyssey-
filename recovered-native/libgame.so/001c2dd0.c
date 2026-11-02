/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c2dd0  Symbol: jpeg_idct_8x16 */

void jpeg_idct_8x16(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iStack_4;
  
  iVar3 = DAT_001c31d8;
  *(undefined4 *)(&stack0x0000001c + DAT_001c31d8) = param_4;
  iVar5 = *(int *)(param_1 + 0x14c);
  piVar8 = (int *)(&stack0x00000024 + DAT_001c31d8);
  piVar6 = *(int **)(param_2 + 0x54);
  *(int **)(&stack0x00000018 + DAT_001c31d8) = piVar8;
  *(undefined **)(&stack0x00000014 + DAT_001c31d8) = &stack0x00000044 + DAT_001c31d8;
  *(int *)(&stack0x00000020 + DAT_001c31d8) = iVar5 + 0x80;
  do {
    iVar9 = (int)param_3[0x20] * piVar6[0x20] * DAT_001c31dc;
    iVar14 = DAT_001c31e0 * (int)param_3[0x20] * piVar6[0x20];
    iVar5 = *piVar6 * (int)*param_3 * 0x2000 + 0x400;
    iVar10 = iVar5 + iVar9;
    iVar11 = iVar5 + iVar14;
    *(int *)(&stack0xffffffe8 + DAT_001c31d8) = iVar5 - iVar9;
    *(int *)(&stack0xffffffe4 + DAT_001c31d8) = iVar5 - iVar14;
    iVar14 = (int)param_3[0x30] * piVar6[0x30];
    iVar5 = piVar6[0x10] * (int)param_3[0x10];
    iVar15 = (iVar5 - iVar14) * DAT_001c31e4;
    iVar9 = (iVar5 - iVar14) * DAT_001c31e8;
    iVar18 = iVar14 * DAT_001c31f0 + iVar9;
    *(int *)(&stack0x0000000c + DAT_001c31d8) = iVar18 + iVar10;
    *(int *)(&stack0xffffffec + DAT_001c31d8) = iVar10 - iVar18;
    iVar10 = iVar5 * DAT_001c31f4 + iVar15;
    *(int *)(&stack0x00000008 + DAT_001c31d8) = iVar10 + iVar11;
    iVar9 = DAT_001c31ec * iVar5 + iVar9;
    *(int *)(&stack0xfffffff0 + DAT_001c31d8) = iVar11 - iVar10;
    *(int *)(&stack0xfffffff8 + DAT_001c31d8) = *(int *)(&stack0xffffffe4 + DAT_001c31d8) - iVar9;
    iVar15 = DAT_001c31f8 * iVar14 + iVar15;
    *(int *)(&stack0x00000004 + DAT_001c31d8) = iVar9 + *(int *)(&stack0xffffffe4 + DAT_001c31d8);
    *(int *)((int)&iStack_4 + DAT_001c31d8) = *(int *)(&stack0xffffffe8 + DAT_001c31d8) - iVar15;
    *(int *)(&stack0x00000000 + DAT_001c31d8) = iVar15 + *(int *)(&stack0xffffffe8 + DAT_001c31d8);
    *(int *)((int)&iStack_4 + DAT_001c31d8 + -0x20) = piVar6[0x28] * (int)param_3[0x28];
    iVar10 = piVar6[0x38] * (int)param_3[0x38];
    iVar16 = (int)param_3[8] * piVar6[8];
    iVar14 = *(int *)((int)&iStack_4 + DAT_001c31d8 + -0x20) + iVar16;
    iVar18 = iVar14 * DAT_001c31fc;
    iVar14 = iVar14 * DAT_001c3200;
    *(int *)(&stack0xffffffe8 + DAT_001c31d8) = (iVar16 - iVar10) * DAT_001c3204;
    psVar2 = param_3 + 0x18;
    piVar1 = piVar6 + 0x18;
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 1;
    iVar15 = *piVar1 * (int)*psVar2;
    iVar12 = DAT_001c3208 * (iVar16 - iVar15);
    iVar5 = (iVar15 + iVar16) * DAT_001c320c;
    iVar9 = (iVar10 + iVar16) * DAT_001c3210;
    *(int *)(&stack0xffffffe4 + DAT_001c31d8) = iVar5 + iVar14 + iVar16 * DAT_001c3214 + iVar9;
    iVar11 = *(int *)((int)&iStack_4 + DAT_001c31d8 + -0x20);
    *(int *)(&stack0xffffffe0 + DAT_001c31d8) =
         DAT_001c3218 * iVar16 + iVar18 + *(int *)(&stack0xffffffe8 + DAT_001c31d8) + iVar12;
    iVar16 = (iVar11 + iVar15) * 0x470;
    iVar17 = *(int *)((int)&iStack_4 + DAT_001c31d8 + -0x20);
    *(int *)(&stack0x00000010 + DAT_001c31d8) = iVar17 * DAT_001c3220 + iVar14 + iVar16;
    iVar11 = (iVar17 - iVar15) * DAT_001c3228;
    *(int *)(&stack0xfffffff4 + DAT_001c31d8) = iVar18 + iVar17 * DAT_001c3224 + iVar11;
    iVar17 = (iVar10 + iVar15) * DAT_001c322c;
    iVar16 = iVar5 + iVar16 + iVar15 * DAT_001c321c + iVar17;
    iVar14 = (iVar10 + iVar15) * DAT_001c3234;
    iVar11 = iVar15 * DAT_001c3238 + iVar14 + iVar12 + iVar11;
    iVar18 = (iVar10 + *(int *)((int)&iStack_4 + DAT_001c31d8 + -0x20)) * DAT_001c3240;
    iVar5 = DAT_001c3208 * (iVar10 - *(int *)((int)&iStack_4 + DAT_001c31d8 + -0x20));
    iVar15 = *(int *)(&stack0x00000010 + DAT_001c31d8) + iVar18;
    iVar14 = *(int *)(&stack0xffffffe8 + DAT_001c31d8) + iVar10 * DAT_001c323c + iVar14 + iVar5;
    iVar18 = iVar9 + iVar17 + iVar10 * DAT_001c3230 + iVar18;
    iVar5 = *(int *)(&stack0xfffffff4 + DAT_001c31d8) + iVar5;
    *piVar8 = *(int *)(&stack0xffffffe4 + DAT_001c31d8) + *(int *)(&stack0x0000000c + DAT_001c31d8)
              >> 0xb;
    piVar8[0x78] = *(int *)(&stack0x0000000c + DAT_001c31d8) -
                   *(int *)(&stack0xffffffe4 + DAT_001c31d8) >> 0xb;
    piVar8[8] = *(int *)(&stack0x00000008 + DAT_001c31d8) + iVar16 >> 0xb;
    piVar8[0x70] = *(int *)(&stack0x00000008 + DAT_001c31d8) - iVar16 >> 0xb;
    piVar8[0x10] = *(int *)(&stack0x00000004 + DAT_001c31d8) + iVar15 >> 0xb;
    piVar8[0x68] = *(int *)(&stack0x00000004 + DAT_001c31d8) - iVar15 >> 0xb;
    piVar8[0x18] = *(int *)(&stack0x00000000 + DAT_001c31d8) + iVar18 >> 0xb;
    piVar8[0x60] = *(int *)(&stack0x00000000 + DAT_001c31d8) - iVar18 >> 0xb;
    piVar8[0x20] = *(int *)((int)&iStack_4 + DAT_001c31d8) + iVar14 >> 0xb;
    piVar8[0x58] = *(int *)((int)&iStack_4 + DAT_001c31d8) - iVar14 >> 0xb;
    iVar9 = *(int *)(&stack0xfffffff8 + DAT_001c31d8);
    piVar8[0x28] = iVar5 + iVar9 >> 0xb;
    piVar8[0x50] = iVar9 - iVar5 >> 0xb;
    piVar8[0x30] = *(int *)(&stack0xfffffff0 + DAT_001c31d8) + iVar11 >> 0xb;
    piVar8[0x48] = *(int *)(&stack0xfffffff0 + DAT_001c31d8) - iVar11 >> 0xb;
    iVar5 = *(int *)(&stack0xffffffe0 + DAT_001c31d8);
    iVar9 = *(int *)(&stack0xffffffec + DAT_001c31d8);
    piVar8[0x38] = iVar5 + iVar9 >> 0xb;
    piVar8[0x40] = iVar9 - iVar5 >> 0xb;
    piVar8 = piVar8 + 1;
  } while (piVar8 != *(int **)(&stack0x00000014 + DAT_001c31d8));
  piVar8 = *(int **)(&stack0x00000018 + DAT_001c31d8);
  iVar5 = *(int *)(&stack0x00000020 + DAT_001c31d8);
  *(int **)(&stack0xfffffff0 + DAT_001c31d8) = piVar8 + 0x80;
  piVar6 = *(int **)(&stack0x0000001c + DAT_001c31d8);
  do {
    uVar4 = DAT_001c3270;
    iVar9 = DAT_001c31e0 * (piVar8[6] + piVar8[2]);
    iVar10 = iVar9 + DAT_001c3248 * piVar8[2];
    iVar9 = iVar9 + DAT_001c3244 * piVar8[6];
    iVar15 = (*piVar8 + 0x10 + piVar8[4]) * 0x2000;
    iVar14 = ((*piVar8 + 0x10) - piVar8[4]) * 0x2000;
    iVar12 = iVar15 + iVar10;
    *(int *)(&stack0xfffffff8 + iVar3) = iVar14 + iVar9;
    *(int *)(&stack0xfffffff4 + iVar3) = iVar14 - iVar9;
    *(int *)(&stack0xffffffe8 + iVar3) = iVar15 - iVar10;
    iVar11 = piVar8[1];
    iVar9 = piVar8[5];
    iVar10 = piVar8[3];
    iVar18 = piVar8[7];
    iVar14 = DAT_001c324c * (iVar9 + iVar11 + iVar10 + iVar18);
    piVar8 = piVar8 + 8;
    iVar16 = DAT_001c3250 * (iVar10 + iVar18) + iVar14;
    iVar14 = DAT_001c3254 * (iVar9 + iVar11) + iVar14;
    iVar15 = DAT_001c3258 * (iVar18 + iVar11);
    *(int *)(&stack0xffffffe4 + iVar3) = iVar18 * DAT_001c3260 + iVar15 + iVar16;
    iVar11 = DAT_001c325c * iVar11 + iVar15 + iVar14;
    iVar15 = (iVar10 + iVar9) * DAT_001c3264;
    iVar14 = iVar14 + iVar9 * DAT_001c3268 + iVar15;
    iVar16 = iVar16 + DAT_001c326c * iVar10 + iVar15;
    puVar7 = (undefined *)(*piVar6 + *(int *)(&stack0x0000024c + iVar3));
    uVar13 = iVar12 - iVar11 >> 0x12 & DAT_001c3270;
    *puVar7 = *(undefined *)(iVar5 + (iVar11 + iVar12 >> 0x12 & DAT_001c3270));
    puVar7[7] = *(undefined *)(iVar5 + uVar13);
    puVar7[1] = *(undefined *)
                 (iVar5 + (*(int *)(&stack0xfffffff8 + iVar3) + iVar16 >> 0x12 & uVar4));
    puVar7[6] = *(undefined *)
                 (iVar5 + (*(int *)(&stack0xfffffff8 + iVar3) - iVar16 >> 0x12 & uVar4));
    puVar7[2] = *(undefined *)
                 (iVar5 + (*(int *)(&stack0xfffffff4 + iVar3) + iVar14 >> 0x12 & uVar4));
    puVar7[5] = *(undefined *)
                 (iVar5 + (*(int *)(&stack0xfffffff4 + iVar3) - iVar14 >> 0x12 & uVar4));
    iVar10 = *(int *)(&stack0xffffffe4 + iVar3);
    iVar9 = *(int *)(&stack0xffffffe8 + iVar3);
    puVar7[3] = *(undefined *)(iVar5 + (iVar10 + iVar9 >> 0x12 & uVar4));
    puVar7[4] = *(undefined *)(iVar5 + (uVar4 & iVar9 - iVar10 >> 0x12));
    piVar6 = piVar6 + 1;
  } while (piVar8 != *(int **)(&stack0xfffffff0 + iVar3));
  return;
}


