/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174778  Symbol: png_handle_sCAL */

void png_handle_sCAL(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *__nptr;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  char *local_2c [2];
  
  iVar6 = DAT_00174910 + 0x174792;
  if (-1 < *(int *)(param_1 + 300) << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar6 + DAT_00174918);
  }
  iVar3 = DAT_00174920;
  if ((-1 < *(int *)(param_1 + 300) << 0x1d) &&
     ((param_2 == 0 || (iVar3 = DAT_0017491c, -1 < *(int *)(param_2 + 8) << 0x11)))) {
    iVar2 = png_malloc_warn(param_1,param_3 + 1);
    *(int *)(param_1 + 0x348) = iVar2;
    iVar3 = DAT_0017492c;
    if (iVar2 != 0) {
      png_crc_read(param_1,iVar2,param_3);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 != 0) {
        png_free(param_1,*(undefined4 *)(param_1 + 0x348));
        *(undefined4 *)(param_1 + 0x348) = 0;
        return;
      }
      *(undefined *)(*(int *)(param_1 + 0x348) + param_3) = 0;
      __nptr = (char *)(*(int *)(param_1 + 0x348) + 1);
      strtod(__nptr,local_2c);
      if (*local_2c[0] == '\0') {
        pcVar4 = *(char **)(param_1 + 0x348);
        cVar1 = *pcVar4;
        pcVar7 = pcVar4;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        pcVar7 = pcVar7 + 1;
        iVar3 = DAT_00174924;
        if ((((pcVar7 <= pcVar4 + param_3) &&
             (pcVar4 = pcVar7, strtod(pcVar7,local_2c), iVar3 = DAT_00174930, *local_2c[0] == '\0'))
            && (puVar5 = *(undefined **)(param_1 + 0x348), iVar3 = DAT_00174914,
               pcVar7 <= puVar5 + param_3)) &&
           ((iVar2 = __aeabi_dcmple(__nptr,extraout_r1,DAT_00174908,DAT_0017490c),
            iVar3 = DAT_00174914, iVar2 == 0 &&
            (iVar2 = __aeabi_dcmple(pcVar4,extraout_r1_00,DAT_00174908,DAT_0017490c),
            iVar3 = DAT_00174914, iVar2 == 0)))) {
          png_set_sCAL(param_1,param_2,*puVar5,puVar5,__nptr,extraout_r1,pcVar4,extraout_r1_00);
          png_free(param_1,*(undefined4 *)(param_1 + 0x348));
          *(undefined4 *)(param_1 + 0x348) = 0;
          return;
        }
        png_warning(param_1,iVar6 + iVar3);
        png_free(param_1,*(undefined4 *)(param_1 + 0x348));
        *(undefined4 *)(param_1 + 0x348) = 0;
        return;
      }
      png_warning(param_1,iVar6 + DAT_00174928);
      png_free(param_1,*(undefined4 *)(param_1 + 0x348));
      *(undefined4 *)(param_1 + 0x348) = 0;
      return;
    }
  }
  png_warning(param_1,iVar6 + iVar3);
  png_crc_finish(param_1,param_3);
  return;
}


