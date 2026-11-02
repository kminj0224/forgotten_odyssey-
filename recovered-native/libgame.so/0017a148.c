/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a148  Symbol: FUN_0017a148 */

int * FUN_0017a148(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_0017a1ac + 0x17a154;
  piVar2 = (int *)0x0;
  if (param_2 != 0) {
    if (**(int **)(iVar1 + DAT_0017a1b0) != 0) {
      (***(code ***)(iVar1 + DAT_0017a1b8))
                (**(undefined4 **)(iVar1 + DAT_0017a1b4),iVar1 + DAT_0017a1bc,DAT_0017a1b8,
                 **(code ***)(iVar1 + DAT_0017a1b8),param_4);
    }
    piVar2 = (int *)FUN_001795e0(param_1);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
      piVar2[1] = 0;
      iVar1 = **(int **)(param_2 + 0x10);
      piVar2[3] = iVar1;
      piVar2[4] = **(int **)(param_2 + 0x10);
      piVar2[5] = iVar1 + *(int *)(*(int *)(param_2 + 0x10) + 4);
      if (param_3 != 0) {
        FUN_00179fd4(param_1,param_3);
      }
    }
  }
  return piVar2;
}


