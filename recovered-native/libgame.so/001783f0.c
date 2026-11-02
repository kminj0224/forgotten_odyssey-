/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001783f0  Symbol: FUN_001783f0 */

void FUN_001783f0(int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int unaff_r4;
  uint uVar8;
  uint uVar9;
  int unaff_r5;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  uint param_10;
  uint in_stack_00000018;
  undefined *in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000028;
  uint uStack0000002c;
  
  uVar15 = CONCAT44(param_2,param_1);
  iVar11 = *(int *)(unaff_r4 + 0x1bc);
  iVar13 = param_4 + 1;
  param_10 = param_2 + 1;
  if (param_1 == 0) {
    uVar15 = FUN_00178cf6();
  }
  iVar3 = (int)((ulonglong)uVar15 >> 0x20);
  uVar2 = (uint)uVar15;
  uVar14 = 0;
  uVar6 = 1;
  do {
    bVar4 = *(char *)(param_4 + uVar6) - (*(byte *)(iVar3 + uVar6) >> 1);
    uVar5 = (uint)bVar4;
    *(byte *)(iVar11 + uVar6) = bVar4;
    if (0x7f < uVar5) {
      uVar5 = 0x100 - uVar5;
    }
    uVar14 = uVar14 + uVar5;
    bVar1 = uVar6 < uVar2;
    uVar6 = uVar6 + 1;
  } while (bVar1);
  param_10 = param_10 + uVar2;
  if (uVar2 < param_3) {
    iVar12 = 0;
    do {
      uVar6 = (uint)*(byte *)(iVar13 + uVar2 + iVar12) -
              ((int)((uint)*(byte *)(param_4 + iVar12 + 1) + (uint)*(byte *)(param_10 + iVar12)) >>
              1);
      uVar5 = uVar6 & 0xff;
      *(char *)(iVar11 + 1 + uVar2 + iVar12) = (char)uVar6;
      if (0x7f < uVar5) {
        uVar5 = 0x100 - uVar5;
      }
      uVar14 = uVar14 + uVar5;
    } while ((uVar14 <= in_stack_00000028) && (iVar12 = iVar12 + 1, iVar12 + uVar2 < param_3));
  }
  if (*(char *)(unaff_r4 + 700) == '\x02') {
    uVar5 = DAT_00178bcc & uVar14;
    uVar6 = uVar14 >> 10 & DAT_00178bd0;
    if (unaff_r5 != 0) {
      iVar11 = 0;
      do {
        if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\0') {
          uVar14 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c4));
          uVar5 = uVar14 * uVar5 >> 8;
          uVar6 = uVar14 * uVar6 >> 8;
        }
        iVar11 = iVar11 + 1;
        param_10 = param_3;
      } while (iVar11 < unaff_r5);
    }
    if (DAT_00178bd0 < *(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 6) * uVar6 >> 3) {
      FUN_001784e4(uVar2,iVar3,param_3);
      return;
    }
    FUN_001784e4(uVar2,iVar3,param_3);
    FUN_001783c0();
    FUN_001783f0();
    uVar5 = uVar5 << 10;
    uVar2 = FUN_00178328();
LAB_00178cd8:
    uVar6 = uVar5 * 0x400 + (uVar2 * param_4 >> 3);
