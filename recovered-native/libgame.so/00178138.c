/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00178138  Symbol: png_write_find_filter */

/* WARNING: Removing unreachable block (ram,0x00178754) */
/* WARNING: Removing unreachable block (ram,0x00178612) */

void png_write_find_filter(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  char cVar21;
  undefined8 uVar22;
  int local_4c;
  uint local_48;
  undefined *puStack_44;
  uint local_40;
  undefined *puStack_38;
  uint uStack_34;
  
  uVar5 = DAT_00178bd4;
  uVar8 = (uint)*(byte *)(param_1 + DAT_00178488);
  uVar6 = *(uint *)(param_2 + 4);
  uVar13 = (uint)*(byte *)(param_1 + DAT_0017848c);
  uVar3 = *(undefined4 *)(param_1 + 0x1ac);
  uVar2 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
  uVar22 = CONCAT44(uVar3,uVar2);
  puVar9 = *(undefined **)(param_1 + 0x1b0);
  if (((int)(uVar8 << 0x1c) < 0) && (uVar8 != 8)) {
    local_40 = 0;
    if (uVar6 != 0) {
      local_40 = 0;
      uVar17 = 1;
      while( true ) {
        uVar14 = (uint)(byte)puVar9[uVar17];
        if (0x7f < uVar14) {
          uVar14 = 0x100 - uVar14;
        }
        local_40 = local_40 + uVar14;
        if (uVar6 <= uVar17) break;
        uVar17 = uVar17 + 1;
      }
    }
    if (*(char *)(param_1 + 700) == '\x02') {
      uVar17 = local_40 & DAT_00178490;
      uVar14 = local_40 >> 10 & DAT_00178494;
      if (uVar13 != 0) {
        iVar15 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar15) == '\0') {
            uVar4 = (uint)*(ushort *)(iVar15 * 2 + *(int *)(param_1 + 0x2c4));
            uVar17 = uVar4 * uVar17 >> 8;
            uVar14 = uVar4 * uVar14 >> 8;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)uVar13);
      }
      uVar14 = uVar14 * **(ushort **)(param_1 + 0x2cc) >> 3;
      if (DAT_00178494 < uVar14) goto LAB_0017824a;
      local_40 = uVar14 * 0x400 + (**(ushort **)(param_1 + 0x2cc) * uVar17 >> 3);
    }
  }
  else {
LAB_0017824a:
    local_40 = DAT_00178498;
  }
  puVar10 = puVar9;
  if (uVar8 == 0x10) {
    puVar18 = puVar9 + 1;
    iVar19 = *(int *)(param_1 + 0x1b4);
    iVar15 = iVar19 + 1;
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = 1;
      do {
        *(undefined *)(iVar19 + uVar5) = puVar9[uVar5];
        bVar1 = uVar5 < uVar2;
        uVar5 = uVar5 + 1;
      } while (bVar1);
      puVar18 = puVar18 + uVar2;
      iVar15 = iVar15 + uVar2;
      uVar5 = uVar2;
    }
    if (uVar5 < uVar6) {
      iVar19 = 0;
      do {
        *(undefined *)(iVar15 + iVar19) = puVar18[iVar19] - puVar9[iVar19 + 1];
        iVar19 = iVar19 + 1;
      } while (iVar19 + uVar5 < uVar6);
    }
    puStack_44 = *(undefined **)(param_1 + 0x1b4);
    goto LAB_001783d0;
  }
  if ((int)(uVar8 << 0x1b) < 0) {
    if (*(char *)(param_1 + 700) == '\x02') {
      uVar17 = local_40 & DAT_00178bcc;
      uVar8 = local_40 >> 10 & DAT_00178bd0;
      if (uVar13 != 0) {
        iVar15 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar15) == '\x01') {
            uVar14 = (uint)*(ushort *)(iVar15 * 2 + *(int *)(param_1 + 0x2c8));
            uVar17 = uVar14 * uVar17 >> 8;
            uVar8 = uVar14 * uVar8 >> 8;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)uVar13);
      }
      uVar8 = *(ushort *)(*(int *)(param_1 + 0x2d0) + 2) * uVar8 >> 3;
      if (DAT_00178bd0 < uVar8) {
        uVar22 = FUN_0017826c(uVar2,uVar3);
        puVar10 = puVar9;
        goto LAB_00178a72;
      }
      uVar8 = uVar8 * 0x400;
      uVar22 = FUN_0017826c(uVar2,uVar3);
