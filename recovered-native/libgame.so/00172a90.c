/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172a90  Symbol: png_malloc_warn */

undefined4 png_malloc_warn(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x130);
    *(uint *)(param_1 + 0x130) = uVar2 | 0x100000;
    uVar1 = png_malloc(param_1);
    *(uint *)(param_1 + 0x130) = uVar2;
  }
  return uVar1;
}


