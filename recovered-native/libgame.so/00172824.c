/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172824  Symbol: png_do_write_transformations */

/* WARNING: Type propagation algorithm not settling */

void png_do_write_transformations(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x134);
    if ((iVar1 << 0xb < 0) && (*(code **)(param_1 + 0x120) != (code *)0x0)) {
      (**(code **)(param_1 + 0x120))(param_1,param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0x10 < 0) {
      png_do_strip_filler(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,
                          *(undefined4 *)(param_1 + 0x130));
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0xf < 0) {
      png_do_packswap(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0x1d < 0) {
      png_do_pack(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,
                  *(undefined *)(param_1 + DAT_00172988));
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0x1b < 0) {
      png_do_swap(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0x1c < 0) {
      png_do_shift(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,param_1 + DAT_0017298c);
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0xe < 0) {
      png_do_write_swap_alpha(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0xc < 0) {
      png_do_write_invert_alpha(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0x1f < 0) {
      png_do_bgr(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
      iVar1 = *(int *)(param_1 + 0x134);
    }
    if (iVar1 << 0x1a < 0) {
      png_do_invert(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    }
  }
  return;
}