LAB_00178c6e:
      uVar8 = uVar17 * uVar8;
      uVar22 = FUN_00178352((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
LAB_00178c86:
      uVar22 = FUN_001784e4((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
      puVar10 = puVar9;
      goto LAB_00178c9a;
    }
    iVar15 = *(int *)(param_1 + 0x1b4);
    if (uVar2 == 0) {
      uVar22 = FUN_00178d00();
    }
    uVar17 = (uint)uVar22;
    uVar5 = 0;
    uVar2 = 1;
    do {
      uVar14 = (uint)(byte)puVar10[uVar2];
      *(undefined *)(iVar15 + uVar2) = puVar10[uVar2];
      if (0x7f < uVar14) {
        uVar14 = 0x100 - uVar14;
      }
      uVar5 = uVar5 + uVar14;
      bVar1 = uVar2 < uVar17;
      uVar2 = uVar2 + 1;
    } while (bVar1);
    if (uVar17 < uVar6) {
      puStack_44 = (undefined *)0x100;
      iVar19 = 0;
      do {
        uVar2 = (uint)(byte)(puVar9[iVar19 + uVar17 + 1] - puVar10[iVar19 + 1]);
        *(undefined *)(iVar15 + 1 + uVar17 + iVar19) =
             puVar9[iVar19 + uVar17 + 1] - puVar10[iVar19 + 1];
        if (0x7f < uVar2) {
          uVar2 = 0x100 - uVar2;
        }
        uVar5 = uVar5 + uVar2;
      } while ((uVar5 <= local_40) && (iVar19 = iVar19 + 1, iVar19 + uVar17 < uVar6));
    }
    if (*(char *)(param_1 + 700) != '\x02') {
      puVar9 = puVar10;
      if (uVar5 < local_40) {
        puVar9 = *(undefined **)(param_1 + 0x1b4);
        local_40 = uVar5;
      }
      goto LAB_00178332;
    }
LAB_00178a72:
    uVar17 = DAT_00178bd4;
    uVar5 = uVar5 >> 10 & DAT_00178bd0;
    if (uVar13 != 0) {
      iVar15 = 0;
      do {
        if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar15) == '\x01') {
          uVar5 = *(ushort *)(iVar15 * 2 + *(int *)(param_1 + 0x2c8)) * uVar5 >> 8;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uVar13);
    }
    uVar8 = *(ushort *)(*(int *)(param_1 + 0x2d0) + 2) * uVar5 >> 3;
    if (uVar8 <= DAT_00178bd0) goto LAB_00178cc4;
    uVar22 = FUN_00178328((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    puVar9 = puVar10;
LAB_00178aec:
    uVar5 = DAT_00178bd0;
    uVar17 = uVar17 & DAT_00178bcc;
    uVar2 = local_40 >> 10 & DAT_00178bd0;
    if (uVar13 != 0) {
      iVar15 = 0;
      do {
        if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar15) == '\x02') {
          uVar8 = (uint)*(ushort *)(iVar15 * 2 + *(int *)(param_1 + 0x2c8));
          uVar17 = uVar8 * uVar17 >> 8;
          uVar2 = uVar8 * uVar2 >> 8;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uVar13);
    }
    uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 4);
    if (uVar2 * uVar8 >> 3 <= DAT_00178bd0) goto LAB_00178c6e;
    uVar22 = FUN_00178352((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    puVar10 = puVar9;
LAB_00178b7a:
    uVar5 = uVar5 & DAT_00178bcc;
    uVar2 = local_40 >> 10 & DAT_00178bd0;
    if (uVar13 != 0) {
      iVar15 = 0;
      do {
        if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar15) == '\x04') {
          uVar8 = (uint)*(ushort *)(iVar15 * 2 + *(int *)(param_1 + 0x2c8));
          uVar5 = uVar8 * uVar5 >> 8;
          uVar2 = uVar8 * uVar2 >> 8;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uVar13);
    }
    uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 8);
    uVar2 = uVar8 * uVar2 >> 3;
    if (DAT_00178d10 < uVar2) {
      uStack_34 = DAT_00178d14;
    }
    else {
      uStack_34 = (uVar8 * uVar5 >> 3) + uVar2 * 0x400;
    }
LAB_00178772:
    iVar15 = (int)((ulonglong)uVar22 >> 0x20);
    uVar5 = (uint)uVar22;
    puStack_38 = puVar10 + 1;
    iVar19 = *(int *)(param_1 + 0x1c0);
    local_48 = iVar15 + 1;
    local_4c = iVar19 + 1;
    if (uVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      uVar8 = 1;
      do {
        bVar7 = puVar10[uVar8] - *(char *)(iVar15 + uVar8);
        uVar17 = (uint)bVar7;
        *(byte *)(iVar19 + uVar8) = bVar7;
        if (0x7f < uVar17) {
          uVar17 = 0x100 - uVar17;
        }
        uVar2 = uVar2 + uVar17;
        bVar1 = uVar8 < uVar5;
        uVar8 = uVar8 + 1;
      } while (bVar1);
      local_4c = local_4c + uVar5;
      puStack_38 = puStack_38 + uVar5;
      local_48 = local_48 + uVar5;
    }
    if (uVar5 < uVar6) {
      iVar19 = 0;
      do {
        uVar4 = (uint)*(byte *)(iVar15 + iVar19 + 1);
        iVar20 = *(byte *)(local_48 + iVar19) - uVar4;
        iVar16 = (byte)puVar10[iVar19 + 1] - uVar4;
        uVar8 = iVar20 + (iVar20 >> 0x1f) ^ iVar20 >> 0x1f;
        uVar14 = iVar16 + (iVar16 >> 0x1f) ^ iVar16 >> 0x1f;
        uVar17 = iVar16 + iVar20 >> 0x1f;
        uVar17 = iVar16 + iVar20 + uVar17 ^ uVar17;
        if ((((int)uVar17 < (int)uVar8) ||
            (uVar12 = (uint)(byte)puVar10[iVar19 + 1], (int)uVar14 < (int)uVar8)) &&
           (uVar12 = (uint)*(byte *)(local_48 + iVar19), (int)uVar17 < (int)uVar14)) {
          uVar12 = uVar4;
        }
        uVar8 = (byte)puStack_38[iVar19] - uVar12 & 0xff;
        *(char *)(local_4c + iVar19) = (char)((byte)puStack_38[iVar19] - uVar12);
        if (0x7f < uVar8) {
          uVar8 = 0x100 - uVar8;
        }
        uVar2 = uVar2 + uVar8;
      } while ((uVar2 <= uStack_34) && (iVar19 = iVar19 + 1, iVar19 + uVar5 < uVar6));
    }
    if (*(char *)(param_1 + 700) == '\x02') {
      uVar5 = DAT_00178d18 & uVar2;
      uVar2 = uVar2 >> 10 & DAT_00178d10;
      if (uVar13 != 0) {
        iVar15 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar15) == '\x04') {
            uVar6 = (uint)*(ushort *)(iVar15 * 2 + *(int *)(param_1 + 0x2c4));
            uVar5 = uVar6 * uVar5 >> 8;
            uVar2 = uVar6 * uVar2 >> 8;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)uVar13);
      }
      puVar10 = (undefined *)(uint)*(ushort *)(*(int *)(param_1 + 0x2cc) + 8);
      uVar8 = (int)puVar10 * uVar2 >> 3;
      uVar2 = DAT_00178d14;
      if (DAT_00178d10 < uVar8) goto LAB_0017887c;
      goto LAB_00178cd8;
    }
