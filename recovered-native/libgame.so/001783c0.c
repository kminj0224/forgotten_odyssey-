/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001783c0  Symbol: FUN_001783c0 */

void FUN_001783c0(uint param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int unaff_r4;
  uint uVar5;
  uint uVar6;
  int unaff_r5;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_r7;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  uint param_11;
  undefined *param_12;
  uint in_stack_00000020;
  int param_14;
  uint uStack0000002c;
  
  uVar16 = CONCAT44(param_2,param_1);
  if (unaff_r7 < in_stack_00000020) {
    param_12 = *(undefined **)(unaff_r4 + 0x1b8);
    in_stack_00000020 = unaff_r7;
  }
  if (param_11 == 0x40) {
    iVar8 = param_4 + 1;
    iVar9 = *(int *)(unaff_r4 + 0x1bc);
    iVar10 = param_2 + 1;
    iVar15 = iVar9 + 1;
    uVar11 = 1;
    uVar12 = 0;
    if (param_1 != 0) {
      do {
        *(byte *)(iVar9 + uVar11) = *(char *)(param_4 + uVar11) - (*(byte *)(param_2 + uVar11) >> 1)
        ;
        bVar1 = uVar11 < param_1;
        uVar11 = uVar11 + 1;
      } while (bVar1);
      iVar15 = iVar15 + param_1;
      iVar8 = iVar8 + param_1;
      iVar10 = iVar10 + param_1;
      uVar12 = param_1;
    }
    if (uVar12 < param_3) {
      iVar9 = 0;
      do {
        *(char *)(iVar15 + iVar9) =
             *(char *)(iVar8 + iVar9) -
             (char)((int)((uint)*(byte *)(param_4 + iVar9 + 1) + (uint)*(byte *)(iVar10 + iVar9)) >>
                   1);
        iVar9 = iVar9 + 1;
      } while (iVar9 + uVar12 < param_3);
    }
    param_12 = *(undefined **)(unaff_r4 + 0x1bc);
    goto LAB_00178506;
  }
  if ((int)(param_11 << 0x19) < 0) {
    if (*(char *)(unaff_r4 + 700) == '\x02') {
      uVar2 = in_stack_00000020 & DAT_00178bcc;
      uVar11 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar8 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar8) == '\x03') {
            uVar12 = (uint)*(ushort *)(iVar8 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar2 = uVar12 * uVar2 >> 8;
            uVar11 = uVar12 * uVar11 >> 8;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < unaff_r5);
      }
      if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 6) * uVar11 >> 3) {
        FUN_001783f0(param_1,param_2,param_3);
        return;
      }
    }
    else {
      iVar8 = *(int *)(unaff_r4 + 0x1bc);
      iVar9 = param_4 + 1;
      if (param_1 == 0) {
        uVar16 = FUN_00178cf6();
      }
      iVar10 = (int)((ulonglong)uVar16 >> 0x20);
      uVar12 = (uint)uVar16;
      uVar14 = 0;
      uVar11 = 1;
      do {
        bVar3 = *(char *)(param_4 + uVar11) - (*(byte *)(iVar10 + uVar11) >> 1);
        uVar2 = (uint)bVar3;
        *(byte *)(iVar8 + uVar11) = bVar3;
        if (0x7f < uVar2) {
          uVar2 = 0x100 - uVar2;
        }
        uVar14 = uVar14 + uVar2;
        bVar1 = uVar11 < uVar12;
        uVar11 = uVar11 + 1;
      } while (bVar1);
      if (uVar12 < param_3) {
        iVar15 = 0;
        do {
          uVar11 = (uint)*(byte *)(iVar9 + uVar12 + iVar15) -
                   ((int)((uint)*(byte *)(param_4 + iVar15 + 1) +
                         (uint)*(byte *)(param_2 + 1 + uVar12 + iVar15)) >> 1);
          uVar2 = uVar11 & 0xff;
          *(char *)(iVar8 + 1 + uVar12 + iVar15) = (char)uVar11;
          if (0x7f < uVar2) {
            uVar2 = 0x100 - uVar2;
          }
          uVar14 = uVar14 + uVar2;
        } while ((uVar14 <= in_stack_00000020) && (iVar15 = iVar15 + 1, iVar15 + uVar12 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) != '\x02') {
        if (uVar14 < in_stack_00000020) {
          param_12 = *(undefined **)(unaff_r4 + 0x1bc);
          in_stack_00000020 = uVar14;
        }
        goto LAB_001784f4;
      }
      uVar2 = DAT_00178bcc & uVar14;
      uVar11 = uVar14 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar8 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar8) == '\0') {
            uVar14 = (uint)*(ushort *)(iVar8 * 2 + *(int *)(unaff_r4 + 0x2c4));
            uVar2 = uVar14 * uVar2 >> 8;
            uVar11 = uVar14 * uVar11 >> 8;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < unaff_r5);
      }
      if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 6) * uVar11 >> 3) {
        FUN_001784e4(uVar12,iVar10,param_3);
        return;
      }
      FUN_001784e4(uVar12,iVar10,param_3);
      uVar16 = FUN_001783c0();
    }
    FUN_001783f0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar2 = uVar2 << 10;
    uVar11 = FUN_00178328();
LAB_00178cd8:
    uVar12 = uVar2 * 0x400 + (uVar11 * param_4 >> 3);
