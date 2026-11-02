/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018cd2c  Symbol: FUN_0018cd2c */

int FUN_0018cd2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x18)) {
    iVar1 = FUN_0018cb30(param_1,param_2,param_3,1);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      iVar3 = iVar1;
    }
    else if (iVar2 != iVar1) {
      *(int *)(iVar2 + 0x18) = iVar1;
      *(int *)(iVar1 + 0x1c) = iVar2;
    }
    iVar2 = iVar1;
  }
  return iVar3;
}


