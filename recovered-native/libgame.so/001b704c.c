/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b704c  Symbol: FUN_001b704c */

void FUN_001b704c(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  
  iVar2 = DAT_001b72d4;
  piVar18 = (int *)(&stack0xffffffdc + DAT_001b72d4);
  *(undefined4 *)(&stack0xffffffec + DAT_001b72d4) = param_2;
  *(int *)(&stack0xffffffdc + DAT_001b72d4) = DAT_001b72dc + 0x1b706a;
  puVar10 = *(undefined4 **)(*(int *)(&stack0xffffffdc + DAT_001b72d4) + DAT_001b72d8);
  *(int *)(&stack0xfffffff0 + DAT_001b72d4) = DAT_001b72d8;
  *(undefined4 *)(&stack0xffffffdc + DAT_001b72e0 + DAT_001b72d4) = *puVar10;
  if (3 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(&stack0xffffffec + iVar2) == 0) {
    iVar16 = param_1[param_3 + 0x31];
  }
  else {
    iVar16 = param_1[param_3 + 0x2d];
  }
  if (iVar16 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar13 = *param_4;
  if (iVar13 == 0) {
    iVar13 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar13;
  }
  *(int *)(iVar13 + 0x8c) = iVar16;
  pbVar4 = &stack0x000003fc + iVar2;
  iVar11 = 1;
  iVar14 = 0;
  while( true ) {
    uVar3 = (uint)*(byte *)(iVar16 + iVar11);
    *(uint *)(&stack0xffffffe0 + iVar2) = iVar14 + uVar3;
    if (0x100 < (int)(iVar14 + uVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    if (uVar3 == 0) {
      *(int *)(&stack0xffffffe0 + iVar2) = iVar14;
    }
    else {
      pbVar15 = pbVar4 + iVar14;
      do {
        uVar3 = uVar3 - 1;
        *pbVar15 = (byte)iVar11;
        pbVar15 = pbVar15 + 1;
      } while (uVar3 != 0);
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 0x11) break;
    iVar14 = *(int *)(&stack0xffffffe0 + iVar2);
  }
  pbVar4[*(int *)(&stack0xffffffe0 + iVar2)] = 0;
  iVar14 = 0;
  *(undefined **)(&stack0xffffffe8 + iVar2) = &stack0xfffffff8 + iVar2;
  iVar17 = 0;
  *(uint *)(&stack0xffffffe4 + iVar2) = (uint)*pbVar4;
  iVar11 = 0;
  while( true ) {
    iVar8 = *(int *)(&stack0xffffffe4 + iVar2);
    uVar3 = (uint)pbVar4[iVar11];
    if (uVar3 == 0) break;
    if (uVar3 == iVar8 + iVar17) {
      iVar5 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      piVar6 = (int *)(*(int *)(&stack0xffffffe8 + iVar2) + iVar5);
      pbVar15 = pbVar4 + iVar11;
      while( true ) {
        bVar1 = *pbVar15;
        *piVar6 = iVar14;
        piVar6 = piVar6 + 1;
        pbVar15 = pbVar15 + 1;
        iVar14 = iVar14 + 1;
        if (bVar1 != uVar3) break;
        iVar11 = iVar11 + 1;
      }
    }
    if (1 << (iVar8 + iVar17 & 0xffU) <= iVar14) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    iVar14 = iVar14 << 1;
    iVar17 = iVar17 + 1;
  }
  iVar14 = 1;
  iVar17 = 0;
  iVar11 = iVar13;
  do {
    if (*(char *)(iVar16 + iVar14) == '\0') {
      *(undefined4 *)(iVar11 + 4) = 0xffffffff;
    }
    else {
      *(int *)(iVar11 + 0x4c) = iVar17 - *(int *)(&stack0xfffffff8 + iVar17 * 4 + iVar2);
      iVar17 = iVar17 + (uint)*(byte *)(iVar16 + iVar14);
      *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(&stack0xfffffff8 + (iVar17 + -1) * 4 + iVar2);
    }
    iVar14 = iVar14 + 1;
    iVar11 = iVar11 + 4;
  } while (iVar14 != 0x11);
  *(undefined4 *)(iVar13 + 0x44) = DAT_001b72e4;
  memset((void *)(iVar13 + 0x90),0,0x400);
  *(int **)(&stack0xffffffe8 + iVar2) = param_1;
  iVar14 = 0;
  *(undefined **)(&stack0xffffffe4 + iVar2) = &stack0xfffffff8 + iVar2;
  iVar11 = 1;
  do {
    uVar3 = (uint)*(byte *)(iVar16 + iVar11);
    if (uVar3 != 0) {
      iVar17 = 1 << (8U - iVar11 & 0xff);
      piVar6 = (int *)(*(int *)(&stack0xffffffe4 + iVar2) + iVar14 * 4);
      puVar12 = (undefined *)(iVar16 + iVar14 + 0x11);
      iVar8 = 1;
      do {
        if (0 < iVar17) {
          iVar5 = *piVar6 << (8U - iVar11 & 0xff);
          piVar7 = (int *)((iVar5 + 0x24) * 4 + iVar13);
          puVar9 = (undefined *)(iVar5 + 0x490 + iVar13);
          iVar5 = iVar17;
          do {
            *piVar7 = iVar11;
            piVar7 = piVar7 + 1;
            iVar5 = iVar5 + -1;
            *puVar9 = *puVar12;
            puVar9 = puVar9 + 1;
          } while (iVar5 != 0);
          uVar3 = (uint)*(byte *)(iVar16 + iVar11);
        }
        iVar8 = iVar8 + 1;
        iVar14 = iVar14 + 1;
        piVar6 = piVar6 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar8 <= (int)uVar3);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 9);
  piVar6 = *(int **)(&stack0xffffffe8 + iVar2);
  if (*(int *)(&stack0xffffffec + iVar2) != 0) {
    iVar13 = 0;
    while (iVar13 < *(int *)(&stack0xffffffe0 + iVar2)) {
      if (*(byte *)(iVar16 + iVar13 + 0x11) < 0x10) {
        iVar13 = iVar13 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        *(undefined4 *)(*piVar6 + 0x14) = 9;
        (**(code **)*piVar6)(piVar6);
      }
    }
  }
  if (*(int *)(&stack0xffffffdc + DAT_001b72e0 + iVar2) !=
      **(int **)(*piVar18 + *(int *)(&stack0xfffffff0 + iVar2))) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


