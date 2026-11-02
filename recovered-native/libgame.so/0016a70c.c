/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a70c  Symbol: png_get_pHYs */

undefined4
png_get_pHYs(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined4 uVar1;
  
  if (((param_2 == 0) || (param_1 == 0)) || (-1 < *(int *)(param_2 + 8) << 0x18)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x70);
      uVar1 = 0x80;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x74);
      uVar1 = 0x80;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(byte *)(param_2 + 0x78);
      uVar1 = 0x80;
    }
  }
  return uVar1;
}


