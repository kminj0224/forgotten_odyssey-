/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ec3b8  Symbol: FUN_001ec3b8 */

undefined4 FUN_001ec3b8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((undefined *)param_1[5] < (undefined *)param_1[6]) {
    *(undefined *)param_1[5] = (char)param_2;
    param_1[5] = param_1[5] + 1;
    return param_2;
  }
  uVar1 = (**(code **)(*param_1 + 0x34))();
  return uVar1;
}


