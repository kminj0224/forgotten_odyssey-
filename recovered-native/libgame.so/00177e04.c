/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177e04  Symbol: png_write_finish_row */

void png_write_finish_row(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_98 [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int local_7c [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int local_60 [7];
  int local_44 [8];
  
  iVar7 = DAT_00178030 + 0x177e1a;
  iVar5 = iVar7 + DAT_00178034;
  local_44[0] = *(int *)(iVar5 + 0x70);
  local_44[1] = *(undefined4 *)(iVar5 + 0x74);
  local_44[2] = *(undefined4 *)(iVar5 + 0x78);
  local_44[3] = *(undefined4 *)(iVar5 + 0x7c);
  local_44[4] = *(undefined4 *)(iVar5 + 0x80);
  local_44[5] = *(undefined4 *)(iVar5 + 0x84);
  local_44[6] = *(undefined4 *)(iVar5 + 0x88);
  iVar5 = iVar7 + DAT_00178038;
  local_60[0] = *(int *)(iVar5 + 0xc);
  local_60[1] = *(undefined4 *)(iVar5 + 0x10);
  local_60[2] = *(undefined4 *)(iVar5 + 0x14);
  local_60[3] = *(undefined4 *)(iVar5 + 0x18);
  local_60[4] = *(undefined4 *)(iVar5 + 0x1c);
  local_60[5] = *(undefined4 *)(iVar5 + 0x20);
  local_60[6] = *(undefined4 *)(iVar5 + 0x24);
  local_7c[0] = *(int *)(iVar5 + 0x28);
  local_7c[1] = *(undefined4 *)(iVar5 + 0x2c);
  local_7c[2] = *(undefined4 *)(iVar5 + 0x30);
  local_7c[3] = *(undefined4 *)(iVar5 + 0x34);
  uStack_6c = *(undefined4 *)(iVar5 + 0x38);
  uStack_68 = *(undefined4 *)(iVar5 + 0x3c);
  local_64 = *(undefined4 *)(iVar5 + 0x40);
  local_98[0] = *(int *)(iVar5 + 0x44);
  local_98[1] = *(undefined4 *)(iVar5 + 0x48);
  local_98[2] = *(undefined4 *)(iVar5 + 0x4c);
  local_98[3] = *(undefined4 *)(iVar5 + 0x50);
  uStack_88 = *(undefined4 *)(iVar5 + 0x54);
  uStack_84 = *(undefined4 *)(iVar5 + 0x58);
  local_80 = *(undefined4 *)(iVar5 + 0x5c);
  uVar3 = *(int *)(param_1 + 0x1a8) + 1;
  *(uint *)(param_1 + 0x1a8) = uVar3;
  if (uVar3 < *(uint *)(param_1 + 0x194)) {
    return;
  }
  if (*(char *)(param_1 + DAT_0017803c) == '\0') {
LAB_00177e92:
    iVar5 = param_1 + 0x138;
    iVar7 = iVar7 + DAT_00178040;
    while (iVar2 = deflate(iVar5,4), iVar2 == 0) {
      while (*(int *)(param_1 + 0x148) == 0) {
        png_write_IDAT(param_1,*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x170);
        *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x174);
        iVar2 = deflate(iVar5,4);
        if (iVar2 != 0) goto LAB_00177ef2;
      }
    }
LAB_00177ef2:
    if (iVar2 != 1) {
      if (*(int *)(param_1 + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1);
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,iVar7);
    }
    if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x174)) {
      png_write_IDAT(param_1,*(undefined4 *)(param_1 + 0x170),
                     *(uint *)(param_1 + 0x174) - *(uint *)(param_1 + 0x148));
    }
    deflateReset(iVar5);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    if (*(int *)(param_1 + 0x134) << 0x1e < 0) {
      bVar4 = *(char *)(param_1 + 0x1e8) + 1;
      *(byte *)(param_1 + 0x1e8) = bVar4;
      if (6 < bVar4) goto LAB_00177e92;
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 0x1e8);
      do {
        uVar6 = uVar3 + 1;
        uVar3 = uVar6 & 0xff;
        uVar1 = (undefined)uVar6;
        if (6 < uVar3) {
          *(undefined *)(param_1 + 0x1e8) = uVar1;
          goto LAB_00177e92;
        }
        iVar5 = __udivsi3((*(int *)(param_1 + 0x18c) + -1 + local_60[uVar3]) - local_44[uVar3]);
        *(int *)(param_1 + 0x198) = iVar5;
        iVar2 = __udivsi3((*(int *)(param_1 + 400) + -1 + local_98[uVar3]) - local_7c[uVar3]);
        *(int *)(param_1 + 0x194) = iVar2;
      } while (((*(uint *)(param_1 + 0x134) & 2) == 0) && ((iVar5 == 0 || (iVar2 == 0))));
      *(undefined *)(param_1 + 0x1e8) = uVar1;
    }
    if (*(void **)(param_1 + 0x1ac) != (void *)0x0) {
      uVar3 = (uint)*(byte *)(param_1 + DAT_00178044) * (uint)*(byte *)(param_1 + 0x1ec);
      if (uVar3 < 8) {
        uVar3 = uVar3 * *(int *)(param_1 + 0x18c) + 7 >> 3;
      }
      else {
        uVar3 = (uVar3 >> 3) * *(int *)(param_1 + 0x18c);
      }
      memset(*(void **)(param_1 + 0x1ac),0,uVar3 + 1);
    }
  }
  return;
}


