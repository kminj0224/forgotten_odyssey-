/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172700  Symbol: png_do_write_invert_alpha */

void png_do_write_invert_alpha(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 2) == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      uVar1 = *param_1;
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 1;
          *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
          param_2 = param_2 + 4;
        } while (uVar2 < uVar1);
      }
    }
    else {
      uVar1 = *param_1;
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 1;
          *(byte *)(param_2 + 6) = ~*(byte *)(param_2 + 6);
          *(byte *)(param_2 + 7) = ~*(byte *)(param_2 + 7);
          param_2 = param_2 + 8;
        } while (uVar2 < uVar1);
      }
    }
  }
  else if (*(char *)(param_1 + 2) == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      uVar1 = *param_1;
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 1;
          *(byte *)(param_2 + 1) = ~*(byte *)(param_2 + 1);
          param_2 = param_2 + 2;
        } while (uVar2 < uVar1);
      }
    }
    else {
      uVar1 = *param_1;
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 1;
          *(byte *)(param_2 + 2) = ~*(byte *)(param_2 + 2);
          *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
          param_2 = param_2 + 4;
        } while (uVar2 < uVar1);
      }
    }
  }
  return;
}


