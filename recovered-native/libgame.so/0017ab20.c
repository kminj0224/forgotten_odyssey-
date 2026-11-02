/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ab20  Symbol: FUN_0017ab20 */

byte * FUN_0017ab20(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 < 0x80) {
      *param_1 = (byte)param_2;
      param_1 = (byte *)0x1;
    }
    else {
      if (DAT_0017aba4 < param_2) {
        if (DAT_0017aba8 < param_2) {
          if (DAT_0017abac < param_2) {
            FUN_0017a43c(0,DAT_0017aba0 + 0x17ab2a + DAT_0017abb0);
            return (byte *)0x0;
          }
          *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
          uVar1 = 0xc;
        }
        else {
          *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
          uVar1 = 6;
        }
      }
      else {
        *param_1 = (byte)(param_2 >> 6) | 0xc0;
        uVar1 = 0;
      }
      pbVar2 = param_1 + 1;
      do {
        *pbVar2 = (byte)(param_2 >> (uVar1 & 0xff)) & 0x3f | 0x80;
        pbVar2 = pbVar2 + 1;
        uVar1 = uVar1 - 6;
      } while (-1 < (int)uVar1);
      param_1 = pbVar2 + -(int)param_1;
    }
  }
  return param_1;
}


