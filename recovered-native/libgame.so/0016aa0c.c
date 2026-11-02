/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016aa0c  Symbol: png_set_filler */

void png_set_filler(int param_1,undefined2 param_2,int param_3)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x8000;
    *(undefined2 *)(param_1 + 0x1f2) = param_2;
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x80;
    }
    else {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xffffff7f;
    }
    if (*(char *)(param_1 + 0x1ea) == '\x02') {
      *(undefined *)(param_1 + 0x1ef) = 4;
    }
    else if ((*(char *)(param_1 + 0x1ea) == '\0') && (7 < *(byte *)(param_1 + 0x1eb))) {
      *(undefined *)(param_1 + DAT_0016aa70) = 2;
    }
  }
  return;
}


