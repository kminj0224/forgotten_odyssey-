/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c828  Symbol: FUN_0018c828 */

int FUN_0018c828(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0018a0c4(param_2,param_3);
  iVar3 = DAT_0018c890 + 0x18c842;
  if (iVar1 == 0) {
    if (((param_3 != 0) && (param_1 != 0)) &&
       (iVar2 = FUN_0019ccb4(*(undefined4 *)(param_1 + 0x50),param_3), iVar2 == 0)) {
      (***(code ***)(iVar3 + DAT_0018c894))(param_3);
    }
  }
  else {
    *(int *)(iVar1 + 0x20) = param_1;
    if (param_4 != 0) {
      iVar3 = FUN_0018c4e4(param_1,param_4);
      *(int *)(iVar1 + 0xc) = iVar3;
      if (iVar3 != 0) {
        while (*(int *)(iVar3 + 0x18) != 0) {
          *(int *)(iVar3 + 0x14) = iVar1;
          iVar3 = *(int *)(iVar3 + 0x18);
        }
        *(int *)(iVar3 + 0x14) = iVar1;
      }
      *(int *)(iVar1 + 0x10) = iVar3;
    }
  }
  return iVar1;
}


