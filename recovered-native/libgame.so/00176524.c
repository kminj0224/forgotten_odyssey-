/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176524  Symbol: FUN_00176524 */

void FUN_00176524(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_74;
  int local_70;
  char acStack_60 [52];
  int local_2c;
  
  iVar1 = DAT_001767b4;
  iVar9 = DAT_001767b0 + 0x17653a;
  local_2c = **(int **)(iVar9 + DAT_001767b4);
  param_5[2] = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  *param_5 = 0;
  param_5[1] = 0;
  if (param_4 == -1) {
    *param_5 = param_2;
    param_5[1] = param_3;
  }
  else {
    if (2 < param_4) {
      snprintf(acStack_60,0x32,(char *)(iVar9 + DAT_001767bc));
      png_warning(param_1,acStack_60);
    }
    *(int *)(param_1 + 0x13c) = param_3;
    *(undefined4 *)(param_1 + 0x138) = param_2;
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
    iVar2 = param_1 + 0x138;
    iVar10 = iVar9 + DAT_001767b8;
    do {
      iVar4 = deflate(iVar2,0);
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1);
        }
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar10);
      }
      if (*(int *)(param_1 + 0x148) == 0) {
        iVar4 = param_5[2];
        iVar7 = param_5[3];
        if (iVar4 < iVar7) {
          local_74 = param_5[4];
        }
        else {
          pvVar5 = (void *)param_5[4];
          iVar4 = iVar4 + 4;
          param_5[3] = iVar4;
          if (pvVar5 == (void *)0x0) {
            local_74 = png_malloc(param_1,iVar4 * 4);
            param_5[4] = local_74;
            iVar4 = param_5[2];
          }
          else {
            pvVar6 = (void *)png_malloc(param_1,iVar4 * 4);
            param_5[4] = pvVar6;
            memcpy(pvVar6,pvVar5,iVar7 << 2);
            png_free(param_1,pvVar5);
            local_74 = param_5[4];
            iVar4 = param_5[2];
          }
        }
        uVar3 = png_malloc(param_1,*(undefined4 *)(param_1 + 0x174));
        *(undefined4 *)(iVar4 * 4 + local_74) = uVar3;
        memcpy(*(void **)(param_5[2] * 4 + param_5[4]),*(void **)(param_1 + 0x170),
               *(size_t *)(param_1 + 0x174));
        param_5[2] = param_5[2] + 1;
        *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
      }
    } while (*(int *)(param_1 + 0x13c) != 0);
    iVar10 = iVar9 + DAT_001767b8;
    while (iVar4 = deflate(iVar2,4), iVar4 == 0) {
      while (*(int *)(param_1 + 0x148) == 0) {
        iVar4 = param_5[2];
        iVar7 = param_5[3];
        if (iVar4 < iVar7) {
          local_70 = param_5[4];
        }
        else {
          pvVar5 = (void *)param_5[4];
          iVar4 = iVar4 + 4;
          param_5[3] = iVar4;
          if (pvVar5 == (void *)0x0) {
            local_70 = png_malloc(param_1,iVar4 * 4);
            param_5[4] = local_70;
            iVar4 = param_5[2];
          }
          else {
            pvVar6 = (void *)png_malloc(param_1,iVar4 * 4);
            param_5[4] = pvVar6;
            memcpy(pvVar6,pvVar5,iVar7 << 2);
            png_free(param_1,pvVar5);
            local_70 = param_5[4];
            iVar4 = param_5[2];
          }
        }
        uVar3 = png_malloc(param_1,*(undefined4 *)(param_1 + 0x174));
        *(undefined4 *)(iVar4 * 4 + local_70) = uVar3;
        memcpy(*(void **)(param_5[2] * 4 + param_5[4]),*(void **)(param_1 + 0x170),
               *(size_t *)(param_1 + 0x174));
        param_5[2] = param_5[2] + 1;
        *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
        iVar4 = deflate(iVar2,4);
        if (iVar4 != 0) goto LAB_001766d2;
      }
    }
LAB_001766d2:
    if (iVar4 != 1) {
      if (*(int *)(param_1 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar10);
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1);
    }
    uVar8 = *(uint *)(param_1 + 0x174);
    param_3 = uVar8 * param_5[2];
    if (*(uint *)(param_1 + 0x148) < uVar8) {
      param_3 = param_3 + (uVar8 - *(uint *)(param_1 + 0x148));
    }
  }
  if (local_2c != **(int **)(iVar9 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}


