/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a3934  Symbol: FUN_001a3934 */

int FUN_001a3934(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    iVar2 = 1;
  }
  else {
    local_14 = param_2[2] - param_2[1];
    local_18 = param_3[1];
    if (0xb4 < local_18) {
      local_18 = 0xb4;
    }
    if (local_14 <= local_18 * 2) {
      FUN_00189b88(param_2);
      local_14 = (param_2[2] + -1) - param_2[1];
    }
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      iVar2 = (**(code **)(param_1 + 4))(*param_2 + param_2[1],&local_14,*param_3,&local_18);
      FUN_0018a7b0(param_3,local_18);
      iVar1 = param_2[1];
      param_2[1] = local_14 + iVar1;
      *(undefined *)(*param_2 + local_14 + iVar1) = 0;
      if ((iVar2 != -3) && (iVar2 != -1)) {
        return iVar2;
      }
      return 0;
    }
    iVar2 = 2;
  }
  return -iVar2;
}


