/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017acd0  Symbol: FUN_0017acd0 */

int FUN_0017acd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0017ad28 + 0x17ace0;
  if (*(int *)(param_1 + 0x150) != 0) {
    if (*(int *)(param_1 + 0x148) < param_2) {
      (***(code ***)(iVar2 + DAT_0017ad2c))
                (**(undefined4 **)(iVar2 + DAT_0017ad30),iVar2 + DAT_0017ad34);
      param_2 = *(int *)(param_1 + 0x148);
    }
    if (0 < *(int *)(param_1 + 0x148)) {
      for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
        iVar1 = *(int *)(param_1 + 0x148) + -1;
        *(int *)(param_1 + 0x148) = iVar1;
        *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x150)) = 0;
      }
      return param_2;
    }
  }
  return 0;
}


