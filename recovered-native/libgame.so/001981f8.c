/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001981f8  Symbol: FUN_001981f8 */

void FUN_001981f8(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (iVar2 = *(int *)(param_1 + 0x24), *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) < 0xfa)) {
    FUN_0017a2bc(iVar2,0xfa);
  }
  pbVar3 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
  bVar1 = *pbVar3;
  pbVar5 = pbVar3;
  if (((((byte)(bVar1 + 0xbf) < 0x1a) || ((byte)(bVar1 + 0x9f) < 0x1a)) || (bVar1 == 0x5f)) ||
     (bVar1 == 0x3a)) {
    do {
      do {
        pbVar5 = pbVar5 + 1;
        uVar4 = (uint)*pbVar5;
      } while ((uVar4 - 0x41 & 0xff) < 0x1a);
    } while (((((uVar4 - 0x61 & 0xff) < 0x1a) || ((uVar4 - 0x30 & 0xff) < 10)) ||
             ((uVar4 == 0x5f || ((uVar4 == 0x2d || (uVar4 == 0x3a)))))) || (uVar4 == 0x2e));
    if (uVar4 != 0 && -1 < (int)(uVar4 * 0x1000000)) {
      iVar2 = (int)pbVar5 - (int)pbVar3;
      FUN_0019d178(*(undefined4 *)(param_1 + 0x128),pbVar3,iVar2);
      *(byte **)(*(int *)(param_1 + 0x24) + 0x10) = pbVar5;
      *(int *)(param_1 + 200) = iVar2 + *(int *)(param_1 + 200);
      *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + iVar2;
      return;
    }
  }
  FUN_00197fec(param_1);
  return;
}


