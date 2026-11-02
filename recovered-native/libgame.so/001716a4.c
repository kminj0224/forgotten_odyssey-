/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001716a4  Symbol: png_set_crc_action */

void png_set_crc_action(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 3) {
    *(uint *)(param_1 + 0x130) = DAT_0017176c & *(uint *)(param_1 + 0x130) | 0x400;
    goto LAB_001716d2;
  }
  if (param_2 < 4) {
    if (param_2 == 2) {
      png_warning(param_1,DAT_00171764 + 0x1716b0 + DAT_00171768);
    }
  }
  else {
    if (param_2 == 4) {
      *(uint *)(param_1 + 0x130) = DAT_0017176c & *(uint *)(param_1 + 0x130) | 0xc00;
      goto LAB_001716d2;
    }
    if (param_2 == 5) goto LAB_001716d2;
  }
  *(uint *)(param_1 + 0x130) = DAT_0017176c & *(uint *)(param_1 + 0x130);
LAB_001716d2:
  if (param_3 == 3) {
    *(uint *)(param_1 + 0x130) = DAT_00171770 & *(uint *)(param_1 + 0x130) | 0x100;
    return;
  }
  if (param_3 < 4) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x130) = DAT_00171770 & *(uint *)(param_1 + 0x130) | 0x200;
      return;
    }
  }
  else {
    if (param_3 == 4) {
      *(uint *)(param_1 + 0x130) = DAT_00171770 & *(uint *)(param_1 + 0x130) | 0x300;
      return;
    }
    if (param_3 == 5) {
      return;
    }
  }
  *(uint *)(param_1 + 0x130) = DAT_00171770 & *(uint *)(param_1 + 0x130);
  return;
}


