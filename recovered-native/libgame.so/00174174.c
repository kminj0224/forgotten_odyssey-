/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174174  Symbol: png_handle_iTXt */

void png_handle_iTXt(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  size_t local_2c [2];
  
  iVar4 = *(int *)(param_1 + 0x328);
  iVar10 = DAT_00174374 + 0x174192;
  if (iVar4 == 0) {
LAB_001741a6:
    uVar6 = *(uint *)(param_1 + 300);
    if (-1 < (int)(uVar6 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar10 + DAT_0017437c);
    }
    if ((int)(uVar6 << 0x1d) < 0) {
      *(uint *)(param_1 + 300) = uVar6 | 8;
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x348));
    iVar4 = png_malloc_warn(param_1,param_3 + 1);
    *(int *)(param_1 + 0x348) = iVar4;
    if (iVar4 == 0) {
      png_warning(param_1,iVar10 + DAT_00174388);
    }
    else {
      png_crc_read(param_1,iVar4,param_3);
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 == 0) {
        *(undefined *)(*(int *)(param_1 + 0x348) + param_3) = 0;
        pcVar9 = *(char **)(param_1 + 0x348);
        cVar1 = *pcVar9;
        pcVar7 = pcVar9;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        iVar4 = DAT_00174378;
        if (pcVar7 + 1 < pcVar9 + param_3 + -3) {
          bVar2 = pcVar7[1];
          cVar1 = pcVar7[3];
          pcVar8 = pcVar7 + 3;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
          pcVar5 = pcVar8 + 1;
          if (pcVar5 < pcVar9 + param_3) {
            cVar1 = pcVar8[1];
            pcVar8 = pcVar5;
            while (cVar1 != '\0') {
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar8;
            }
            iVar4 = DAT_0017438c;
            if (pcVar8 + 1 < pcVar9 + param_3) {
              iVar4 = (int)(pcVar8 + 1) - (int)pcVar9;
              if (bVar2 == 0) {
                local_2c[0] = strlen(pcVar9 + iVar4);
              }
              else {
                png_decompress_chunk(param_1,pcVar7[2],param_3,iVar4,local_2c);
              }
              piVar3 = (int *)png_malloc_warn(param_1,0x1c);
              if (piVar3 == (int *)0x0) {
                png_warning(param_1,iVar10 + DAT_00174390);
                png_free(param_1,*(undefined4 *)(param_1 + 0x348));
                *(undefined4 *)(param_1 + 0x348) = 0;
                return;
              }
              *piVar3 = bVar2 + 1;
              piVar3[6] = (int)(pcVar5 + (*(int *)(param_1 + 0x348) - (int)pcVar9));
              piVar3[5] = (int)(pcVar7 + 3 + (*(int *)(param_1 + 0x348) - (int)pcVar9));
              piVar3[4] = local_2c[0];
              piVar3[3] = 0;
              piVar3[1] = *(int *)(param_1 + 0x348);
              piVar3[2] = *(int *)(param_1 + 0x348) + iVar4;
              iVar4 = png_set_text_2(param_1,param_2,piVar3,1);
              png_free(param_1,piVar3);
              png_free(param_1,*(undefined4 *)(param_1 + 0x348));
              *(undefined4 *)(param_1 + 0x348) = 0;
              if (iVar4 == 0) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              png_error(param_1,iVar10 + DAT_00174380);
            }
          }
        }
        png_warning(param_1,iVar10 + iVar4);
      }
      png_free(param_1,*(undefined4 *)(param_1 + 0x348));
      *(undefined4 *)(param_1 + 0x348) = 0;
    }
  }
  else {
    if (iVar4 != 1) {
      *(int *)(param_1 + 0x328) = iVar4 + -1;
      if (iVar4 + -1 != 1) goto LAB_001741a6;
      png_warning(param_1,iVar10 + DAT_00174384);
    }
    png_crc_finish(param_1,param_3);
  }
  return;
}


