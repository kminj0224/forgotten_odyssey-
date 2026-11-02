/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a544  Symbol: png_get_gAMA */

undefined4 png_get_gAMA(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != (undefined8 *)0x0)) &&
     (*(int *)(param_2 + 8) << 0x1f < 0)) {
    uVar1 = __extendsfdf2(*(undefined4 *)(param_2 + 0x28));
    *param_3 = uVar1;
    return 1;
  }
  return 0;
}


