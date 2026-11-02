/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001729ac  Symbol: png_get_mem_ptr */

undefined4 png_get_mem_ptr(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x300);
  }
  return uVar1;
}


