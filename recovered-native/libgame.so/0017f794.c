/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017f794  Symbol: FUN_0017f794 */

int FUN_0017f794(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0017f8f8 + 0x17f7a4;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  iVar1 = FUN_0017e0a0(param_1);
  if (iVar1 == 0) {
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != ':') {
      return 0;
    }
    iVar2 = FUN_0017f6b8(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_0017bc54(param_1,0xca,iVar4 + DAT_0017f8fc,iVar2,0,0);
  }
  else {
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != ':') {
      *param_2 = 0;
      return iVar1;
    }
    FUN_0017a4a4(param_1);
    iVar2 = FUN_0017e0a0(param_1);
    if (iVar2 == 0) {
      FUN_0017bc54(param_1,0xca,iVar4 + DAT_0017f900,iVar1,0,0);
      iVar2 = FUN_0017efbc(param_1);
      if (iVar2 == 0) {
        iVar1 = FUN_0018d3d8(iVar4 + DAT_0017f904,iVar1,0,0);
      }
      else {
        iVar1 = FUN_0018d3d8(iVar2,iVar1,0,0);
        (***(code ***)(iVar4 + DAT_0017f908))(iVar2);
      }
      iVar2 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),iVar1,0xffffffff);
      if (iVar1 != 0) {
        (***(code ***)(iVar4 + DAT_0017f908))(iVar1);
      }
      *param_2 = 0;
      return iVar2;
    }
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != ':') {
      *param_2 = iVar1;
      return iVar2;
    }
    FUN_0017bc54(param_1,0xca,iVar4 + DAT_0017f90c,iVar1,iVar2,0);
    FUN_0017a4a4(param_1);
    iVar3 = FUN_0017f6b8(param_1);
    if (iVar3 == 0) {
      iVar3 = iVar4 + DAT_0017f904;
    }
    iVar3 = FUN_0018d3d8(iVar3,iVar2,0,0);
    iVar2 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),iVar3,0xffffffff);
    if (iVar3 != 0) {
      (***(code ***)(iVar4 + DAT_0017f908))(iVar3);
    }
  }
  *param_2 = iVar1;
  return iVar2;
}


