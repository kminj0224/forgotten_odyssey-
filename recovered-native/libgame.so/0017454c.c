/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017454c  Symbol: png_handle_tEXt */

void png_handle_tEXt(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0x328);
  iVar8 = DAT_001746a0 + 0x174562;
  if (iVar4 == 0) {
LAB_00174578:
    uVar5 = *(uint *)(param_1 + 300);
    if (-1 < (int)(uVar5 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar8 + DAT_001746a8);
    }
    if ((int)(uVar5 << 0x1d) < 0) {
      *(uint *)(param_1 + 300) = uVar5 | 8;
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x348));
    iVar4 = png_malloc_warn(param_1,param_3 + 1);
    *(int *)(param_1 + 0x348) = iVar4;
    if (iVar4 == 0) {
      png_warning(param_1,iVar8 + DAT_001746b0);
    }
    else {
      png_crc_read(param_1,iVar4,param_3);
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 == 0) {
        pcVar6 = *(char **)(param_1 + 0x348);
        pcVar6[param_3] = '\0';
        cVar1 = *pcVar6;
        pcVar7 = pcVar6;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        puVar2 = (undefined4 *)png_malloc_warn(param_1,0x1c);
        if (puVar2 == (undefined4 *)0x0) {
          png_warning(param_1,iVar8 + DAT_001746b4);
          png_free(param_1,*(undefined4 *)(param_1 + 0x348));
          *(undefined4 *)(param_1 + 0x348) = 0;
        }
        else {
          *puVar2 = 0xffffffff;
          puVar2[1] = pcVar6;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[4] = 0;
          puVar2[2] = pcVar7 + (pcVar7 != pcVar6 + param_3);
          sVar3 = strlen(pcVar7 + (pcVar7 != pcVar6 + param_3));
          puVar2[3] = sVar3;
          iVar4 = png_set_text_2(param_1,param_2,puVar2,1);
          png_free(param_1,*(undefined4 *)(param_1 + 0x348));
          *(undefined4 *)(param_1 + 0x348) = 0;
          png_free(param_1,puVar2);
          if (iVar4 != 0) {
            png_warning(param_1,iVar8 + DAT_001746a4);
          }
        }
      }
      else {
        png_free(param_1,*(undefined4 *)(param_1 + 0x348));
        *(undefined4 *)(param_1 + 0x348) = 0;
      }
    }
  }
  else {
    if (iVar4 != 1) {
      *(int *)(param_1 + 0x328) = iVar4 + -1;
      if (iVar4 + -1 != 1) goto LAB_00174578;
      png_warning(param_1,iVar8 + DAT_001746ac);
    }
    png_crc_finish(param_1,param_3);
  }
  return;
}


