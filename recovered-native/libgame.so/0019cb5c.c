/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019cb5c  Symbol: FUN_0019cb5c */

int FUN_0019cb5c(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 < 1) || (param_1 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    do {
      pbVar1 = (byte *)(param_1 + iVar2);
      iVar2 = iVar2 + 1;
      uVar3 = (uVar3 + *pbVar1) * 0x401;
      uVar3 = uVar3 ^ uVar3 >> 6;
    } while (iVar2 < param_2);
    iVar2 = (uVar3 * 9 ^ uVar3 * 9 >> 0xb) * 0x8001;
  }
  return iVar2;
}


