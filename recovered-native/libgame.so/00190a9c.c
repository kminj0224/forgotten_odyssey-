/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190a9c  Symbol: FUN_00190a9c */

int FUN_00190a9c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_00190b7c + 0x190aa8;
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  if (param_1[7] != 0) {
    return -1;
  }
  if ((param_2 != 4) && (param_2 < 0xfa1)) {
    param_2 = 4000;
  }
  uVar3 = *(uint *)(param_1[4] + 8);
  iVar2 = *(int *)(param_1[4] + 4);
  uVar1 = DAT_00190b80;
  if (0 < (int)(uVar3 - iVar2)) {
    if ((uVar3 < (uint)(iVar2 + 1 + param_2)) && (iVar2 = FUN_0018a828(), iVar2 == 0)) {
      FUN_0018f77c(iVar5 + DAT_00190b84);
      param_1[7] = 2;
      return -1;
    }
    pcVar4 = (code *)param_1[1];
    uVar1 = DAT_00190b8c;
    if (pcVar4 != (code *)0x0) {
      iVar6 = *(int *)param_1[4] + ((int *)param_1[4])[1];
      iVar2 = (*pcVar4)(*param_1,iVar6,param_2,pcVar4,param_4);
      if ((iVar2 < 1) && (param_1[1] = iVar5 + DAT_00190b88, iVar2 != 0)) {
        return -1;
      }
      if (param_1[3] == 0) {
        *(int *)(param_1[4] + 4) = *(int *)(param_1[4] + 4) + iVar2;
        *(undefined *)(iVar6 + iVar2) = 0;
        return iVar2;
      }
      if (param_1[5] == 0) {
        uVar1 = FUN_00189cd8();
        param_1[5] = uVar1;
      }
      iVar5 = FUN_0018aa58(param_1[5],iVar6,iVar2);
      if (iVar5 != 0) {
        return -1;
      }
      iVar2 = *(int *)(param_1[5] + 4);
      iVar5 = FUN_001a3b7c(param_1[3],param_1[4]);
      if (-1 < iVar5) {
        param_1[8] = (iVar2 + param_1[8]) - *(int *)(param_1[5] + 4);
        return iVar5;
      }
      uVar1 = 0x608;
    }
  }
  FUN_00190594(uVar1,0);
  param_1[7] = uVar1;
  return -1;
}


