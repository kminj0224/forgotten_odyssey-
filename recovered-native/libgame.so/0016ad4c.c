/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ad4c  Symbol: png_do_bgr */

void png_do_bgr(uint *param_1,undefined *param_2)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 2);
  if ((int)(uVar2 << 0x1e) < 0) {
    uVar3 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (uVar2 == 2) {
        if (uVar3 != 0) {
          uVar2 = 0;
          do {
            uVar1 = param_2[2];
            uVar2 = uVar2 + 1;
            param_2[2] = *param_2;
            *param_2 = uVar1;
            param_2 = param_2 + 3;
          } while (uVar2 < uVar3);
        }
      }
      else if ((uVar2 == 6) && (uVar3 != 0)) {
        uVar2 = 0;
        do {
          uVar1 = param_2[2];
          uVar2 = uVar2 + 1;
          param_2[2] = *param_2;
          *param_2 = uVar1;
          param_2 = param_2 + 4;
        } while (uVar2 < uVar3);
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if (uVar2 == 2) {
        if (uVar3 != 0) {
          uVar2 = 0;
          do {
            uVar1 = param_2[4];
            uVar2 = uVar2 + 1;
            param_2[4] = *param_2;
            *param_2 = uVar1;
            uVar1 = param_2[5];
            param_2[5] = param_2[1];
            param_2[1] = uVar1;
            param_2 = param_2 + 6;
          } while (uVar2 < uVar3);
        }
      }
      else if ((uVar2 == 6) && (uVar3 != 0)) {
        uVar2 = 0;
        do {
          uVar1 = param_2[4];
          uVar2 = uVar2 + 1;
          param_2[4] = *param_2;
          *param_2 = uVar1;
          uVar1 = param_2[5];
          param_2[5] = param_2[1];
          param_2[1] = uVar1;
          param_2 = param_2 + 8;
        } while (uVar2 < uVar3);
      }
    }
  }
  return;
}


