/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001782c4  Symbol: FUN_001782c4 */

/* WARNING: Removing unreachable block (ram,0x00178612) */

void FUN_001782c4(uint param_1,int param_2,uint param_3,undefined *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int unaff_r4;
  uint uVar8;
  uint uVar9;
  int unaff_r5;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  uint unaff_r7;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  char cVar17;
  undefined8 uVar18;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined *param_11;
  uint in_stack_00000020;
  undefined *puStack00000028;
  uint uStack0000002c;
  
  uVar18 = CONCAT44(param_2,param_1);
  if (unaff_r11 < param_3) {
    param_11 = (undefined *)0x100;
    iVar11 = 0;
    do {
      bVar3 = *(char *)(unaff_r9 + iVar11) - param_4[iVar11 + 1];
      uVar4 = (uint)bVar3;
      *(byte *)(unaff_r10 + iVar11) = bVar3;
      if (0x7f < uVar4) {
        uVar4 = 0x100 - uVar4;
      }
      unaff_r7 = unaff_r7 + uVar4;
    } while ((unaff_r7 <= in_stack_00000014) && (iVar11 = iVar11 + 1, iVar11 + unaff_r11 < param_3))
    ;
  }
  uVar4 = DAT_00178bd4;
  if (*(char *)(unaff_r4 + 700) == '\x02') {
    uVar14 = unaff_r7 >> 10 & DAT_00178bd0;
    if (unaff_r5 != 0) {
      iVar11 = 0;
      do {
        if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x01') {
          uVar14 = *(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c8)) * uVar14 >> 8;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < unaff_r5);
    }
    uVar14 = *(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 2) * uVar14 >> 3;
    if (DAT_00178bd0 < uVar14) {
      uVar18 = FUN_00178328(param_1,param_2);
      puVar12 = param_4;
LAB_00178aec:
      uVar16 = DAT_00178bd0;
      uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar4 = uVar4 & DAT_00178bcc;
      uVar15 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar11 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x02') {
            uVar14 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar4 = uVar14 * uVar4 >> 8;
            uVar15 = uVar14 * uVar15 >> 8;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < unaff_r5);
      }
      uVar14 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 4);
      if (uVar15 * uVar14 >> 3 <= DAT_00178bd0) {
        uVar14 = uVar4 * uVar14;
        uVar18 = FUN_00178352((int)uVar18,uVar2);
LAB_00178c86:
        uVar18 = FUN_001784e4((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        param_4 = puVar12;
        goto LAB_00178c9a;
      }
      uVar18 = FUN_00178352((int)uVar18,uVar2);
      param_4 = puVar12;
LAB_00178b7a:
      uVar16 = uVar16 & DAT_00178bcc;
      uVar4 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar11 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x04') {
            uVar14 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar16 = uVar14 * uVar16 >> 8;
            uVar4 = uVar14 * uVar4 >> 8;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < unaff_r5);
      }
      uVar14 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
      uVar4 = uVar14 * uVar4 >> 3;
      if (DAT_00178d10 < uVar4) {
        uStack0000002c = DAT_00178d14;
      }
      else {
        uStack0000002c = (uVar14 * uVar16 >> 3) + uVar4 * 0x400;
      }
