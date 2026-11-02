/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016e148  Symbol: png_do_read_swap_alpha */

void png_do_read_swap_alpha(uint *param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar5 = *param_1;
  if (*(char *)(param_1 + 2) == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (uVar5 != 0) {
        uVar4 = 0;
        puVar7 = (undefined *)(param_2 + param_1[1]);
        do {
          puVar6 = puVar7 + -4;
          uVar1 = puVar7[-1];
          uVar4 = uVar4 + 1;
          puVar7[-1] = puVar7[-2];
          puVar7[-2] = puVar7[-3];
          uVar2 = *puVar6;
          *puVar6 = uVar1;
          puVar7[-3] = uVar2;
          puVar7 = puVar6;
        } while (uVar4 < uVar5);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      puVar7 = (undefined *)(param_2 + param_1[1]);
      do {
        puVar6 = puVar7 + -8;
        uVar1 = puVar7[-1];
        uVar2 = puVar7[-2];
        puVar7[-1] = puVar7[-3];
        uVar4 = uVar4 + 1;
        puVar7[-2] = puVar7[-4];
        puVar7[-3] = puVar7[-5];
        puVar7[-4] = puVar7[-6];
        uVar3 = puVar7[-7];
        puVar7[-7] = uVar1;
        puVar7[-5] = uVar3;
        uVar1 = *puVar6;
        *puVar6 = uVar2;
        puVar7[-6] = uVar1;
        puVar7 = puVar6;
      } while (uVar4 < uVar5);
    }
  }
  else if (*(char *)(param_1 + 2) == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (uVar5 != 0) {
        uVar4 = 0;
        puVar7 = (undefined *)(param_2 + param_1[1]);
        do {
          puVar6 = puVar7 + -2;
          uVar1 = *puVar6;
          uVar4 = uVar4 + 1;
          *puVar6 = puVar7[-1];
          puVar7[-1] = uVar1;
          puVar7 = puVar6;
        } while (uVar4 < uVar5);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      puVar7 = (undefined *)(param_2 + param_1[1]);
      do {
        puVar6 = puVar7 + -4;
        uVar1 = puVar7[-1];
        uVar2 = puVar7[-2];
        puVar7[-1] = puVar7[-3];
        uVar4 = uVar4 + 1;
        puVar7[-3] = uVar1;
        puVar7[-2] = *puVar6;
        *puVar6 = uVar2;
        puVar7 = puVar6;
      } while (uVar4 < uVar5);
    }
  }
  return;
}


