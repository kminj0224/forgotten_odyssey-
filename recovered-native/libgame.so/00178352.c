/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00178352  Symbol: FUN_00178352 */

void FUN_00178352(uint param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int unaff_r4;
  uint uVar7;
  uint uVar8;
  int unaff_r5;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint unaff_r10;
  uint in_r12;
  undefined8 uVar16;
  uint in_stack_00000018;
  undefined *in_stack_0000001c;
  uint in_stack_00000020;
  int iStack00000028;
  uint uStack0000002c;
  
  uVar16 = CONCAT44(param_2,param_1);
  iVar10 = *(int *)(unaff_r4 + 0x1b8);
  uVar13 = 0;
  if (param_3 != 0) {
    uVar13 = 0;
    uVar12 = 1;
    do {
      bVar3 = *(char *)(param_4 + uVar12) - *(char *)(param_2 + uVar12);
      uVar4 = (uint)bVar3;
      *(byte *)(iVar10 + uVar12) = bVar3;
      if (0x7f < uVar4) {
        uVar4 = 0x100 - uVar4;
      }
      uVar13 = uVar13 + uVar4;
    } while ((uVar13 <= unaff_r10) && (bVar1 = uVar12 < param_3, uVar12 = uVar12 + 1, bVar1));
    in_r12 = (uint)*(byte *)(unaff_r4 + 700);
  }
  if (in_r12 == 2) {
    uVar12 = DAT_00178bcc & uVar13;
    uVar13 = uVar13 >> 10 & DAT_00178bd0;
    if (unaff_r5 != 0) {
      iVar10 = 0;
      do {
        if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) == '\x02') {
          uVar4 = (uint)*(ushort *)(iVar10 * 2 + *(int *)(unaff_r4 + 0x2c4));
          uVar12 = uVar4 * uVar12 >> 8;
          uVar13 = uVar4 * uVar13 >> 8;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < unaff_r5);
    }
    if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 4) * uVar13 >> 3) {
      FUN_001783c0(param_1,param_2,param_3);
      return;
    }
LAB_00178c9a:
    uVar16 = FUN_001783c0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
LAB_00178cae:
    FUN_001783f0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar12 = uVar12 << 10;
    uVar13 = FUN_00178328();
LAB_00178cd8:
    uVar4 = uVar12 * 0x400 + (uVar13 * param_4 >> 3);
