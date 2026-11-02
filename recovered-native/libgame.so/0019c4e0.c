/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c4e0  Symbol: FUN_0019c4e0 */

int FUN_0019c4e0(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (byte *)0x0) {
LAB_0019c540:
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    while (uVar2 = (uint)*param_1, uVar2 != 0) {
      if ((int)(uVar2 * 0x1000000) < 0) {
        if ((param_1[1] & 0xc0) != 0x80) goto LAB_0019c540;
        if ((uVar2 & 0xe0) == 0xe0) {
          if ((param_1[2] & 0xc0) != 0x80) goto LAB_0019c540;
          if ((uVar2 & 0xf0) == 0xf0) {
            if (((uVar2 & 0xf8) != 0xf0) || ((param_1[3] & 0xc0) != 0x80)) goto LAB_0019c540;
            param_1 = param_1 + 4;
          }
          else {
            param_1 = param_1 + 3;
          }
        }
        else {
          param_1 = param_1 + 2;
        }
      }
      else {
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


