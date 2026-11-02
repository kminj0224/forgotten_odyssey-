/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172654  Symbol: png_do_write_swap_alpha */

void png_do_write_swap_alpha(uint *param_1,undefined *param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 2) == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      uVar5 = *param_1;
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          uVar1 = *param_2;
          uVar4 = uVar4 + 1;
          *param_2 = param_2[1];
          param_2[1] = param_2[2];
          uVar2 = param_2[3];
          param_2[3] = uVar1;
          param_2[2] = uVar2;
          param_2 = param_2 + 4;
        } while (uVar4 < uVar5);
      }
    }
    else {
      uVar5 = *param_1;
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          uVar1 = *param_2;
          uVar2 = param_2[1];
          *param_2 = param_2[2];
          uVar4 = uVar4 + 1;
          param_2[1] = param_2[3];
          param_2[2] = param_2[4];
          param_2[3] = param_2[5];
          uVar3 = param_2[6];
          param_2[6] = uVar1;
          param_2[4] = uVar3;
          uVar1 = param_2[7];
          param_2[7] = uVar2;
          param_2[5] = uVar1;
          param_2 = param_2 + 8;
        } while (uVar4 < uVar5);
      }
    }
  }
  else if (*(char *)(param_1 + 2) == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      uVar5 = *param_1;
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          uVar1 = param_2[1];
          uVar4 = uVar4 + 1;
          param_2[1] = *param_2;
          *param_2 = uVar1;
          param_2 = param_2 + 2;
        } while (uVar4 < uVar5);
      }
    }
    else {
      uVar5 = *param_1;
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          uVar1 = *param_2;
          uVar2 = param_2[1];
          *param_2 = param_2[2];
          uVar4 = uVar4 + 1;
          param_2[2] = uVar1;
          param_2[1] = param_2[3];
          param_2[3] = uVar2;
          param_2 = param_2 + 4;
        } while (uVar4 < uVar5);
      }
    }
  }
  return;
}