LAB_0017887c:
    if (local_40 <= uVar2) goto LAB_00178506;
  }
  else {
LAB_00178332:
    puStack_44 = puVar9;
    iVar15 = (int)((ulonglong)uVar22 >> 0x20);
    if (uVar8 != 0x20) {
      if (-1 < (int)(uVar8 << 0x1a)) {
LAB_001783d0:
        iVar15 = (int)((ulonglong)uVar22 >> 0x20);
        uVar5 = (uint)uVar22;
        if (uVar8 == 0x40) {
          puVar9 = puVar10 + 1;
          iVar19 = *(int *)(param_1 + 0x1bc);
          iVar16 = iVar15 + 1;
          iVar20 = iVar19 + 1;
          uVar2 = 1;
          uVar8 = 0;
          if (uVar5 != 0) {
            do {
              *(byte *)(iVar19 + uVar2) = puVar10[uVar2] - (*(byte *)(iVar15 + uVar2) >> 1);
              bVar1 = uVar2 < uVar5;
              uVar2 = uVar2 + 1;
            } while (bVar1);
            iVar20 = iVar20 + uVar5;
            puVar9 = puVar9 + uVar5;
            iVar16 = iVar16 + uVar5;
            uVar8 = uVar5;
          }
          if (uVar8 < uVar6) {
            iVar15 = 0;
            do {
              *(char *)(iVar20 + iVar15) =
                   puVar9[iVar15] -
                   (char)((int)((uint)(byte)puVar10[iVar15 + 1] + (uint)*(byte *)(iVar16 + iVar15))
                         >> 1);
              iVar15 = iVar15 + 1;
            } while (iVar15 + uVar8 < uVar6);
          }
          puStack_44 = *(undefined **)(param_1 + 0x1bc);
          goto LAB_00178506;
        }
        goto LAB_001783d8;
      }
      cVar21 = *(char *)(param_1 + 700);
      puVar9 = puVar10;
      uVar17 = local_40;
      if (cVar21 == '\x02') goto LAB_00178aec;
      iVar19 = *(int *)(param_1 + 0x1b8);
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = 0;
        uVar2 = 1;
        do {
          bVar7 = puVar10[uVar2] - *(char *)(iVar15 + uVar2);
          uVar17 = (uint)bVar7;
          *(byte *)(iVar19 + uVar2) = bVar7;
          if (0x7f < uVar17) {
            uVar17 = 0x100 - uVar17;
          }
          uVar5 = uVar5 + uVar17;
        } while ((uVar5 <= local_40) && (bVar1 = uVar2 < uVar6, uVar2 = uVar2 + 1, bVar1));
        cVar21 = *(char *)(param_1 + 700);
      }
      if (cVar21 != '\x02') {
        if (uVar5 < local_40) {
          puStack_44 = *(undefined **)(param_1 + 0x1b8);
          local_40 = uVar5;
        }
        goto LAB_001783d0;
      }
      uVar8 = DAT_00178bcc & uVar5;
      uVar5 = uVar5 >> 10 & DAT_00178bd0;
      if (uVar13 != 0) {
        iVar19 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar19) == '\x02') {
            uVar2 = (uint)*(ushort *)(iVar19 * 2 + *(int *)(param_1 + 0x2c4));
            uVar8 = uVar2 * uVar8 >> 8;
            uVar5 = uVar2 * uVar5 >> 8;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < (int)uVar13);
      }
      if (DAT_00178bd0 < *(ushort *)(*(int *)(param_1 + 0x2cc) + 4) * uVar5 >> 3) {
        FUN_001783c0((int)uVar22,iVar15,uVar6);
        return;
      }
