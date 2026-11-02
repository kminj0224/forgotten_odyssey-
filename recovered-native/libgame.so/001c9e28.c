/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c9e28  Symbol: FUN_001c9e28 */

int FUN_001c9e28(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((uint)param_1[5] <= (uint)param_1[4]) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x34))
                    (param_1,0xffffffff,param_1[5],*(code **)(*param_1 + 0x34),param_4);
  if (iVar1 != -1) {
    iVar1 = 0;
  }
  return iVar1;
}