LAB_0017887c:
    if (in_stack_00000020 <= uVar6) goto LAB_00178506;
  }
  else {
    if (uVar14 < in_stack_00000020) {
      in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1bc);
      in_stack_00000020 = uVar14;
    }
    if (in_stack_00000018 != 0x80) {
      if (-1 < (int)(in_stack_00000018 * 0x1000000)) goto LAB_00178506;
      uStack0000002c = in_stack_00000020;
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar14 = in_stack_00000020 & DAT_00178bcc;
        uVar6 = in_stack_00000020 >> 10 & DAT_00178bd0;
        if (unaff_r5 != 0) {
          iVar11 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x04') {
              uVar5 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c8));
              uVar14 = uVar5 * uVar14 >> 8;
              uVar6 = uVar5 * uVar6 >> 8;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < unaff_r5);
        }
        uVar5 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2d0) + 8);
        uVar6 = uVar5 * uVar6 >> 3;
        if (DAT_00178d10 < uVar6) {
          uStack0000002c = DAT_00178d14;
        }
        else {
          uStack0000002c = (uVar5 * uVar14 >> 3) + uVar6 * 0x400;
        }
      }
      in_stack_00000028 = param_4 + 1;
      iVar11 = *(int *)(unaff_r4 + 0x1c0);
      in_stack_00000018 = iVar3 + 1;
      param_10 = iVar11 + 1;
      if (uVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        uVar14 = 1;
        do {
          bVar4 = *(char *)(param_4 + uVar14) - *(char *)(iVar3 + uVar14);
          uVar5 = (uint)bVar4;
          *(byte *)(iVar11 + uVar14) = bVar4;
          if (0x7f < uVar5) {
            uVar5 = 0x100 - uVar5;
          }
          uVar6 = uVar6 + uVar5;
          bVar1 = uVar14 < uVar2;
          uVar14 = uVar14 + 1;
        } while (bVar1);
        param_10 = param_10 + uVar2;
        in_stack_00000028 = in_stack_00000028 + uVar2;
        in_stack_00000018 = in_stack_00000018 + uVar2;
      }
      if (uVar2 < param_3) {
        iVar11 = 0;
        do {
          uVar10 = (uint)*(byte *)(iVar3 + iVar11 + 1);
          uVar14 = (uint)*(byte *)(param_4 + iVar11 + 1);
          iVar12 = *(byte *)(in_stack_00000018 + iVar11) - uVar10;
          iVar13 = uVar14 - uVar10;
          uVar5 = iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f;
          uVar8 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
          uVar9 = iVar13 + iVar12 >> 0x1f;
          uVar9 = iVar13 + iVar12 + uVar9 ^ uVar9;
          if ((((int)uVar9 < (int)uVar5) || ((int)uVar8 < (int)uVar5)) &&
             (uVar14 = (uint)*(byte *)(in_stack_00000018 + iVar11), (int)uVar9 < (int)uVar8)) {
            uVar14 = uVar10;
          }
          uVar14 = *(byte *)(in_stack_00000028 + iVar11) - uVar14;
          uVar5 = uVar14 & 0xff;
          *(char *)(param_10 + iVar11) = (char)uVar14;
          if (0x7f < uVar5) {
            uVar5 = 0x100 - uVar5;
          }
          uVar6 = uVar6 + uVar5;
        } while ((uVar6 <= uStack0000002c) && (iVar11 = iVar11 + 1, iVar11 + uVar2 < param_3));
      }
      if (*(char *)(unaff_r4 + 700) == '\x02') {
        uVar2 = DAT_00178d18 & uVar6;
        uVar6 = uVar6 >> 10 & DAT_00178d10;
        if (unaff_r5 != 0) {
          iVar11 = 0;
          do {
            if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) == '\x04') {
              uVar14 = (uint)*(ushort *)(iVar11 * 2 + *(int *)(unaff_r4 + 0x2c4));
              uVar2 = uVar14 * uVar2 >> 8;
              uVar6 = uVar14 * uVar6 >> 8;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < unaff_r5);
        }
        param_4 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
        uVar5 = param_4 * uVar6 >> 3;
        uVar6 = DAT_00178d14;
        if (uVar5 <= DAT_00178d10) goto LAB_00178cd8;
      }
      goto LAB_0017887c;
    }
    in_stack_0000001c = (undefined *)(param_4 + 1);
    iVar11 = *(int *)(unaff_r4 + 0x1c0);
    in_stack_00000020 = iVar11 + 1;
    param_10 = iVar3 + 1;
    in_stack_00000018 = 0;
    uVar6 = 1;
    if (uVar2 != 0) {
      do {
        *(char *)(iVar11 + uVar6) = *(char *)(param_4 + uVar6) - *(char *)(iVar3 + uVar6);
        bVar1 = uVar6 < uVar2;
        uVar6 = uVar6 + 1;
      } while (bVar1);
      in_stack_00000020 = in_stack_00000020 + uVar2;
      in_stack_0000001c = (undefined *)((int)in_stack_0000001c + uVar2);
      param_10 = param_10 + uVar2;
      in_stack_00000018 = uVar2;
    }
    if (in_stack_00000018 < param_3) {
      iVar11 = 0;
      do {
        bVar4 = *(byte *)(iVar3 + iVar11 + 1);
        bVar7 = *(byte *)(param_4 + iVar11 + 1);
        iVar12 = (uint)*(byte *)(param_10 + iVar11) - (uint)bVar4;
        iVar13 = (uint)bVar7 - (uint)bVar4;
        uVar6 = iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f;
        uVar14 = iVar13 + iVar12 >> 0x1f;
        uVar2 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
        uVar14 = iVar13 + iVar12 + uVar14 ^ uVar14;
        if ((((int)uVar14 < (int)uVar6) || ((int)uVar2 < (int)uVar6)) &&
           (bVar7 = *(byte *)(param_10 + iVar11), (int)uVar14 < (int)uVar2)) {
          bVar7 = bVar4;
        }
        *(byte *)(in_stack_00000020 + iVar11) = *(char *)((int)in_stack_0000001c + iVar11) - bVar7;
        iVar11 = iVar11 + 1;
      } while (iVar11 + in_stack_00000018 < param_3);
    }
  }
  in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(unaff_r4,in_stack_0000001c);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar13 = 1;
    iVar11 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar13) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar13 + -1);
        iVar13 = iVar13 + 1;
        iVar11 = unaff_r5;
      } while (iVar13 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar11) = *in_stack_0000001c;
  }
  return;
}


