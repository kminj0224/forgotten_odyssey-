/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174fb0  Symbol: png_handle_tRNS */

void png_handle_tRNS(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_124;
  byte local_123;
  byte local_122;
  byte local_121;
  byte local_120;
  byte local_11f;
  undefined auStack_11c [256];
  int local_1c;
  
  iVar2 = DAT_00175148;
  iVar4 = DAT_00175144 + 0x174fc0;
  local_1c = **(int **)(iVar4 + DAT_00175148);
  if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar4 + DAT_00175150);
  }
  iVar3 = DAT_0017515c;
  if ((-1 < *(int *)(param_1 + 300) << 0x1d) &&
     ((param_2 == 0 || (iVar3 = DAT_00175158, -1 < *(int *)(param_2 + 8) << 0x1b)))) {
    cVar1 = *(char *)(param_1 + 0x1ea);
    iVar3 = DAT_0017514c;
    if (cVar1 == '\0') {
      if (param_3 == 2) {
        png_crc_read(param_1,&local_124,2);
        *(undefined2 *)(param_1 + 0x1de) = 1;
        *(ushort *)(param_1 + 600) = (ushort)local_124 * 0x100 + (ushort)local_123;
        iVar3 = png_crc_finish(param_1,0);
joined_r0x00175060:
        if (iVar3 == 0) {
          png_set_tRNS(param_1,param_2,auStack_11c,*(undefined2 *)(param_1 + 0x1de),param_1 + 0x250)
          ;
        }
        else {
          *(undefined2 *)(param_1 + 0x1de) = 0;
        }
        goto LAB_00175004;
      }
    }
    else if (cVar1 == '\x02') {
      if (param_3 == 6) {
        png_crc_read(param_1,&local_124,6);
        *(undefined2 *)(param_1 + 0x1de) = 1;
        *(ushort *)(param_1 + DAT_00175160) = (ushort)local_124 * 0x100 + (ushort)local_123;
        *(ushort *)(param_1 + 0x254) = (ushort)local_122 * 0x100 + (ushort)local_121;
        *(ushort *)(param_1 + DAT_00175164) = (ushort)local_120 * 0x100 + (ushort)local_11f;
LAB_00175056:
        iVar3 = png_crc_finish(param_1,0);
        goto joined_r0x00175060;
      }
    }
    else {
      iVar3 = DAT_00175154;
      if (cVar1 == '\x03') {
        if (-1 < *(int *)(param_1 + 300) << 0x1e) {
          png_warning(param_1,iVar4 + DAT_0017516c);
        }
        iVar3 = DAT_0017514c;
        if ((param_3 < 0x101) && (param_3 <= *(ushort *)(param_1 + 0x1dc))) {
          if (param_3 == 0) {
            png_warning(param_1,iVar4 + DAT_00175168);
            png_crc_finish(param_1,0);
            goto LAB_00175004;
          }
          png_crc_read(param_1,auStack_11c,param_3);
          *(short *)(param_1 + 0x1de) = (short)param_3;
          goto LAB_00175056;
        }
      }
    }
  }
  png_warning(param_1,iVar4 + iVar3);
  png_crc_finish(param_1,param_3);
LAB_00175004:
  if (local_1c != **(int **)(iVar4 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