LAB_00178c9a:
      uVar22 = FUN_001783c0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
LAB_00178cae:
      uVar22 = FUN_001783f0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
LAB_00178cc4:
      uVar8 = uVar8 << 10;
      uVar5 = FUN_00178328((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
LAB_00178cd8:
      uVar2 = uVar8 * 0x400 + (uVar5 * (int)puVar10 >> 3);
      goto LAB_0017887c;
    }
    puStack_44 = *(undefined **)(param_1 + 0x1b8);
    if (uVar6 == 0) {
LAB_001783d8:
      iVar15 = (int)((ulonglong)uVar22 >> 0x20);
      if (-1 < (int)(uVar8 << 0x19)) goto LAB_001784f4;
      if (*(char *)(param_1 + 700) != '\x02') {
        iVar19 = *(int *)(param_1 + 0x1bc);
        puVar9 = puVar10;
        if ((int)uVar22 == 0) {
          uVar22 = FUN_00178cf6();
        }
        iVar16 = (int)((ulonglong)uVar22 >> 0x20);
        uVar2 = (uint)uVar22;
        uVar17 = 0;
        uVar5 = 1;
        do {
          bVar7 = puVar9[uVar5] - (*(byte *)(iVar16 + uVar5) >> 1);
          uVar14 = (uint)bVar7;
          *(byte *)(iVar19 + uVar5) = bVar7;
          if (0x7f < uVar14) {
            uVar14 = 0x100 - uVar14;
          }
          uVar17 = uVar17 + uVar14;
          bVar1 = uVar5 < uVar2;
          uVar5 = uVar5 + 1;
        } while (bVar1);
        if (uVar2 < uVar6) {
          iVar20 = 0;
          do {
            uVar5 = (uint)(byte)puVar10[iVar20 + uVar2 + 1] -
                    ((int)((uint)(byte)puVar9[iVar20 + 1] +
                          (uint)*(byte *)(iVar15 + 1 + uVar2 + iVar20)) >> 1);
            uVar14 = uVar5 & 0xff;
            *(char *)(iVar19 + 1 + uVar2 + iVar20) = (char)uVar5;
            if (0x7f < uVar14) {
              uVar14 = 0x100 - uVar14;
            }
            uVar17 = uVar17 + uVar14;
          } while ((uVar17 <= local_40) && (iVar20 = iVar20 + 1, iVar20 + uVar2 < uVar6));
        }
        if (*(char *)(param_1 + 700) != '\x02') {
          puVar10 = puVar9;
          if (uVar17 < local_40) {
            puStack_44 = *(undefined **)(param_1 + 0x1bc);
            local_40 = uVar17;
          }
          goto LAB_001784f4;
        }
        uVar8 = DAT_00178bcc & uVar17;
        uVar5 = uVar17 >> 10 & DAT_00178bd0;
        if (uVar13 != 0) {
          iVar15 = 0;
          do {
            if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar15) == '\0') {
              uVar17 = (uint)*(ushort *)(iVar15 * 2 + *(int *)(param_1 + 0x2c4));
              uVar8 = uVar17 * uVar8 >> 8;
              uVar5 = uVar17 * uVar5 >> 8;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
        if (DAT_00178bd0 < *(ushort *)(*(int *)(param_1 + 0x2cc) + 6) * uVar5 >> 3) {
          FUN_001784e4(uVar2,iVar16,uVar6);
          return;
        }
        goto LAB_00178c86;
      }
      uVar8 = local_40 & DAT_00178bcc;
      uVar5 = local_40 >> 10 & DAT_00178bd0;
      if (uVar13 != 0) {
        iVar19 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x2c0) + iVar19) == '\x03') {
            uVar2 = (uint)*(ushort *)(iVar19 * 2 + *(int *)(param_1 + 0x2c8));
            uVar8 = uVar2 * uVar8 >> 8;
            uVar5 = uVar2 * uVar5 >> 8;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < (int)uVar13);
      }
      if (DAT_00178bd0 < *(ushort *)(*(int *)(param_1 + 0x2d0) + 6) * uVar5 >> 3) {
        FUN_001783f0((int)uVar22,iVar15,uVar6);
        return;
      }
      goto LAB_00178cae;
    }
    uVar5 = 1;
    do {
      puStack_44[uVar5] = puVar10[uVar5] - *(char *)(iVar15 + uVar5);
      bVar1 = uVar5 < uVar6;
      uVar5 = uVar5 + 1;
    } while (bVar1);
    puStack_44 = *(undefined **)(param_1 + 0x1b8);
