/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d2f04  Symbol: FUN_001d2f04 */

int * FUN_001d2f04(int *param_1)

{
  int *piVar1;
  int iVar2;
  char local_14 [8];
  
  param_1[1] = 0;
  FUN_001d2644(local_14,param_1,1);
  if (local_14[0] != '\0') {
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78);
    if ((uint)piVar1[2] < (uint)piVar1[3]) {
      piVar1[2] = piVar1[2] + 1;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x28))();
      if (iVar2 == -1) {
        iVar2 = (int)param_1 + *(int *)(*param_1 + -0xc);
        FUN_001d0d2c(iVar2,*(uint *)(iVar2 + 0x14) | 2);
        return param_1;
      }
    }
    param_1[1] = 1;
  }
  return param_1;
}


