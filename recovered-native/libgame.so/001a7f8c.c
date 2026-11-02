/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a7f8c  Symbol: jpeg_default_colorspace */

void jpeg_default_colorspace(int *param_1)

{
  int iVar1;
  
  if (5 < (uint)param_1[10]) {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    (**(code **)*param_1)();
    return;
  }
  iVar1 = DAT_001a7fdc + 0x1a7f96 + DAT_001a7fe0;
                    /* WARNING: Could not emulate address calculation at 0x001a7fac */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(iVar1 + param_1[10] * 4) + iVar1))();
  return;
}