LAB_001784f4:
    iVar15 = (int)((ulonglong)uVar22 >> 0x20);
    uVar5 = (uint)uVar22;
    if (uVar8 != 0x80) {
      if (-1 < (int)(uVar8 * 0x1000000)) goto LAB_00178506;
      uStack_34 = local_40;
      uVar5 = local_40;
      if (*(char *)(param_1 + 700) == '\x02') goto LAB_00178b7a;
      goto LAB_00178772;
    }
    puStack_44 = puVar10 + 1;
    iVar19 = *(int *)(param_1 + 0x1c0);
    local_40 = iVar19 + 1;
    local_4c = iVar15 + 1;
    local_48 = 0;
    uVar2 = 1;
    if (uVar5 != 0) {
      do {
        *(char *)(iVar19 + uVar2) = puVar10[uVar2] - *(char *)(iVar15 + uVar2);
        bVar1 = uVar2 < uVar5;
        uVar2 = uVar2 + 1;
      } while (bVar1);
      local_40 = local_40 + uVar5;
      puStack_44 = puStack_44 + uVar5;
      local_4c = local_4c + uVar5;
      local_48 = uVar5;
    }
    if (local_48 < uVar6) {
      iVar19 = 0;
      do {
        bVar7 = *(byte *)(iVar15 + iVar19 + 1);
        iVar20 = (uint)*(byte *)(local_4c + iVar19) - (uint)bVar7;
        iVar16 = (uint)(byte)puVar10[iVar19 + 1] - (uint)bVar7;
        uVar5 = iVar20 + (iVar20 >> 0x1f) ^ iVar20 >> 0x1f;
        uVar8 = iVar16 + iVar20 >> 0x1f;
        uVar2 = iVar16 + (iVar16 >> 0x1f) ^ iVar16 >> 0x1f;
        uVar8 = iVar16 + iVar20 + uVar8 ^ uVar8;
        if ((((int)uVar8 < (int)uVar5) || (bVar11 = puVar10[iVar19 + 1], (int)uVar2 < (int)uVar5))
           && (bVar11 = *(byte *)(local_4c + iVar19), (int)uVar8 < (int)uVar2)) {
          bVar11 = bVar7;
        }
        *(byte *)(local_40 + iVar19) = puStack_44[iVar19] - bVar11;
        iVar19 = iVar19 + 1;
      } while (iVar19 + local_48 < uVar6);
    }
  }
  puStack_44 = *(undefined **)(param_1 + 0x1c0);
LAB_00178506:
  png_write_filtered_row(param_1,puStack_44);
  if (*(char *)(param_1 + DAT_00178800) != '\0') {
    iVar15 = 1;
    uVar5 = 1;
    if (1 < uVar13) {
      do {
        *(undefined *)(*(int *)(param_1 + 0x2c0) + iVar15) =
             *(undefined *)(*(int *)(param_1 + 0x2c0) + iVar15 + -1);
        iVar15 = iVar15 + 1;
        uVar5 = uVar13;
      } while (iVar15 < (int)uVar13);
    }
    *(undefined *)(*(int *)(param_1 + 0x2c0) + uVar5) = *puStack_44;
  }
  return;
}


