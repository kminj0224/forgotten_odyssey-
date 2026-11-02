/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ae410  Symbol: FUN_001ae410 */

void FUN_001ae410(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  byte *pbStack_4;
  
  iVar3 = DAT_001ae72c;
  *(undefined4 *)(&stack0x00000000 + DAT_001ae72c) = param_1;
  puVar4 = *(undefined4 **)(DAT_001ae738 + 0x1ae42e + DAT_001ae730);
  *(int *)(&stack0x00000014 + DAT_001ae72c) = DAT_001ae738 + 0x1ae42e;
  *(int *)(&stack0x00000024 + DAT_001ae72c) = DAT_001ae730;
  *(undefined4 *)((int)&pbStack_4 + DAT_001ae734 + DAT_001ae72c + -0x20) = *puVar4;
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(&stack0x00000000 + DAT_001ae72c) + 0x1e0) + 0x18);
  *(int *)(&stack0x0000001c + DAT_001ae72c) = param_3 >> 3;
  iVar9 = (param_2 >> 2) * 0x20;
  *(undefined4 *)(&stack0x00000028 + DAT_001ae72c) = uVar5;
  *(int *)(&stack0x0000000c + DAT_001ae72c) = iVar9 + 4;
  *(int *)(&stack0x00000018 + DAT_001ae72c) = param_4 >> 2;
  iVar11 = (param_4 >> 2) * 0x20;
  *(int *)(&stack0x00000020 + DAT_001ae72c) = param_2 >> 2;
  *(int *)(&stack0x00000008 + DAT_001ae72c) = *(int *)(&stack0x0000001c + DAT_001ae72c) * 0x20 + 2;
  *(int *)(&stack0x00000004 + DAT_001ae72c) = iVar11 + 4;
  iVar9 = iVar9 + 0x1c;
  iVar15 = *(int *)(*(int *)(&stack0x00000000 + DAT_001ae72c) + 0x84);
  iVar20 = *(int *)(&stack0x0000001c + DAT_001ae72c) * 0x20 + 0x1e;
  *(int *)(&stack0xfffffff4 + DAT_001ae72c) = *(int *)(&stack0x0000000c + DAT_001ae72c) + iVar9 >> 1
  ;
  *(int *)(&stack0xfffffff8 + DAT_001ae72c) =
       iVar20 + *(int *)(&stack0x00000008 + DAT_001ae72c) >> 1;
  iVar11 = iVar11 + 0x1c;
  *(int *)((int)&pbStack_4 + DAT_001ae72c) = *(int *)(&stack0x00000004 + DAT_001ae72c) + iVar11 >> 1
  ;
  if (iVar15 < 1) {
    iVar11 = 0;
    *(undefined **)(&stack0xfffffff0 + DAT_001ae72c) = &stack0x00000030 + DAT_001ae72c;
  }
  else {
    puVar4 = *(undefined4 **)(*(int *)(&stack0x00000000 + DAT_001ae72c) + 0x88);
    iVar21 = *(int *)(&stack0x00000004 + DAT_001ae72c);
    uVar5 = *puVar4;
    uVar12 = puVar4[2];
    *(undefined4 *)(&stack0xffffffe8 + DAT_001ae72c) = puVar4[1];
    *(undefined4 *)(&stack0xffffffe4 + DAT_001ae72c) = uVar12;
    *(undefined **)(&stack0xfffffff0 + DAT_001ae72c) = &stack0x00000030 + DAT_001ae72c;
    iVar17 = 0;
    *(undefined4 *)(&stack0xffffffec + DAT_001ae72c) = uVar5;
    *(int *)(&stack0xffffffe0 + DAT_001ae72c) = iVar15;
    *(undefined4 *)(&stack0x00000010 + DAT_001ae72c) = DAT_001ae73c;
    iVar15 = *(int *)(&stack0x00000008 + DAT_001ae72c);
    do {
      uVar18 = (uint)*(byte *)(*(int *)(&stack0xffffffec + iVar3) + iVar17);
      if ((int)uVar18 < *(int *)(&stack0x0000000c + iVar3)) {
        iVar14 = (uVar18 - *(int *)(&stack0x0000000c + iVar3)) * 2;
        iVar14 = iVar14 * iVar14;
        iVar16 = (uVar18 - iVar9) * 2;
        iVar16 = iVar16 * iVar16;
LAB_001ae4d2:
        uVar8 = (uint)*(byte *)(*(int *)(&stack0xffffffe8 + iVar3) + iVar17);
        if (iVar15 <= (int)uVar8) goto LAB_001ae55c;
LAB_001ae4da:
        iVar2 = (uVar8 - iVar15) * 3;
        iVar14 = iVar14 + iVar2 * iVar2;
        iVar2 = (uVar8 - iVar20) * 3;
        iVar16 = iVar16 + iVar2 * iVar2;
LAB_001ae4fe:
        uVar18 = (uint)*(byte *)(*(int *)(&stack0xffffffe4 + iVar3) + iVar17);
        if (iVar21 <= (int)uVar18) goto LAB_001ae58c;
LAB_001ae506:
        iVar14 = iVar14 + (uVar18 - iVar21) * (uVar18 - iVar21);
LAB_001ae512:
        iVar16 = iVar16 + (uVar18 - iVar11) * (uVar18 - iVar11);
      }
      else {
        if ((int)uVar18 <= iVar9) {
          if (*(int *)(&stack0xfffffff4 + iVar3) < (int)uVar18) {
            iVar16 = (uVar18 - *(int *)(&stack0x0000000c + iVar3)) * 2;
            iVar16 = iVar16 * iVar16;
            iVar14 = 0;
          }
          else {
            iVar16 = (uVar18 - iVar9) * 2;
            iVar16 = iVar16 * iVar16;
            iVar14 = 0;
          }
          goto LAB_001ae4d2;
        }
        iVar16 = (uVar18 - *(int *)(&stack0x0000000c + iVar3)) * 2;
        iVar16 = iVar16 * iVar16;
        uVar8 = (uint)*(byte *)(*(int *)(&stack0xffffffe8 + iVar3) + iVar17);
        iVar14 = (uVar18 - iVar9) * 2;
        iVar14 = iVar14 * iVar14;
        if ((int)uVar8 < iVar15) goto LAB_001ae4da;
LAB_001ae55c:
        if ((int)uVar8 <= iVar20) {
          if (*(int *)(&stack0xfffffff8 + iVar3) < (int)uVar8) {
            iVar2 = (uVar8 - iVar15) * 3;
            iVar16 = iVar16 + iVar2 * iVar2;
          }
          else {
            iVar2 = (uVar8 - iVar20) * 3;
            iVar16 = iVar16 + iVar2 * iVar2;
          }
          goto LAB_001ae4fe;
        }
        iVar2 = (uVar8 - iVar20) * 3;
        iVar14 = iVar14 + iVar2 * iVar2;
        iVar2 = (uVar8 - iVar15) * 3;
        iVar16 = iVar16 + iVar2 * iVar2;
        uVar18 = (uint)*(byte *)(*(int *)(&stack0xffffffe4 + iVar3) + iVar17);
        if ((int)uVar18 < iVar21) goto LAB_001ae506;
LAB_001ae58c:
        if (iVar11 < (int)uVar18) {
          iVar14 = iVar14 + (uVar18 - iVar11) * (uVar18 - iVar11);
          iVar16 = iVar16 + (uVar18 - iVar21) * (uVar18 - iVar21);
        }
        else {
          if ((int)uVar18 <= *(int *)((int)&pbStack_4 + iVar3)) goto LAB_001ae512;
          iVar16 = iVar16 + (uVar18 - iVar21) * (uVar18 - iVar21);
        }
      }
      *(int *)(*(int *)(&stack0xfffffff0 + iVar3) + iVar17 * 4) = iVar14;
      if (iVar16 < *(int *)(&stack0x00000010 + iVar3)) {
        *(int *)(&stack0x00000010 + iVar3) = iVar16;
      }
      iVar14 = *(int *)(&stack0xffffffe0 + iVar3);
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar14);
    iVar9 = *(int *)(&stack0x00000010 + iVar3);
    iVar20 = *(int *)(&stack0xfffffff0 + iVar3);
    iVar15 = 0;
    iVar11 = 0;
    do {
      if (*(int *)(iVar20 + iVar15 * 4) <= iVar9) {
        *(char *)((int)&pbStack_4 + iVar11 + DAT_001ae740 + iVar3 + -0x20) = (char)iVar15;
        iVar11 = iVar11 + 1;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar14);
  }
  uVar5 = DAT_001ae73c;
  puVar4 = *(undefined4 **)(&stack0xfffffff0 + iVar3);
  do {
    *puVar4 = uVar5;
    puVar4 = puVar4 + 1;
  } while (puVar4 != (undefined4 *)(&stack0x00000230 + iVar3));
  *(int *)(&stack0xffffffec + iVar3) = (int)&pbStack_4 + DAT_001ae744 + iVar3 + -0x20;
  if (iVar11 == 0) {
LAB_001ae756:
    iVar20 = *(int *)(&stack0x00000018 + iVar3);
    iVar15 = *(int *)(&stack0x0000001c + iVar3);
    iVar11 = *(int *)(&stack0xffffffec + iVar3);
    piVar19 = (int *)(*(int *)(&stack0x00000028 + iVar3) + *(int *)(&stack0x00000020 + iVar3) * 0x10
                     );
    iVar9 = DAT_001ae7d0 + iVar3;
    do {
      iVar21 = iVar11 + 0x20;
      iVar17 = iVar20 * 4 + iVar15 * 0x100;
      do {
        psVar10 = (short *)(*piVar19 + iVar17 * 2);
        iVar14 = 0;
        do {
          pbVar6 = (byte *)(iVar11 + iVar14);
          iVar14 = iVar14 + 1;
          *psVar10 = *pbVar6 + 1;
          psVar10 = psVar10 + 1;
        } while (iVar14 != 4);
        iVar11 = iVar11 + 4;
        iVar17 = iVar17 + 0x20;
      } while (iVar11 != iVar21);
      piVar19 = piVar19 + 1;
    } while (iVar11 != (int)&pbStack_4 + iVar9 + -0x20);
    if (*(int *)((int)&pbStack_4 + DAT_001ae7d0 + iVar3 + -0x20) ==
        **(int **)(*(int *)(&stack0x00000014 + iVar3) + *(int *)(&stack0x00000024 + iVar3))) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar9 = (int)&pbStack_4 + DAT_001ae740 + iVar3 + -0x20;
  *(int *)((int)&pbStack_4 + iVar3) = iVar9;
  *(int *)(&stack0x00000010 + iVar3) = iVar9 + iVar11;
LAB_001ae644:
  piVar19 = *(int **)(*(int *)(&stack0x00000000 + iVar3) + 0x88);
  bVar1 = **(byte **)((int)&pbStack_4 + iVar3);
  uVar18 = (uint)bVar1;
  iVar11 = (*(int *)(&stack0x0000000c + iVar3) - (uint)*(byte *)(*piVar19 + uVar18)) * 2;
  iVar20 = *(int *)(&stack0x00000008 + iVar3) - (uint)*(byte *)(piVar19[1] + uVar18);
  iVar9 = iVar20 * 3;
  iVar15 = *(int *)(&stack0x00000004 + iVar3) - (uint)*(byte *)(piVar19[2] + uVar18);
  *(int *)(&stack0xffffffe4 + iVar3) = (iVar11 + 8) * 0x20;
  iVar11 = iVar9 * iVar9 + iVar15 * iVar15 + iVar11 * iVar11;
  iVar9 = (iVar15 + 4) * 0x10;
  iVar20 = iVar20 * 0x48;
  *(int *)(&stack0xfffffff4 + iVar3) = *(int *)(&stack0xffffffe4 + iVar3) + 0x600;
  *(int *)(&stack0xfffffff8 + iVar3) = iVar20 + 0x90;
  *(int *)(&stack0xffffffe8 + iVar3) = iVar11;
  *(undefined4 *)(&stack0xffffffe0 + iVar3) = *(undefined4 *)(&stack0xffffffec + iVar3);
LAB_001ae6b6:
  pbVar6 = *(byte **)(&stack0xffffffe0 + iVar3);
  iVar15 = *(int *)(&stack0xfffffff8 + iVar3);
  piVar19 = (int *)(*(int *)(&stack0xfffffff0 + iVar3) +
                   ((int)pbVar6 - *(int *)(&stack0xffffffec + iVar3)) * 4);
LAB_001ae6ca:
  pbVar7 = pbVar6;
  iVar17 = iVar11;
  iVar21 = iVar9;
  piVar13 = piVar19;
  if (*piVar19 <= iVar11) goto joined_r0x001ae6e2;
  do {
    *piVar13 = iVar17;
    *pbVar7 = bVar1;
joined_r0x001ae6e2:
    do {
      if (iVar21 == iVar9 + 0x180) {
        piVar19 = piVar19 + 4;
        pbVar6 = pbVar6 + 4;
        if (iVar15 != iVar20 + 0x870) {
          iVar11 = iVar11 + iVar15;
          iVar15 = iVar15 + 0x120;
          goto LAB_001ae6ca;
        }
        iVar15 = *(int *)(&stack0xffffffe4 + iVar3);
        *(int *)(&stack0xffffffe0 + iVar3) = *(int *)(&stack0xffffffe0 + iVar3) + 0x20;
        if (iVar15 == *(int *)(&stack0xfffffff4 + iVar3)) {
          iVar9 = *(int *)((int)&pbStack_4 + iVar3) + 1;
          *(int *)((int)&pbStack_4 + iVar3) = iVar9;
          if (iVar9 != *(int *)(&stack0x00000010 + iVar3)) goto LAB_001ae644;
          goto LAB_001ae756;
        }
        iVar11 = iVar15 + *(int *)(&stack0xffffffe8 + iVar3);
        *(int *)(&stack0xffffffe4 + iVar3) = iVar15 + 0x200;
        *(int *)(&stack0xffffffe8 + iVar3) = iVar11;
        goto LAB_001ae6b6;
      }
      piVar13 = piVar13 + 1;
      pbVar7 = pbVar7 + 1;
      iVar17 = iVar17 + iVar21;
      iVar21 = iVar21 + 0x80;
    } while (*piVar13 <= iVar17);
  } while( true );
}


