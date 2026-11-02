/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017826c  Symbol: FUN_0017826c */

/* WARNING: Removing unreachable block (ram,0x00178612) */

void FUN_0017826c(int param_1,undefined4 param_2,uint param_3,undefined *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  byte bVar8;
  int unaff_r4;
  uint uVar9;
  uint uVar10;
  int unaff_r5;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  char cVar18;
  undefined8 uVar19;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined *in_stack_0000001c;
  uint in_stack_00000020;
  undefined *puStack00000028;
  uint uStack0000002c;
  
  uVar19 = CONCAT44(param_2,param_1);
  iVar12 = *(int *)(unaff_r4 + 0x1b4);
  puVar7 = param_4;
  if (param_1 == 0) {
    uVar19 = FUN_00178d00();
  }
  iVar6 = (int)((ulonglong)uVar19 >> 0x20);
  uVar17 = (uint)uVar19;
  uVar15 = 0;
  uVar5 = 1;
  do {
    uVar4 = (uint)(byte)puVar7[uVar5];
    *(undefined *)(iVar12 + uVar5) = puVar7[uVar5];
    if (0x7f < uVar4) {
      uVar4 = 0x100 - uVar4;
    }
    uVar15 = uVar15 + uVar4;
    bVar1 = uVar5 < uVar17;
    uVar5 = uVar5 + 1;
  } while (bVar1);
  if (uVar17 < param_3) {
    in_stack_0000001c = (undefined *)0x100;
    iVar13 = 0;
    do {
      uVar5 = (uint)(byte)(param_4[iVar13 + uVar17 + 1] - puVar7[iVar13 + 1]);
      *(undefined *)(iVar12 + 1 + uVar17 + iVar13) =
           param_4[iVar13 + uVar17 + 1] - puVar7[iVar13 + 1];
      if (0x7f < uVar5) {
        uVar5 = 0x100 - uVar5;
      }
      uVar15 = uVar15 + uVar5;
    } while ((uVar15 <= in_stack_00000014) && (iVar13 = iVar13 + 1, iVar13 + uVar17 < param_3));
  }
  uVar5 = DAT_00178bd4;
  if (*(char *)(unaff_r4 + 700) == '\x02') {
    uVar15 = uVar15 >> 10 & DAT_00178bd0;
    if (unaff_r5 != 0) {
      iVar12 = 0;
      do {
        if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) == '\x01') {
          uVar15 = *(ushort *)(iVar12 * 2 + *(int *)(unaff_r4 + 0x2c8)) * uVar15 >> 8;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < unaff_r5);
    }
    uVar15 = *(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 2) * uVar15 >> 3;
    if (DAT_00178bd0 < uVar15) {
      uVar19 = FUN_00178328(uVar17,iVar6);
      puVar14 = puVar7;
LAB_00178aec:
      uVar17 = DAT_00178bd0;
      uVar2 = (undefined4)((ulonglong)uVar19 >> 0x20);
      uVar5 = uVar5 & DAT_00178bcc;
      uVar4 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar12 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) == '\x02') {
            uVar15 = (uint)*(ushort *)(iVar12 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar5 = uVar15 * uVar5 >> 8;
            uVar4 = uVar15 * uVar4 >> 8;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < unaff_r5);
      }
      uVar15 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 4);
      if (uVar4 * uVar15 >> 3 <= DAT_00178bd0) {
        uVar15 = uVar5 * uVar15;
        uVar19 = FUN_00178352((int)uVar19,uVar2);
LAB_00178c86:
        uVar19 = FUN_001784e4((int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
        puVar7 = puVar14;
        goto LAB_00178c9a;
      }
      uVar19 = FUN_00178352((int)uVar19,uVar2);
      puVar7 = puVar14;
LAB_00178b7a:
      uVar17 = uVar17 & DAT_00178bcc;
      uVar5 = in_stack_00000020 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar12 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) == '\x04') {
            uVar15 = (uint)*(ushort *)(iVar12 * 2 + *(int *)(unaff_r4 + 0x2c8));
            uVar17 = uVar15 * uVar17 >> 8;
            uVar5 = uVar15 * uVar5 >> 8;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < unaff_r5);
      }
      uVar15 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
      uVar5 = uVar15 * uVar5 >> 3;
      if (DAT_00178d10 < uVar5) {
        uStack0000002c = DAT_00178d14;
      }
      else {
        uStack0000002c = (uVar15 * uVar17 >> 3) + uVar5 * 0x400;
      }