LAB_00178772:
      iVar11 = (int)((ulonglong)uVar18 >> 0x20);
      uVar4 = (uint)uVar18;
      puStack00000028 = param_4 + 1;
      iVar5 = *(int *)(unaff_r4 + 0x1c0);
      in_stack_00000018 = iVar11 + 1;
      in_stack_00000014 = iVar5 + 1;
      if (uVar4 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        uVar14 = 1;
        do {
          bVar3 = param_4[uVar14] - *(char *)(iVar11 + uVar14);
          uVar15 = (uint)bVar3;
          *(byte *)(iVar5 + uVar14) = bVar3;
          if (0x7f < uVar15) {
            uVar15 = 0x100 - uVar15;
          }
          uVar16 = uVar16 + uVar15;
          bVar1 = uVar14 < uVar4;
          uVar14 = uVar14 + 1;
        } while (bVar1);
        in_stack_00000014 = in_stack_00000014 + uVar4;
        puStack00000028 = puStack00000028 + uVar4;
        in_stack_00000018 = in_stack_00000018 + uVar4;
      }
      if (uVar4 < param_3) {
        iVar5 = 0;
        do {
          uVar10 = (uint)*(byte *)(iVar11 + iVar5 + 1);
          iVar13 = *(byte *)(in_stack_00000018 + iVar5) - uVar10;
          iVar6 = (byte)param_4[iVar5 + 1] - uVar10;
          uVar14 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
          uVar8 = iVar6 + (iVar6 >> 0x1f) ^ iVar6 >> 0x1f;
          uVar15 = iVar6 + iVar13 >> 0x1f;
          uVar15 = iVar6 + iVar13 + uVar15 ^ uVar15;
          if ((((int)uVar15 < (int)uVar14) ||
              (uVar9 = (uint)(byte)param_4[iVar5 + 1], (int)uVar8 < (int)uVar14)) &&
             (uVar9 = (uint)*(byte *)(in_stack_00000018 + iVar5), (int)uVar15 < (int)uVar8)) {
            uVar9 = uVar10;
          }
          uVar14 = (byte)puStack00000028[iVar5] - uVar9 & 0xff;
          *(char *)(in_stack_00000014 + iVar5) = (char)((byte)puStack00000028[iVar5] - uVar9);
          if (0x7f < uVar14) {
            uVar14 = 0x100 - uVar14;
          }
          uVar16 = uVar16 + uVar14;
        } while ((uVar16 <= uStack0000002c) && (iVar5 = iVar5 + 1, iVar5 + uVar4 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar4 = DAT_00178d18 & uVar16;
        uVar14 = uVar16 >> 10 & DAT_00178d10;
        if (unaff_r5 != 0) {
          iVar11 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x04') {
              uVar16 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar4 = uVar16 * uVar4 >> 8;
              uVar14 = uVar16 * uVar14 >> 8;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < unaff_r5);
        }
        param_4 = (undefined *)(uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
        uVar14 = (int)param_4 * uVar14 >> 3;
        uVar16 = DAT_00178d14;
        if (uVar14 <= DAT_00178d10) goto LAB_00178cd8;
      }
    }
    else {
LAB_00178cc4:
      uVar14 = uVar14 << 10;
      uVar4 = FUN_00178328((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
LAB_00178cd8:
      uVar16 = uVar14 * 0x400 + (uVar4 * (int)param_4 >> 3);
    }
    if (in_stack_00000020 <= uVar16) goto LAB_00178506;
  }
  else {
    param_11 = param_4;
    if (unaff_r7 < in_stack_00000020) {
      param_11 = *(undefined **)(unaff_r4 + 0x1b4);
      in_stack_00000020 = unaff_r7;
    }
    puVar12 = param_4;
    if (in_stack_00000018 != 0x20) {
      if (-1 < (int)(in_stack_00000018 << 0x1a)) {
LAB_001783d0:
        if (in_stack_00000018 == 0x40) {
          puVar12 = param_4 + 1;
          iVar11 = *(int *)(unaff_r4 + 0x1bc);
          iVar5 = param_2 + 1;
          iVar6 = iVar11 + 1;
          uVar4 = 1;
          uVar14 = 0;
          if (param_1 != 0) {
            do {
              *(byte *)(iVar11 + uVar4) = param_4[uVar4] - (*(byte *)(param_2 + uVar4) >> 1);
              bVar1 = uVar4 < param_1;
              uVar4 = uVar4 + 1;
            } while (bVar1);
            iVar6 = iVar6 + param_1;
            puVar12 = puVar12 + param_1;
            iVar5 = iVar5 + param_1;
            uVar14 = param_1;
          }
          if (uVar14 < param_3) {
            iVar11 = 0;
            do {
              *(char *)(iVar6 + iVar11) =
                   puVar12[iVar11] -
                   (char)((int)((uint)(byte)param_4[iVar11 + 1] + (uint)*(byte *)(iVar5 + iVar11))
                         >> 1);
              iVar11 = iVar11 + 1;
            } while (iVar11 + uVar14 < param_3);
          }
          param_11 = *(undefined **)(unaff_r4 + 0x1bc);
          goto LAB_00178506;
        }
        goto LAB_001783d8;
      }
      cVar17 = *(char *)(unaff_r4 + 700);
      uVar4 = in_stack_00000020;
      if (cVar17 == '\x02') goto LAB_00178aec;
      iVar11 = *(int *)(unaff_r4 + 0x1b8);
      uVar4 = 0;
      if (param_3 != 0) {
        uVar4 = 0;
        uVar14 = 1;
        do {
          bVar3 = param_4[uVar14] - *(char *)(param_2 + uVar14);
          uVar16 = (uint)bVar3;
          *(byte *)(iVar11 + uVar14) = bVar3;
          if (0x7f < uVar16) {
            uVar16 = 0x100 - uVar16;
          }
          uVar4 = uVar4 + uVar16;
        } while ((uVar4 <= in_stack_00000020) &&
                (bVar1 = uVar14 < param_3, uVar14 = uVar14 + 1, bVar1));
        cVar17 = *(char *)(unaff_r4 + 700);
      }
      if (cVar17 != '\x02') {
        if (uVar4 < in_stack_00000020) {
          param_11 = *(undefined **)(unaff_r4 + 0x1b8);
          in_stack_00000020 = uVar4;
        }
        goto LAB_001783d0;
      }
      uVar14 = DAT_00178bcc & uVar4;
      uVar4 = uVar4 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar11 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x02') {
            uVar16 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c4));
            uVar14 = uVar16 * uVar14 >> 8;
            uVar4 = uVar16 * uVar4 >> 8;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < unaff_r5);
      }
      if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 4) * uVar4 >> 3) {
        FUN_001783c0(param_1,param_2,param_3);
        return;
      }
