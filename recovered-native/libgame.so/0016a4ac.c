/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a4ac  Symbol: png_get_cHRM_fixed */

undefined4
png_get_cHRM_fixed(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  undefined4 uVar1;
  
  if (((param_2 == 0) || (param_1 == 0)) || (-1 < *(int *)(param_2 + 8) << 0x1d)) {
    uVar1 = 0;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x100);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x104);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(param_2 + 0x108);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(param_2 + 0x10c);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = *(undefined4 *)(param_2 + 0x110);
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = *(undefined4 *)(param_2 + 0x114);
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = *(undefined4 *)(param_2 + 0x118);
    }
    uVar1 = 4;
    if (param_10 != (undefined4 *)0x0) {
      *param_10 = *(undefined4 *)(param_2 + 0x11c);
    }
  }
  return uVar1;
}


