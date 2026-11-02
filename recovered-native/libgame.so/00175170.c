/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00175170  Symbol: png_handle_sPLT */

void png_handle_sPLT(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  ushort *puVar3;
  char *pcVar4;
  int extraout_r1;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 local_38;
  char local_34;
  int local_30;
  uint local_2c;
  
  iVar5 = *(int *)(param_1 + 0x328);
  iVar9 = DAT_0017539c + 0x17518a;
  if (iVar5 == 0) {
LAB_001751a2:
    if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar9 + DAT_001753a4);
    }
    if (*(int *)(param_1 + 300) << 0x1d < 0) {
      png_warning(param_1,iVar9 + DAT_001753b4);
      png_crc_finish(param_1,param_3);
    }
    else {
      png_free(param_1,*(undefined4 *)(param_1 + 0x348));
      uVar2 = png_malloc(param_1,param_3 + 1);
      *(undefined4 *)(param_1 + 0x348) = uVar2;
      png_crc_read(param_1,uVar2,param_3);
      iVar5 = png_crc_finish(param_1,0);
      if (iVar5 == 0) {
        *(undefined *)(*(int *)(param_1 + 0x348) + param_3) = 0;
        pcVar4 = *(char **)(param_1 + 0x348);
        cVar1 = *pcVar4;
        pcVar6 = pcVar4;
        while (cVar1 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
        if (pcVar4 + param_3 + -2 < pcVar6 + 1) {
          png_free(param_1);
          iVar5 = DAT_001753a8;
          *(undefined4 *)(param_1 + 0x348) = 0;
          png_warning(param_1,iVar9 + iVar5);
        }
        else {
          local_34 = pcVar6[1];
          pbVar7 = (byte *)(pcVar6 + 2);
          uVar2 = 6;
          if (local_34 != '\b') {
            uVar2 = 10;
          }
          iVar5 = *(int *)(param_1 + 0x348);
          param_3 = param_3 + (iVar5 - (int)pbVar7);
          __aeabi_idivmod(param_3,uVar2);
          if (extraout_r1 == 0) {
            local_2c = __divsi3(param_3,uVar2);
            if (DAT_001753a0 < local_2c) {
              png_warning(param_1,iVar9 + DAT_001753b0);
            }
            else {
              local_30 = png_malloc_warn(param_1,local_2c * 10);
              if (local_30 == 0) {
                png_warning(param_1,iVar9 + DAT_001753bc);
              }
              else {
                if (0 < (int)local_2c) {
                  iVar5 = 0;
                  iVar9 = 0;
                  while( true ) {
                    puVar3 = (ushort *)(local_30 + iVar5);
                    if (local_34 == '\b') {
                      *puVar3 = (ushort)*pbVar7;
                      puVar3[1] = (ushort)pbVar7[1];
                      puVar3[2] = (ushort)pbVar7[2];
                      pbVar8 = pbVar7 + 4;
                      puVar3[3] = (ushort)pbVar7[3];
                    }
                    else {
                      *puVar3 = (ushort)pbVar7[1] + (ushort)*pbVar7 * 0x100;
                      puVar3[1] = (ushort)pbVar7[2] * 0x100 + (ushort)pbVar7[3];
                      puVar3[2] = (ushort)pbVar7[4] * 0x100 + (ushort)pbVar7[5];
                      pbVar8 = pbVar7 + 8;
                      puVar3[3] = (ushort)pbVar7[7] + (ushort)pbVar7[6] * 0x100;
                    }
                    iVar9 = iVar9 + 1;
                    puVar3[4] = (ushort)pbVar8[1] + (ushort)*pbVar8 * 0x100;
                    iVar5 = iVar5 + 10;
                    if ((int)local_2c <= iVar9) break;
                    pbVar7 = pbVar8 + 2;
                  }
                }
                local_38 = *(undefined4 *)(param_1 + 0x348);
                png_set_sPLT(param_1,param_2,&local_38,1);
                png_free(param_1,*(undefined4 *)(param_1 + 0x348));
                *(undefined4 *)(param_1 + 0x348) = 0;
                png_free(param_1,local_30);
              }
            }
          }
          else {
            png_free(param_1,iVar5);
            iVar5 = DAT_001753b8;
            *(undefined4 *)(param_1 + 0x348) = 0;
            png_warning(param_1,iVar9 + iVar5);
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
    if (iVar5 != 1) {
      *(int *)(param_1 + 0x328) = iVar5 + -1;
      if (iVar5 + -1 != 1) goto LAB_001751a2;
      png_warning(param_1,iVar9 + DAT_001753ac);
    }
    png_crc_finish(param_1,param_3);
  }
  return;
}


