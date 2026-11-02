/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174d60  Symbol: png_handle_hIST */

void png_handle_hIST(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_00174e20;
  iVar4 = *(int *)(param_1 + 300);
  if (iVar4 << 0x1f < 0) {
    iVar3 = DAT_00174e34;
    if ((((iVar4 << 0x1d < 0) || (iVar3 = DAT_00174e30, -1 < iVar4 << 0x1e)) ||
        ((param_2 != 0 && (iVar3 = DAT_00174e38, *(int *)(param_2 + 8) << 0x19 < 0)))) ||
       ((uVar6 = param_3 >> 1, iVar3 = DAT_00174e28, 0x100 < uVar6 ||
        (*(ushort *)(param_1 + 0x1dc) != uVar6)))) {
      png_warning(param_1,DAT_00174e24 + 0x174d7c + iVar3);
      png_crc_finish(param_1,param_3);
    }
    else {
      if (uVar6 != 0) {
        uVar5 = 0;
        pbVar1 = &stack0x000001e8 + DAT_00174e20;
        do {
          png_crc_read(param_1,pbVar1,2);
          iVar4 = uVar5 * 2;
          uVar5 = uVar5 + 1;
          *(ushort *)(&stack0xffffffe8 + iVar4 + iVar2) =
               (ushort)*pbVar1 * 0x100 + (ushort)(byte)(&stack0x000001e9)[iVar2];
        } while (uVar5 < uVar6);
      }
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 == 0) {
        png_set_hIST(param_1,param_2,&stack0xffffffe8 + iVar2);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,DAT_00174e24 + 0x174d7c + DAT_00174e2c);
}


