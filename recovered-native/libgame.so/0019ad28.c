/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ad28  Symbol: FUN_0019ad28 */

void FUN_0019ad28(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = DAT_0019ae4c + 0x19ad34;
  if (param_3 == 0) {
    return;
  }
  FUN_00190a68(param_1,iVar6 + DAT_0019ae50,param_3,param_4,param_4);
  if ((*(int *)(param_3 + 0x24) != 0) && (*(int *)(*(int *)(param_3 + 0x24) + 0xc) != 0)) {
    FUN_00190a68(param_1);
    FUN_00190a68(param_1,iVar6 + DAT_0019ae54);
  }
  FUN_00190a68(param_1,*(undefined4 *)(param_3 + 8));
  if (*(int *)(param_3 + 0xc) == 0) {
    return;
  }
  iVar2 = FUN_0019acf8(*(undefined4 *)(param_3 + 8));
  if (iVar2 != 0) {
    return;
  }
  pcVar3 = (char *)FUN_0018b544(param_2,*(undefined4 *)(param_3 + 0xc),0);
  if (pcVar3 == (char *)0x0) {
    FUN_00190a68(param_1,iVar6 + DAT_0019ae78);
    return;
  }
  FUN_00190a68(param_1,iVar6 + DAT_0019ae58);
  if ((((*(int *)(param_3 + 0x24) == 0) && (*(int *)(param_3 + 0x14) != 0)) &&
      (*(int *)(*(int *)(param_3 + 0x14) + 0x24) == 0)) &&
     (((iVar2 = FUN_0019c398(*(undefined4 *)(param_3 + 8),iVar6 + DAT_0019ae5c), pcVar4 = pcVar3,
       iVar2 == 0 ||
       (iVar2 = FUN_0019c398(*(undefined4 *)(param_3 + 8),iVar6 + DAT_0019ae60), iVar2 == 0)) ||
      ((iVar2 = FUN_0019c398(*(undefined4 *)(param_3 + 8),iVar6 + DAT_0019ae64), iVar2 == 0 ||
       ((iVar2 = FUN_0019c398(*(undefined4 *)(param_3 + 8),iVar6 + DAT_0019ae68), iVar2 == 0 &&
        (iVar2 = FUN_0019c398(*(undefined4 *)(*(int *)(param_3 + 0x14) + 8),iVar6 + DAT_0019ae6c),
        iVar2 == 0)))))))) {
    for (; ((cVar1 = *pcVar4, (byte)(cVar1 - 9U) < 2 || (cVar1 == ' ')) || (cVar1 == '\r'));
        pcVar4 = pcVar4 + 1) {
    }
    iVar2 = FUN_001926bc(pcVar4,iVar6 + DAT_0019ae70);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    if (iVar2 != 0) {
      FUN_0018ac20(uVar5,iVar2);
      (***(code ***)(iVar6 + DAT_0019ae74))(iVar2);
      goto LAB_0019ae32;
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
  }
  FUN_0018ac20(uVar5,pcVar3);
LAB_0019ae32:
  (***(code ***)(iVar6 + DAT_0019ae74))(pcVar3);
  return;
}


