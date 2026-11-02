/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00171774  Symbol: png_do_read_transformations */

/* WARNING: Type propagation algorithm not settling */

void png_do_read_transformations(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char acStack_50 [52];
  int local_1c;
  
  iVar1 = DAT_00171ac0;
  iVar5 = DAT_00171abc + 0x171784;
  local_1c = **(int **)(iVar5 + DAT_00171ac0);
  if (*(int *)(param_1 + 0x1b0) == 0) {
    snprintf(acStack_50,0x32,(char *)(iVar5 + DAT_00171c64),*(undefined4 *)(param_1 + 0x1a8),
             (uint)*(byte *)(param_1 + 0x1e8));
                    /* WARNING: Subroutine does not return */
    png_error(param_1,acStack_50);
  }
  if (*(int *)(param_1 + 0x134) << 0x13 < 0) {
    if (*(char *)(param_1 + 0x1cc) == '\x03') {
      png_do_expand_palette
                (param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,*(undefined4 *)(param_1 + 0x1d8),
                 *(undefined4 *)(param_1 + 0x24c),*(undefined2 *)(param_1 + 0x1de));
    }
    else if ((*(short *)(param_1 + 0x1de) == 0) || (-1 < *(int *)(param_1 + 0x134) << 6)) {
      png_do_expand(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,0);
    }
    else {
      png_do_expand(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,param_1 + 0x250);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x130) & 0x400000;
  if (uVar4 != 0) {
    png_do_strip_filler(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,uVar4 | 0x80);
  }
  uVar4 = *(uint *)(param_1 + 0x134);
  if ((uVar4 & 0x600000) != 0) {
    iVar2 = png_do_rgb_to_gray(param_1,param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    if (iVar2 == 0) {
      uVar4 = *(uint *)(param_1 + 0x134);
    }
    else {
      *(undefined *)(param_1 + 0x2ec) = 1;
      uVar4 = *(uint *)(param_1 + 0x134);
      uVar3 = uVar4 & 0x600000;
      if (uVar3 == 0x400000) {
        png_warning(param_1,iVar5 + DAT_00171c5c);
        uVar4 = *(uint *)(param_1 + 0x134);
        uVar3 = uVar4 & 0x600000;
      }
      if (uVar3 == 0x200000) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar5 + DAT_00171c5c);
      }
    }
  }
  if (((int)(uVar4 << 0x11) < 0) && (-1 < *(int *)(param_1 + 300) << 0x14)) {
    png_do_gray_to_rgb(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if (((int)(uVar4 << 0x18) < 0) &&
     ((*(short *)(param_1 + 0x1de) != 0 || ((int)((uint)*(byte *)(param_1 + 0x1ea) << 0x1d) < 0))))
  {
    png_do_background(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,param_1 + 0x250,param_1 + 0x1fc,
                      param_1 + 0x206,*(undefined4 *)(param_1 + 0x228),
                      *(undefined4 *)(param_1 + 0x22c),*(undefined4 *)(param_1 + 0x230),
                      *(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x238),
                      *(undefined4 *)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x21c));
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x12) < 0) {
    if ((int)(uVar4 << 0x18) < 0) {
      if ((*(short *)(param_1 + 0x1de) != 0) ||
         (uVar3 = (uint)*(byte *)(param_1 + 0x1ea), (int)(uVar3 << 0x1d) < 0)) goto LAB_0017185e;
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 0x1ea);
    }
    if (uVar3 != 3) {
      png_do_gamma(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,*(undefined4 *)(param_1 + 0x228),
                   *(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x21c));
      uVar4 = *(uint *)(param_1 + 0x134);
    }
  }
LAB_0017185e:
  if ((int)(uVar4 << 0x15) < 0) {
    png_do_chop(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x19) < 0) {
    png_do_quantize(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,*(undefined4 *)(param_1 + 0x2b0),
                    *(undefined4 *)(param_1 + 0x2b4));
    if (*(int *)(param_1 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar5 + DAT_00171c60);
    }
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x1a) < 0) {
    png_do_invert(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    png_do_unshift(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,param_1 + DAT_00171ad0);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x1d) < 0) {
    png_do_unpack(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x1f) < 0) {
    png_do_bgr(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0xf) < 0) {
    png_do_packswap(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if (((int)(uVar4 << 0x11) < 0) && (*(int *)(param_1 + 300) << 0x14 < 0)) {
    png_do_gray_to_rgb(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x10) < 0) {
    png_do_read_filler(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1,
                       *(undefined2 *)(param_1 + 0x1f2),*(undefined4 *)(param_1 + 0x130));
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0xc) < 0) {
    png_do_read_invert_alpha(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0xe) < 0) {
    png_do_read_swap_alpha(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x1b) < 0) {
    png_do_swap(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0xb) < 0) {
    if (*(code **)(param_1 + 0x11c) != (code *)0x0) {
      (**(code **)(param_1 + 0x11c))(param_1,param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    }
    if (*(char *)(param_1 + 0x128) != '\0') {
      *(char *)(param_1 + DAT_00171ac4) = *(char *)(param_1 + 0x128);
    }
    uVar4 = (uint)*(byte *)(param_1 + DAT_00171ac8);
    if (uVar4 == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 0x1ce);
    }
    else {
      *(byte *)(param_1 + 0x1ce) = *(byte *)(param_1 + DAT_00171ac8);
    }
    uVar4 = *(byte *)(param_1 + DAT_00171ac4) * uVar4;
    *(char *)(param_1 + DAT_00171acc) = (char)uVar4;
    if ((uVar4 & 0xff) < 8) {
      uVar4 = *(int *)(param_1 + 0x1c4) * (uVar4 & 0xff) + 7 >> 3;
    }
    else {
      uVar4 = (uVar4 * 0x1000000 >> 0x1b) * *(int *)(param_1 + 0x1c4);
    }
    *(uint *)(param_1 + 0x1c8) = uVar4;
  }
  if (local_1c == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


