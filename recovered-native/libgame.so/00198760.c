/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00198760  Symbol: FUN_00198760 */

void FUN_00198760(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  iVar2 = DAT_001989bc;
  iVar9 = DAT_001989b4 + 0x19876c;
  piVar11 = (int *)(&stack0xffffffec + DAT_001989bc);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_001989bc);
  *(undefined4 *)(&stack0x000003e8 + DAT_001989bc) = **(undefined4 **)(iVar9 + DAT_001989b8);
  iVar3 = param_1[9];
  if ((500 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) &&
     (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) <= DAT_001989c0)) {
    FUN_0017a1c0();
  }
  uVar4 = FUN_001978a4(param_1,&stack0xfffffff4 + iVar2);
  iVar10 = 0;
  iVar3 = 0;
  *(int *)(&stack0xfffffff0 + iVar2) = iVar9 + DAT_001989c4;
  do {
    if (uVar4 == 0x3c) {
      if (param_1[0x2c] != 0x3c) goto LAB_0019894c;
LAB_001987b8:
      uVar7 = (uint)(uVar4 < 0x20) - ((int)uVar4 >> 0x1f);
    }
    else {
      if (uVar4 == 0x26) {
        if (param_1[0x2c] == 0x26) goto LAB_001987b8;
        goto LAB_0019894c;
      }
      if (uVar4 == 0) {
LAB_0019894c:
        if (iVar3 == 0) {
          if (uVar4 == 0) {
            param_1[0x2b] = -1;
          }
        }
        else {
          puVar1 = &stack0xfffffff8 + iVar2;
          puVar1[iVar3] = 0;
          if ((*param_1 != 0) && (param_1[0x35] == 0)) {
            iVar10 = FUN_00197208(param_1,puVar1,iVar3);
            if (iVar10 == 0) {
              FUN_00196374(param_1);
              pcVar8 = *(code **)(*param_1 + 0x44);
            }
            else {
              pcVar8 = *(code **)(*param_1 + 0x48);
            }
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(param_1[1],puVar1,iVar3);
            }
          }
        }
        if (*(int *)(&stack0x000003e8 + iVar2) == **(int **)(iVar9 + DAT_001989b8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if ((int)uVar4 < 0x100) {
        if ((1 < uVar4 - 9) && (uVar4 != 0xd)) goto LAB_001987b8;
LAB_001987d8:
        uVar7 = 0;
      }
      else {
        if ((uVar4 + DAT_001989c8 <= DAT_001989cc) || (uVar4 - 0x100 <= DAT_001989d0))
        goto LAB_001987d8;
        uVar7 = (uint)(DAT_001989d8 < uVar4 + DAT_001989d4);
      }
    }
    if ((uVar7 & 0xff) == 0) {
      if (*(int *)(&stack0xfffffff4 + iVar2) == 1) {
        (&stack0xfffffff8)[iVar3 + iVar2] = (char)uVar4;
        iVar3 = iVar3 + 1;
      }
      else {
        iVar5 = FUN_0017abb4(*(int *)(&stack0xfffffff4 + iVar2),&stack0xfffffff8 + iVar3 + iVar2);
        iVar3 = iVar3 + iVar5;
      }
    }
    else {
      FUN_0019784c(param_1,*(undefined4 *)(&stack0xfffffff0 + iVar2));
    }
    if (DAT_001989dc < iVar3) {
      if ((*param_1 != 0) && (param_1[0x35] == 0)) {
        *piVar11 = (int)(&stack0xfffffff8 + iVar2);
        iVar5 = FUN_00197208(param_1,&stack0xfffffff8 + iVar2,iVar3);
        if (iVar5 == 0) {
          FUN_00196374(param_1);
          pcVar8 = *(code **)(*param_1 + 0x44);
        }
        else {
          pcVar8 = *(code **)(*param_1 + 0x48);
        }
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(param_1[1],*puVar12,iVar3);
        }
      }
      iVar3 = 0;
    }
    iVar5 = param_1[9];
    if (**(char **)(iVar5 + 0x10) == '\n') {
      *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
      iVar5 = param_1[9];
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x20) + 1;
    }
    *(int *)(iVar5 + 0x20) = iVar6;
    param_1[0x2c] = 0;
    iVar10 = iVar10 + 1;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + *(int *)(&stack0xfffffff4 + iVar2);
    param_1[0x32] = param_1[0x32] + 1;
    if (100 < iVar10) {
      iVar10 = param_1[9];
      if ((500 < *(int *)(iVar10 + 0x10) - *(int *)(iVar10 + 0xc)) &&
         (*(int *)(iVar10 + 0x14) - *(int *)(iVar10 + 0x10) <= DAT_001989c0)) {
        FUN_0017a1c0();
      }
      if ((param_1[0x49] == 0) &&
         (iVar10 = param_1[9], *(int *)(iVar10 + 0x14) - *(int *)(iVar10 + 0x10) < 0xfa)) {
        FUN_0017a2bc(iVar10,0xfa);
      }
      iVar10 = 0;
    }
    uVar4 = FUN_001978a4(param_1,&stack0xfffffff4 + iVar2);
    if (uVar4 == 0) {
      iVar5 = param_1[9];
      if ((500 < *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc)) &&
         (*(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) <= DAT_001989c0)) {
        FUN_0017a1c0();
      }
      if ((param_1[0x49] == 0) &&
         (iVar5 = param_1[9], *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) < 0xfa)) {
        FUN_0017a2bc(iVar5,0xfa);
      }
      uVar4 = FUN_001978a4(param_1,&stack0xfffffff4 + iVar2);
    }
  } while( true );
}


