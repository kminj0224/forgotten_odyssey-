/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001729d0  Symbol: png_free */

void png_free(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    if (*(code **)(param_1 + 0x308) == (code *)0x0) {
      png_free_default();
    }
    else {
      (**(code **)(param_1 + 0x308))();
    }
  }
  return;
}