LAB_0017887c:
    if (in_stack_00000020 <= uVar12) goto LAB_00178506;
  }
  else {
LAB_001784f4:
    iVar8 = (int)((ulonglong)uVar16 >> 0x20);
    uVar11 = (uint)uVar16;
    if (param_11 != 0x80) {
      if (-1 < (int)(param_11 * 0x1000000)) goto LAB_00178506;
      uStack0000002c = in_stack_00000020;
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar14 = in_stack_00000020 & DAT_00178bcc;
        uVar12 = in_stack_00000020 >> 10 & DAT_00178bd0;
        if (unaff_r5 != 0) {
          iVar9 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar9) == '\x04') {
              uVar2 = (uint)*(ushort *)(iVar9 * 2 + *(int *)(unaff_r4 + 0x2c8));
              uVar14 = uVar2 * uVar14 >> 8;
              uVar12 = uVar2 * uVar12 >> 8;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < unaff_r5);
        }
        uVar2 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
        uVar12 = uVar2 * uVar12 >> 3;
        if (DAT_00178d10 < uVar12) {
          uStack0000002c = DAT_00178d14;
        }
        else {
          uStack0000002c = (uVar2 * uVar14 >> 3) + uVar12 * 0x400;
        }
      }
      param_14 = param_4 + 1;
      iVar9 = *(int *)(unaff_r4 + 0x1c0);
      param_11 = iVar8 + 1;
      iVar10 = iVar9 + 1;
      if (uVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        uVar14 = 1;
        do {
          bVar3 = *(char *)(param_4 + uVar14) - *(char *)(iVar8 + uVar14);
          uVar2 = (uint)bVar3;
          *(byte *)(iVar9 + uVar14) = bVar3;
          if (0x7f < uVar2) {
            uVar2 = 0x100 - uVar2;
          }
          uVar12 = uVar12 + uVar2;
          bVar1 = uVar14 < uVar11;
          uVar14 = uVar14 + 1;
        } while (bVar1);
        iVar10 = iVar10 + uVar11;
        param_14 = param_14 + uVar11;
        param_11 = param_11 + uVar11;
      }
      if (uVar11 < param_3) {
        iVar9 = 0;
        do {
          uVar7 = (uint)*(byte *)(iVar8 + iVar9 + 1);
          uVar14 = (uint)*(byte *)(param_4 + iVar9 + 1);
          iVar13 = *(byte *)(param_11 + iVar9) - uVar7;
          iVar15 = uVar14 - uVar7;
          uVar2 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
          uVar5 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
          uVar6 = iVar15 + iVar13 >> 0x1f;
          uVar6 = iVar15 + iVar13 + uVar6 ^ uVar6;
          if ((((int)uVar6 < (int)uVar2) || ((int)uVar5 < (int)uVar2)) &&
             (uVar14 = (uint)*(byte *)(param_11 + iVar9), (int)uVar6 < (int)uVar5)) {
            uVar14 = uVar7;
          }
          uVar14 = *(byte *)(param_14 + iVar9) - uVar14;
          uVar2 = uVar14 & 0xff;
          *(char *)(iVar10 + iVar9) = (char)uVar14;
          if (0x7f < uVar2) {
            uVar2 = 0x100 - uVar2;
          }
          uVar12 = uVar12 + uVar2;
        } while ((uVar12 <= uStack0000002c) && (iVar9 = iVar9 + 1, iVar9 + uVar11 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar11 = DAT_00178d18 & uVar12;
        uVar12 = uVar12 >> 10 & DAT_00178d10;
        if (unaff_r5 != 0) {
          iVar8 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar8) == '\x04') {
              uVar14 = (uint)*(ushort *)(iVar8 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar11 = uVar14 * uVar11 >> 8;
              uVar12 = uVar14 * uVar12 >> 8;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < unaff_r5);
        }
        param_4 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
        uVar2 = param_4 * uVar12 >> 3;
        uVar12 = DAT_00178d14;
        if (uVar2 <= DAT_00178d10) goto LAB_00178cd8;
      }
      goto LAB_0017887c;
    }
    param_12 = (undefined *)(param_4 + 1);
    iVar9 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar9 + 1;
    iVar10 = iVar8 + 1;
    param_11 = 0;
    uVar12 = 1;
    if (uVar11 != 0) {
      do {
        *(char *)(iVar9 + uVar12) = *(char *)(param_4 + uVar12) - *(char *)(iVar8 + uVar12);
        bVar1 = uVar12 < uVar11;
        uVar12 = uVar12 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + uVar11;
      param_12 = (undefined *)((int)param_12 + uVar11);
      iVar10 = iVar10 + uVar11;
      param_11 = uVar11;
    }
    if (param_11 < param_3) {
      iVar9 = 0;
      do {
        bVar3 = *(byte *)(iVar8 + iVar9 + 1);
        bVar4 = *(byte *)(param_4 + iVar9 + 1);
        iVar13 = (uint)*(byte *)(iVar10 + iVar9) - (uint)bVar3;
        iVar15 = (uint)bVar4 - (uint)bVar3;
        uVar11 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
        uVar14 = iVar15 + iVar13 >> 0x1f;
        uVar12 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
        uVar14 = iVar15 + iVar13 + uVar14 ^ uVar14;
        if ((((int)uVar14 < (int)uVar11) || ((int)uVar12 < (int)uVar11)) &&
           (bVar4 = *(byte *)(iVar10 + iVar9), (int)uVar14 < (int)uVar12)) {
          bVar4 = bVar3;
        }
        *(byte *)(in_stack_00000020 + iVar9) = *(char *)((int)param_12 + iVar9) - bVar4;
        iVar9 = iVar9 + 1;
      } while (iVar9 + param_11 < param_3);
    }
  }
  param_12 = *(undefined **)(unaff_r4 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(unaff_r4,param_12);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar9 = 1;
    iVar8 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar9) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar9 + -1);
        iVar9 = iVar9 + 1;
        iVar8 = unaff_r5;
      } while (iVar9 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar8) = *param_12;
  }
  return;
}


