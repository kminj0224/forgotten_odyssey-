/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018bca8  Symbol: FUN_0018bca8 */

int FUN_0018bca8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0018bd70 + 0x18bcb4;
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = *(int *)(param_2 + 8), iVar3 == 0)) {
    return 0;
  }
  iVar3 = FUN_00189870(param_1,param_3,iVar3,0);
  if (iVar3 == 0) {
    iVar3 = FUN_0018ad6c(param_1,param_2,param_3,param_4,0);
  }
  else {
    if (*(int *)(iVar3 + 0x28) == 2) {
      FUN_001942e8(*(undefined4 *)(param_1 + 0x20),iVar3);
      *(undefined4 *)(iVar3 + 0x28) = 2;
    }
    if (*(int *)(iVar3 + 0xc) != 0) {
      FUN_0018bb84();
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(int *)(iVar3 + 0x24) = param_2;
    if (param_4 != 0) {
      iVar1 = FUN_0019c60c(param_4);
      if (iVar1 == 0) {
        FUN_0018a658(DAT_0018bd74,*(undefined4 *)(param_1 + 0x20),0);
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 != 0) {
          uVar2 = FUN_0019c904(iVar4 + DAT_0018bd78);
          *(undefined4 *)(iVar1 + 0x3c) = uVar2;
        }
      }
      iVar4 = FUN_0018a0b0(*(undefined4 *)(param_1 + 0x20),param_4);
      *(int *)(iVar3 + 0xc) = iVar4;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x18)) {
        *(int *)(iVar4 + 0x14) = iVar3;
        if (*(int *)(iVar4 + 0x18) == 0) {
          *(int *)(iVar3 + 0x10) = iVar4;
        }
      }
    }
    if (*(int *)(iVar3 + 0x28) == 2) {
      FUN_0019454c(0,*(undefined4 *)(param_1 + 0x20),param_4,iVar3);
    }
  }
  return iVar3;
}


