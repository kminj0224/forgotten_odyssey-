/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196ec8  Symbol: FUN_00196ec8 */

undefined4 FUN_00196ec8(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_00196f78 + 0x196ed8;
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    FUN_0017a4a4(param_1);
    iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
    iVar7 = *(int *)(iVar5 + DAT_00196f7c);
    while( true ) {
      pbVar2 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
      if (*(char *)(iVar7 + (uint)*pbVar2) == '\0') break;
      FUN_0017a4a4(param_1);
    }
    if (*pbVar2 == 0x22) {
LAB_00196f4c:
      uVar3 = FUN_0019c88c(iVar6,(int)pbVar2 - iVar6);
      FUN_0017a4a4(param_1);
      return uVar3;
    }
    iVar5 = iVar5 + DAT_00196f80;
    uVar3 = 0x2c;
  }
  else if (cVar1 == '\'') {
    FUN_0017a4a4(param_1);
    iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
    iVar7 = *(int *)(iVar5 + DAT_00196f7c);
    while( true ) {
      pbVar2 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
      uVar4 = (uint)*pbVar2;
      if (*(char *)(iVar7 + uVar4) == '\0') break;
      if (uVar4 == 0x27) goto LAB_00196f4c;
      FUN_0017a4a4(param_1);
    }
    if (uVar4 == 0x27) goto LAB_00196f4c;
    iVar5 = iVar5 + DAT_00196f80;
    uVar3 = 0x2c;
  }
  else {
    uVar3 = 0x2b;
    iVar5 = iVar5 + DAT_00196f84;
  }
  FUN_00195ba4(param_1,uVar3,iVar5,0,0);
  return 0;
}


