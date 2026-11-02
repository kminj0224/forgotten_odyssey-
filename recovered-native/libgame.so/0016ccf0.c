/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ccf0  Symbol: png_write_destroy */

void png_write_destroy(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auStack_128 [260];
  
  deflateEnd((int)param_1 + 0x138);
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x170));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x1b0));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x1ac));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x1b4));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x1b8));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x1bc));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x1c0));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2d4));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2c0));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2c4));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2c8));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2cc));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2d0));
  memcpy(auStack_128,param_1,0x100);
  uVar1 = *(undefined4 *)((int)param_1 + 0x104);
  uVar3 = *(undefined4 *)((int)param_1 + 0x108);
  uVar2 = *(undefined4 *)((int)param_1 + 0x10c);
  uVar4 = *(undefined4 *)((int)param_1 + 0x308);
  memset(param_1,0,0x350);
  *(undefined4 *)((int)param_1 + 0x104) = uVar1;
  *(undefined4 *)((int)param_1 + 0x10c) = uVar2;
  *(undefined4 *)((int)param_1 + 0x108) = uVar3;
  *(undefined4 *)((int)param_1 + 0x308) = uVar4;
  memcpy(param_1,auStack_128,0x100);
  return;
}


