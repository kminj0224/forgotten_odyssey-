/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017323c  Symbol: png_do_read_interlace */

void png_do_read_interlace(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *__src;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  void *__dest;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  void *local_68;
  byte *local_60;
  int local_50 [4];
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined auStack_34 [8];
  int local_2c;
  
  iVar9 = DAT_0017358c;
  iVar10 = DAT_00173588;
  iVar17 = DAT_00173584;
  iVar2 = DAT_00173578;
  iVar4 = DAT_00173574 + 0x173252;
  local_2c = **(int **)(iVar4 + DAT_00173578);
  iVar11 = *(int *)(param_1 + 0x134);
  iVar8 = *(int *)(param_1 + 0x1b0) + 1;
  piVar5 = (int *)(iVar4 + DAT_0017357c);
  local_50[0] = *piVar5;
  local_50[1] = piVar5[1];
  local_50[2] = piVar5[2];
  local_50[3] = piVar5[3];
  iStack_40 = piVar5[4];
  iStack_3c = piVar5[5];
  local_38 = piVar5[6];
  if ((iVar8 != 0) && (param_1 != -0x1c4)) {
    iVar13 = local_50[*(byte *)(param_1 + 0x1e8)];
    iVar6 = *(int *)(param_1 + 0x1c4);
    iVar14 = iVar13 * iVar6;
    bVar1 = *(byte *)(param_1 + DAT_00173580);
    if (bVar1 == 2) {
      if (iVar11 << 0xf < 0) {
        uVar3 = iVar6 + 3;
        uVar12 = iVar14 + 3;
        iVar10 = -2;
        uVar18 = 0;
        uVar15 = 6;
      }
      else {
        uVar3 = ~(iVar6 + 3U);
        iVar10 = 2;
        uVar15 = 0;
        uVar12 = ~(iVar14 + 3U);
        uVar18 = 6;
      }
      uVar16 = (uVar3 & 3) << 1;
      uVar3 = (uVar12 & 3) << 1;
      if (iVar6 != 0) {
        local_60 = (byte *)(iVar8 + (iVar6 - 1U >> 2));
        pbVar7 = (byte *)(iVar8 + (iVar14 - 1U >> 2));
        local_68 = (void *)0x0;
        do {
          bVar1 = *local_60;
          if (0 < iVar13) {
            iVar9 = 0;
            do {
              *pbVar7 = (byte)(((int)(uint)bVar1 >> (uVar16 & 0xff) & 3U) << (uVar3 & 0xff)) |
                        (byte)(iVar17 >> (6 - uVar3 & 0xff)) & *pbVar7;
              if (uVar3 == uVar18) {
                pbVar7 = pbVar7 + -1;
                uVar3 = uVar15;
              }
              else {
                uVar3 = uVar3 + iVar10;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != iVar13);
          }
          if (uVar16 == uVar18) {
            local_60 = local_60 + -1;
            uVar16 = uVar15;
          }
          else {
            uVar16 = uVar16 + iVar10;
          }
          local_68 = (void *)((int)local_68 + 1);
        } while (local_68 < *(uint *)(param_1 + 0x1c4));
      }
    }
    else if (bVar1 == 4) {
      if (iVar11 << 0xf < 0) {
        uVar3 = (iVar6 + 1U & 1) << 2;
        iVar17 = -4;
        uVar12 = (iVar14 + 1U & 1) << 2;
        uVar15 = 0;
        uVar18 = 4;
      }
      else {
        uVar3 = (uint)((iVar6 + 1U & 1) == 0) * 4;
        if ((iVar14 + 1U & 1) == 0) {
          uVar12 = 4;
          uVar18 = 0;
          iVar17 = 4;
          uVar15 = 4;
        }
        else {
          iVar17 = 4;
          uVar15 = 4;
          uVar18 = 0;
          uVar12 = 0;
        }
      }
      if (iVar6 != 0) {
        local_60 = (byte *)(iVar8 + (iVar6 - 1U >> 1));
        pbVar7 = (byte *)(iVar8 + (iVar14 - 1U >> 1));
        local_68 = (void *)0x0;
        do {
          bVar1 = *local_60;
          if (0 < iVar13) {
            iVar10 = 0;
            do {
              while (*pbVar7 = (byte)(((int)(uint)bVar1 >> (uVar3 & 0xff) & 0xfU) << (uVar12 & 0xff)
                                     ) | (byte)(iVar9 >> (4 - uVar12 & 0xff)) & *pbVar7,
                    uVar12 == uVar15) {
                iVar10 = iVar10 + 1;
                pbVar7 = pbVar7 + -1;
                uVar12 = uVar18;
                if (iVar10 == iVar13) goto LAB_00173550;
              }
              iVar10 = iVar10 + 1;
              uVar12 = uVar12 + iVar17;
            } while (iVar10 != iVar13);
          }
LAB_00173550:
          if (uVar3 == uVar15) {
            local_60 = local_60 + -1;
            uVar3 = uVar18;
          }
          else {
            uVar3 = uVar3 + iVar17;
          }
          local_68 = (void *)((int)local_68 + 1);
        } while (local_68 < *(uint *)(param_1 + 0x1c4));
      }
    }
    else if (bVar1 == 1) {
      if (iVar11 << 0xf < 0) {
        uVar3 = iVar6 + 7;
        uVar12 = iVar14 + 7;
        iVar17 = -1;
        uVar18 = 0;
        uVar15 = 7;
      }
      else {
        uVar3 = ~(iVar6 + 7U);
        iVar17 = 1;
        uVar15 = 0;
        uVar12 = ~(iVar14 + 7U);
        uVar18 = 7;
      }
      uVar3 = uVar3 & 7;
      uVar12 = uVar12 & 7;
      if (iVar6 != 0) {
        local_60 = (byte *)(iVar8 + (iVar6 - 1U >> 3));
        pbVar7 = (byte *)(iVar8 + (iVar14 - 1U >> 3));
        local_68 = (void *)0x0;
        do {
          bVar1 = *local_60;
          if (0 < iVar13) {
            iVar9 = 0;
            do {
              while (*pbVar7 = (byte)(((int)(uint)bVar1 >> (uVar3 & 0xff) & 1U) << (uVar12 & 0xff))
                               | (byte)(iVar10 >> (7 - uVar12 & 0xff)) & *pbVar7, uVar12 == uVar18)
              {
                iVar9 = iVar9 + 1;
                pbVar7 = pbVar7 + -1;
                uVar12 = uVar15;
                if (iVar9 == iVar13) goto LAB_001734a8;
              }
              iVar9 = iVar9 + 1;
              uVar12 = uVar12 + iVar17;
            } while (iVar9 != iVar13);
          }
LAB_001734a8:
          if (uVar3 == uVar18) {
            local_60 = local_60 + -1;
            uVar3 = uVar15;
          }
          else {
            uVar3 = uVar3 + iVar17;
          }
          local_68 = (void *)((int)local_68 + 1);
        } while (local_68 < *(uint *)(param_1 + 0x1c4));
      }
    }
    else if (iVar6 != 0) {
      uVar3 = (uint)(bVar1 >> 3);
      iVar17 = -uVar3;
      __src = (void *)(uVar3 * (iVar6 + -1) + iVar8);
      local_68 = (void *)(iVar8 + uVar3 * (iVar14 + -1));
      uVar12 = 0;
      while( true ) {
        memcpy(auStack_34,__src,uVar3);
        if (0 < iVar13) {
          iVar10 = 0;
          __dest = local_68;
          do {
            iVar10 = iVar10 + 1;
            memcpy(__dest,auStack_34,uVar3);
            __dest = (void *)((int)__dest + iVar17);
          } while (iVar10 < iVar13);
          local_68 = (void *)((int)local_68 + iVar13 * iVar17);
        }
        uVar12 = uVar12 + 1;
        if (*(uint *)(param_1 + 0x1c4) <= uVar12) break;
        __src = (void *)((int)__src + iVar17);
      }
    }
    *(int *)(param_1 + 0x1c4) = iVar14;
    bVar1 = *(byte *)(param_1 + DAT_00173580);
    if (bVar1 < 8) {
      uVar3 = iVar14 * (uint)bVar1 + 7 >> 3;
    }
    else {
      uVar3 = iVar14 * (uint)(bVar1 >> 3);
    }
    *(uint *)(param_1 + 0x1c8) = uVar3;
  }
  if (local_2c == **(int **)(iVar4 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


