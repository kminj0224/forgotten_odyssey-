/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ea598  Symbol: FUN_001ea598 */

int * FUN_001ea598(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined uStack_19;
  char local_18 [4];
  int *local_14;
  
  FUN_001ea1f4(local_18,param_1);
  if (local_18[0] == '\0') {
    if (param_2 != 0) goto LAB_001ea608;
LAB_001ea664:
    uVar4 = 1;
  }
  else {
    if (param_2 == 0) goto LAB_001ea664;
    iVar1 = FUN_002063d0(param_2,*(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x7c),
                         &uStack_19);
    if (iVar1 != 0) goto LAB_001ea608;
    uVar4 = 4;
  }
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d1404(iVar1,uVar4 | *(uint *)(iVar1 + 0x14));
LAB_001ea608:
  piVar3 = local_14;
  iVar1 = *(int *)(*local_14 + -0xc);
  if (((((*(uint *)((int)local_14 + iVar1 + 0xc) & 0x2000) != 0) &&
       (iVar2 = std::uncaught_exception(), iVar2 == 0)) &&
      (piVar3 = *(int **)((int)piVar3 + iVar1 + 0x7c), piVar3 != (int *)0x0)) &&
     (iVar1 = (**(code **)(*piVar3 + 0x18))(), iVar1 == -1)) {
    iVar1 = (int)local_14 + *(int *)(*local_14 + -0xc);
    FUN_001d1404(iVar1,*(uint *)(iVar1 + 0x14) | 1);
  }
  return param_1;
}