LAB_00178772:
      iVar12 = (int)((ulonglong)uVar19 >> 0x20);
      uVar5 = (uint)uVar19;
      puStack00000028 = puVar7 + 1;
      iVar6 = *(int *)(unaff_r4 + 0x1c0);
      in_stack_00000018 = iVar12 + 1;
      in_stack_00000014 = iVar6 + 1;
      if (uVar5 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        uVar15 = 1;
        do {
          bVar3 = puVar7[uVar15] - *(char *)(iVar12 + uVar15);
          uVar4 = (uint)bVar3;
          *(byte *)(iVar6 + uVar15) = bVar3;
          if (0x7f < uVar4) {
            uVar4 = 0x100 - uVar4;
          }
          uVar17 = uVar17 + uVar4;
          bVar1 = uVar15 < uVar5;
          uVar15 = uVar15 + 1;
        } while (bVar1);
        in_stack_00000014 = in_stack_00000014 + uVar5;
        puStack00000028 = puStack00000028 + uVar5;
        in_stack_00000018 = in_stack_00000018 + uVar5;
      }
      if (uVar5 < param_3) {
        iVar6 = 0;
        do {
          uVar11 = (uint)*(byte *)(iVar12 + iVar6 + 1);
          iVar16 = *(byte *)(in_stack_00000018 + iVar6) - uVar11;
          iVar13 = (byte)puVar7[iVar6 + 1] - uVar11;
          uVar15 = iVar16 + (iVar16 >> 0x1f) ^ iVar16 >> 0x1f;
          uVar9 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
          uVar4 = iVar13 + iVar16 >> 0x1f;
          uVar4 = iVar13 + iVar16 + uVar4 ^ uVar4;
          if ((((int)uVar4 < (int)uVar15) ||
              (uVar10 = (uint)(byte)puVar7[iVar6 + 1], (int)uVar9 < (int)uVar15)) &&
             (uVar10 = (uint)*(byte *)(in_stack_00000018 + iVar6), (int)uVar4 < (int)uVar9)) {
            uVar10 = uVar11;
          }
          uVar15 = (byte)puStack00000028[iVar6] - uVar10 & 0xff;
          *(char *)(in_stack_00000014 + iVar6) = (char)((byte)puStack00000028[iVar6] - uVar10);
          if (0x7f < uVar15) {
            uVar15 = 0x100 - uVar15;
          }
          uVar17 = uVar17 + uVar15;
        } while ((uVar17 <= uStack0000002c) && (iVar6 = iVar6 + 1, iVar6 + uVar5 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar5 = DAT_00178d18 & uVar17;
        uVar17 = uVar17 >> 10 & DAT_00178d10;
        if (unaff_r5 != 0) {
          iVar12 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) == '\x04') {
              uVar15 = (uint)*(ushort *)(iVar12 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar5 = uVar15 * uVar5 >> 8;
              uVar17 = uVar15 * uVar17 >> 8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < unaff_r5);
        }
        puVar7 = (undefined *)(uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
        uVar15 = (int)puVar7 * uVar17 >> 3;
        uVar17 = DAT_00178d14;
        if (uVar15 <= DAT_00178d10) goto LAB_00178cd8;
      }
    }
    else {
LAB_00178cc4:
      uVar15 = uVar15 << 10;
      uVar5 = FUN_00178328((int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
LAB_00178cd8:
      uVar17 = uVar15 * 0x400 + (uVar5 * (int)puVar7 >> 3);
    }
    if (in_stack_00000020 <= uVar17) goto LAB_00178506;
  }
  else {
    in_stack_0000001c = puVar7;
    if (uVar15 < in_stack_00000020) {
      in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1b4);
      in_stack_00000020 = uVar15;
    }
    puVar14 = puVar7;
    if (in_stack_00000018 != 0x20) {
      if (-1 < (int)(in_stack_00000018 << 0x1a)) {
LAB_001783d0:
        if (in_stack_00000018 == 0x40) {
          puVar14 = puVar7 + 1;
          iVar12 = *(int *)(unaff_r4 + 0x1bc);
          iVar13 = iVar6 + 1;
          iVar16 = iVar12 + 1;
          uVar5 = 1;
          uVar15 = 0;
          if (uVar17 != 0) {
            do {
              *(byte *)(iVar12 + uVar5) = puVar7[uVar5] - (*(byte *)(iVar6 + uVar5) >> 1);
              bVar1 = uVar5 < uVar17;
              uVar5 = uVar5 + 1;
            } while (bVar1);
            iVar16 = iVar16 + uVar17;
            puVar14 = puVar14 + uVar17;
            iVar13 = iVar13 + uVar17;
            uVar15 = uVar17;
          }
          if (uVar15 < param_3) {
            iVar12 = 0;
            do {
              *(char *)(iVar16 + iVar12) =
                   puVar14[iVar12] -
                   (char)((int)((uint)(byte)puVar7[iVar12 + 1] + (uint)*(byte *)(iVar13 + iVar12))
                         >> 1);
              iVar12 = iVar12 + 1;
            } while (iVar12 + uVar15 < param_3);
          }
          in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1bc);
          goto LAB_00178506;
        }
        goto LAB_001783d8;
      }
      cVar18 = *(char *)(unaff_r4 + 700);
      uVar5 = in_stack_00000020;
      if (cVar18 == '\x02') goto LAB_00178aec;
      iVar12 = *(int *)(unaff_r4 + 0x1b8);
      uVar5 = 0;
      if (param_3 != 0) {
        uVar5 = 0;
        uVar15 = 1;
        do {
          bVar3 = puVar7[uVar15] - *(char *)(iVar6 + uVar15);
          uVar4 = (uint)bVar3;
          *(byte *)(iVar12 + uVar15) = bVar3;
          if (0x7f < uVar4) {
            uVar4 = 0x100 - uVar4;
          }
          uVar5 = uVar5 + uVar4;
        } while ((uVar5 <= in_stack_00000020) &&
                (bVar1 = uVar15 < param_3, uVar15 = uVar15 + 1, bVar1));
        cVar18 = *(char *)(unaff_r4 + 700);
      }
      if (cVar18 != '\x02') {
        if (uVar5 < in_stack_00000020) {
          in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1b8);
          in_stack_00000020 = uVar5;
        }
        goto LAB_001783d0;
      }
      uVar15 = DAT_00178bcc & uVar5;
      uVar5 = uVar5 >> 10 & DAT_00178bd0;
      if (unaff_r5 != 0) {
        iVar12 = 0;
        do {
          if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) == '\x02') {
            uVar4 = (uint)*(ushort *)(iVar12 * 2 + *(int *)(unaff_r4 + 0x2c4));
            uVar15 = uVar4 * uVar15 >> 8;
            uVar5 = uVar4 * uVar5 >> 8;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < unaff_r5);
      }
      if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 4) * uVar5 >> 3) {
        FUN_001783c0(uVar17,iVar6,param_3);
        return;
      }
