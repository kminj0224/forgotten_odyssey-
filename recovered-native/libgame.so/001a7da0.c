/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a7da0  Symbol: jpeg_set_colorspace */

void jpeg_set_colorspace(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_001a7f84 + 0x1a7dac;
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  param_1[0x3d] = 0;
  param_1[0x14] = param_2;
  param_1[0x40] = 0;
  if (5 < param_2) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)(param_1);
    return;
  }
  iVar1 = iVar1 + DAT_001a7f88;
                    /* WARNING: Could not emulate address calculation at 0x001a7dea */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(iVar1 + param_2 * 4) + iVar1))();
  return;
}


