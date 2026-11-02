/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00208a84  Symbol: FUN_00208a84 */

int FUN_00208a84(int param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int unaff_r5;
  bool bVar5;
  
  pbVar2 = *(byte **)(param_1 + 0xc);
  uVar4 = (uint)*pbVar2;
  bVar5 = uVar4 == 0x6e;
  if (bVar5) {
    *(byte **)(param_1 + 0xc) = pbVar2 + 1;
    uVar4 = (uint)pbVar2[1];
    unaff_r5 = 1;
  }
  if (!bVar5) {
    unaff_r5 = 0;
  }
  if (uVar4 - 0x30 < 10) {
    pbVar3 = *(byte **)(param_1 + 0xc);
    iVar1 = 0;
    pbVar2 = pbVar3;
    do {
      pbVar2 = pbVar2 + 1;
      iVar1 = uVar4 + iVar1 * 10;
      *(byte **)(param_1 + 0xc) = pbVar2;
      pbVar3 = pbVar3 + 1;
      uVar4 = (uint)*pbVar3;
      iVar1 = iVar1 + -0x30;
    } while (uVar4 - 0x30 < 10);
  }
  else {
    iVar1 = 0;
  }
  if (unaff_r5 != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}


