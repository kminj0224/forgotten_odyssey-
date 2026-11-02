/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ae1c  Symbol: png_read_destroy */

void png_read_destroy(void *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined auStack_128 [260];
  
  if (param_2 != 0) {
    png_info_destroy();
  }
  if (param_3 != 0) {
    png_info_destroy(param_1,param_3);
  }
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x170));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x30c));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x1ac));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x348));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2b0));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2b4));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x228));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x22c));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x230));
  if ((int)(*(uint *)((int)param_1 + 0x2d8) << 0x13) < 0) {
    png_zfree(param_1,*(undefined4 *)((int)param_1 + 0x1d8));
    uVar7 = *(uint *)((int)param_1 + 0x2d8) & DAT_0016b080;
    *(uint *)((int)param_1 + 0x2d8) = uVar7;
  }
  else {
    uVar7 = *(uint *)((int)param_1 + 0x2d8) & DAT_0016b080;
    *(uint *)((int)param_1 + 0x2d8) = uVar7;
  }
  if ((int)(uVar7 << 0x12) < 0) {
    png_free(param_1,*(undefined4 *)((int)param_1 + 0x24c));
    uVar7 = *(uint *)((int)param_1 + 0x2d8) & DAT_0016b084;
    *(uint *)((int)param_1 + 0x2d8) = uVar7;
  }
  else {
    uVar7 = uVar7 & DAT_0016b084;
    *(uint *)((int)param_1 + 0x2d8) = uVar7;
  }
  if ((int)(uVar7 << 0x1c) < 0) {
    png_free(param_1,*(undefined4 *)((int)param_1 + 0x2b8));
    uVar7 = *(uint *)((int)param_1 + 0x2d8);
  }
  iVar1 = *(int *)((int)param_1 + 0x234);
  *(uint *)((int)param_1 + 0x2d8) = uVar7 & 0xfffffff7;
  if (iVar1 != 0) {
    iVar9 = 1 << (8U - *(int *)((int)param_1 + 0x21c) & 0xff);
    if (0 < iVar9) {
      iVar8 = 0;
      while( true ) {
        iVar4 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        png_free(param_1,*(undefined4 *)(iVar4 + iVar1));
        if (iVar9 <= iVar8) break;
        iVar1 = *(int *)((int)param_1 + 0x234);
      }
      iVar1 = *(int *)((int)param_1 + 0x234);
    }
    png_free(param_1,iVar1);
  }
  iVar1 = *(int *)((int)param_1 + 0x238);
  if (iVar1 != 0) {
    iVar9 = 1 << (8U - *(int *)((int)param_1 + 0x21c) & 0xff);
    if (0 < iVar9) {
      iVar8 = 0;
      while( true ) {
        iVar4 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        png_free(param_1,*(undefined4 *)(iVar4 + iVar1));
        if (iVar9 <= iVar8) break;
        iVar1 = *(int *)((int)param_1 + 0x238);
      }
      iVar1 = *(int *)((int)param_1 + 0x238);
    }
    png_free(param_1,iVar1);
  }
  iVar1 = *(int *)((int)param_1 + 0x23c);
  if (iVar1 != 0) {
    iVar9 = 1 << (8U - *(int *)((int)param_1 + 0x21c) & 0xff);
    if (0 < iVar9) {
      iVar8 = 0;
      while( true ) {
        iVar4 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        png_free(param_1,*(undefined4 *)(iVar4 + iVar1));
        if (iVar9 <= iVar8) break;
        iVar1 = *(int *)((int)param_1 + 0x23c);
      }
      iVar1 = *(int *)((int)param_1 + 0x23c);
    }
    png_free(param_1,iVar1);
  }
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2d4));
  inflateEnd((int)param_1 + 0x138);
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x274));
  png_free(param_1,*(undefined4 *)((int)param_1 + 0x2a8));
  memcpy(auStack_128,param_1,0x100);
  uVar5 = *(undefined4 *)((int)param_1 + 0x104);
  uVar2 = *(undefined4 *)((int)param_1 + 0x108);
  uVar6 = *(undefined4 *)((int)param_1 + 0x10c);
  uVar3 = *(undefined4 *)((int)param_1 + 0x308);
  memset(param_1,0,0x350);
  *(undefined4 *)((int)param_1 + 0x104) = uVar5;
  *(undefined4 *)((int)param_1 + 0x108) = uVar2;
  *(undefined4 *)((int)param_1 + 0x10c) = uVar6;
  *(undefined4 *)((int)param_1 + 0x308) = uVar3;
  memcpy(param_1,auStack_128,0x100);
  return;
}


