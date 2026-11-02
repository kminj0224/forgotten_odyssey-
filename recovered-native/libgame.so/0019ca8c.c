/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ca8c  Symbol: FUN_0019ca8c */

int FUN_0019ca8c(byte *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_2 != 0) && (param_1 != (byte *)0x0)) {
    uVar1 = FUN_0019c68c(param_2,1);
    iVar4 = 0;
    while (uVar5 = (uint)*param_1, uVar5 != 0) {
      iVar2 = FUN_0019ca64(param_1,param_2,uVar1);
      if (iVar2 == 0) {
        return iVar4;
      }
      param_1 = param_1 + 1;
      if ((int)(uVar5 * 0x1000000) < 0) {
        if ((uVar5 & 0xc0) != 0xc0) {
          return -1;
        }
        while (uVar3 = uVar5 * 0x2000000, uVar5 = uVar3 >> 0x18, (int)uVar3 < 0) {
          if ((*param_1 & 0xc0) != 0x80) {
            return -1;
          }
          param_1 = param_1 + 1;
        }
      }
      iVar4 = iVar4 + 1;
    }
  }
  return -1;
}


