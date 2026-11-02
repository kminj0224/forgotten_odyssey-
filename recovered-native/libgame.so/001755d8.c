/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001755d8  Symbol: png_handle_sRGB */

void png_handle_sRGB(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_1c [4];
  
  iVar2 = *(int *)(param_1 + 300);
  iVar4 = DAT_00175744 + 0x1755ec;
  if (-1 < iVar2 << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar4 + DAT_00175774);
  }
  iVar1 = DAT_00175780;
  if (-1 < iVar2 << 0x1d) {
    if (iVar2 << 0x1e < 0) {
      png_warning(param_1,iVar4 + DAT_00175778);
    }
    if (((param_2 == 0) || (iVar1 = DAT_0017577c, -1 < *(int *)(param_2 + 8) << 0x14)) &&
       (iVar1 = DAT_00175748, param_3 == 1)) {
      png_crc_read(param_1,local_1c,1);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 != 0) {
        return;
      }
      if (local_1c[0] < 4) {
        if (param_2 != 0) {
          uVar3 = *(uint *)(param_2 + 8);
          if (((uVar3 & 1) != 0) && (1000 < (uint)(*(int *)(param_2 + 0xfc) + DAT_0017574c))) {
            png_warning(param_1,iVar4 + DAT_00175784);
            fprintf((FILE *)(*(int *)(iVar4 + DAT_00175788) + 0xa8),(char *)(iVar4 + DAT_0017578c),
                    *(undefined4 *)(param_1 + 0x2f8));
            uVar3 = *(uint *)(param_2 + 8);
          }
          if (((int)(uVar3 << 0x1d) < 0) &&
             (((2000 < (uint)(*(int *)(param_2 + 0x100) + DAT_00175750) ||
               (2000 < (uint)(*(int *)(param_2 + 0x104) + DAT_00175754))) ||
              ((2000 < (uint)(*(int *)(param_2 + 0x108) + DAT_00175758) ||
               ((((2000 < (uint)(*(int *)(param_2 + 0x10c) + DAT_0017575c) ||
                  (2000 < (uint)(*(int *)(param_2 + 0x110) + DAT_00175760))) ||
                 (2000 < (uint)(*(int *)(param_2 + 0x114) + DAT_00175764))) ||
                ((2000 < (uint)(*(int *)(param_2 + 0x118) + DAT_00175768) ||
                 (2000 < (uint)(*(int *)(param_2 + 0x11c) + DAT_0017576c))))))))))) {
            png_warning(param_1,iVar4 + DAT_00175770);
          }
        }
        png_set_sRGB_gAMA_and_cHRM(param_1,param_2,local_1c[0]);
        return;
      }
      png_warning(param_1,iVar4 + DAT_00175790);
      return;
    }
  }
  png_warning(param_1,iVar4 + iVar1);
  png_crc_finish(param_1,param_3);
  return;
}


