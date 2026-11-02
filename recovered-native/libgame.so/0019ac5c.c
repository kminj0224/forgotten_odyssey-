/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ac5c  Symbol: FUN_0019ac5c */

void FUN_0019ac5c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0x2c);
  iVar4 = DAT_0019acd8 + 0x19ac68;
  if (iVar3 == 0) {
    FUN_001a570c(7,DAT_0019ace0,param_2,iVar4 + DAT_0019acdc,0);
  }
  else {
    FUN_00190a68(param_1,iVar4 + DAT_0019ace4,param_2);
    FUN_00190a68(param_1,*(undefined4 *)(iVar3 + 8));
    if (*(int *)(iVar3 + 0x34) == 0) {
      iVar2 = *(int *)(iVar3 + 0x38);
      iVar1 = DAT_0019acf0;
    }
    else {
      FUN_00190a68(param_1,iVar4 + DAT_0019ace8);
      FUN_0018ac20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar3 + 0x34));
      iVar2 = *(int *)(iVar3 + 0x38);
      iVar1 = DAT_0019acec;
    }
    if (iVar2 != 0) {
      FUN_00190a68(param_1,iVar4 + iVar1);
      FUN_0018ac20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar3 + 0x38));
    }
    FUN_00190a68(param_1,iVar4 + DAT_0019acf4);
  }
  return;
}


