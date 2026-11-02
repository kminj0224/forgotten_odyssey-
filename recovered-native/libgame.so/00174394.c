/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174394  Symbol: png_handle_zTXt */

void png_handle_zTXt(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_24;
  
  iVar4 = *(int *)(param_1 + 0x328);
  iVar8 = DAT_0017452c + 0x1743ac;
  if (iVar4 == 0) {
LAB_001743c4:
    uVar5 = *(uint *)(param_1 + 300);
    if (-1 < (int)(uVar5 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar8 + DAT_00174538);
    }
    if ((int)(uVar5 << 0x1d) < 0) {
      *(uint *)(param_1 + 300) = uVar5 | 8;
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x348));
    iVar4 = png_malloc_warn(param_1,param_3 + 1);
    *(int *)(param_1 + 0x348) = iVar4;
    if (iVar4 == 0) {
      png_warning(param_1,iVar8 + DAT_00174548);
    }
    else {
      png_crc_read(param_1,iVar4,param_3);
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 == 0) {
        *(undefined *)(*(int *)(param_1 + 0x348) + param_3) = 0;
        pcVar3 = *(char **)(param_1 + 0x348);
        cVar1 = *pcVar3;
        pcVar6 = pcVar3;
        while (cVar1 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
        if (pcVar6 < pcVar3 + param_3 + -2) {
          if (pcVar6[1] != '\0') {
            png_warning(param_1,iVar8 + DAT_0017453c);
            pcVar3 = *(char **)(param_1 + 0x348);
          }
          png_decompress_chunk(param_1,0,param_3,pcVar6 + (2 - (int)pcVar3),&local_24);
          puVar2 = (undefined4 *)png_malloc_warn(param_1,0x1c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            uVar7 = *(undefined4 *)(param_1 + 0x348);
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[4] = 0;
            puVar2[1] = uVar7;
            puVar2[2] = pcVar6 + (2 - (int)pcVar3) + *(int *)(param_1 + 0x348);
            puVar2[3] = local_24;
            iVar4 = png_set_text_2(param_1,param_2,puVar2,1);
            png_free(param_1,puVar2);
            png_free(param_1,*(undefined4 *)(param_1 + 0x348));
            *(undefined4 *)(param_1 + 0x348) = 0;
            if (iVar4 == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            png_error(param_1,iVar8 + DAT_00174530);
          }
          png_warning(param_1,iVar8 + DAT_00174540);
          png_free(param_1,*(undefined4 *)(param_1 + 0x348));
          *(undefined4 *)(param_1 + 0x348) = 0;
          return;
        }
        png_warning(param_1,iVar8 + DAT_00174534);
      }
      png_free(param_1,*(undefined4 *)(param_1 + 0x348));
      *(undefined4 *)(param_1 + 0x348) = 0;
    }
  }
  else {
    if (iVar4 != 1) {
      *(int *)(param_1 + 0x328) = iVar4 + -1;
      if (iVar4 + -1 != 1) goto LAB_001743c4;
      png_warning(param_1,iVar8 + DAT_00174544);
    }
    png_crc_finish(param_1,param_3);
  }
  return;
}


