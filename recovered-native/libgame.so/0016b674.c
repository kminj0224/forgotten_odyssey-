/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016b674  Symbol: png_read_row */

void png_read_row(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char *__src;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c;
  
  iVar8 = DAT_0016b9c8 + 0x16b68e;
  iVar5 = DAT_0016b9cc + iVar8;
  local_30 = *(undefined4 *)(iVar5 + 0x28);
  local_2c = *(undefined *)(iVar5 + 0x2c);
  local_4c[0] = *(undefined4 *)(iVar5 + 0x30);
  local_4c[1] = *(undefined4 *)(iVar5 + 0x34);
  local_4c[2] = *(undefined4 *)(iVar5 + 0x38);
  local_4c[3] = *(undefined4 *)(iVar5 + 0x3c);
  local_3c = *(undefined4 *)(iVar5 + 0x40);
  local_38 = *(undefined4 *)(iVar5 + 0x44);
  local_34 = *(undefined4 *)(iVar5 + 0x48);
  local_68[0] = *(undefined4 *)(iVar5 + 0x4c);
  local_68[1] = *(undefined4 *)(iVar5 + 0x50);
  local_68[2] = *(undefined4 *)(iVar5 + 0x54);
  local_68[3] = *(undefined4 *)(iVar5 + 0x58);
  uStack_58 = *(undefined4 *)(iVar5 + 0x5c);
  uStack_54 = *(undefined4 *)(iVar5 + 0x60);
  local_50 = *(undefined4 *)(iVar5 + 100);
  if (param_1 != 0) {
    if (-1 < *(int *)(param_1 + 0x130) << 0x19) {
      png_read_start_row(param_1);
    }
    if (((*(char *)(param_1 + DAT_0016b9d0) != '\0') && (*(int *)(param_1 + 0x134) << 0x1e < 0)) &&
       (*(byte *)(param_1 + 0x1e8) < 7)) {
                    /* WARNING: Could not emulate address calculation at 0x0016b9c0 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(DAT_0016b9f0 + iVar8 + (uint)*(byte *)(param_1 + 0x1e8) * 4) +
                DAT_0016b9f0 + iVar8))();
      return;
    }
    if (-1 < *(int *)(param_1 + 300) << 0x1d) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,DAT_0016b9ec + iVar8);
    }
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x1b0);
    bVar1 = *(byte *)(param_1 + DAT_0016b9d4);
    if (bVar1 < 8) {
      uVar3 = (uint)bVar1 * *(int *)(param_1 + 0x1a4) + 7 >> 3;
    }
    else {
      uVar3 = (uint)(bVar1 >> 3) * *(int *)(param_1 + 0x1a4);
    }
    *(uint *)(param_1 + 0x148) = uVar3 + 1;
    iVar5 = DAT_0016b9dc + iVar8;
    iVar7 = DAT_0016b9d8 + iVar8;
    do {
      if (*(int *)(param_1 + 0x13c) == 0) {
        iVar6 = *(int *)(param_1 + 0x1d0);
        while (iVar6 == 0) {
          png_crc_finish(param_1,0);
          iVar6 = png_read_chunk_header(param_1);
          *(int *)(param_1 + 0x1d0) = iVar6;
          iVar2 = memcmp((void *)(param_1 + 0x1e0),&local_30,4);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            png_error(param_1,iVar7);
          }
        }
        uVar3 = *(uint *)(param_1 + 0x174);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x170);
        uVar4 = *(uint *)(param_1 + 0x1d0);
        *(uint *)(param_1 + 0x13c) = uVar3;
        if (uVar4 < uVar3) {
          *(uint *)(param_1 + 0x13c) = uVar4;
          uVar3 = uVar4;
        }
        png_crc_read(param_1,*(undefined4 *)(param_1 + 0x170),uVar3);
        *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x13c);
      }
      iVar6 = inflate(param_1 + 0x138,1);
      if (iVar6 == 1) {
        if (((*(int *)(param_1 + 0x148) != 0) || (*(int *)(param_1 + 0x13c) != 0)) ||
           (*(int *)(param_1 + 0x1d0) != 0)) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,DAT_0016b9e0 + iVar8);
        }
        *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 8;
        *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x20;
        break;
      }
      if (iVar6 != 0) {
        iVar8 = *(int *)(param_1 + 0x150);
        if (*(int *)(param_1 + 0x150) == 0) {
          iVar8 = iVar5;
        }
                    /* WARNING: Subroutine does not return */
        png_error(param_1,iVar8);
      }
    } while (*(int *)(param_1 + 0x148) != 0);
    *(undefined *)(param_1 + 0x1cc) = *(undefined *)(param_1 + 0x1ea);
    iVar8 = *(int *)(param_1 + 0x1a4);
    *(int *)(param_1 + 0x1c4) = iVar8;
    *(undefined *)(param_1 + 0x1ce) = *(undefined *)(param_1 + 0x1ee);
    iVar5 = DAT_0016b9e4;
    *(undefined *)(param_1 + DAT_0016b9e4 + -0x1e) = *(undefined *)(param_1 + DAT_0016b9e4);
    bVar1 = *(byte *)(param_1 + iVar5 + 2);
    *(byte *)(param_1 + DAT_0016b9e8) = bVar1;
    if (bVar1 < 8) {
      uVar3 = (uint)bVar1 * iVar8 + 7 >> 3;
    }
    else {
      uVar3 = (uint)(bVar1 >> 3) * iVar8;
    }
    __src = *(char **)(param_1 + 0x1b0);
    *(uint *)(param_1 + 0x1c8) = uVar3;
    if (*__src != '\0') {
      png_read_filter_row(param_1,param_1 + 0x1c4,__src + 1,*(int *)(param_1 + 0x1ac) + 1,*__src);
      __src = *(char **)(param_1 + 0x1b0);
    }
    memcpy(*(void **)(param_1 + 0x1ac),__src,*(int *)(param_1 + 0x19c) + 1);
    if ((*(int *)(param_1 + 0x2f4) << 0x1d < 0) && (*(char *)(param_1 + 0x2fc) == '@')) {
      png_do_read_intrapixel(param_1 + 0x1c4,*(int *)(param_1 + 0x1b0) + 1);
    }
    if ((*(int *)(param_1 + 0x134) != 0) || (*(int *)(param_1 + 0x130) << 9 < 0)) {
      png_do_read_transformations(param_1);
    }
    if ((*(char *)(param_1 + DAT_0016b9d0) == '\0') || (-1 < *(int *)(param_1 + 0x134) << 0x1e)) {
      if (param_2 != 0) {
        png_combine_row(param_1,param_2,0xff);
      }
      if (param_3 != 0) {
        png_combine_row(param_1,param_3,0xff);
      }
    }
    else {
      if (*(byte *)(param_1 + 0x1e8) < 6) {
        png_do_read_interlace(param_1);
      }
      if (param_3 != 0) {
        png_combine_row(param_1,param_3,local_4c[*(byte *)(param_1 + 0x1e8)]);
      }
      if (param_2 != 0) {
        png_combine_row(param_1,param_2,local_68[*(byte *)(param_1 + 0x1e8)]);
      }
    }
    png_read_finish_row(param_1);
    if (*(code **)(param_1 + 0x25c) != (code *)0x0) {
      (**(code **)(param_1 + 0x25c))
                (param_1,*(undefined4 *)(param_1 + 0x1a8),*(undefined *)(param_1 + 0x1e8));
    }
  }
  return;
}


