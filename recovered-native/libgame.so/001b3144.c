/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b3144  Symbol: FUN_001b3144 */

void FUN_001b3144(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *__s;
  int iVar11;
  int iVar12;
  int *__s_00;
  int iVar13;
  char cVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  
  iVar4 = DAT_001b33a8;
  piVar15 = (int *)(&stack0xffffffdc + DAT_001b33a8);
  piVar16 = (int *)(&stack0xffffffdc + DAT_001b33a8);
  piVar17 = (int *)(&stack0xffffffdc + DAT_001b33a8);
  piVar18 = (int *)(&stack0xffffffdc + DAT_001b33a8);
  *(int *)(&stack0xffffffec + DAT_001b33a8) = DAT_001b33ac + 0x1b315c;
  uVar7 = **(undefined4 **)(DAT_001b33ac + 0x1b315c + DAT_001b33b0);
  *(int *)(&stack0xfffffff0 + DAT_001b33a8) = DAT_001b33b0;
  __s_00 = (int *)(&stack0x000007fc + DAT_001b33a8);
  *(undefined4 *)(&stack0xffffffdc + DAT_001b33b4 + DAT_001b33a8) = uVar7;
  __s = (int *)(&stack0xffffffdc + DAT_001b33b8 + DAT_001b33a8);
  memset(__s_00,0,0x21);
  memset(__s,0,DAT_001b33bc);
  piVar1 = (int *)(&stack0xfffffff4 + iVar4);
  iVar10 = -1;
  piVar9 = piVar1;
  do {
    *piVar9 = -1;
    piVar9 = piVar9 + 1;
  } while (__s != piVar9);
  param_3[0x100] = 1;
  iVar11 = DAT_001b33c4;
  *(undefined4 *)(&stack0xffffffe8 + iVar4) = 0x100;
  iVar8 = 0;
  iVar6 = DAT_001b33c0;
  if (-1 < *(int *)(&stack0xffffffe8 + iVar4)) goto LAB_001b3284;
  while( true ) {
    iVar6 = -1;
    iVar13 = 0;
    iVar8 = DAT_001b33c0;
    piVar9 = param_3;
    while( true ) {
      iVar12 = *piVar9;
      if (((iVar12 != 0) && (iVar13 != iVar10)) && (iVar12 <= iVar8)) {
        iVar8 = iVar12;
        iVar6 = iVar13;
      }
      if (iVar13 + 1 == iVar11) break;
      iVar13 = iVar13 + 1;
      piVar9 = piVar9 + 1;
    }
    piVar9 = __s;
    if (iVar6 < 0) break;
    *piVar15 = iVar10 * 4;
    *(int **)(&stack0xffffffe0 + iVar4) = param_3 + iVar6;
    param_3[iVar10] = param_3[iVar6] + param_3[iVar10];
    **(undefined4 **)(&stack0xffffffe0 + iVar4) = 0;
    iVar10 = *piVar16;
    *(int *)((int)__s + iVar10) = *(int *)((int)__s + iVar10) + 1;
    iVar10 = *(int *)((int)piVar1 + iVar10);
    if (-1 < iVar10) {
      do {
        iVar8 = iVar10 * 4;
        __s[iVar10] = __s[iVar10] + 1;
        iVar10 = piVar1[iVar10];
      } while (-1 < iVar10);
      *piVar17 = iVar8;
    }
    iVar10 = __s[iVar6];
    *(int *)((int)piVar1 + *piVar18) = iVar6;
    __s[iVar6] = iVar10 + 1;
    for (iVar10 = piVar1[iVar6]; -1 < iVar10; iVar10 = piVar1[iVar10]) {
      __s[iVar10] = __s[iVar10] + 1;
    }
    iVar10 = -1;
    iVar6 = DAT_001b33c0;
    for (iVar8 = 0; iVar8 <= *(int *)(&stack0xffffffe8 + iVar4); iVar8 = iVar8 + 1) {
LAB_001b3284:
      iVar13 = param_3[iVar8];
      if ((iVar13 != 0) && (iVar13 <= iVar6)) {
        iVar6 = iVar13;
        iVar10 = iVar8;
      }
    }
  }
  do {
    iVar10 = *piVar9;
    if (iVar10 != 0) {
      if (0x20 < iVar10) {
        *(undefined4 *)(*param_1 + 0x14) = 0x28;
        (**(code **)*param_1)(param_1);
        iVar10 = *piVar9;
      }
      *(char *)((int)__s_00 + iVar10) = *(char *)((int)__s_00 + iVar10) + '\x01';
    }
    piVar9 = piVar9 + 1;
  } while (__s_00 != piVar9);
  pcVar5 = &stack0xffffffdc + DAT_001b33c8 + iVar4;
  iVar10 = 0x1f;
  do {
    cVar14 = pcVar5[2];
    iVar11 = iVar10 + -1;
    if (cVar14 != '\0') {
      do {
        cVar2 = *pcVar5;
        iVar6 = iVar11;
        pcVar3 = (char *)((int)__s_00 + iVar10 + -2);
        while (cVar2 == '\0') {
          iVar6 = iVar6 + -1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + -1;
        }
        pcVar5[2] = cVar14 + -2;
        pcVar5[1] = pcVar5[1] + '\x01';
        *(char *)((int)__s_00 + iVar6 + 1) = *(char *)((int)__s_00 + iVar6 + 1) + '\x02';
        *(char *)((int)__s_00 + iVar6) = *(char *)((int)__s_00 + iVar6) + -1;
        cVar14 = pcVar5[2];
      } while (cVar14 != '\0');
    }
    pcVar5 = pcVar5 + -1;
    iVar10 = iVar11;
  } while (iVar11 != 0xf);
  iVar10 = 0x10;
  cVar14 = (&stack0x0000080c)[iVar4];
  while (cVar14 == '\0') {
    iVar10 = iVar10 + -1;
    cVar14 = *(char *)((int)__s_00 + iVar10);
  }
  *(char *)((int)__s_00 + iVar10) = cVar14 + -1;
  iVar10 = *(int *)(&stack0x00000800 + iVar4);
  iVar11 = *(int *)(&stack0x00000804 + iVar4);
  *param_2 = *__s_00;
  param_2[1] = iVar10;
  param_2[2] = iVar11;
  iVar10 = 1;
  param_2[3] = *(int *)(&stack0x00000808 + iVar4);
  iVar11 = 0;
  *(undefined *)(param_2 + 4) = (&stack0x0000080c)[iVar4];
  do {
    iVar6 = 0;
    do {
      while (__s[iVar6] != iVar10) {
        iVar6 = iVar6 + 1;
        if (iVar6 == 0x100) goto LAB_001b3374;
      }
      *(char *)((int)param_2 + iVar11 + 0x11) = (char)iVar6;
      iVar6 = iVar6 + 1;
      iVar11 = iVar11 + 1;
    } while (iVar6 != 0x100);
LAB_001b3374:
    iVar10 = iVar10 + 1;
    if (iVar10 == 0x21) {
      param_2[0x45] = 0;
      if (*(int *)(&stack0xffffffdc + DAT_001b33b4 + iVar4) !=
          **(int **)(*(int *)(&stack0xffffffec + iVar4) + *(int *)(&stack0xfffffff0 + iVar4))) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


