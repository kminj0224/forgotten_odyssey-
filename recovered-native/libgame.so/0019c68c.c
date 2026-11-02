/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c68c  Symbol: FUN_0019c68c */

int FUN_0019c68c(byte *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  if ((param_1 == (byte *)0x0) || (pbVar3 = param_1, param_2 < 1)) {
    iVar1 = 0;
  }
  else {
    while ((0 < param_2 && (uVar2 = (uint)*pbVar3, uVar2 != 0))) {
      pbVar3 = pbVar3 + 1;
      if ((int)(uVar2 * 0x1000000) < 0) {
        do {
          uVar4 = uVar2 * 0x2000000;
          uVar2 = uVar4 >> 0x18;
          if (-1 < (int)uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (*pbVar3 != 0);
      }
      param_2 = param_2 + -1;
    }
    iVar1 = (int)pbVar3 - (int)param_1;
  }
  return iVar1;
}


