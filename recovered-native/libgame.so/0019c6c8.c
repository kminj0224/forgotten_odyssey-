/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c6c8  Symbol: FUN_0019c6c8 */

byte * FUN_0019c6c8(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 < 0) {
LAB_0019c708:
      param_1 = (byte *)0x0;
    }
    else {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        uVar1 = (uint)*param_1;
        if (uVar1 == 0) goto LAB_0019c708;
        param_1 = param_1 + 1;
        if ((int)(uVar1 * 0x1000000) < 0) {
          if ((uVar1 & 0xc0) != 0xc0) goto LAB_0019c708;
          while (uVar2 = uVar1 * 0x2000000, uVar1 = uVar2 >> 0x18, (int)uVar2 < 0) {
            if ((*param_1 & 0xc0) != 0x80) goto LAB_0019c708;
            param_1 = param_1 + 1;
          }
        }
      }
    }
  }
  return param_1;
}


