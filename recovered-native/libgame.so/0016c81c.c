/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c81c  Symbol: png_set_compression_window_bits */

void png_set_compression_window_bits(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0016c86c + 0x16c828;
  if (param_1 != 0) {
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        png_warning(param_1,iVar1 + DAT_0016c874);
      }
      else if (param_2 == 8) {
        param_2 = 9;
        png_warning(param_1,iVar1 + DAT_0016c878);
      }
    }
    else {
      png_warning(param_1,iVar1 + DAT_0016c870);
    }
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 8;
    *(int *)(param_1 + 0x180) = param_2;
  }
  return;
}


