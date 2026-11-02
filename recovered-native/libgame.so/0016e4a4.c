/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016e4a4  Symbol: png_do_gray_to_rgb */

void png_do_gray_to_rgb(uint *param_1,int param_2)

{
  undefined uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  
  uVar4 = (uint)*(byte *)((int)param_1 + 9);
  uVar3 = *param_1;
  if (uVar4 < 8) {
    return;
  }
  bVar7 = *(byte *)(param_1 + 2);
  uVar8 = (uint)bVar7;
  if ((int)(uVar8 << 0x1e) < 0) {
    return;
  }
  if (uVar8 == 0) {
    if (uVar4 == 8) {
      if (uVar3 == 0) goto LAB_0016e4fc;
      param_2 = param_2 + (uVar3 - 1);
      puVar2 = (undefined *)(param_2 + uVar3 * 2 + -2);
      iVar6 = 0;
      do {
        puVar2[2] = *(undefined *)(param_2 + iVar6);
        puVar2[1] = *(undefined *)(param_2 + iVar6);
        puVar5 = (undefined *)(param_2 + iVar6);
        iVar6 = iVar6 + -1;
        *puVar2 = *puVar5;
        puVar2 = puVar2 + -3;
      } while ((uint)-iVar6 < uVar3);
    }
    else {
      if (uVar3 == 0) goto LAB_0016e4fc;
      param_2 = param_2 + uVar3 * 2 + -1;
      puVar5 = (undefined *)(param_2 + -1);
      puVar2 = (undefined *)(param_2 + uVar3 * 4 + -5);
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        puVar2[5] = puVar5[1];
        puVar2[4] = *puVar5;
        puVar2[3] = puVar5[1];
        puVar2[2] = *puVar5;
        puVar2[1] = puVar5[1];
        uVar1 = *puVar5;
        puVar5 = puVar5 + -2;
        *puVar2 = uVar1;
        puVar2 = puVar2 + -6;
      } while (uVar4 < uVar3);
    }
  }
  else {
    if (uVar8 != 4) goto LAB_0016e4fc;
    if (uVar4 == 8) {
      if (uVar3 == 0) goto LAB_0016e4fc;
      param_2 = param_2 + uVar3 * 2 + -1;
      puVar5 = (undefined *)(param_2 + -1);
      puVar2 = (undefined *)(param_2 + uVar3 * 2 + -3);
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        puVar2[3] = puVar5[1];
        puVar2[2] = *puVar5;
        puVar2[1] = *puVar5;
        uVar1 = *puVar5;
        puVar5 = puVar5 + -2;
        *puVar2 = uVar1;
        puVar2 = puVar2 + -4;
      } while (uVar4 < uVar3);
    }
    else {
      if (uVar3 == 0) goto LAB_0016e4fc;
      param_2 = param_2 + uVar3 * 4 + -1;
      puVar5 = (undefined *)(param_2 + -3);
      puVar2 = (undefined *)(param_2 + uVar3 * 4 + -7);
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        puVar2[7] = puVar5[3];
        puVar2[6] = puVar5[2];
        puVar2[5] = puVar5[1];
        puVar2[4] = *puVar5;
        puVar2[3] = puVar5[1];
        puVar2[2] = *puVar5;
        puVar2[1] = puVar5[1];
        uVar1 = *puVar5;
        puVar5 = puVar5 + -4;
        *puVar2 = uVar1;
        puVar2 = puVar2 + -8;
      } while (uVar4 < uVar3);
    }
  }
  uVar4 = (uint)*(byte *)((int)param_1 + 9);
  bVar7 = *(byte *)(param_1 + 2);
LAB_0016e4fc:
  uVar8 = *(byte *)((int)param_1 + 10) + 2;
  uVar4 = (uVar8 & 0xff) * uVar4;
  *(char *)((int)param_1 + 10) = (char)uVar8;
  *(byte *)(param_1 + 2) = bVar7 | 2;
  *(char *)((int)param_1 + 0xb) = (char)uVar4;
  if ((uVar4 & 0xff) < 8) {
    param_1[1] = (uVar4 & 0xff) * uVar3 + 7 >> 3;
  }
  else {
    param_1[1] = (uVar4 * 0x1000000 >> 0x1b) * uVar3;
  }
  return;
}


