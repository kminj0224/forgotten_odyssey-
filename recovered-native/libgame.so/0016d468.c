/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016d468  Symbol: png_write_end */

void png_write_end(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 != 0) {
    if (-1 < *(int *)(param_1 + 300) << 0x1d) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,DAT_0016d5e8 + 0x16d47e + DAT_0016d5ec);
    }
    if (param_2 != 0) {
      if (((*(uint *)(param_2 + 8) & 0x200) != 0) && ((*(uint *)(param_1 + 300) & 0x200) == 0)) {
        png_write_tIME(param_1,param_2 + 0x3c);
      }
      iVar3 = *(int *)(param_2 + 0x30);
      if (0 < iVar3) {
        iVar4 = 0;
        iVar6 = 0;
        do {
          while( true ) {
            piVar1 = (int *)(*(int *)(param_2 + 0x38) + iVar4);
            iVar2 = *piVar1;
            if (iVar2 < 1) break;
            png_write_iTXt(param_1,iVar2,piVar1[1],piVar1[5],piVar1[6],piVar1[2]);
            *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar4) = 0xfffffffd;
            iVar3 = *(int *)(param_2 + 0x30);
LAB_0016d4d6:
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 0x1c;
            if (iVar3 <= iVar6) goto LAB_0016d50c;
          }
          if (iVar2 != 0) {
            if (iVar2 == -1) {
              png_write_tEXt(param_1,piVar1[1],piVar1[2],0);
              *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar4) = 0xfffffffd;
              iVar3 = *(int *)(param_2 + 0x30);
            }
            goto LAB_0016d4d6;
          }
          png_write_zTXt(param_1,piVar1[1],piVar1[2],0,0);
          iVar6 = iVar6 + 1;
          *(undefined4 *)(*(int *)(param_2 + 0x38) + iVar4) = 0xfffffffe;
          iVar3 = *(int *)(param_2 + 0x30);
          iVar4 = iVar4 + 0x1c;
        } while (iVar6 < iVar3);
      }
LAB_0016d50c:
      if ((*(int *)(param_2 + 0xc0) != 0) &&
         (uVar5 = *(uint *)(param_2 + 0xbc), uVar5 < uVar5 + *(int *)(param_2 + 0xc0) * 0x14)) {
        do {
          iVar3 = png_handle_as_unknown(param_1,uVar5);
          if (((iVar3 != 1) &&
              ((*(byte *)(uVar5 + 0x10) != 0 && ((*(byte *)(uVar5 + 0x10) & 8) != 0)))) &&
             ((iVar3 == 3 ||
              (((*(byte *)(uVar5 + 3) & 0x20) != 0 || ((*(uint *)(param_1 + 0x130) & 0x10000) != 0))
              )))) {
            png_write_chunk(param_1,uVar5,*(undefined4 *)(uVar5 + 8),*(undefined4 *)(uVar5 + 0xc));
          }
          uVar5 = uVar5 + 0x14;
        } while (uVar5 < (uint)(*(int *)(param_2 + 0xbc) + *(int *)(param_2 + 0xc0) * 0x14));
      }
    }
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 8;
    png_write_IEND(param_1);
  }
  return;
}


