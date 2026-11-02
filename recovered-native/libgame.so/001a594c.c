/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a594c  Symbol: FUN_001a594c */

undefined4 FUN_001a594c(int **param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = DAT_001a59ac + 0x1a5958;
  if (param_1 != (int **)0x0) {
    piVar3 = (int *)(*param_1)[1];
    while ((piVar3 != *param_1 &&
           (iVar1 = (*(code *)param_1[2])(piVar3[2],param_2,param_1[2],*param_1,param_4), 0 < iVar1)
           )) {
      piVar3 = (int *)piVar3[1];
    }
    piVar2 = (int *)(***(code ***)(iVar4 + DAT_001a59b0))(0xc);
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar3;
      piVar2[2] = param_2;
      *piVar2 = iVar4;
      iVar4 = *piVar3;
      *piVar3 = (int)piVar2;
      *(int **)(iVar4 + 4) = piVar2;
      piVar2[1] = (int)piVar3;
      return 0;
    }
    (***(code ***)(iVar4 + DAT_001a59b8))
              (**(undefined4 **)(iVar4 + DAT_001a59b4),iVar4 + DAT_001a59bc);
  }
  return 1;
}


