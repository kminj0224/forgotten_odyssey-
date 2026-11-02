/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e835c  Symbol: FUN_001e835c */

int * FUN_001e835c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char local_18 [4];
  int *local_14;
  
  FUN_001e811c(local_18,param_1);
  if (local_18[0] != '\0') {
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78);
    if ((undefined *)piVar1[5] < (undefined *)piVar1[6]) {
      *(undefined *)piVar1[5] = (char)param_2;
      piVar1[5] = piVar1[5] + 1;
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x34))(piVar1,param_2);
      if (iVar3 == -1) {
        iVar3 = (int)param_1 + *(int *)(*param_1 + -0xc);
        FUN_001d0d2c(iVar3,*(uint *)(iVar3 + 0x14) | 1);
      }
    }
  }
  piVar1 = local_14;
  iVar3 = *(int *)(*local_14 + -0xc);
  if (((((*(uint *)((int)local_14 + iVar3 + 0xc) & 0x2000) != 0) &&
       (iVar2 = std::uncaught_exception(), iVar2 == 0)) &&
      (piVar1 = *(int **)((int)piVar1 + iVar3 + 0x78), piVar1 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == -1)) {
    iVar3 = (int)local_14 + *(int *)(*local_14 + -0xc);
    FUN_001d0d2c(iVar3,*(uint *)(iVar3 + 0x14) | 1);
  }
  return param_1;
}


