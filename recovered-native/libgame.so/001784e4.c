/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001784e4  Symbol: FUN_001784e4 */

void FUN_001784e4(uint param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  int unaff_r4;
  uint uVar6;
  uint uVar7;
  int unaff_r5;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint unaff_r7;
  int iVar11;
  uint uVar12;
  int param_10;
  uint param_11;
  undefined *param_12;
  uint in_stack_00000020;
  int param_15;
  uint param_16;
  
  if (unaff_r7 < in_stack_00000020) {
    param_12 = *(undefined **)(unaff_r4 + 0x1bc);
    in_stack_00000020 = unaff_r7;
  }
  if (param_11 == 0x80) {
    param_12 = (undefined *)(param_4 + 1);
    iVar9 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar9 + 1;
    param_10 = param_2 + 1;
    param_11 = 0;
    uVar10 = 1;
    if (param_1 != 0) {
      do {
        *(char *)(iVar9 + uVar10) = *(char *)(param_4 + uVar10) - *(char *)(param_2 + uVar10);
        bVar1 = uVar10 < param_1;
        uVar10 = uVar10 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + param_1;
      param_12 = (undefined *)((int)param_12 + param_1);
      param_10 = param_10 + param_1;
      param_11 = param_1;
    }
    if (param_11 < param_3) {
      iVar9 = 0;
      do {
        bVar3 = *(byte *)(param_2 + iVar9 + 1);
        bVar5 = *(byte *)(param_4 + iVar9 + 1);
        iVar11 = (uint)*(byte *)(param_10 + iVar9) - (uint)bVar3;
        iVar4 = (uint)bVar5 - (uint)bVar3;
        uVar10 = iVar11 + (iVar11 >> 0x1f) ^ iVar11 >> 0x1f;
        uVar12 = iVar4 + iVar11 >> 0x1f;
        uVar2 = iVar4 + (iVar4 >> 0x1f) ^ iVar4 >> 0x1f;
        uVar12 = iVar4 + iVar11 + uVar12 ^ uVar12;
        if ((((int)uVar12 < (int)uVar10) || ((int)uVar2 < (int)uVar10)) &&
           (bVar5 = *(byte *)(param_10 + iVar9), (int)uVar12 < (int)uVar2)) {
          bVar5 = bVar3;
        }
        *(byte *)(in_stack_00000020 + iVar9) = *(char *)((int)param_12 + iVar9) - bVar5;
        iVar9 = iVar9 + 1;
      } while (iVar9 + param_11 < param_3);
    }
  }
  else {
    if (-1 < (int)(param_11 * 0x1000000)) goto LAB_00178506;
    param_16 = in_stack_00000020;
    if (*(char *)(unaff_r4 + 700) == '\x02') {
      uVar2 = in_stack_00000020 & DAT_00178bcc;
      uVar10 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar9 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar9) == '\x04') {
            uVar12 = (uint)*(ushort *)(iVar9 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar2 = uVar12 * uVar2 >> 8;
            uVar10 = uVar12 * uVar10 >> 8;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < unaff_r5);
      }
      uVar12 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
      uVar10 = uVar12 * uVar10 >> 3;
      if (DAT_00178d10 < uVar10) {
        param_16 = DAT_00178d14;
      }
      else {
        param_16 = (uVar12 * uVar2 >> 3) + uVar10 * 0x400;
      }
    }
    param_15 = param_4 + 1;
    iVar9 = *(int *)(unaff_r4 + 0x1c0);
    param_11 = param_2 + 1;
    param_10 = iVar9 + 1;
    if (param_1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar2 = 1;
      do {
        bVar3 = *(char *)(param_4 + uVar2) - *(char *)(param_2 + uVar2);
        uVar12 = (uint)bVar3;
        *(byte *)(iVar9 + uVar2) = bVar3;
        if (0x7f < uVar12) {
          uVar12 = 0x100 - uVar12;
        }
        uVar10 = uVar10 + uVar12;
        bVar1 = uVar2 < param_1;
        uVar2 = uVar2 + 1;
      } while (bVar1);
      param_10 = param_10 + param_1;
      param_15 = param_15 + param_1;
      param_11 = param_11 + param_1;
    }
    if (param_1 < param_3) {
      iVar9 = 0;
      do {
        uVar8 = (uint)*(byte *)(param_2 + iVar9 + 1);
        uVar2 = (uint)*(byte *)(param_4 + iVar9 + 1);
        iVar11 = *(byte *)(param_11 + iVar9) - uVar8;
        iVar4 = uVar2 - uVar8;
        uVar12 = iVar11 + (iVar11 >> 0x1f) ^ iVar11 >> 0x1f;
        uVar6 = iVar4 + (iVar4 >> 0x1f) ^ iVar4 >> 0x1f;
        uVar7 = iVar4 + iVar11 >> 0x1f;
        uVar7 = iVar4 + iVar11 + uVar7 ^ uVar7;
        if ((((int)uVar7 < (int)uVar12) || ((int)uVar6 < (int)uVar12)) &&
           (uVar2 = (uint)*(byte *)(param_11 + iVar9), (int)uVar7 < (int)uVar6)) {
          uVar2 = uVar8;
        }
        uVar2 = *(byte *)(param_15 + iVar9) - uVar2;
        uVar12 = uVar2 & 0xff;
        *(char *)(param_10 + iVar9) = (char)uVar2;
        if (0x7f < uVar12) {
          uVar12 = 0x100 - uVar12;
        }
        uVar10 = uVar10 + uVar12;
      } while ((uVar10 <= param_16) && (iVar9 = iVar9 + 1, iVar9 + param_1 < param_3));
    }
    if (*(char *)(unaff_r4 + 700) == '\x02') {
      uVar2 = DAT_00178d18 & uVar10;
      uVar10 = uVar10 >> 10 & DAT_00178d10;
      if (unaff_r5 != 0) {
        iVar9 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar9) == '\x04') {
            uVar12 = (uint)*(ushort *)(iVar9 * 2 + *(int *)(unaff_r4 + 0x2c4));
            uVar2 = uVar12 * uVar2 >> 8;
            uVar10 = uVar12 * uVar10 >> 8;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < unaff_r5);
      }
      uVar12 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
      uVar7 = uVar12 * uVar10 >> 3;
      uVar10 = DAT_00178d14;
      if (uVar7 <= DAT_00178d10) {
        uVar10 = uVar7 * 0x400 + (uVar2 * uVar12 >> 3);
      }
    }
    if (in_stack_00000020 <= uVar10) goto LAB_00178506;
  }
  param_12 = *(undefined **)(unaff_r4 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(unaff_r4,param_12);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar4 = 1;
    iVar9 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar4) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar4 + -1);
        iVar4 = iVar4 + 1;
        iVar9 = unaff_r5;
      } while (iVar4 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar9) = *param_12;
  }
  return;
}


