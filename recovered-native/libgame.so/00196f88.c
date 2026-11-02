/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196f88  Symbol: FUN_00196f88 */

undefined4 FUN_00196f88(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_00197048 + 0x196f98;
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    FUN_0017a4a4(param_1);
    iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
    while( true ) {
      pbVar2 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
      bVar5 = *pbVar2;
      bVar4 = bVar5 - 9;
      if ((((1 < bVar4) && (bVar5 != 0xd)) && (bVar5 < 0x20)) || (bVar5 == 0x22)) break;
      FUN_0017a4a4(param_1);
    }
  }
  else {
    if (cVar1 != '\'') {
      uVar3 = 0x2b;
      iVar7 = DAT_00197050;
      goto LAB_0019703a;
    }
    FUN_0017a4a4(param_1);
    iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
    while( true ) {
      pbVar2 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
      bVar5 = *pbVar2;
      bVar4 = bVar5 - 9;
      if ((((1 < bVar4) && (bVar5 != 0xd)) && (bVar5 < 0x20)) || (bVar5 == 0x27)) break;
      FUN_0017a4a4(param_1);
    }
  }
  if (((bVar5 == 0xd) || (bVar4 < 2)) || (0x1f < bVar5)) {
    uVar3 = FUN_0019c88c(iVar7,(int)pbVar2 - iVar7);
    FUN_0017a4a4(param_1);
    return uVar3;
  }
  uVar3 = 0x2c;
  iVar7 = DAT_0019704c;
LAB_0019703a:
  FUN_00195ba4(param_1,uVar3,iVar6 + iVar7,0,0);
  return 0;
}


