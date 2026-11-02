/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7948  Symbol: Array_Call */

/* Array_Call(_System*) */

void Array_Call(_System *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iStack_4;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  
  iVar1 = DAT_000c7b04;
  piVar15 = (int *)(&stack0xffffffec + DAT_000c7b04);
  piVar16 = (int *)(&stack0xffffffec + DAT_000c7b04);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_000c7b04);
  piVar18 = (int *)(&stack0xffffffec + DAT_000c7b04);
  piVar19 = (int *)(&stack0xffffffec + DAT_000c7b04);
  piVar20 = (int *)(&stack0xffffffec + DAT_000c7b04);
  *(_System **)(&stack0xfffffff4 + DAT_000c7b04) = param_1;
  iVar2 = 0;
  puVar5 = (undefined4 *)(&stack0x0000000c + DAT_000c7b04);
  do {
    *(undefined4 *)(&stack0x00000004 + iVar2 + DAT_000c7b04) = 0;
    iVar13 = iVar2 + DAT_000c7b04;
    iVar2 = iVar2 + 0x14;
    *(undefined4 *)(&stack0x00000008 + iVar13) = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar5 + 5;
  } while (iVar2 != 2000);
  piVar8 = *(int **)(DAT_000c7b08 + 0xc797e);
  iVar13 = *piVar8;
  *(int *)((int)&iStack_4 + DAT_000c7b04) = iVar13;
  piVar3 = (int *)(*(int *)(&stack0xfffffff4 + DAT_000c7b04) + iVar13 * 2000 + DAT_000c7b10);
  iVar2 = 0;
  *(int *)(&stack0x00000000 + DAT_000c7b04) = iVar13 * DAT_000c7b0c;
  do {
    if ((piVar3[-3] == 0xa9) && (*piVar3 <= DAT_000c7b14)) {
      iVar13 = *(int *)((int)&iStack_4 + iVar1) * 2000;
      *(int *)(&stack0xfffffff8 + iVar1) = iVar2;
      piVar4 = (int *)(*(int *)(&stack0xfffffff4 + iVar1) + (iVar2 + 1) * 0x14 + iVar13 +
                      DAT_000c7b10);
      *piVar15 = iVar2;
      while (*(int *)(&stack0xfffffff8 + iVar1) != 99) {
        if (piVar4[-3] == 0xa9) {
          iVar2 = *(int *)(&stack0x00000000 + iVar1);
          iVar9 = *(int *)((int)piVar3 + iVar13 + iVar2);
          *(int *)(&stack0xfffffff0 + iVar1) = iVar9;
          if (iVar9 <= DAT_000c7b14) {
            iVar9 = *(int *)(&stack0x00000000 + iVar1);
            *(int *)((int)piVar3 + iVar13 + iVar2) = *(int *)(&stack0xfffffff0 + iVar1) + *piVar4;
            *(undefined4 *)((int)piVar4 + iVar13 + iVar9) = 0;
            iVar9 = *(int *)((int)piVar3 + iVar13 + iVar2);
            *(int *)(&stack0xfffffff0 + iVar1) = iVar9;
            if (DAT_000c7b18 < iVar9) {
              iVar9 = iVar9 + DAT_000c7b1c;
              *piVar4 = iVar9;
              *(int *)((int)piVar3 + iVar13 + iVar2) =
                   *(int *)((int)piVar3 + iVar13 + iVar2) - iVar9;
            }
            else {
              piVar4[-3] = 0;
              *piVar4 = 0;
            }
          }
        }
        piVar4 = piVar4 + 5;
        *(int *)(&stack0xfffffff8 + iVar1) = *(int *)(&stack0xfffffff8 + iVar1) + 1;
      }
      iVar2 = *piVar16;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 5;
  } while (iVar2 != 100);
  iVar2 = *piVar8;
  iVar13 = 0;
  *(int *)(&stack0xfffffff8 + iVar1) = *(int *)(&stack0xfffffff4 + iVar1) + iVar2 * 2000;
  puVar5 = (undefined4 *)(*(int *)(&stack0xfffffff4 + iVar1) + iVar2 * 2000 + DAT_000c7b20);
  *puVar17 = 0;
  *(int **)(&stack0xfffffff0 + iVar1) = piVar8;
  do {
    iVar9 = *(int *)(&stack0xfffffff8 + iVar1);
    piVar3 = (int *)(iVar9 + iVar13 + DAT_000c7b24);
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      iVar6 = *piVar18;
      *(int *)(&stack0x00000004 + iVar6 * 0x14 + iVar1) = iVar2;
      *(int *)(&stack0x00000000 + iVar1) = iVar6 * 0x14;
      puVar12 = (undefined4 *)(iVar9 + iVar13 + DAT_000c7b28);
      iVar2 = *(int *)(&stack0x00000000 + iVar1) + iVar1;
      uVar10 = *puVar5;
      *(undefined4 *)(&stack0x00000008 + iVar2) = *puVar12;
      *(undefined4 *)(&stack0x0000000c + iVar2) = uVar10;
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      *piVar3 = 0;
      *puVar12 = 0;
      iVar9 = *piVar19;
      *(undefined4 *)(&stack0x00000010 + iVar2) = uVar10;
      *(undefined4 *)(&stack0x00000014 + iVar2) = uVar11;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *piVar20 = iVar9 + 1;
    }
    iVar13 = iVar13 + 0x14;
    puVar5 = puVar5 + 5;
  } while (iVar13 != 2000);
  iVar13 = 0;
  iVar2 = 0;
  iVar9 = **(int **)(&stack0xfffffff0 + iVar1);
  do {
    puVar5 = (undefined4 *)(&stack0x0000000c + iVar1);
    iVar6 = 0;
    do {
      if ((*(int *)(&stack0x00000004 + iVar6 + iVar1) != 0) &&
         (*(int *)(&stack0x00000004 + iVar6 + iVar1) == iVar13)) {
        iVar7 = iVar2 * 0x14;
        iVar2 = iVar2 + 1;
        iVar7 = *(int *)(&stack0xfffffff4 + iVar1) + iVar7 + iVar9 * 2000;
        piVar3 = (int *)(iVar7 + DAT_000c7b24);
        iVar14 = *(int *)(&stack0x00000008 + iVar6 + iVar1);
        *piVar3 = iVar13;
        piVar3[1] = iVar14;
        puVar12 = (undefined4 *)(iVar7 + DAT_000c7b20);
        *puVar12 = *puVar5;
        puVar12[1] = puVar5[1];
        *(undefined4 *)(iVar7 + DAT_000c7b2c) = puVar5[2];
      }
      iVar6 = iVar6 + 0x14;
      puVar5 = puVar5 + 5;
    } while (iVar6 != 2000);
    iVar13 = iVar13 + 1;
  } while (iVar13 != 200);
  return;
}


