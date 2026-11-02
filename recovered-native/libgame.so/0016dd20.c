/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dd20  Symbol: png_read_transform_info */

void png_read_transform_info(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x134);
  if ((int)(uVar4 << 0x13) < 0) {
    uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
    if (uVar3 == 3) {
      if ((*(short *)(param_1 + 0x1de) == 0) || (-1 < (int)(uVar4 << 6))) {
        *(undefined *)((int)param_2 + 0x19) = 2;
      }
      else {
        *(undefined *)((int)param_2 + 0x19) = 6;
      }
      *(undefined *)(param_2 + 6) = 8;
      *(undefined2 *)((int)param_2 + 0x16) = 0;
      uVar4 = *(uint *)(param_1 + 0x134);
      goto LAB_0016dd84;
    }
    if ((*(short *)(param_1 + 0x1de) != 0) && ((int)(uVar4 << 6) < 0)) {
      *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 4;
      uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
    }
    if (*(byte *)(param_2 + 6) < 8) {
      *(undefined *)(param_2 + 6) = 8;
    }
    *(undefined2 *)((int)param_2 + 0x16) = 0;
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  else {
LAB_0016dd84:
    uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
  }
  if ((int)(uVar4 << 0x18) < 0) {
    *(byte *)((int)param_2 + 0x19) = (byte)uVar3 & 0xfb;
    *(undefined2 *)((int)param_2 + 0x16) = 0;
    memcpy((void *)((int)param_2 + 0x5a),(void *)(param_1 + 0x1fc),10);
    uVar4 = *(uint *)(param_1 + 0x134);
    uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
  }
  if ((int)(uVar4 << 0x12) < 0) {
    param_2[10] = *(int *)(param_1 + 0x220);
    param_2[0x3f] = *(int *)(param_1 + 0x2f8);
    uVar4 = *(uint *)(param_1 + 0x134);
  }
  if ((int)(uVar4 << 0x15) < 0) {
    uVar2 = (uint)*(byte *)(param_2 + 6);
    if (uVar2 == 0x10) {
      *(undefined *)(param_2 + 6) = 8;
      uVar4 = *(uint *)(param_1 + 0x134);
      uVar2 = 8;
    }
  }
  else {
    uVar2 = (uint)*(byte *)(param_2 + 6);
  }
  if ((int)(uVar4 << 0x11) < 0) {
    *(byte *)((int)param_2 + 0x19) = (byte)uVar3 | 2;
    uVar4 = *(uint *)(param_1 + 0x134);
    uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
  }
  if ((uVar4 & 0x600000) != 0) {
    *(byte *)((int)param_2 + 0x19) = (byte)uVar3 & 0xfd;
    uVar4 = *(uint *)(param_1 + 0x134);
    uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
  }
  if (((int)(uVar4 << 0x19) < 0) &&
     ((((uVar3 == 6 || (uVar3 == 2)) && (*(int *)(param_1 + 0x2b0) != 0)) && (uVar2 == 8)))) {
    *(undefined *)((int)param_2 + 0x19) = 3;
    uVar4 = *(uint *)(param_1 + 0x134);
    uVar3 = 3;
  }
  if (((int)(uVar4 << 0x1d) < 0) && (uVar2 < 8)) {
    *(undefined *)(param_2 + 6) = 8;
    uVar2 = 8;
  }
  if ((uVar3 == 3) || (-1 < (int)(uVar3 << 0x1e))) {
    *(undefined *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined *)((int)param_2 + 0x1d) = 3;
  }
  if (*(int *)(param_1 + 0x130) << 9 < 0) {
    uVar3 = uVar3 & 0xfb;
    *(char *)((int)param_2 + 0x19) = (char)uVar3;
  }
  if ((int)(uVar3 << 0x1d) < 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x134);
  if ((iVar5 << 0x10 < 0) && ((bVar1 = *(byte *)((int)param_2 + 0x19), bVar1 == 0 || (bVar1 == 2))))
  {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
    iVar5 = *(int *)(param_1 + 0x134);
    if (iVar5 << 7 < 0) {
      *(byte *)((int)param_2 + 0x19) = bVar1 | 4;
      iVar5 = *(int *)(param_1 + 0x134);
    }
  }
  if (iVar5 << 0xb < 0) {
    if (uVar2 < *(byte *)(param_1 + 0x128)) {
      *(byte *)(param_2 + 6) = *(byte *)(param_1 + 0x128);
      uVar2 = (uint)*(byte *)(param_2 + 6);
    }
    uVar4 = (uint)*(byte *)((int)param_2 + 0x1d);
    bVar1 = *(byte *)(param_1 + DAT_0016defc);
    if (uVar4 < bVar1) {
      uVar4 = bVar1 * uVar2;
      *(byte *)((int)param_2 + 0x1d) = bVar1;
      *(char *)((int)param_2 + 0x1e) = (char)uVar4;
      goto joined_r0x0016dea8;
    }
  }
  else {
    uVar4 = (uint)*(byte *)((int)param_2 + 0x1d);
  }
  uVar4 = uVar4 * uVar2;
  *(char *)((int)param_2 + 0x1e) = (char)uVar4;
joined_r0x0016dea8:
  if ((uVar4 & 0xff) < 8) {
    uVar4 = (uVar4 & 0xff) * *param_2 + 7 >> 3;
  }
  else {
    uVar4 = *param_2 * (uVar4 * 0x1000000 >> 0x1b);
  }
  param_2[3] = uVar4;
  return;
}


