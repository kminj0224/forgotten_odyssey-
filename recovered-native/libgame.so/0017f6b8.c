/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017f6b8  Symbol: FUN_0017f6b8 */

int FUN_0017f6b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar4 = DAT_0017f78c + 0x17f6c6;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  iVar4 = iVar4 + DAT_0017f790;
  *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  pbVar2 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
  bVar1 = *pbVar2;
  pbVar5 = pbVar2;
  if (((((byte)(bVar1 + 0xbf) < 0x1a) || ((byte)(bVar1 + 0x9f) < 0x1a)) || (bVar1 == 0x5f)) ||
     (bVar1 == 0x3a)) {
    do {
      do {
        pbVar5 = pbVar5 + 1;
        uVar3 = (uint)*pbVar5;
      } while ((uVar3 - 0x41 & 0xff) < 0x1a);
    } while (((((uVar3 - 0x61 & 0xff) < 0x1a) || ((uVar3 - 0x30 & 0xff) < 10)) ||
             ((uVar3 == 0x5f || ((uVar3 == 0x2d || (uVar3 == 0x3a)))))) || (uVar3 == 0x2e));
    if (uVar3 != 0 && -1 < (int)(uVar3 * 0x1000000)) {
      iVar6 = (int)pbVar5 - (int)pbVar2;
      iVar4 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),pbVar2,iVar6,uVar3 * 0x1000000,param_4);
      *(byte **)(*(int *)(param_1 + 0x24) + 0x10) = pbVar5;
      *(int *)(param_1 + 200) = iVar6 + *(int *)(param_1 + 200);
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + iVar6;
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_00179430(param_1,0);
      return 0;
    }
  }
  iVar4 = FUN_0017f1e8(param_1);
  return iVar4;
}


