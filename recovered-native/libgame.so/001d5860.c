/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d5860  Symbol: FUN_001d5860 */

int * FUN_001d5860(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char local_14 [8];
  
  param_1[1] = 0;
  FUN_001d4f84(local_14,param_1,1);
  if (local_14[0] != '\0') {
    piVar3 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x7c);
    piVar2 = (int *)piVar3[2];
    if (piVar2 < (int *)piVar3[3]) {
      iVar1 = *piVar2;
      piVar3[2] = (int)(piVar2 + 1);
    }
    else {
      iVar1 = (**(code **)(*piVar3 + 0x28))(piVar3);
    }
    if (iVar1 == -1) {
      iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
      FUN_001d1404(iVar1,*(uint *)(iVar1 + 0x14) | 2);
    }
    else {
      param_1[1] = 1;
    }
  }
  return param_1;
}


