/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016cf90  Symbol: png_write_row */

void png_write_row(int param_1,void *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  size_t __n;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0016d198 + 0x16cfa0;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x1a8) == 0) && (*(char *)(param_1 + 0x1e8) == '\0')) {
      if (-1 < *(int *)(param_1 + 300) << 0x15) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar4 + DAT_0016d1b0);
      }
      png_write_start_row(param_1);
    }
    if (((*(char *)(param_1 + DAT_0016d19c) != '\0') && (*(int *)(param_1 + 0x134) << 0x1e < 0)) &&
       (*(byte *)(param_1 + 0x1e8) < 7)) {
      iVar4 = iVar4 + DAT_0016d1ac;
                    /* WARNING: Could not emulate address calculation at 0x0016d0ea */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(iVar4 + (uint)*(byte *)(param_1 + 0x1e8) * 4) + iVar4))();
      return;
    }
    *(undefined *)(param_1 + 0x1cc) = *(undefined *)(param_1 + 0x1ea);
    iVar5 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x1c4) = iVar5;
    iVar4 = DAT_0016d1a4;
    bVar1 = *(byte *)(param_1 + DAT_0016d1a0);
    *(byte *)(param_1 + 0x1ce) = bVar1;
    bVar2 = *(byte *)(param_1 + 0x1ec);
    *(byte *)(param_1 + DAT_0016d1a8) = bVar2;
    uVar3 = (uint)bVar1 * (uint)bVar2;
    *(char *)(param_1 + iVar4) = (char)uVar3;
    if ((uVar3 & 0xff) < 8) {
      __n = (uVar3 & 0xff) * iVar5 + 7 >> 3;
    }
    else {
      __n = iVar5 * (uVar3 * 0x1000000 >> 0x1b);
    }
    *(size_t *)(param_1 + 0x1c8) = __n;
    memcpy((void *)(*(int *)(param_1 + 0x1b0) + 1),param_2,__n);
    if (*(char *)(param_1 + DAT_0016d19c) == '\0') {
      iVar4 = *(int *)(param_1 + 0x134);
    }
    else if (*(byte *)(param_1 + 0x1e8) < 6) {
      iVar4 = *(int *)(param_1 + 0x134);
      if (iVar4 << 0x1e < 0) {
        png_do_write_interlace(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
        if (*(int *)(param_1 + 0x1c4) == 0) {
          png_write_finish_row(param_1);
          return;
        }
        iVar4 = *(int *)(param_1 + 0x134);
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x134);
    }
    if (iVar4 != 0) {
      png_do_write_transformations(param_1);
    }
    if ((*(int *)(param_1 + 0x2f4) << 0x1d < 0) && (*(char *)(param_1 + 0x2fc) == '@')) {
      png_do_write_intrapixel(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    }
    png_write_find_filter(param_1,param_1 + 0x1c4);
    if (*(code **)(param_1 + 0x260) != (code *)0x0) {
      (**(code **)(param_1 + 0x260))
                (param_1,*(undefined4 *)(param_1 + 0x1a8),*(undefined *)(param_1 + 0x1e8));
    }
  }
  return;
}


