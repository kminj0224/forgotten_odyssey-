/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e668  Symbol: FUN_0015e668 */

int FUN_0015e668(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  byte local_19 [5];
  
  iVar1 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0x1c),param_2,local_19,1);
  if (iVar1 == 1) {
    iVar1 = 0;
    *param_3 = (uint)local_19[0];
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
    if (iVar1 != 0) {
      iVar1 = -1;
    }
  }
  return iVar1;
}


