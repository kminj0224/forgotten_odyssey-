/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016cb38  Symbol: png_set_filter */

void png_set_filter(int param_1,int param_2,byte param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_0016ccd0 + 0x16cb40;
  if (param_1 != 0) {
    if (param_2 == 0x40) {
      if (-1 < *(int *)(param_1 + 0x2f4) << 0x1d) goto LAB_0016cb4a;
    }
    else if (param_2 != 0) {
LAB_0016cb4a:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar4 + DAT_0016ccd4);
    }
    if (param_3 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0016cbbe */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(iVar4 + DAT_0016ccdc + (uint)param_3 * 4) + iVar4 + DAT_0016ccdc))();
      return;
    }
    *(byte *)(param_1 + DAT_0016ccd8) = param_3;
    iVar1 = DAT_0016ccd8;
    if (*(int *)(param_1 + 0x1b0) != 0) {
      uVar3 = (uint)*(byte *)(param_1 + DAT_0016ccd8);
      if (((int)(uVar3 << 0x1b) < 0) && (*(int *)(param_1 + 0x1b4) == 0)) {
        puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1,0,0x19c,param_4);
        *(undefined **)(param_1 + 0x1b4) = puVar2;
        *puVar2 = 1;
        uVar3 = (uint)*(byte *)(param_1 + iVar1);
      }
      if (((int)(uVar3 << 0x1a) < 0) && (*(int *)(param_1 + 0x1b8) == 0)) {
        if (*(int *)(param_1 + 0x1ac) == 0) {
          png_warning(param_1,iVar4 + DAT_0016cce8);
          uVar3 = *(byte *)(param_1 + DAT_0016ccd8) & 0xdf;
          *(char *)(param_1 + DAT_0016ccd8) = (char)uVar3;
        }
        else {
          puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1,0,0x19c,param_4);
          *(undefined **)(param_1 + 0x1b8) = puVar2;
          *puVar2 = 2;
          uVar3 = (uint)*(byte *)(param_1 + 0x1e9);
        }
      }
      if (((int)(uVar3 << 0x19) < 0) && (*(int *)(param_1 + 0x1bc) == 0)) {
        if (*(int *)(param_1 + 0x1ac) == 0) {
          png_warning(param_1,iVar4 + DAT_0016cce4);
          uVar3 = *(byte *)(param_1 + DAT_0016ccd8) & 0xbf;
          *(char *)(param_1 + DAT_0016ccd8) = (char)uVar3;
        }
        else {
          puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1,0,0x19c,param_4);
          *(undefined **)(param_1 + 0x1bc) = puVar2;
          *puVar2 = 3;
          uVar3 = (uint)*(byte *)(param_1 + 0x1e9);
        }
      }
      if (((int)(uVar3 * 0x1000000) < 0) && (*(int *)(param_1 + 0x1c0) == 0)) {
        if (*(int *)(param_1 + 0x1ac) == 0) {
          png_warning(param_1,iVar4 + DAT_0016ccec);
          uVar3 = *(byte *)(param_1 + DAT_0016ccd8) & 0x7f;
          *(char *)(param_1 + DAT_0016ccd8) = (char)uVar3;
        }
        else {
          puVar2 = (undefined *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1,0,0x19c,param_4);
          *(undefined **)(param_1 + 0x1c0) = puVar2;
          *puVar2 = 4;
          uVar3 = (uint)*(byte *)(param_1 + 0x1e9);
        }
      }
      if (uVar3 == 0) {
        *(undefined *)(param_1 + 0x1e9) = 8;
      }
    }
  }
  return;
}


