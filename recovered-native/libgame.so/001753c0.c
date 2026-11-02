/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001753c0  Symbol: png_handle_iCCP */

void png_handle_iCCP(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *local_5c;
  char acStack_58 [52];
  int local_24;
  
  iVar2 = DAT_001755ac;
  iVar10 = DAT_001755a8 + 0x1753d4;
  local_24 = **(int **)(iVar10 + DAT_001755ac);
  iVar7 = *(int *)(param_1 + 300);
  if (-1 < iVar7 << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar10 + DAT_001755b4);
  }
  iVar6 = DAT_001755d0;
  if (-1 < iVar7 << 0x1d) {
    if (iVar7 << 0x1e < 0) {
      png_warning(param_1,iVar10 + DAT_001755c4);
    }
    if ((param_2 == 0) || (iVar6 = DAT_001755cc, -1 < *(int *)(param_2 + 8) << 0x13)) {
      png_free(param_1,*(undefined4 *)(param_1 + 0x348));
      uVar3 = png_malloc(param_1,param_3 + 1);
      *(undefined4 *)(param_1 + 0x348) = uVar3;
      png_crc_read(param_1,uVar3,param_3);
      iVar7 = png_crc_finish(param_1,0);
      if (iVar7 == 0) {
        *(undefined *)(*(int *)(param_1 + 0x348) + param_3) = 0;
        pcVar5 = *(char **)(param_1 + 0x348);
        cVar1 = *pcVar5;
        pcVar8 = pcVar5;
        while (cVar1 != '\0') {
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar8;
        }
        if (pcVar5 + param_3 + -1 <= pcVar8 + 1) {
          png_free(param_1);
          iVar7 = DAT_001755c8;
          *(undefined4 *)(param_1 + 0x348) = 0;
          png_warning(param_1,iVar10 + iVar7);
          goto LAB_00175498;
        }
        if (pcVar8[1] != '\0') {
          png_warning(param_1,iVar10 + DAT_001755d4);
          pcVar5 = *(char **)(param_1 + 0x348);
        }
        pcVar8 = pcVar8 + (2 - (int)pcVar5);
        png_decompress_chunk(param_1,0,param_3,pcVar8,&local_5c);
        uVar11 = (int)local_5c - (int)pcVar8;
        if ((uVar11 < 4) || (local_5c < pcVar8)) {
          png_free(param_1,*(undefined4 *)(param_1 + 0x348));
          iVar7 = DAT_001755b0;
          *(undefined4 *)(param_1 + 0x348) = 0;
          png_warning(param_1,iVar10 + iVar7);
          goto LAB_00175498;
        }
        iVar7 = *(int *)(param_1 + 0x348);
        pbVar9 = (byte *)(pcVar8 + iVar7);
        uVar4 = (uint)*pbVar9 << 0x18 | (uint)pbVar9[3] | (uint)pbVar9[1] << 0x10 |
                (uint)pbVar9[2] << 8;
        uVar12 = uVar4;
        if ((uVar11 <= uVar4) && (uVar12 = uVar11, uVar11 < uVar4)) {
          png_free(param_1,iVar7);
          iVar7 = DAT_001755b8;
          *(undefined4 *)(param_1 + 0x348) = 0;
          png_warning(param_1,iVar10 + iVar7);
          snprintf(acStack_58,0x32,(char *)(iVar10 + DAT_001755bc),uVar4);
          png_warning(param_1,acStack_58);
          snprintf(acStack_58,0x32,(char *)(iVar10 + DAT_001755c0),uVar11);
          png_warning(param_1,acStack_58);
          goto LAB_00175498;
        }
        png_set_iCCP(param_1,param_2,iVar7,0,pbVar9,uVar12);
      }
      png_free(param_1,*(undefined4 *)(param_1 + 0x348));
      *(undefined4 *)(param_1 + 0x348) = 0;
      goto LAB_00175498;
    }
  }
  png_warning(param_1,iVar10 + iVar6);
  png_crc_finish(param_1,param_3);
LAB_00175498:
  if (local_24 != **(int **)(iVar10 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


