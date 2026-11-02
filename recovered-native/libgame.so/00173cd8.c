/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00173cd8  Symbol: png_read_finish_row */

void png_read_finish_row(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_a8 [7];
  int local_8c [7];
  int local_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int local_54 [7];
  undefined4 local_38;
  undefined local_34;
  undefined auStack_30 [7];
  undefined auStack_29 [5];
  
  iVar7 = DAT_00173fbc + 0x173cf0;
  iVar5 = DAT_00173fc0 + iVar7;
  local_54[0] = *(int *)(iVar5 + 0x1c);
  local_54[1] = *(undefined4 *)(iVar5 + 0x20);
  local_54[2] = *(undefined4 *)(iVar5 + 0x24);
  local_54[3] = *(undefined4 *)(iVar5 + 0x28);
  local_54[4] = *(undefined4 *)(iVar5 + 0x2c);
  local_54[5] = *(undefined4 *)(iVar5 + 0x30);
  local_54[6] = *(undefined4 *)(iVar5 + 0x34);
  local_70[0] = *(int *)(iVar5 + 0x38);
  local_70[1] = *(undefined4 *)(iVar5 + 0x3c);
  local_70[2] = *(undefined4 *)(iVar5 + 0x40);
  local_70[3] = *(undefined4 *)(iVar5 + 0x44);
  uStack_60 = *(undefined4 *)(iVar5 + 0x48);
  uStack_5c = *(undefined4 *)(iVar5 + 0x4c);
  local_58 = *(undefined4 *)(iVar5 + 0x50);
  local_8c[0] = *(int *)(iVar5 + 0x54);
  local_8c[1] = *(undefined4 *)(iVar5 + 0x58);
  local_8c[2] = *(undefined4 *)(iVar5 + 0x5c);
  local_8c[3] = *(undefined4 *)(iVar5 + 0x60);
  local_8c[4] = *(undefined4 *)(iVar5 + 100);
  local_8c[5] = *(undefined4 *)(iVar5 + 0x68);
  local_8c[6] = *(undefined4 *)(iVar5 + 0x6c);
  local_a8[0] = *(int *)(iVar5 + 0x70);
  local_a8[1] = *(undefined4 *)(iVar5 + 0x74);
  local_a8[2] = *(undefined4 *)(iVar5 + 0x78);
  local_a8[3] = *(undefined4 *)(iVar5 + 0x7c);
  local_a8[4] = *(undefined4 *)(iVar5 + 0x80);
  local_a8[5] = *(undefined4 *)(iVar5 + 0x84);
  local_a8[6] = *(undefined4 *)(iVar5 + 0x88);
  uVar4 = *(int *)(param_1 + 0x1a8) + 1;
  *(uint *)(param_1 + 0x1a8) = uVar4;
  if (*(uint *)(param_1 + 0x194) <= uVar4) {
    if (*(char *)(param_1 + DAT_00173fc4) == '\0') {
LAB_00173d62:
      if (-1 < *(int *)(param_1 + 0x130) << 0x1a) {
        local_38 = *(undefined4 *)(DAT_00173fc8 + iVar7 + 0xc);
        local_34 = *(undefined *)(DAT_00173fc8 + iVar7 + 0x10);
        *(undefined **)(param_1 + 0x144) = auStack_29;
        *(undefined4 *)(param_1 + 0x148) = 1;
        iVar5 = DAT_00173fcc + iVar7;
        do {
          if (*(int *)(param_1 + 0x13c) == 0) {
            while (uVar4 = *(uint *)(param_1 + 0x1d0), uVar4 == 0) {
              png_crc_finish(param_1,0);
              png_read_data(param_1,auStack_30,4);
              uVar3 = png_get_uint_31(param_1,auStack_30);
              *(undefined4 *)(param_1 + 0x1d0) = uVar3;
              png_reset_crc(param_1);
              png_crc_read(param_1,(void *)(param_1 + 0x1e0),4);
              iVar2 = memcmp((void *)(param_1 + 0x1e0),&local_38,4);
              if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                png_error(param_1,iVar5);
              }
            }
            uVar6 = *(uint *)(param_1 + 0x174);
            *(uint *)(param_1 + 0x13c) = uVar6;
            *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x170);
            if (uVar4 < uVar6) {
              *(uint *)(param_1 + 0x13c) = uVar4;
              uVar6 = uVar4;
            }
            png_crc_read(param_1,*(undefined4 *)(param_1 + 0x170),uVar6);
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x13c);
          }
          iVar2 = inflate(param_1 + 0x138,1);
          if (iVar2 == 1) {
            if (((*(int *)(param_1 + 0x148) != 0) && (*(int *)(param_1 + 0x13c) == 0)) &&
               (*(int *)(param_1 + 0x1d0) == 0)) goto LAB_00173e88;
            break;
          }
          if (iVar2 != 0) {
            iVar5 = *(int *)(param_1 + 0x150);
            if (iVar5 == 0) {
              iVar5 = DAT_00173fd8 + iVar7;
            }
                    /* WARNING: Subroutine does not return */
            png_error(param_1,iVar5);
          }
        } while (*(int *)(param_1 + 0x148) != 0);
        png_warning(param_1,DAT_00173fd0 + iVar7);
LAB_00173e88:
        *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 8;
        *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x20;
        *(undefined4 *)(param_1 + 0x148) = 0;
      }
      if ((*(int *)(param_1 + 0x1d0) != 0) || (*(int *)(param_1 + 0x13c) != 0)) {
        png_warning(param_1,DAT_00173fd4 + iVar7);
      }
      inflateReset(param_1 + 0x138);
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      memset(*(void **)(param_1 + 0x1ac),0,*(int *)(param_1 + 0x19c) + 1);
      uVar4 = (uint)*(byte *)(param_1 + 0x1e8);
      do {
        uVar6 = uVar4 + 1;
        uVar4 = uVar6 & 0xff;
        uVar1 = (undefined)uVar6;
        if (6 < uVar4) {
          *(undefined *)(param_1 + 0x1e8) = uVar1;
          goto LAB_00173d62;
        }
        iVar5 = __udivsi3((*(int *)(param_1 + 0x18c) + -1 + local_70[uVar4]) - local_54[uVar4]);
        *(int *)(param_1 + 0x1a4) = iVar5;
        if ((*(uint *)(param_1 + 0x134) & 2) != 0) {
          *(undefined *)(param_1 + 0x1e8) = uVar1;
          return;
        }
        uVar3 = __udivsi3((*(int *)(param_1 + 400) + -1 + local_a8[uVar4]) - local_8c[uVar4]);
        *(undefined4 *)(param_1 + 0x194) = uVar3;
      } while (iVar5 == 0);
      *(undefined *)(param_1 + 0x1e8) = uVar1;
    }
  }
  return;
}


