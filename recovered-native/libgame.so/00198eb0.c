/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00198eb0  Symbol: FUN_00198eb0 */

int FUN_00198eb0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_00198f3c + 0x198ec0;
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    FUN_0017a4a4(param_1);
    iVar2 = FUN_00198b90(param_1,0x22);
    iVar3 = DAT_00198f40;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\"') {
LAB_00198f0e:
      FUN_0017a4a4(param_1);
      return iVar2;
    }
  }
  else {
    if (cVar1 != '\'') {
      iVar3 = FUN_00198b90(param_1,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = 0x29;
      iVar2 = 0;
      iVar3 = DAT_00198f48;
      goto LAB_00198f30;
    }
    FUN_0017a4a4(param_1);
    iVar2 = FUN_00198b90(param_1,0x27);
    iVar3 = DAT_00198f44;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\'') goto LAB_00198f0e;
  }
  uVar4 = 0x28;
LAB_00198f30:
  FUN_00195ba4(param_1,uVar4,iVar5 + iVar3,0,0);
  return iVar2;
}


