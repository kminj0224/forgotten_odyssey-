/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016aacc  Symbol: png_do_invert */

void png_do_invert(int param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = *(uint *)(param_1 + 4);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        param_2[uVar2] = ~param_2[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  else if (*(ushort *)(param_1 + 8) == DAT_0016ab28) {
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 != 0) {
      uVar1 = 0;
      do {
        param_2[uVar1] = ~param_2[uVar1];
        uVar1 = uVar1 + 2;
      } while (uVar1 < uVar2);
    }
  }
  else if ((*(ushort *)(param_1 + 8) == DAT_0016ab2c) &&
          (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0)) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 4;
      *param_2 = ~*param_2;
      param_2[1] = ~param_2[1];
      param_2 = param_2 + 4;
    } while (uVar1 < uVar2);
  }
  return;
}