LAB_00178c9a:
      uVar19 = FUN_001783c0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
LAB_00178cae:
      uVar19 = FUN_001783f0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
      goto LAB_00178cc4;
    }
    in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1b8);
    if (param_3 == 0) {
LAB_001783d8:
      if ((int)(in_stack_00000018 << 0x19) < 0) {
        if (*(char *)(unaff_r4 + 700) == '\x02') {
          uVar15 = in_stack_00000020 & DAT_00178bcc;
          uVar5 = in_stack_00000020 >> 10 & DAT_00178bd0;
          if (unaff_r5 != 0) {
            iVar12 = 0;
            do {
              if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) == '\x03') {
                uVar4 = (uint)*(ushort *)(iVar12 * 2 + *(int *)(unaff_r4 + 0x2c8));
                uVar15 = uVar4 * uVar15 >> 8;
                uVar5 = uVar4 * uVar5 >> 8;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < unaff_r5);
          }
          if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 6) * uVar5 >> 3) {
            FUN_001783f0(uVar17,iVar6,param_3);
            return;
          }
          goto LAB_00178cae;
        }
        iVar12 = *(int *)(unaff_r4 + 0x1bc);
        if (uVar17 == 0) {
          uVar19 = FUN_00178cf6();
        }
        iVar13 = (int)((ulonglong)uVar19 >> 0x20);
        uVar17 = (uint)uVar19;
        uVar4 = 0;
        uVar5 = 1;
        do {
          bVar3 = puVar14[uVar5] - (*(byte *)(iVar13 + uVar5) >> 1);
          uVar15 = (uint)bVar3;
          *(byte *)(iVar12 + uVar5) = bVar3;
          if (0x7f < uVar15) {
            uVar15 = 0x100 - uVar15;
          }
          uVar4 = uVar4 + uVar15;
          bVar1 = uVar5 < uVar17;
          uVar5 = uVar5 + 1;
        } while (bVar1);
        if (uVar17 < param_3) {
          iVar16 = 0;
          do {
            uVar5 = (uint)(byte)puVar7[iVar16 + uVar17 + 1] -
                    ((int)((uint)(byte)puVar14[iVar16 + 1] +
                          (uint)*(byte *)(iVar6 + 1 + uVar17 + iVar16)) >> 1);
            uVar15 = uVar5 & 0xff;
            *(char *)(iVar12 + 1 + uVar17 + iVar16) = (char)uVar5;
            if (0x7f < uVar15) {
              uVar15 = 0x100 - uVar15;
            }
            uVar4 = uVar4 + uVar15;
          } while ((uVar4 <= in_stack_00000020) && (iVar16 = iVar16 + 1, iVar16 + uVar17 < param_3))
          ;
        }
        if (*(char *)(unaff_r4 + 700) == '\x02') {
          uVar15 = DAT_00178bcc & uVar4;
          uVar5 = uVar4 >> 10 & DAT_00178bd0;
          if (unaff_r5 != 0) {
            iVar12 = 0;
            do {
              if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) == '\0') {
                uVar4 = (uint)*(ushort *)(iVar12 * 2 + *(int *)(unaff_r4 + 0x2c4));
                uVar15 = uVar4 * uVar15 >> 8;
                uVar5 = uVar4 * uVar5 >> 8;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < unaff_r5);
          }
          if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 6) * uVar5 >> 3) {
            FUN_001784e4(uVar17,iVar13,param_3);
            return;
          }
          goto LAB_00178c86;
        }
        puVar7 = puVar14;
        if (uVar4 < in_stack_00000020) {
          in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1bc);
          in_stack_00000020 = uVar4;
        }
      }
    }
    else {
      uVar5 = 1;
      do {
        in_stack_0000001c[uVar5] = puVar7[uVar5] - *(char *)(iVar6 + uVar5);
        bVar1 = uVar5 < param_3;
        uVar5 = uVar5 + 1;
      } while (bVar1);
      in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1b8);
    }
    iVar12 = (int)((ulonglong)uVar19 >> 0x20);
    uVar5 = (uint)uVar19;
    if (in_stack_00000018 != 0x80) {
      if (-1 < (int)(in_stack_00000018 * 0x1000000)) goto LAB_00178506;
      uStack0000002c = in_stack_00000020;
      uVar17 = in_stack_00000020;
      if (*(char *)(unaff_r4 + 700) == '\x02') goto LAB_00178b7a;
      goto LAB_00178772;
    }
    in_stack_0000001c = puVar7 + 1;
    iVar6 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar6 + 1;
    in_stack_00000014 = iVar12 + 1;
    in_stack_00000018 = 0;
    uVar17 = 1;
    if (uVar5 != 0) {
      do {
        *(char *)(iVar6 + uVar17) = puVar7[uVar17] - *(char *)(iVar12 + uVar17);
        bVar1 = uVar17 < uVar5;
        uVar17 = uVar17 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + uVar5;
      in_stack_0000001c = in_stack_0000001c + uVar5;
      in_stack_00000014 = in_stack_00000014 + uVar5;
      in_stack_00000018 = uVar5;
    }
    if (in_stack_00000018 < param_3) {
      iVar6 = 0;
      do {
        bVar3 = *(byte *)(iVar12 + iVar6 + 1);
        iVar16 = (uint)*(byte *)(in_stack_00000014 + iVar6) - (uint)bVar3;
        iVar13 = (uint)(byte)puVar7[iVar6 + 1] - (uint)bVar3;
        uVar5 = iVar16 + (iVar16 >> 0x1f) ^ iVar16 >> 0x1f;
        uVar15 = iVar13 + iVar16 >> 0x1f;
        uVar17 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
        uVar15 = iVar13 + iVar16 + uVar15 ^ uVar15;
        if ((((int)uVar15 < (int)uVar5) || (bVar8 = puVar7[iVar6 + 1], (int)uVar17 < (int)uVar5)) &&
           (bVar8 = *(byte *)(in_stack_00000014 + iVar6), (int)uVar15 < (int)uVar17)) {
          bVar8 = bVar3;
        }
        *(byte *)(in_stack_00000020 + iVar6) = in_stack_0000001c[iVar6] - bVar8;
        iVar6 = iVar6 + 1;
      } while (iVar6 + in_stack_00000018 < param_3);
    }
  }
  in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(unaff_r4,in_stack_0000001c);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar6 = 1;
    iVar12 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar6) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar6 + -1);
        iVar6 = iVar6 + 1;
        iVar12 = unaff_r5;
      } while (iVar6 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar12) = *in_stack_0000001c;
  }
  return;
}


