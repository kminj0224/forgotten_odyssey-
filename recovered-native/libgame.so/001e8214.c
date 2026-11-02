/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e8214  Symbol: FUN_001e8214 */

int * FUN_001e8214(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char local_18 [4];
  int *local_14;
  
  FUN_001e811c(local_18,param_1);
  if ((local_18[0] != '\0') &&
     (piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78),
     iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2,param_3), param_3 != iVar2)) {
    iVar2 = (int)param_1 + *(int *)(*param_1 + -0xc);
    FUN_001d0d2c(iVar2,*(uint *)(iVar2 + 0x14) | 1);
  }
  piVar1 = local_14;
  iVar2 = *(int *)(*local_14 + -0xc);
  if (((((*(uint *)((int)local_14 + iVar2 + 0xc) & 0x2000) != 0) &&
       (iVar3 = std::uncaught_exception(), iVar3 == 0)) &&
      (piVar1 = *(int **)((int)piVar1 + iVar2 + 0x78), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x18))(), iVar2 == -1)) {
    iVar2 = (int)local_14 + *(int *)(*local_14 + -0xc);
    FUN_001d0d2c(iVar2,*(uint *)(iVar2 + 0x14) | 1);
  }
  return param_1;
}


