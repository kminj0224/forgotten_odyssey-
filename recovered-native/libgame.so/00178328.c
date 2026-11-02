/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00178328  Symbol: FUN_00178328 */

/* WARNING: Removing unreachable block (ram,0x00178612) */

void FUN_00178328(uint param_1,int param_2,uint param_3,undefined *param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  int unaff_r4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r5;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint unaff_r7;
  int iVar15;
  uint uVar16;
  char cVar17;
  undefined8 uVar18;
  uint param_11;
  undefined *param_12;
  uint in_stack_00000020;
  undefined *puStack00000028;
  uint uStack0000002c;
  
  uVar2 = DAT_00178bd0;
  uVar18 = CONCAT44(param_2,param_1);
  param_12 = param_4;
  if (unaff_r7 < in_stack_00000020) {
    param_12 = *(undefined **)(unaff_r4 + 0x1b4);
    in_stack_00000020 = unaff_r7;
  }
  if (param_11 == 0x20) {
    param_12 = *(undefined **)(unaff_r4 + 0x1b8);
    if (param_3 == 0) {
LAB_001783d8:
      if ((int)(param_11 << 0x19) < 0) {
        if (*(char *)(unaff_r4 + 700) == '\x02') {
          uVar16 = in_stack_00000020 & DAT_00178bcc;
          uVar2 = in_stack_00000020 >> 10 & DAT_00178bd0;
          if (unaff_r5 != 0) {
            iVar14 = 0;
            do {
              if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar14) == '\x03') {
                uVar13 = (uint)*(ushort *)(iVar14 * 2 + *(int *)(unaff_r4 + 0x2c8));
                uVar16 = uVar13 * uVar16 >> 8;
                uVar2 = uVar13 * uVar2 >> 8;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < unaff_r5);
          }
          if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 6) * uVar2 >> 3) {
            FUN_001783f0(param_1,param_2,param_3);
            return;
          }
          goto LAB_00178cae;
        }
        iVar14 = *(int *)(unaff_r4 + 0x1bc);
        puVar10 = param_4;
        if (param_1 == 0) {
          uVar18 = FUN_00178cf6();
        }
        iVar11 = (int)((ulonglong)uVar18 >> 0x20);
        uVar13 = (uint)uVar18;
        uVar7 = 0;
        uVar2 = 1;
        do {
          bVar3 = puVar10[uVar2] - (*(byte *)(iVar11 + uVar2) >> 1);
          uVar16 = (uint)bVar3;
          *(byte *)(iVar14 + uVar2) = bVar3;
          if (0x7f < uVar16) {
            uVar16 = 0x100 - uVar16;
          }
          uVar7 = uVar7 + uVar16;
          bVar1 = uVar2 < uVar13;
          uVar2 = uVar2 + 1;
        } while (bVar1);
        if (uVar13 < param_3) {
          iVar12 = 0;
          do {
            uVar2 = (uint)(byte)param_4[iVar12 + uVar13 + 1] -
                    ((int)((uint)(byte)puVar10[iVar12 + 1] +
                          (uint)*(byte *)(param_2 + 1 + uVar13 + iVar12)) >> 1);
            uVar16 = uVar2 & 0xff;
            *(char *)(iVar14 + 1 + uVar13 + iVar12) = (char)uVar2;
            if (0x7f < uVar16) {
              uVar16 = 0x100 - uVar16;
            }
            uVar7 = uVar7 + uVar16;
          } while ((uVar7 <= in_stack_00000020) && (iVar12 = iVar12 + 1, iVar12 + uVar13 < param_3))
          ;
        }
        if (*(char *)(unaff_r4 + 700) == '\x02') {
          uVar16 = DAT_00178bcc & uVar7;
          uVar2 = uVar7 >> 10 & DAT_00178bd0;
          if (unaff_r5 != 0) {
            iVar14 = 0;
            do {
              if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar14) == '\0') {
                uVar7 = (uint)*(ushort *)(iVar14 * 2 + *(int *)(unaff_r4 + 0x2c4));
                uVar16 = uVar7 * uVar16 >> 8;
                uVar2 = uVar7 * uVar2 >> 8;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < unaff_r5);
          }
          if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 6) * uVar2 >> 3) {
            FUN_001784e4(uVar13,iVar11,param_3);
            return;
          }
          goto LAB_00178c86;
        }
        param_4 = puVar10;
        if (uVar7 < in_stack_00000020) {
          param_12 = *(undefined **)(unaff_r4 + 0x1bc);
          in_stack_00000020 = uVar7;
        }
      }
    }
    else {
      uVar2 = 1;
      do {
        param_12[uVar2] = param_4[uVar2] - *(char *)(param_2 + uVar2);
        bVar1 = uVar2 < param_3;
        uVar2 = uVar2 + 1;
      } while (bVar1);
      param_12 = *(undefined **)(unaff_r4 + 0x1b8);
    }
    iVar14 = (int)((ulonglong)uVar18 >> 0x20);
    uVar2 = (uint)uVar18;
    if (param_11 != 0x80) {
      if (-1 < (int)(param_11 * 0x1000000)) goto LAB_00178506;
      uStack0000002c = in_stack_00000020;
      uVar2 = in_stack_00000020;
      if (*(char *)(unaff_r4 + 700) == '\x02') goto LAB_00178b7a;
LAB_00178772:
      iVar14 = (int)((ulonglong)uVar18 >> 0x20);
      uVar2 = (uint)uVar18;
      puStack00000028 = param_4 + 1;
      iVar11 = *(int *)(unaff_r4 + 0x1c0);
      param_11 = iVar14 + 1;
      iVar12 = iVar11 + 1;
      if (uVar2 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar16 = 1;
        do {
          bVar3 = param_4[uVar16] - *(char *)(iVar14 + uVar16);
          uVar7 = (uint)bVar3;
          *(byte *)(iVar11 + uVar16) = bVar3;
          if (0x7f < uVar7) {
            uVar7 = 0x100 - uVar7;
          }
          uVar13 = uVar13 + uVar7;
          bVar1 = uVar16 < uVar2;
          uVar16 = uVar16 + 1;
        } while (bVar1);
        iVar12 = iVar12 + uVar2;
        puStack00000028 = puStack00000028 + uVar2;
        param_11 = param_11 + uVar2;
      }
      if (uVar2 < param_3) {
        iVar11 = 0;
        do {
          uVar9 = (uint)*(byte *)(iVar14 + iVar11 + 1);
          iVar15 = *(byte *)(param_11 + iVar11) - uVar9;
          iVar4 = (byte)param_4[iVar11 + 1] - uVar9;
          uVar16 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
          uVar6 = iVar4 + (iVar4 >> 0x1f) ^ iVar4 >> 0x1f;
          uVar7 = iVar4 + iVar15 >> 0x1f;
          uVar7 = iVar4 + iVar15 + uVar7 ^ uVar7;
          if ((((int)uVar7 < (int)uVar16) ||
              (uVar8 = (uint)(byte)param_4[iVar11 + 1], (int)uVar6 < (int)uVar16)) &&
             (uVar8 = (uint)*(byte *)(param_11 + iVar11), (int)uVar7 < (int)uVar6)) {
            uVar8 = uVar9;
          }
          uVar16 = (byte)puStack00000028[iVar11] - uVar8 & 0xff;
          *(char *)(iVar12 + iVar11) = (char)((byte)puStack00000028[iVar11] - uVar8);
          if (0x7f < uVar16) {
            uVar16 = 0x100 - uVar16;
          }
          uVar13 = uVar13 + uVar16;
        } while ((uVar13 <= uStack0000002c) && (iVar11 = iVar11 + 1, iVar11 + uVar2 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar2 = DAT_00178d18 & uVar13;
        uVar13 = uVar13 >> 10 & DAT_00178d10;
        if (unaff_r5 != 0) {
          iVar14 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar14) == '\x04') {
              uVar16 = (uint)*(ushort *)(iVar14 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar2 = uVar16 * uVar2 >> 8;
              uVar13 = uVar16 * uVar13 >> 8;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < unaff_r5);
        }
        param_4 = (undefined *)(uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
        uVar16 = (int)param_4 * uVar13 >> 3;
        uVar13 = DAT_00178d14;
        if (uVar16 <= DAT_00178d10) goto LAB_00178cd8;
      }
      goto LAB_0017887c;
    }
    param_12 = param_4 + 1;
    iVar11 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar11 + 1;
    iVar12 = iVar14 + 1;
    param_11 = 0;
    uVar13 = 1;
    if (uVar2 != 0) {
      do {
        *(char *)(iVar11 + uVar13) = param_4[uVar13] - *(char *)(iVar14 + uVar13);
        bVar1 = uVar13 < uVar2;
        uVar13 = uVar13 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + uVar2;
      param_12 = param_12 + uVar2;
      iVar12 = iVar12 + uVar2;
      param_11 = uVar2;
    }
    if (param_11 < param_3) {
      iVar11 = 0;
      do {
        bVar3 = *(byte *)(iVar14 + iVar11 + 1);
        iVar15 = (uint)*(byte *)(iVar12 + iVar11) - (uint)bVar3;
        iVar4 = (uint)(byte)param_4[iVar11 + 1] - (uint)bVar3;
        uVar2 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
        uVar16 = iVar4 + iVar15 >> 0x1f;
        uVar13 = iVar4 + (iVar4 >> 0x1f) ^ iVar4 >> 0x1f;
        uVar16 = iVar4 + iVar15 + uVar16 ^ uVar16;
        if ((((int)uVar16 < (int)uVar2) || (bVar5 = param_4[iVar11 + 1], (int)uVar13 < (int)uVar2))
           && (bVar5 = *(byte *)(iVar12 + iVar11), (int)uVar16 < (int)uVar13)) {
          bVar5 = bVar3;
        }
        *(byte *)(in_stack_00000020 + iVar11) = param_12[iVar11] - bVar5;
        iVar11 = iVar11 + 1;
      } while (iVar11 + param_11 < param_3);
    }
  }
  else {
    if (-1 < (int)(param_11 << 0x1a)) {
LAB_001783d0:
      if (param_11 == 0x40) {
        puVar10 = param_4 + 1;
        iVar14 = *(int *)(unaff_r4 + 0x1bc);
        iVar11 = param_2 + 1;
        iVar12 = iVar14 + 1;
        uVar2 = 1;
        uVar13 = 0;
        if (param_1 != 0) {
          do {
            *(byte *)(iVar14 + uVar2) = param_4[uVar2] - (*(byte *)(param_2 + uVar2) >> 1);
            bVar1 = uVar2 < param_1;
            uVar2 = uVar2 + 1;
          } while (bVar1);
          iVar12 = iVar12 + param_1;
          puVar10 = puVar10 + param_1;
          iVar11 = iVar11 + param_1;
          uVar13 = param_1;
        }
        if (uVar13 < param_3) {
          iVar14 = 0;
          do {
            *(char *)(iVar12 + iVar14) =
                 puVar10[iVar14] -
                 (char)((int)((uint)(byte)param_4[iVar14 + 1] + (uint)*(byte *)(iVar11 + iVar14)) >>
                       1);
            iVar14 = iVar14 + 1;
          } while (iVar14 + uVar13 < param_3);
        }
        param_12 = *(undefined **)(unaff_r4 + 0x1bc);
        goto LAB_00178506;
      }
      goto LAB_001783d8;
    }
    cVar17 = *(char *)(unaff_r4 + 700);
    if (cVar17 == '\x02') {
      uVar16 = in_stack_00000020 & DAT_00178bcc;
      uVar13 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar14 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar14) == '\x02') {
            uVar7 = (uint)*(ushort *)(iVar14 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar16 = uVar7 * uVar16 >> 8;
            uVar13 = uVar7 * uVar13 >> 8;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < unaff_r5);
      }
      uVar7 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 4);
      if (uVar13 * uVar7 >> 3 <= DAT_00178bd0) {
        uVar16 = uVar16 * uVar7;
        uVar18 = FUN_00178352(param_1,param_2);
        puVar10 = param_4;
LAB_00178c86:
        uVar18 = FUN_001784e4((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        param_4 = puVar10;
        goto LAB_00178c9a;
      }
      uVar18 = FUN_00178352(param_1,param_2);
LAB_00178b7a:
      uVar2 = uVar2 & DAT_00178bcc;
      uVar13 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar14 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar14) == '\x04') {
            uVar16 = (uint)*(ushort *)(iVar14 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar2 = uVar16 * uVar2 >> 8;
            uVar13 = uVar16 * uVar13 >> 8;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < unaff_r5);
      }
      uVar16 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
      uVar13 = uVar16 * uVar13 >> 3;
      if (DAT_00178d10 < uVar13) {
        uStack0000002c = DAT_00178d14;
      }
      else {
        uStack0000002c = (uVar16 * uVar2 >> 3) + uVar13 * 0x400;
      }
      goto LAB_00178772;
    }
    iVar14 = *(int *)(unaff_r4 + 0x1b8);
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = 0;
      uVar13 = 1;
      do {
        bVar3 = param_4[uVar13] - *(char *)(param_2 + uVar13);
        uVar16 = (uint)bVar3;
        *(byte *)(iVar14 + uVar13) = bVar3;
        if (0x7f < uVar16) {
          uVar16 = 0x100 - uVar16;
        }
        uVar2 = uVar2 + uVar16;
      } while ((uVar2 <= in_stack_00000020) &&
              (bVar1 = uVar13 < param_3, uVar13 = uVar13 + 1, bVar1));
      cVar17 = *(char *)(unaff_r4 + 700);
    }
    if (cVar17 != '\x02') {
      if (uVar2 < in_stack_00000020) {
        param_12 = *(undefined **)(unaff_r4 + 0x1b8);
        in_stack_00000020 = uVar2;
      }
      goto LAB_001783d0;
    }
    uVar16 = DAT_00178bcc & uVar2;
    uVar2 = uVar2 >> 10 & DAT_00178bd0;
    if (unaff_r5 != 0) {
      iVar14 = 0;
      do {
        if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar14) == '\x02') {
          uVar13 = (uint)*(ushort *)(iVar14 * 2 + *(int *)(unaff_r4 + 0x2c4));
          uVar16 = uVar13 * uVar16 >> 8;
          uVar2 = uVar13 * uVar2 >> 8;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < unaff_r5);
    }
    if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 4) * uVar2 >> 3) {
      FUN_001783c0(param_1,param_2,param_3);
      return;
    }
LAB_00178c9a:
    uVar18 = FUN_001783c0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
LAB_00178cae:
    FUN_001783f0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar16 = uVar16 << 10;
    uVar2 = FUN_00178328();
LAB_00178cd8:
    uVar13 = uVar16 * 0x400 + (uVar2 * (int)param_4 >> 3);
LAB_0017887c:
    if (in_stack_00000020 <= uVar13) goto LAB_00178506;
  }
  param_12 = *(undefined **)(unaff_r4 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(unaff_r4,param_12);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar11 = 1;
    iVar14 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar11 + -1);
        iVar11 = iVar11 + 1;
        iVar14 = unaff_r5;
      } while (iVar11 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar14) = *param_12;
  }
  return;
}


