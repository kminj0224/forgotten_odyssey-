/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a7e0  Symbol: png_get_tRNS */

undefined4 png_get_tRNS(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5)

{
  undefined4 uVar1;
  
  if (((param_2 == 0) || (param_1 == 0)) || (-1 < *(int *)(param_2 + 8) << 0x1b)) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x19) == '\x03') {
      uVar1 = 0;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0x4c);
        uVar1 = 0x10;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = param_2 + 0x50;
      }
    }
    else {
      uVar1 = 0;
      if (param_5 != (int *)0x0) {
        *param_5 = param_2 + 0x50;
        uVar1 = 0x10;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(ushort *)(param_2 + 0x16);
      uVar1 = 0x10;
    }
  }
  return uVar1;
}


