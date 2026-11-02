/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c4b4  Symbol: FUN_0019c4b4 */

int FUN_0019c4b4(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (byte *)0x0) {
    uVar2 = (uint)*param_1;
    if (-1 < (int)(uVar2 * 0x1000000)) {
      return 1;
    }
    if ((int)(uVar2 << 0x19) < 0) {
      iVar1 = 2;
      uVar3 = 0x20;
      while( true ) {
        if ((uVar3 & uVar2) == 0) {
          return iVar1;
        }
        uVar3 = uVar3 >> 1;
        if (iVar1 == 7) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  return -1;
}


