/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00178460  Symbol: FUN_00178460 */

void FUN_00178460(uint param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int unaff_r4;
  uint uVar7;
  uint uVar8;
  int unaff_r5;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint unaff_r7;
  int iVar12;
  uint uVar13;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int param_10;
  uint in_stack_00000018;
  undefined *in_stack_0000001c;
  uint in_stack_00000020;
  uint param_12;
  
  if (unaff_r11 < param_3) {
    iVar10 = 0;
    do {
      uVar3 = (uint)*(byte *)(unaff_r9 + iVar10) -
              ((int)((uint)*(byte *)(param_4 + iVar10 + 1) + (uint)*(byte *)(param_10 + iVar10)) >>
              1);
      uVar4 = uVar3 & 0xff;
      *(char *)(unaff_r10 + iVar10) = (char)uVar3;
      if (0x7f < uVar4) {
        uVar4 = 0x100 - uVar4;
      }
      unaff_r7 = unaff_r7 + uVar4;
    } while ((unaff_r7 <= param_12) && (iVar10 = iVar10 + 1, iVar10 + unaff_r11 < param_3));
  }
  if (*(char *)(unaff_r4 + 700) == '\x02') {
    uVar11 = DAT_00178bcc & unaff_r7;
    uVar3 = unaff_r7 >> 10 & DAT_00178bd0;
    if (unaff_r5 != 0) {
      iVar10 = 0;
      do {
        if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) == '\0') {
          uVar4 = (uint)*(ushort *)(iVar10 * 2 + *(int *)(unaff_r4 + 0x2c4));
          uVar11 = uVar4 * uVar11 >> 8;
          uVar3 = uVar4 * uVar3 >> 8;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < unaff_r5);
    }
    if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 6) * uVar3 >> 3) {
      FUN_001784e4(param_1,param_2,param_3);
      return;
    }
    FUN_001784e4(param_1,param_2,param_3);
    FUN_001783c0();
    FUN_001783f0();
    uVar11 = uVar11 << 10;
    uVar3 = FUN_00178328();
LAB_00178cd8:
    uVar4 = uVar11 * 0x400 + (uVar3 * param_4 >> 3);