LAB_0017887c:
    if (in_stack_00000020 <= uVar4) goto LAB_00178506;
  }
  else {
    if (uVar13 < in_stack_00000020) {
      in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1b8);
      in_stack_00000020 = uVar13;
    }
    if (in_stack_00000018 == 0x40) {
      iVar10 = param_4 + 1;
      iVar5 = *(int *)(unaff_r4 + 0x1bc);
      iVar11 = param_2 + 1;
      iVar15 = iVar5 + 1;
      uVar13 = 1;
      uVar12 = 0;
      if (param_1 != 0) {
        do {
          *(byte *)(iVar5 + uVar13) =
               *(char *)(param_4 + uVar13) - (*(byte *)(param_2 + uVar13) >> 1);
          bVar1 = uVar13 < param_1;
          uVar13 = uVar13 + 1;
        } while (bVar1);
        iVar15 = iVar15 + param_1;
        iVar10 = iVar10 + param_1;
        iVar11 = iVar11 + param_1;
        uVar12 = param_1;
      }
      if (uVar12 < param_3) {
        iVar5 = 0;
        do {
          *(char *)(iVar15 + iVar5) =
               *(char *)(iVar10 + iVar5) -
               (char)((int)((uint)*(byte *)(param_4 + iVar5 + 1) + (uint)*(byte *)(iVar11 + iVar5))
                     >> 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 + uVar12 < param_3);
      }
      in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1bc);
      goto LAB_00178506;
    }
    if ((int)(in_stack_00000018 << 0x19) < 0) {
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar12 = in_stack_00000020 & DAT_00178bcc;
        uVar13 = in_stack_00000020 >> 10 & DAT_00178bd0;
        if (unaff_r5 != 0) {
          iVar10 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) == '\x03') {
              uVar4 = (uint)*(ushort *)(iVar10 * 2 + *(int *)(unaff_r4 + 0x2c8));
              uVar12 = uVar4 * uVar12 >> 8;
              uVar13 = uVar4 * uVar13 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < unaff_r5);
        }
        if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 6) * uVar13 >> 3) {
          FUN_001783f0(param_1,param_2,param_3);
          return;
        }
        goto LAB_00178cae;
      }
      iVar10 = *(int *)(unaff_r4 + 0x1bc);
      iVar5 = param_4 + 1;
      if (param_1 == 0) {
        uVar16 = FUN_00178cf6();
      }
      iVar11 = (int)((ulonglong)uVar16 >> 0x20);
      uVar4 = (uint)uVar16;
      uVar2 = 0;
      uVar13 = 1;
      do {
        bVar3 = *(char *)(param_4 + uVar13) - (*(byte *)(iVar11 + uVar13) >> 1);
        uVar12 = (uint)bVar3;
        *(byte *)(iVar10 + uVar13) = bVar3;
        if (0x7f < uVar12) {
          uVar12 = 0x100 - uVar12;
        }
        uVar2 = uVar2 + uVar12;
        bVar1 = uVar13 < uVar4;
        uVar13 = uVar13 + 1;
      } while (bVar1);
      if (uVar4 < param_3) {
        iVar15 = 0;
        do {
          uVar13 = (uint)*(byte *)(iVar5 + uVar4 + iVar15) -
                   ((int)((uint)*(byte *)(param_4 + iVar15 + 1) +
                         (uint)*(byte *)(param_2 + 1 + uVar4 + iVar15)) >> 1);
          uVar12 = uVar13 & 0xff;
          *(char *)(iVar10 + 1 + uVar4 + iVar15) = (char)uVar13;
          if (0x7f < uVar12) {
            uVar12 = 0x100 - uVar12;
          }
          uVar2 = uVar2 + uVar12;
        } while ((uVar2 <= in_stack_00000020) && (iVar15 = iVar15 + 1, iVar15 + uVar4 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar12 = DAT_00178bcc & uVar2;
        uVar13 = uVar2 >> 10 & DAT_00178bd0;
        if (unaff_r5 != 0) {
          iVar10 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) == '\0') {
              uVar2 = (uint)*(ushort *)(iVar10 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar12 = uVar2 * uVar12 >> 8;
              uVar13 = uVar2 * uVar13 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < unaff_r5);
        }
        if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 6) * uVar13 >> 3) {
          FUN_001784e4(uVar4,iVar11,param_3);
          return;
        }
        uVar16 = FUN_001784e4(uVar4,iVar11,param_3);
        goto LAB_00178c9a;
      }
      if (uVar2 < in_stack_00000020) {
        in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1bc);
        in_stack_00000020 = uVar2;
      }
    }
    iVar10 = (int)((ulonglong)uVar16 >> 0x20);
    uVar13 = (uint)uVar16;
    if (in_stack_00000018 != 0x80) {
      if (-1 < (int)(in_stack_00000018 * 0x1000000)) goto LAB_00178506;
      uStack0000002c = in_stack_00000020;
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar4 = in_stack_00000020 & DAT_00178bcc;
        uVar12 = in_stack_00000020 >> 10 & DAT_00178bd0;
        if (unaff_r5 != 0) {
          iVar5 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar5) == '\x04') {
              uVar2 = (uint)*(ushort *)(iVar5 * 2 + *(int *)(unaff_r4 + 0x2c8));
              uVar4 = uVar2 * uVar4 >> 8;
              uVar12 = uVar2 * uVar12 >> 8;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < unaff_r5);
        }
        uVar2 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
        uVar12 = uVar2 * uVar12 >> 3;
        if (DAT_00178d10 < uVar12) {
          uStack0000002c = DAT_00178d14;
        }
        else {
          uStack0000002c = (uVar2 * uVar4 >> 3) + uVar12 * 0x400;
        }
      }
      iStack00000028 = param_4 + 1;
      iVar5 = *(int *)(unaff_r4 + 0x1c0);
      in_stack_00000018 = iVar10 + 1;
      iVar11 = iVar5 + 1;
      if (uVar13 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar12 = 1;
        do {
          bVar3 = *(char *)(param_4 + uVar12) - *(char *)(iVar10 + uVar12);
          uVar2 = (uint)bVar3;
          *(byte *)(iVar5 + uVar12) = bVar3;
          if (0x7f < uVar2) {
            uVar2 = 0x100 - uVar2;
          }
          uVar4 = uVar4 + uVar2;
          bVar1 = uVar12 < uVar13;
          uVar12 = uVar12 + 1;
        } while (bVar1);
        iVar11 = iVar11 + uVar13;
        iStack00000028 = iStack00000028 + uVar13;
        in_stack_00000018 = in_stack_00000018 + uVar13;
      }
      if (uVar13 < param_3) {
        iVar5 = 0;
        do {
          uVar9 = (uint)*(byte *)(iVar10 + iVar5 + 1);
          uVar12 = (uint)*(byte *)(param_4 + iVar5 + 1);
          iVar14 = *(byte *)(in_stack_00000018 + iVar5) - uVar9;
          iVar15 = uVar12 - uVar9;
          uVar2 = iVar14 + (iVar14 >> 0x1f) ^ iVar14 >> 0x1f;
          uVar7 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
          uVar8 = iVar15 + iVar14 >> 0x1f;
          uVar8 = iVar15 + iVar14 + uVar8 ^ uVar8;
          if ((((int)uVar8 < (int)uVar2) || ((int)uVar7 < (int)uVar2)) &&
             (uVar12 = (uint)*(byte *)(in_stack_00000018 + iVar5), (int)uVar8 < (int)uVar7)) {
            uVar12 = uVar9;
          }
          uVar12 = *(byte *)(iStack00000028 + iVar5) - uVar12;
          uVar2 = uVar12 & 0xff;
          *(char *)(iVar11 + iVar5) = (char)uVar12;
          if (0x7f < uVar2) {
            uVar2 = 0x100 - uVar2;
          }
          uVar4 = uVar4 + uVar2;
        } while ((uVar4 <= uStack0000002c) && (iVar5 = iVar5 + 1, iVar5 + uVar13 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar13 = DAT_00178d18 & uVar4;
        uVar12 = uVar4 >> 10 & DAT_00178d10;
        if (unaff_r5 != 0) {
          iVar10 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar10) == '\x04') {
              uVar4 = (uint)*(ushort *)(iVar10 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar13 = uVar4 * uVar13 >> 8;
              uVar12 = uVar4 * uVar12 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < unaff_r5);
        }
        param_4 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
        uVar12 = param_4 * uVar12 >> 3;
        uVar4 = DAT_00178d14;
        if (uVar12 <= DAT_00178d10) goto LAB_00178cd8;
      }
      goto LAB_0017887c;
    }
    in_stack_0000001c = (undefined *)(param_4 + 1);
    iVar5 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar5 + 1;
    iVar11 = iVar10 + 1;
    in_stack_00000018 = 0;
    uVar12 = 1;
    if (uVar13 != 0) {
      do {
        *(char *)(iVar5 + uVar12) = *(char *)(param_4 + uVar12) - *(char *)(iVar10 + uVar12);
        bVar1 = uVar12 < uVar13;
        uVar12 = uVar12 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + uVar13;
      in_stack_0000001c = (undefined *)((int)in_stack_0000001c + uVar13);
      iVar11 = iVar11 + uVar13;
      in_stack_00000018 = uVar13;
    }
    if (in_stack_00000018 < param_3) {
      iVar5 = 0;
      do {
        bVar3 = *(byte *)(iVar10 + iVar5 + 1);
        bVar6 = *(byte *)(param_4 + iVar5 + 1);
        iVar14 = (uint)*(byte *)(iVar11 + iVar5) - (uint)bVar3;
        iVar15 = (uint)bVar6 - (uint)bVar3;
        uVar13 = iVar14 + (iVar14 >> 0x1f) ^ iVar14 >> 0x1f;
        uVar4 = iVar15 + iVar14 >> 0x1f;
        uVar12 = iVar15 + (iVar15 >> 0x1f) ^ iVar15 >> 0x1f;
        uVar4 = iVar15 + iVar14 + uVar4 ^ uVar4;
        if ((((int)uVar4 < (int)uVar13) || ((int)uVar12 < (int)uVar13)) &&
           (bVar6 = *(byte *)(iVar11 + iVar5), (int)uVar4 < (int)uVar12)) {
          bVar6 = bVar3;
        }
        *(byte *)(in_stack_00000020 + iVar5) = *(char *)((int)in_stack_0000001c + iVar5) - bVar6;
        iVar5 = iVar5 + 1;
      } while (iVar5 + in_stack_00000018 < param_3);
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


