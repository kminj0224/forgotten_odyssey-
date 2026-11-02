/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00197ac4  Symbol: FUN_00197ac4 */

void FUN_00197ac4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uStack_4;
  
  iVar1 = DAT_00197c9c;
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_00197c9c);
  uVar2 = **(undefined4 **)(DAT_00197c94 + 0x197ad0 + DAT_00197c98);
  *(int *)(&stack0xfffffff4 + DAT_00197c9c) = DAT_00197c94 + 0x197ad0;
  *(undefined4 *)(&stack0xffffffec + DAT_00197ca0 + DAT_00197c9c) = uVar2;
  iVar3 = param_1[9];
  if ((500 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) &&
     (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) <= DAT_00197ca4)) {
    FUN_0017a1c0();
  }
  iVar3 = FUN_001978a4(param_1,&stack0x0000000c + iVar1);
  iVar6 = 0;
  *(int **)(&stack0x00000004 + iVar1) = param_1 + 0x2e;
  *(int *)(&stack0x00000008 + iVar1) = *(int *)(&stack0xfffffff4 + iVar1) + DAT_00197ca8;
  while (((*(uint *)((int)&uStack_4 + iVar1) = iVar3 - 9U, iVar3 - 9U < 2 || (iVar3 == 0xd)) ||
         (0x1f < iVar3))) {
    if ((iVar3 == 0x3c) &&
       (iVar4 = *(int *)(param_1[9] + 0x10), *(int *)(&stack0xfffffff8 + iVar1) = iVar4,
       *(char *)(iVar4 + 1) == '/')) {
      if (param_1[0x48] == 0) {
        if (((byte)(*(char *)(*(int *)(&stack0xfffffff8 + iVar1) + 2) + 0x9fU) < 0x1a) ||
           ((byte)(*(char *)(*(int *)(&stack0xfffffff8 + iVar1) + 2) + 0xbfU) < 0x1a))
        goto LAB_00197c24;
      }
      else {
        uVar2 = **(undefined4 **)(&stack0x00000004 + iVar1);
        *(undefined4 *)(&stack0x00000000 + iVar1) = uVar2;
        uVar2 = FUN_0019c49c(uVar2);
        iVar4 = FUN_0019c3dc(*(undefined4 *)(&stack0x00000000 + iVar1),
                             *(int *)(&stack0xfffffff8 + iVar1) + 2,uVar2);
        if (iVar4 == 0) goto LAB_00197c24;
        uVar2 = **(undefined4 **)(&stack0x00000004 + iVar1);
        *puVar7 = 0;
        FUN_00195ba4(param_1,0x4c,*(undefined4 *)(&stack0x00000008 + iVar1),uVar2);
      }
    }
    if (*(int *)(&stack0x0000000c + iVar1) == 1) {
      (&stack0x00000010)[iVar6 + iVar1] = (char)iVar3;
      iVar6 = iVar6 + 1;
    }
    else {
      iVar3 = FUN_0017abb4(*(int *)(&stack0x0000000c + iVar1),&stack0x00000010 + iVar6 + iVar1,iVar3
                          );
      iVar6 = iVar6 + iVar3;
    }
    if (DAT_00197cac < iVar6) {
      pcVar5 = *(code **)(*param_1 + 100);
      if ((pcVar5 != (code *)0x0) || (pcVar5 = *(code **)(*param_1 + 0x44), pcVar5 != (code *)0x0))
      {
        (*pcVar5)(param_1[1],&stack0x00000010 + iVar1,iVar6);
      }
      iVar6 = 0;
    }
    if ((param_1[0x49] == 0) &&
       (iVar3 = param_1[9], *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) < 0xfa)) {
      FUN_0017a2bc(iVar3,0xfa);
    }
    iVar3 = param_1[9];
    if (**(char **)(iVar3 + 0x10) == '\n') {
      iVar4 = 1;
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      iVar3 = param_1[9];
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x20) + 1;
    }
    *(int *)(iVar3 + 0x20) = iVar4;
    param_1[0x2c] = 0;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + *(int *)(&stack0x0000000c + iVar1);
    param_1[0x32] = param_1[0x32] + 1;
    iVar3 = FUN_001978a4(param_1,&stack0x0000000c + iVar1);
  }
  if (iVar3 == 0xd) goto LAB_00197c50;
LAB_00197c24:
  if (((1 < *(uint *)((int)&uStack_4 + iVar1)) && (iVar3 < 0x20)) &&
     ((iVar3 != 0 || (param_1[0x49] == 0)))) {
    FUN_0019784c(param_1,*(int *)(&stack0xfffffff4 + iVar1) + DAT_00197cb0,iVar3);
    FUN_0017a4a4(param_1);
  }
LAB_00197c50:
  if ((((iVar6 != 0) && (iVar3 = *param_1, iVar3 != 0)) && (param_1[0x35] == 0)) &&
     ((pcVar5 = *(code **)(iVar3 + 100), pcVar5 != (code *)0x0 ||
      (pcVar5 = *(code **)(iVar3 + 0x44), pcVar5 != (code *)0x0)))) {
    (*pcVar5)(param_1[1],&stack0x00000010 + iVar1,iVar6);
  }
  if (*(int *)(&stack0xffffffec + DAT_00197ca0 + iVar1) ==
      **(int **)(*(int *)(&stack0xfffffff4 + iVar1) + DAT_00197c98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


