/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017e0a0  Symbol: FUN_0017e0a0 */

int FUN_0017e0a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_0017e154 + 0x17e0ac + DAT_0017e158;
  *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
  pbVar2 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
  bVar1 = *pbVar2;
  pbVar4 = pbVar2;
  if ((((byte)(bVar1 + 0xbf) < 0x1a) || ((byte)(bVar1 + 0x9f) < 0x1a)) || (bVar1 == 0x5f)) {
    do {
      do {
        pbVar4 = pbVar4 + 1;
        uVar3 = (uint)*pbVar4;
      } while ((uVar3 - 0x41 & 0xff) < 0x1a);
    } while ((((uVar3 - 0x61 & 0xff) < 0x1a) || ((uVar3 - 0x30 & 0xff) < 10)) ||
            ((uVar3 == 0x5f || ((uVar3 == 0x2d || (uVar3 == 0x2e))))));
    if (uVar3 != 0 && -1 < (int)(uVar3 * 0x1000000)) {
      iVar6 = (int)pbVar4 - (int)pbVar2;
      iVar5 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),pbVar2,iVar6,uVar3 * 0x1000000,param_4);
      *(byte **)(*(int *)(param_1 + 0x24) + 0x10) = pbVar4;
      *(int *)(param_1 + 200) = iVar6 + *(int *)(param_1 + 200);
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + iVar6;
      if (iVar5 != 0) {
        return iVar5;
      }
      FUN_00179430(param_1,0);
      return 0;
    }
  }
  iVar5 = FUN_0017df90(param_1);
  return iVar5;
}


