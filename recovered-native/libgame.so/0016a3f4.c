/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016a3f4  Symbol: png_get_cHRM */

undefined4
png_get_cHRM(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((param_2 == 0) || (param_1 == 0)) || (-1 < *(int *)(param_2 + 8) << 0x1d)) {
    uVar1 = 0;
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x80));
      *param_3 = uVar2;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x84));
      *param_4 = uVar2;
    }
    if (param_5 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x88));
      *param_5 = uVar2;
    }
    if (param_6 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x8c));
      *param_6 = uVar2;
    }
    if (param_7 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x90));
      *param_7 = uVar2;
    }
    if (param_8 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x94));
      *param_8 = uVar2;
    }
    if (param_9 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x98));
      *param_9 = uVar2;
    }
    uVar1 = 4;
    if (param_10 != (undefined8 *)0x0) {
      uVar2 = __extendsfdf2(*(undefined4 *)(param_2 + 0x9c));
      *param_10 = uVar2;
      uVar1 = 4;
    }
  }
  return uVar1;
}


