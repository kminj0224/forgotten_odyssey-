/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ea434  Symbol: FUN_001ea434 */

int * FUN_001ea434(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char local_18 [4];
  int *local_14;
  
  FUN_001ea1f4(local_18,param_1);
  if (local_18[0] != '\0') {
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x7c);
    piVar3 = (int *)piVar1[5];
    if (piVar3 < (int *)piVar1[6]) {
      *piVar3 = param_2;
      piVar1[5] = (int)(piVar3 + 1);
    }
    else {
      param_2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_2);
    }
    if (param_2 == -1) {
      iVar4 = (int)param_1 + *(int *)(*param_1 + -0xc);
      FUN_001d1404(iVar4,*(uint *)(iVar4 + 0x14) | 1);
    }
  }
  piVar1 = local_14;
  iVar4 = *(int *)(*local_14 + -0xc);
  if (((((*(uint *)((int)local_14 + iVar4 + 0xc) & 0x2000) != 0) &&
       (iVar2 = std::uncaught_exception(), iVar2 == 0)) &&
      (piVar1 = *(int **)((int)piVar1 + iVar4 + 0x7c), piVar1 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == -1)) {
    iVar4 = (int)local_14 + *(int *)(*local_14 + -0xc);
    FUN_001d1404(iVar4,*(uint *)(iVar4 + 0x14) | 1);
  }
  return param_1;
}


