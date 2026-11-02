/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a65b8  Symbol: FUN_001a65b8 */

void FUN_001a65b8(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    iVar5 = param_1[param_2 + 0x1e];
  }
  else {
    iVar5 = param_1[param_2 + 0x22];
    param_2 = param_2 + 0x10;
  }
  if (iVar5 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(iVar5 + 0x114) == 0) {
    FUN_001a6490(param_1,0xc4);
    iVar6 = 0;
    iVar3 = 1;
    do {
      pbVar1 = (byte *)(iVar5 + iVar3);
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + (uint)*pbVar1;
    } while (iVar3 != 0x11);
    FUN_001a64a8(param_1,iVar6 + 0x13,(uint)*pbVar1,0x11,param_4);
    FUN_001a645c(param_1,param_2);
    iVar3 = 1;
    do {
      puVar2 = (undefined *)(iVar5 + iVar3);
      iVar3 = iVar3 + 1;
      FUN_001a645c(param_1,*puVar2);
    } while (iVar3 != 0x11);
    if (iVar6 != 0) {
      iVar3 = 0;
      do {
        iVar4 = iVar5 + iVar3;
        iVar3 = iVar3 + 1;
        FUN_001a645c(param_1,*(undefined *)(iVar4 + 0x11));
      } while (iVar3 < iVar6);
    }
    *(undefined4 *)(iVar5 + 0x114) = 1;
  }
  return;
}


