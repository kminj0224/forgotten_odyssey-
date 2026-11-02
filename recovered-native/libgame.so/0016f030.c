/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016f030  Symbol: png_do_expand */

void png_do_expand(uint *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined *puVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  byte *local_48;
  byte *local_44;
  
  uVar15 = *param_1;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar25 = 0;
    if (param_3 != 0) {
      uVar25 = (uint)*(ushort *)(param_3 + 8);
    }
    bVar2 = *(byte *)((int)param_1 + 9);
    if (bVar2 < 8) {
      if (bVar2 == 2) {
        uVar25 = (uVar25 & 3) * 0x55;
        if (uVar15 != 0) {
          pbVar11 = (byte *)((uVar15 - 1) + param_2);
          pbVar23 = (byte *)((uVar15 - 1 >> 2) + param_2);
          uVar17 = (~(uVar15 + 3) & 3) << 1;
          uVar24 = 0;
          while( true ) {
            uVar18 = (int)(uint)*pbVar23 >> (uVar17 & 0xff) & 3;
            *pbVar11 = (byte)(uVar18 << 6) |
                       (byte)(uVar18 << 2) | (byte)(uVar18 << 4) | (byte)uVar18;
            if (uVar17 == 6) {
              pbVar23 = pbVar23 + -1;
              uVar17 = 0;
            }
            else {
              uVar17 = uVar17 + 2;
            }
            uVar24 = uVar24 + 1;
            if (uVar15 <= uVar24) break;
            pbVar11 = pbVar11 + -1;
          }
        }
      }
      else if (bVar2 == 4) {
        uVar25 = (uVar25 & 0xf) * 0x11;
        iVar20 = (uint)((uVar15 + 1 & 1) == 0) * 4;
        if (uVar15 != 0) {
          pbVar23 = (byte *)((uVar15 - 1 >> 1) + param_2);
          pbVar11 = (byte *)((uVar15 - 1) + param_2);
          uVar17 = 0;
          while( true ) {
            uVar24 = (int)(uint)*pbVar23 >> iVar20 & 0xf;
            *pbVar11 = (byte)uVar24 | (byte)(uVar24 << 4);
            if (iVar20 == 4) {
              pbVar23 = pbVar23 + -1;
              iVar20 = 0;
            }
            else {
              iVar20 = 4;
            }
            uVar17 = uVar17 + 1;
            if (uVar15 <= uVar17) break;
            pbVar11 = pbVar11 + -1;
          }
        }
      }
      else if ((bVar2 == 1) && (uVar25 = (uVar25 & 1) * 0xff0000 >> 0x10, uVar15 != 0)) {
        pbVar23 = (byte *)((uVar15 - 1 >> 3) + param_2);
        puVar10 = (undefined *)((uVar15 - 1) + param_2);
        uVar17 = ~(uVar15 + 7) & 7;
        uVar24 = 0;
        do {
          if (((int)(uint)*pbVar23 >> (uVar17 & 0xff) & 1U) == 0) {
            *puVar10 = 0;
            if (uVar17 != 7) goto LAB_0016f36a;
LAB_0016f384:
            pbVar23 = pbVar23 + -1;
            uVar17 = 0;
          }
          else {
            *puVar10 = 0xff;
            if (uVar17 == 7) goto LAB_0016f384;
LAB_0016f36a:
            uVar17 = uVar17 + 1;
          }
          uVar24 = uVar24 + 1;
          if (uVar15 <= uVar24) break;
          puVar10 = puVar10 + -1;
        } while( true );
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar15;
    }
    if (param_3 == 0) {
      return;
    }
    uVar17 = (uint)*(byte *)((int)param_1 + 9);
    if (uVar17 == 8) {
      if (uVar15 != 0) {
        iVar19 = param_2 + (uVar15 - 1);
        iVar20 = 0;
        puVar10 = (undefined *)(param_2 + uVar15 * 2 + -2);
        do {
          while ((uint)*(byte *)(iVar19 + iVar20) != (uVar25 & 0xff)) {
            puVar10[1] = 0xff;
            puVar1 = (undefined *)(iVar19 + iVar20);
            iVar20 = iVar20 + -1;
            *puVar10 = *puVar1;
            puVar10 = puVar10 + -2;
            if (uVar15 <= (uint)-iVar20) goto LAB_0016f256;
          }
          puVar10[1] = 0;
          puVar1 = (undefined *)(iVar19 + iVar20);
          iVar20 = iVar20 + -1;
          *puVar10 = *puVar1;
          puVar10 = puVar10 + -2;
        } while ((uint)-iVar20 < uVar15);
LAB_0016f256:
        uVar17 = (uint)*(byte *)((int)param_1 + 9);
      }
    }
    else if (uVar17 == 0x10) {
      if (uVar15 != 0) {
        uVar17 = 0;
        pbVar11 = (byte *)(param_2 + param_1[1] * 2 + -3);
        pbVar23 = (byte *)(param_2 + param_1[1]);
        do {
          pbVar13 = pbVar23 + -2;
          if (((uint)*pbVar13 == uVar25 >> 8) && ((uint)pbVar23[-1] == (uVar25 & 0xff))) {
            pbVar11[2] = 0;
            pbVar11[1] = 0;
          }
          else {
            pbVar11[2] = 0xff;
            pbVar11[1] = 0xff;
          }
          uVar17 = uVar17 + 1;
          *pbVar11 = pbVar23[-1];
          pbVar11[-1] = *pbVar13;
          pbVar11 = pbVar11 + -4;
          pbVar23 = pbVar13;
        } while (uVar17 < uVar15);
        uVar17 = (uint)*(byte *)((int)param_1 + 9);
      }
    }
    *(undefined *)(param_1 + 2) = 4;
    uVar17 = uVar17 << 0x19;
    *(undefined *)((int)param_1 + 10) = 2;
    *(char *)((int)param_1 + 0xb) = (char)(uVar17 >> 0x18);
  }
  else {
    if (param_3 == 0) {
      return;
    }
    if (*(char *)(param_1 + 2) != '\x02') {
      return;
    }
    uVar17 = (uint)*(byte *)((int)param_1 + 9);
    if (uVar17 == 8) {
      cVar3 = *(char *)(param_3 + 4);
      cVar4 = *(char *)(param_3 + 2);
      cVar5 = *(char *)(param_3 + 6);
      if (uVar15 != 0) {
        uVar25 = 0;
        pcVar14 = (char *)(param_2 + uVar15 * 4 + -2);
        pcVar12 = (char *)(param_2 + param_1[1] + -2);
        do {
          pcVar21 = pcVar12 + -1;
          if (((*pcVar21 == cVar4) && (*pcVar12 == cVar3)) && (pcVar12[1] == cVar5)) {
            pcVar14[1] = '\0';
          }
          else {
            pcVar14[1] = -1;
          }
          uVar25 = uVar25 + 1;
          *pcVar14 = pcVar12[1];
          cVar6 = *pcVar12;
          pcVar12 = pcVar12 + -3;
          pcVar14[-1] = cVar6;
          pcVar22 = pcVar14 + -2;
          pcVar14 = pcVar14 + -4;
          *pcVar22 = *pcVar21;
        } while (uVar25 < uVar15);
        uVar17 = (uint)*(byte *)((int)param_1 + 9);
      }
    }
    else if (uVar17 == 0x10) {
      uVar7 = *(ushort *)(param_3 + 2);
      uVar8 = *(ushort *)(param_3 + 4);
      uVar9 = *(ushort *)(param_3 + 6);
      if (uVar15 != 0) {
        pbVar11 = (byte *)(param_2 + uVar15 * 8 + -3);
        pbVar23 = (byte *)(param_2 + param_1[1] + -2);
        uVar25 = 0;
        do {
          pbVar13 = pbVar23 + -4;
          if ((((((ushort)*pbVar13 == uVar7 >> 8) && ((ushort)pbVar23[-3] == (uVar7 & 0xff))) &&
               ((ushort)pbVar23[-2] == uVar8 >> 8)) &&
              (((ushort)pbVar23[-1] == (uVar8 & 0xff) && ((ushort)*pbVar23 == uVar9 >> 8)))) &&
             ((ushort)pbVar23[1] == (uVar9 & 0xff))) {
            pbVar11[2] = 0;
            pbVar11[1] = 0;
          }
          else {
            pbVar11[2] = 0xff;
            pbVar11[1] = 0xff;
          }
          local_44 = pbVar23 + -2;
          local_48 = pbVar23 + -1;
          pbVar16 = pbVar23 + -3;
          uVar25 = uVar25 + 1;
          *pbVar11 = pbVar23[1];
          bVar2 = *pbVar23;
          pbVar23 = pbVar23 + -6;
          pbVar11[-1] = bVar2;
          pbVar11[-2] = *local_48;
          pbVar11[-3] = *local_44;
          pbVar11[-4] = *pbVar16;
          pbVar16 = pbVar11 + -5;
          pbVar11 = pbVar11 + -8;
          *pbVar16 = *pbVar13;
        } while (uVar25 < uVar15);
        uVar17 = (uint)*(byte *)((int)param_1 + 9);
      }
    }
    *(undefined *)(param_1 + 2) = 6;
    uVar17 = uVar17 << 0x1a;
    *(undefined *)((int)param_1 + 10) = 4;
    *(char *)((int)param_1 + 0xb) = (char)(uVar17 >> 0x18);
  }
  if (uVar17 >> 0x18 < 8) {
    param_1[1] = (uVar17 >> 0x18) * uVar15 + 7 >> 3;
  }
  else {
    param_1[1] = (uVar17 >> 0x1b) * uVar15;
  }
  return;
}


