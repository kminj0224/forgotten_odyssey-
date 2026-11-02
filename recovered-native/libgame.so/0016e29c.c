/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016e29c  Symbol: png_do_read_filler */

void png_do_read_filler(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = *param_1;
  uVar2 = (undefined)param_3;
  uVar4 = (undefined)((uint)param_3 >> 8);
  if (*(char *)(param_1 + 2) == '\0') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (param_4 << 0x18 < 0) {
        puVar3 = (undefined *)(param_2 + uVar7);
        puVar6 = puVar3 + uVar7;
        if (1 < uVar7) {
          uVar8 = 1;
          puVar5 = puVar6;
          do {
            puVar5[-1] = uVar2;
            puVar3 = puVar3 + -1;
            uVar8 = uVar8 + 1;
            puVar5[-2] = *puVar3;
            puVar5 = puVar5 + -2;
          } while (uVar8 != uVar7);
          puVar6 = puVar6 + (1 - uVar7) * 2;
        }
        puVar6[-1] = uVar2;
      }
      else if (uVar7 != 0) {
        puVar6 = (undefined *)(param_2 + uVar7);
        uVar8 = 0;
        puVar3 = puVar6 + uVar7;
        do {
          puVar6 = puVar6 + -1;
          uVar4 = *puVar6;
          uVar8 = uVar8 + 1;
          puVar3[-2] = uVar2;
          puVar3[-1] = uVar4;
          puVar3 = puVar3 + -2;
        } while (uVar8 < uVar7);
      }
      *(undefined *)((int)param_1 + 10) = 2;
      *(undefined *)((int)param_1 + 0xb) = 0x10;
      param_1[1] = uVar7 << 1;
      return;
    }
    if (*(char *)((int)param_1 + 9) != '\x10') {
      return;
    }
    if (param_4 << 0x18 < 0) {
      puVar3 = (undefined *)(param_2 + uVar7 * 2);
      puVar6 = puVar3 + uVar7 * 2;
      if (1 < uVar7) {
        uVar8 = 1;
        puVar5 = puVar6;
        do {
          puVar5[-1] = uVar4;
          puVar5[-2] = uVar2;
          uVar8 = uVar8 + 1;
          puVar5[-3] = puVar3[-1];
          puVar5[-4] = puVar3[-2];
          puVar3 = puVar3 + -2;
          puVar5 = puVar5 + -4;
        } while (uVar8 != uVar7);
        puVar6 = puVar6 + (1 - uVar7) * 4;
      }
      puVar6[-1] = uVar4;
      puVar6[-2] = uVar2;
      uVar4 = 2;
    }
    else {
      if (uVar7 != 0) {
        puVar3 = (undefined *)(param_2 + uVar7 * 2);
        uVar8 = 0;
        puVar6 = puVar3 + uVar7 * 2;
        do {
          uVar8 = uVar8 + 1;
          puVar6[-1] = puVar3[-1];
          uVar1 = puVar3[-2];
          puVar6[-3] = uVar4;
          puVar6[-4] = uVar2;
          puVar6[-2] = uVar1;
          puVar6 = puVar6 + -4;
          puVar3 = puVar3 + -2;
        } while (uVar8 < uVar7);
      }
      uVar4 = 2;
    }
  }
  else {
    if (*(char *)(param_1 + 2) != '\x02') {
      return;
    }
    if (*(char *)((int)param_1 + 9) != '\b') {
      if (*(char *)((int)param_1 + 9) != '\x10') {
        return;
      }
      if (param_4 << 0x18 < 0) {
        puVar3 = (undefined *)(param_2 + uVar7 * 6);
        puVar6 = puVar3 + uVar7 * 2;
        if (1 < uVar7) {
          uVar8 = 1;
          puVar5 = puVar6;
          do {
            puVar5[-1] = uVar4;
            puVar5[-2] = uVar2;
            uVar8 = uVar8 + 1;
            puVar5[-3] = puVar3[-1];
            puVar5[-4] = puVar3[-2];
            puVar5[-5] = puVar3[-3];
            puVar5[-6] = puVar3[-4];
            puVar5[-7] = puVar3[-5];
            puVar5[-8] = puVar3[-6];
            puVar3 = puVar3 + -6;
            puVar5 = puVar5 + -8;
          } while (uVar8 != uVar7);
          puVar6 = puVar6 + (1 - uVar7) * 8;
        }
        puVar6[-1] = uVar4;
        puVar6[-2] = uVar2;
      }
      else if (uVar7 != 0) {
        puVar3 = (undefined *)(param_2 + uVar7 * 6);
        uVar8 = 0;
        puVar6 = puVar3 + uVar7 * 2;
        do {
          uVar8 = uVar8 + 1;
          puVar6[-1] = puVar3[-1];
          puVar6[-2] = puVar3[-2];
          puVar6[-3] = puVar3[-3];
          puVar6[-4] = puVar3[-4];
          puVar6[-5] = puVar3[-5];
          uVar1 = puVar3[-6];
          puVar6[-7] = uVar4;
          puVar6[-8] = uVar2;
          puVar6[-6] = uVar1;
          puVar6 = puVar6 + -8;
          puVar3 = puVar3 + -6;
        } while (uVar8 < uVar7);
      }
      *(undefined *)((int)param_1 + 10) = 4;
      *(undefined *)((int)param_1 + 0xb) = 0x40;
      param_1[1] = uVar7 << 3;
      return;
    }
    if (param_4 << 0x18 < 0) {
      puVar3 = (undefined *)(param_2 + uVar7 * 3);
      puVar6 = puVar3 + uVar7;
      if (1 < uVar7) {
        uVar8 = 1;
        puVar5 = puVar6;
        do {
          puVar5[-1] = uVar2;
          uVar8 = uVar8 + 1;
          puVar5[-2] = puVar3[-1];
          puVar5[-3] = puVar3[-2];
          puVar5[-4] = puVar3[-3];
          puVar3 = puVar3 + -3;
          puVar5 = puVar5 + -4;
        } while (uVar8 != uVar7);
        puVar6 = puVar6 + (1 - uVar7) * 4;
      }
      puVar6[-1] = uVar2;
      uVar4 = 4;
    }
    else {
      if (uVar7 != 0) {
        puVar6 = (undefined *)(param_2 + uVar7 * 3);
        uVar8 = 0;
        puVar3 = puVar6 + uVar7;
        do {
          uVar8 = uVar8 + 1;
          puVar3[-1] = puVar6[-1];
          puVar3[-2] = puVar6[-2];
          uVar4 = puVar6[-3];
          puVar3[-4] = uVar2;
          puVar3[-3] = uVar4;
          puVar3 = puVar3 + -4;
          puVar6 = puVar6 + -3;
        } while (uVar8 < uVar7);
      }
      uVar4 = 4;
    }
  }
  *(undefined *)((int)param_1 + 10) = uVar4;
  *(undefined *)((int)param_1 + 0xb) = 0x20;
  param_1[1] = uVar7 << 2;
  return;
}


