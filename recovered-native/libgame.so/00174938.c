/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174938  Symbol: png_handle_pCAL */

void png_handle_pCAL(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  
  iVar17 = DAT_00174b40 + 0x174952;
  if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar17 + DAT_00174b48);
  }
  iVar11 = DAT_00174b54;
  if ((*(int *)(param_1 + 300) << 0x1d < 0) ||
     ((param_2 != 0 && (iVar11 = DAT_00174b50, *(int *)(param_2 + 8) << 0x15 < 0)))) {
    png_warning(param_1,iVar17 + iVar11);
    png_crc_finish(param_1,param_3);
  }
  else {
    png_free(param_1,*(undefined4 *)(param_1 + 0x348));
    iVar11 = png_malloc_warn(param_1,param_3 + 1);
    *(int *)(param_1 + 0x348) = iVar11;
    if (iVar11 == 0) {
      png_warning(param_1,iVar17 + DAT_00174b58);
    }
    else {
      png_crc_read(param_1,iVar11,param_3);
      iVar11 = png_crc_finish(param_1,0);
      if (iVar11 == 0) {
        *(undefined *)(*(int *)(param_1 + 0x348) + param_3) = 0;
        pcVar12 = *(char **)(param_1 + 0x348);
        cVar1 = *pcVar12;
        pcVar15 = pcVar12;
        while (cVar1 != '\0') {
          pcVar15 = pcVar15 + 1;
          cVar1 = *pcVar15;
        }
        iVar11 = DAT_00174b4c;
        if (pcVar15 + 0xc < pcVar12 + param_3) {
          bVar2 = pcVar15[1];
          bVar3 = pcVar15[2];
          bVar4 = pcVar15[4];
          bVar5 = pcVar15[3];
          bVar6 = pcVar15[5];
          bVar7 = pcVar15[6];
          bVar8 = pcVar15[8];
          bVar9 = pcVar15[7];
          bVar10 = pcVar15[9];
          uVar14 = (uint)(byte)pcVar15[10];
          iVar11 = DAT_00174b44;
          if ((((uVar14 == 2) || (bVar10 != 0)) &&
              (((bVar10 != 2 && (bVar10 != 1)) || (uVar14 == 3)))) &&
             ((uVar14 == 4 || (bVar10 != 3)))) {
            if (3 < bVar10) {
              png_warning(param_1,iVar17 + DAT_00174b5c);
            }
            cVar1 = pcVar15[0xb];
            pcVar16 = pcVar15 + 0xb;
            while (cVar1 != '\0') {
              pcVar16 = pcVar16 + 1;
              cVar1 = *pcVar16;
            }
            iVar11 = png_malloc_warn(param_1,uVar14 << 2);
            if (iVar11 == 0) {
              png_free(param_1,*(undefined4 *)(param_1 + 0x348));
              *(undefined4 *)(param_1 + 0x348) = 0;
              png_warning(param_1,iVar17 + DAT_00174b60);
              return;
            }
            iVar13 = 0;
            if (uVar14 != 0) {
              do {
                pcVar16 = pcVar16 + 1;
                *(char **)(iVar11 + iVar13 * 4) = pcVar16;
                while( true ) {
                  if (pcVar12 + param_3 < pcVar16) {
                    png_warning(param_1,iVar17 + DAT_00174b4c);
                    goto LAB_00174af2;
                  }
                  if (*pcVar16 == '\0') break;
                  pcVar16 = pcVar16 + 1;
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < (int)uVar14);
            }
            png_set_pCAL(param_1,param_2,*(undefined4 *)(param_1 + 0x348),
                         (uint)bVar2 * 0x1000000 + (uint)bVar3 * 0x10000 + (uint)bVar4 +
                         (uint)bVar5 * 0x100,
                         (uint)bVar6 * 0x1000000 + (uint)bVar7 * 0x10000 + (uint)bVar8 +
                         (uint)bVar9 * 0x100,bVar10,uVar14,pcVar15 + 0xb,iVar11);
LAB_00174af2:
            png_free(param_1,*(undefined4 *)(param_1 + 0x348));
            *(undefined4 *)(param_1 + 0x348) = 0;
            png_free(param_1,iVar11);
            return;
          }
        }
        png_warning(param_1,iVar17 + iVar11);
      }
      png_free(param_1,*(undefined4 *)(param_1 + 0x348));
      *(undefined4 *)(param_1 + 0x348) = 0;
    }
  }
  return;
}


