/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e8198  Symbol: FUN_001e8198 */

int FUN_001e8198(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar3 = *(int *)(*piVar2 + -0xc);
  if (((((*(uint *)((int)piVar2 + iVar3 + 0xc) & 0x2000) != 0) &&
       (iVar1 = std::uncaught_exception(), iVar1 == 0)) &&
      (piVar2 = *(int **)((int)piVar2 + iVar3 + 0x78), piVar2 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar2 + 0x18))(), iVar3 == -1)) {
    piVar2 = *(int **)(param_1 + 4);
    iVar3 = (int)piVar2 + *(int *)(*piVar2 + -0xc);
    FUN_001d0d2c(iVar3,*(uint *)(iVar3 + 0x14) | 1,*piVar2,piVar2,param_4);
    return param_1;
  }
  return param_1;
}