LAB_0017887c:
    if (in_stack_00000020 <= uVar4) goto LAB_00178506;
  }
  else {
    if (unaff_r7 < in_stack_00000020) {
      in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1bc);
      in_stack_00000020 = unaff_r7;
    }
    if (in_stack_00000018 != 0x80) {
      if (-1 < (int)(in_stack_00000018 * 0x1000000)) goto LAB_00178506;
      uVar3 = in_stack_00000020;
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar4 = in_stack_00000020 & DAT_00178bcc;
        uVar3 = in_stack_00000020 >> 10 & DAT_00178bd0;
        if (unaff_r5 != 0) {
          iVar10 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) == '\x04') {
              uVar11 = (uint)*(ushort *)(iVar10 * 2 + *(int *)(unaff_r4 + 0x2c8));
              uVar4 = uVar11 * uVar4 >> 8;
              uVar3 = uVar11 * uVar3 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < unaff_r5);
        }
        uVar13 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
        uVar11 = uVar13 * uVar3 >> 3;
        uVar3 = DAT_00178d14;
        if (uVar11 <= DAT_00178d10) {
          uVar3 = (uVar13 * uVar4 >> 3) + uVar11 * 0x400;
        }
      }
      param_12 = param_4 + 1;
      iVar10 = *(int *)(unaff_r4 + 0x1c0);
      in_stack_00000018 = param_2 + 1;
      param_10 = iVar10 + 1;
      if (param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar11 = 1;
        do {
          bVar2 = *(char *)(param_4 + uVar11) - *(char *)(param_2 + uVar11);
          uVar13 = (uint)bVar2;
          *(byte *)(iVar10 + uVar11) = bVar2;
          if (0x7f < uVar13) {
            uVar13 = 0x100 - uVar13;
          }
          uVar4 = uVar4 + uVar13;
          bVar1 = uVar11 < param_1;
          uVar11 = uVar11 + 1;
        } while (bVar1);
        param_10 = param_10 + param_1;
        param_12 = param_12 + param_1;
        in_stack_00000018 = in_stack_00000018 + param_1;
      }
      if (param_1 < param_3) {
        iVar10 = 0;
        do {
          uVar9 = (uint)*(byte *)(param_2 + iVar10 + 1);
          uVar11 = (uint)*(byte *)(param_4 + iVar10 + 1);
          iVar12 = *(byte *)(in_stack_00000018 + iVar10) - uVar9;
          iVar5 = uVar11 - uVar9;
          uVar13 = iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f;
          uVar7 = iVar5 + (iVar5 >> 0x1f) ^ iVar5 >> 0x1f;
          uVar8 = iVar5 + iVar12 >> 0x1f;
          uVar8 = iVar5 + iVar12 + uVar8 ^ uVar8;
          if ((((int)uVar8 < (int)uVar13) || ((int)uVar7 < (int)uVar13)) &&
             (uVar11 = (uint)*(byte *)(in_stack_00000018 + iVar10), (int)uVar8 < (int)uVar7)) {
            uVar11 = uVar9;
          }
          uVar11 = *(byte *)(param_12 + iVar10) - uVar11;
          uVar13 = uVar11 & 0xff;
          *(char *)(param_10 + iVar10) = (char)uVar11;
          if (0x7f < uVar13) {
            uVar13 = 0x100 - uVar13;
          }
          uVar4 = uVar4 + uVar13;
        } while ((uVar4 <= uVar3) && (iVar10 = iVar10 + 1, iVar10 + param_1 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar3 = DAT_00178d18 & uVar4;
        uVar4 = uVar4 >> 10 & DAT_00178d10;
        if (unaff_r5 != 0) {
          iVar10 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) == '\x04') {
              uVar11 = (uint)*(ushort *)(iVar10 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar3 = uVar11 * uVar3 >> 8;
              uVar4 = uVar11 * uVar4 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < unaff_r5);
        }
        param_4 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
        uVar11 = param_4 * uVar4 >> 3;
        uVar4 = DAT_00178d14;
        if (uVar11 <= DAT_00178d10) goto LAB_00178cd8;
      }
      goto LAB_0017887c;
    }
    in_stack_0000001c = (undefined *)(param_4 + 1);
    iVar10 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar10 + 1;
    param_10 = param_2 + 1;
    in_stack_00000018 = 0;
    uVar3 = 1;
    if (param_1 != 0) {
      do {
        *(char *)(iVar10 + uVar3) = *(char *)(param_4 + uVar3) - *(char *)(param_2 + uVar3);
        bVar1 = uVar3 < param_1;
        uVar3 = uVar3 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + param_1;
      in_stack_0000001c = (undefined *)((int)in_stack_0000001c + param_1);
      param_10 = param_10 + param_1;
      in_stack_00000018 = param_1;
    }
    if (in_stack_00000018 < param_3) {
      iVar10 = 0;
      do {
        bVar2 = *(byte *)(param_2 + iVar10 + 1);
        bVar6 = *(byte *)(param_4 + iVar10 + 1);
        iVar12 = (uint)*(byte *)(param_10 + iVar10) - (uint)bVar2;
        iVar5 = (uint)bVar6 - (uint)bVar2;
        uVar3 = iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f;
        uVar11 = iVar5 + iVar12 >> 0x1f;
        uVar4 = iVar5 + (iVar5 >> 0x1f) ^ iVar5 >> 0x1f;
        uVar11 = iVar5 + iVar12 + uVar11 ^ uVar11;
        if ((((int)uVar11 < (int)uVar3) || ((int)uVar4 < (int)uVar3)) &&
           (bVar6 = *(byte *)(param_10 + iVar10), (int)uVar11 < (int)uVar4)) {
          bVar6 = bVar2;
        }
        *(byte *)(in_stack_00000020 + iVar10) = *(char *)((int)in_stack_0000001c + iVar10) - bVar6;
        iVar10 = iVar10 + 1;
      } while (iVar10 + in_stack_00000018 < param_3);
    }
  }
  in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(unaff_r4,in_stack_0000001c);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar5 = 1;
    iVar10 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar5) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar5 + -1);
        iVar5 = iVar5 + 1;
        iVar10 = unaff_r5;
      } while (iVar5 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) = *in_stack_0000001c;
  }
  return;
}


