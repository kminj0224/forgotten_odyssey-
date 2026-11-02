/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00175d78  Symbol: png_handle_PLTE */

void png_handle_PLTE(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_00175ec0;
  uVar3 = *(uint *)(param_1 + 300);
  iVar6 = DAT_00175ec4 + 0x175d98;
  if (-1 < (int)(uVar3 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,DAT_00175ed0 + iVar6);
  }
  iVar5 = DAT_00175edc;
  if (-1 < (int)(uVar3 << 0x1d)) {
    if ((int)(uVar3 << 0x1e) < 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,DAT_00175ed4 + iVar6);
    }
    *(uint *)(param_1 + 300) = uVar3 | 2;
    bVar1 = *(byte *)(param_1 + 0x1ea);
    iVar5 = DAT_00175ed8;
    if ((bVar1 & 2) != 0) {
      if ((param_3 < 0x301) && (__aeabi_uidivmod(param_3,3), extraout_r1 == 0)) {
        uVar3 = __divsi3(param_3,3);
        if (0 < (int)uVar3) {
          iVar5 = 0;
          puVar4 = &stack0xffffffe0 + iVar2;
          do {
            png_crc_read(param_1,&stack0x000002e0 + iVar2,3);
            iVar5 = iVar5 + 1;
            *puVar4 = (&stack0x000002e0)[iVar2];
            puVar4[1] = (&stack0x000002e1)[iVar2];
            puVar4[2] = (&stack0x000002e2)[iVar2];
            puVar4 = puVar4 + 3;
          } while (iVar5 < (int)uVar3);
        }
        png_crc_finish(param_1,0);
        png_set_PLTE(param_1,param_2,&stack0xffffffe0 + iVar2,uVar3);
        if (*(char *)(param_1 + 0x1ea) != '\x03') {
          return;
        }
        if (param_2 == 0) {
          return;
        }
        if (-1 < *(int *)(param_2 + 8) << 0x1b) {
          return;
        }
        if ((uVar3 & 0xffff) < (uint)*(ushort *)(param_1 + 0x1de)) {
          png_warning(param_1,DAT_00175ee0 + iVar6);
          *(short *)(param_1 + 0x1de) = (short)uVar3;
        }
        if ((uint)*(ushort *)(param_2 + 0x16) <= (uVar3 & 0xffff)) {
          return;
        }
        png_warning(param_1,DAT_00175ecc + iVar6);
        *(short *)(param_2 + 0x16) = (short)uVar3;
        return;
      }
      iVar5 = DAT_00175ec8;
      if (bVar1 == 3) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,DAT_00175ec8 + iVar6);
      }
    }
  }
  png_warning(param_1,iVar5 + iVar6);
  png_crc_finish(param_1,param_3);
  return;
}