LAB_00178c9a:
      uVar18 = FUN_001783c0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
LAB_00178cae:
      uVar18 = FUN_001783f0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
      goto LAB_00178cc4;
    }
    param_11 = *(undefined **)(unaff_r4 + 0x1b8);
    if (param_3 == 0) {
LAB_001783d8:
      if ((int)(in_stack_00000018 << 0x19) < 0) {
        if (*(char *)(unaff_r4 + 700) == '\x02') {
          uVar14 = in_stack_00000020 & DAT_00178bcc;
          uVar4 = in_stack_00000020 >> 10 & DAT_00178bd0;
          if (unaff_r5 != 0) {
            iVar11 = 0;
            do {
              if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x03') {
                uVar16 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c8));
                uVar14 = uVar16 * uVar14 >> 8;
                uVar4 = uVar16 * uVar4 >> 8;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < unaff_r5);
          }
          if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 6) * uVar4 >> 3) {
            FUN_001783f0(param_1,param_2,param_3);
            return;
          }
          goto LAB_00178cae;
        }
        iVar11 = *(int *)(unaff_r4 + 0x1bc);
        if (param_1 == 0) {
          uVar18 = FUN_00178cf6();
        }
        iVar5 = (int)((ulonglong)uVar18 >> 0x20);
        uVar16 = (uint)uVar18;
        uVar15 = 0;
        uVar4 = 1;
        do {
          bVar3 = puVar12[uVar4] - (*(byte *)(iVar5 + uVar4) >> 1);
          uVar14 = (uint)bVar3;
          *(byte *)(iVar11 + uVar4) = bVar3;
          if (0x7f < uVar14) {
            uVar14 = 0x100 - uVar14;
          }
          uVar15 = uVar15 + uVar14;
          bVar1 = uVar4 < uVar16;
          uVar4 = uVar4 + 1;
        } while (bVar1);
        if (uVar16 < param_3) {
          iVar6 = 0;
          do {
            uVar4 = (uint)(byte)param_4[iVar6 + uVar16 + 1] -
                    ((int)((uint)(byte)puVar12[iVar6 + 1] +
                          (uint)*(byte *)(param_2 + 1 + uVar16 + iVar6)) >> 1);
            uVar14 = uVar4 & 0xff;
            *(char *)(iVar11 + 1 + uVar16 + iVar6) = (char)uVar4;
            if (0x7f < uVar14) {
              uVar14 = 0x100 - uVar14;
            }
            uVar15 = uVar15 + uVar14;
          } while ((uVar15 <= in_stack_00000020) && (iVar6 = iVar6 + 1, iVar6 + uVar16 < param_3));
        }
        if (*(char *)(unaff_r4 + 700) == '\x02') {
          uVar14 = DAT_00178bcc & uVar15;
          uVar4 = uVar15 >> 10 & DAT_00178bd0;
          if (unaff_r5 != 0) {
            iVar11 = 0;
            do {
              if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\0') {
                uVar15 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c4));
                uVar14 = uVar15 * uVar14 >> 8;
                uVar4 = uVar15 * uVar4 >> 8;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < unaff_r5);
          }
          if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 6) * uVar4 >> 3) {
            FUN_001784e4(uVar16,iVar5,param_3);
            return;
          }
          goto LAB_00178c86;
        }
        param_4 = puVar12;
        if (uVar15 < in_stack_00000020) {
          param_11 = *(undefined **)(unaff_r4 + 0x1bc);
          in_stack_00000020 = uVar15;
        }
      }
    }
    else {
      uVar4 = 1;
      do {
        param_11[uVar4] = param_4[uVar4] - *(char *)(param_2 + uVar4);
        bVar1 = uVar4 < param_3;
        uVar4 = uVar4 + 1;
      } while (bVar1);
      param_11 = *(undefined **)(unaff_r4 + 0x1b8);
    }
    iVar11 = (int)((ulonglong)uVar18 >> 0x20);
    uVar4 = (uint)uVar18;
    if (in_stack_00000018 != 0x80) {
      if (-1 < (int)(in_stack_00000018 * 0x1000000)) goto LAB_00178506;
      uStack0000002c = in_stack_00000020;
      uVar16 = in_stack_00000020;
      if (*(char *)(unaff_r4 + 700) == '\x02') goto LAB_00178b7a;
      goto LAB_00178772;
    }
    param_11 = param_4 + 1;
    iVar5 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar5 + 1;
    in_stack_00000014 = iVar11 + 1;
    in_stack_00000018 = 0;
    uVar14 = 1;
    if (uVar4 != 0) {
      do {
        *(char *)(iVar5 + uVar14) = param_4[uVar14] - *(char *)(iVar11 + uVar14);
        bVar1 = uVar14 < uVar4;
        uVar14 = uVar14 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + uVar4;
      param_11 = param_11 + uVar4;
      in_stack_00000014 = in_stack_00000014 + uVar4;
      in_stack_00000018 = uVar4;
    }
    if (in_stack_00000018 < param_3) {
      iVar5 = 0;
      do {
        bVar3 = *(byte *)(iVar11 + iVar5 + 1);
        iVar13 = (uint)*(byte *)(in_stack_00000014 + iVar5) - (uint)bVar3;
        iVar6 = (uint)(byte)param_4[iVar5 + 1] - (uint)bVar3;
        uVar4 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
        uVar16 = iVar6 + iVar13 >> 0x1f;
        uVar14 = iVar6 + (iVar6 >> 0x1f) ^ iVar6 >> 0x1f;
        uVar16 = iVar6 + iVar13 + uVar16 ^ uVar16;
        if ((((int)uVar16 < (int)uVar4) || (bVar7 = param_4[iVar5 + 1], (int)uVar14 < (int)uVar4))
           && (bVar7 = *(byte *)(in_stack_00000014 + iVar5), (int)uVar16 < (int)uVar14)) {
          bVar7 = bVar3;
        }
        *(byte *)(in_stack_00000020 + iVar5) = param_11[iVar5] - bVar7;
        iVar5 = iVar5 + 1;
      } while (iVar5 + in_stack_00000018 < param_3);
    }
  }
  param_11 = *(undefined **)(unaff_r4 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(unaff_r4,param_11);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar5 = 1;
    iVar11 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar5) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar5 + -1);
        iVar5 = iVar5 + 1;
        iVar11 = unaff_r5;
      } while (iVar5 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) = *param_11;
  }
  return;
}


