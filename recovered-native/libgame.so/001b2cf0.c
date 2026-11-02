/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2cf0  Symbol: FUN_001b2cf0 */

void FUN_001b2cf0(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  byte **ppbVar16;
  int *piVar17;
  int *piVar18;
  
  iVar1 = DAT_001b2ef8;
  piVar14 = (int *)(&stack0xffffffdc + DAT_001b2ef8);
  piVar15 = (int *)(&stack0xffffffdc + DAT_001b2ef8);
  ppbVar16 = (byte **)(&stack0xffffffdc + DAT_001b2ef8);
  piVar17 = (int *)(&stack0xffffffdc + DAT_001b2ef8);
  piVar18 = (int *)(&stack0xffffffdc + DAT_001b2ef8);
  *(undefined4 *)(&stack0xffffffec + DAT_001b2ef8) = param_2;
  *(int *)(&stack0xffffffe8 + DAT_001b2ef8) = DAT_001b2efc + 0x1b2d0e;
  *(int *)(&stack0xfffffff0 + DAT_001b2ef8) = DAT_001b2f00;
  *(undefined4 *)(&stack0xffffffdc + DAT_001b2f04 + DAT_001b2ef8) =
       **(undefined4 **)(*(int *)(&stack0xffffffe8 + DAT_001b2ef8) + DAT_001b2f00);
  if (3 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)();
  }
  if (*(int *)(&stack0xffffffec + iVar1) == 0) {
    *(int *)(&stack0xffffffe0 + iVar1) = param_1[param_3 + 0x22];
  }
  else {
    *(int *)(&stack0xffffffe0 + iVar1) = param_1[param_3 + 0x1e];
  }
  if (*(int *)(&stack0xffffffe0 + iVar1) == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar5 = *param_4;
  if (iVar5 == 0) {
    iVar5 = (**(code **)param_1[1])(param_1,1,0x500);
    *param_4 = iVar5;
  }
  iVar10 = 0;
  iVar6 = 1;
  *piVar14 = (int)(&stack0x000003fc + iVar1);
  do {
    uVar8 = (uint)*(byte *)(*(int *)(&stack0xffffffe0 + iVar1) + iVar6);
    iVar12 = iVar10 + uVar8;
    if (0x100 < iVar12) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    if (uVar8 != 0) {
      puVar11 = (undefined *)(*piVar15 + iVar10);
      do {
        uVar8 = uVar8 - 1;
        *puVar11 = (char)iVar6;
        puVar11 = puVar11 + 1;
        iVar10 = iVar12;
      } while (uVar8 != 0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x11);
  pbVar7 = *ppbVar16;
  pbVar7[iVar10] = 0;
  uVar8 = (uint)*pbVar7;
  if (uVar8 != 0) {
    iVar12 = 0;
    iVar6 = 0;
    iVar13 = 0;
    *(undefined **)(&stack0xffffffe4 + iVar1) = &stack0xfffffff8 + iVar1;
    uVar9 = uVar8;
    while( true ) {
      uVar2 = iVar13 + uVar8;
      if (uVar9 == uVar2) {
        iVar3 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        piVar4 = (int *)(*(int *)(&stack0xffffffe4 + iVar1) + iVar3);
        pbVar7 = (byte *)(*piVar17 + iVar6);
        while( true ) {
          uVar9 = (uint)*pbVar7;
          *piVar4 = iVar12;
          piVar4 = piVar4 + 1;
          iVar12 = iVar12 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar9 != uVar2) break;
          iVar6 = iVar6 + 1;
        }
      }
      if (1 << (uVar2 & 0xff) <= iVar12) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        (**(code **)*param_1)(param_1);
      }
      if (uVar9 == 0) break;
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 << 1;
    }
  }
  memset((void *)(iVar5 + 0x400),0,0x100);
  uVar8 = 0xf;
  if (*(int *)(&stack0xffffffec + iVar1) == 0) {
    uVar8 = 0xff;
  }
  if (iVar10 != 0) {
    iVar6 = 0;
    do {
      uVar9 = (uint)*(byte *)(*(int *)(&stack0xffffffe0 + iVar1) + iVar6 + 0x11);
      if ((uVar8 < uVar9) || (*(char *)(iVar5 + uVar9 + 0x400) != '\0')) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        (**(code **)*param_1)(param_1);
      }
      *(undefined4 *)(iVar5 + uVar9 * 4) = *(undefined4 *)(&stack0xfffffff8 + iVar6 * 4 + iVar1);
      puVar11 = (undefined *)(*piVar18 + iVar6);
      iVar6 = iVar6 + 1;
      *(undefined *)(iVar5 + uVar9 + 0x400) = *puVar11;
    } while (iVar6 < iVar10);
  }
  if (*(int *)(&stack0xffffffdc + DAT_001b2f04 + iVar1) ==
      **(int **)(*(int *)(&stack0xffffffe8 + iVar1) + *(int *)(&stack0xfffffff0 + iVar1))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


