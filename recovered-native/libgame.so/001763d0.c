/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001763d0  Symbol: png_write_start_row */

void png_write_start_row(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x1ec) * (uint)*(byte *)(param_1 + DAT_00176518);
  if (uVar5 < 8) {
    uVar5 = *(int *)(param_1 + 0x18c) * uVar5 + 7 >> 3;
  }
  else {
    uVar5 = *(int *)(param_1 + 0x18c) * (uVar5 >> 3);
  }
  puVar2 = (undefined *)png_malloc(param_1,uVar5 + 1);
  iVar1 = DAT_0017651c;
  *(undefined **)(param_1 + 0x1b0) = puVar2;
  *puVar2 = 0;
  uVar4 = (uint)*(byte *)(param_1 + iVar1);
  if ((int)(uVar4 << 0x1b) < 0) {
    puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1);
    *(undefined **)(param_1 + 0x1b4) = puVar2;
    *puVar2 = 1;
    uVar4 = (uint)*(byte *)(param_1 + iVar1);
  }
  if ((uVar4 & 0xe0) != 0) {
    uVar3 = png_calloc(param_1,uVar5 + 1);
    iVar1 = DAT_0017651c;
    *(undefined4 *)(param_1 + 0x1ac) = uVar3;
    uVar5 = (uint)*(byte *)(param_1 + iVar1);
    if ((int)(uVar5 << 0x1a) < 0) {
      puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1);
      *(undefined **)(param_1 + 0x1b8) = puVar2;
      *puVar2 = 2;
      uVar5 = (uint)*(byte *)(param_1 + iVar1);
    }
    if ((int)(uVar5 << 0x19) < 0) {
      puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1);
      *(undefined **)(param_1 + 0x1bc) = puVar2;
      *puVar2 = 3;
      uVar5 = (uint)*(byte *)(param_1 + 0x1e9);
    }
    if ((int)(uVar5 * 0x1000000) < 0) {
      puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1);
      *(undefined **)(param_1 + 0x1c0) = puVar2;
      *puVar2 = 4;
    }
  }
  if ((*(char *)(param_1 + DAT_00176520) == '\0') || (*(int *)(param_1 + 0x134) << 0x1e < 0)) {
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x18c);
  }
  else {
    *(uint *)(param_1 + 0x194) = *(int *)(param_1 + 400) + 7U >> 3;
    *(uint *)(param_1 + 0x198) = *(int *)(param_1 + 0x18c) + 7U >> 3;
  }
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
  return;
}


