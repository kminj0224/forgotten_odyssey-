/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001722c0  Symbol: png_do_pack */

void png_do_pack(uint *param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if ((DAT_001723e8 & param_1[2]) != 0x10800) {
    return;
  }
  if (param_3 == 2) {
    uVar2 = *param_1;
    if (uVar2 == 0) goto LAB_001722f0;
    uVar1 = 0;
    uVar4 = 0;
    uVar3 = 6;
    puVar5 = param_2;
    do {
      uVar4 = uVar4 | ((byte)param_2[uVar1] & 3) << (uVar3 & 0xff);
      if (uVar3 == 0) {
        *puVar5 = (char)uVar4;
        puVar5 = puVar5 + 1;
        uVar4 = 0;
        uVar3 = 6;
      }
      else {
        uVar3 = uVar3 - 2;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
    if (uVar3 != 6) {
      *puVar5 = (char)uVar4;
      uVar2 = *param_1;
      goto LAB_001722f0;
    }
  }
  else if (param_3 == 4) {
    uVar2 = *param_1;
    if (uVar2 == 0) goto LAB_001722f0;
    uVar1 = 0;
    uVar4 = 0;
    uVar3 = 4;
    puVar5 = param_2;
    do {
      uVar4 = uVar4 | ((byte)param_2[uVar1] & 0xf) << (uVar3 & 0xff);
      if (uVar3 == 0) {
        *puVar5 = (char)uVar4;
        puVar5 = puVar5 + 1;
        uVar4 = 0;
        uVar3 = 4;
      }
      else {
        uVar3 = uVar3 - 4;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
    if (uVar3 != 4) {
      *puVar5 = (char)uVar4;
    }
  }
  else if (param_3 == 1) {
    uVar2 = *param_1;
    if (uVar2 == 0) goto LAB_001722f0;
    uVar1 = 0;
    uVar4 = 0;
    uVar3 = 0x80;
    puVar5 = param_2;
    do {
      if (param_2[uVar1] != '\0') {
        uVar4 = uVar4 | uVar3;
      }
      if (uVar3 < 2) {
        *puVar5 = (char)uVar4;
        puVar5 = puVar5 + 1;
        uVar4 = 0;
        uVar3 = 0x80;
      }
      else {
        uVar3 = (int)uVar3 >> 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
    if (uVar3 != 0x80) {
      *puVar5 = (char)uVar4;
      uVar2 = *param_1;
      goto LAB_001722f0;
    }
  }
  uVar2 = *param_1;
LAB_001722f0:
  *(char *)((int)param_1 + 9) = (char)param_3;
  uVar1 = (uint)*(byte *)((int)param_1 + 10) * param_3;
  *(char *)((int)param_1 + 0xb) = (char)uVar1;
  if ((uVar1 & 0xff) < 8) {
    param_1[1] = (uVar1 & 0xff) * uVar2 + 7 >> 3;
  }
  else {
    param_1[1] = (uVar1 * 0x1000000 >> 0x1b) * uVar2;
  }
  return;
}


