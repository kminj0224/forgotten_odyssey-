/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019454c  Symbol: FUN_0019454c */

int FUN_0019454c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  
  iVar3 = DAT_00194610 + 0x194558;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    local_24 = *(int *)(param_2 + 0x40);
    if (local_24 == 0) {
      local_24 = FUN_0018f404(0,*(undefined4 *)(param_2 + 0x50));
      *(int *)(param_2 + 0x40) = local_24;
      if (local_24 == 0) {
        FUN_00194208(param_1,iVar3 + DAT_00194614);
        return 0;
      }
    }
    iVar1 = (***(code ***)(iVar3 + DAT_00194618))(0x18);
    if (iVar1 == 0) {
      FUN_00194208(param_1,iVar3 + DAT_0019461c);
      return 0;
    }
    uVar2 = FUN_0019c904(param_3);
    *(int *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 4) = uVar2;
    if ((param_1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
      *(int *)(iVar1 + 8) = param_4;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    else {
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar2 = FUN_0019c904(*(undefined4 *)(param_4 + 8));
      }
      else {
        uVar2 = FUN_0019d178(*(int *)(param_2 + 0x50),*(undefined4 *)(param_4 + 8),0xffffffff);
      }
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    uVar2 = thunk_FUN_001895e8(*(undefined4 *)(param_4 + 0x14));
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    iVar3 = FUN_0018f240(local_24,param_3,iVar1);
    if (-1 < iVar3) {
      *(undefined4 *)(param_4 + 0x28) = 2;
      return iVar1;
    }
    FUN_00194364(iVar1);
  }
  return 0;
}


