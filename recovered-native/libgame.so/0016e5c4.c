/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016e5c4  Symbol: png_do_rgb_to_gray */

undefined4 png_do_rgb_to_gray(int param_1,uint *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int local_34;
  
  bVar8 = *(byte *)(param_2 + 2);
  uVar9 = (uint)bVar8;
  uVar15 = *param_2;
  if (-1 < (int)(uVar9 << 0x1e)) {
    return 0;
  }
  uVar17 = (uint)*(ushort *)(param_1 + DAT_0016e90c);
  uVar5 = (uint)*(ushort *)(param_1 + 0x2f0);
  uVar6 = (uint)*(ushort *)(param_1 + DAT_0016e910);
  uVar7 = 0;
  if (uVar9 != 2) goto LAB_0016e5f8;
  uVar9 = (uint)*(byte *)((int)param_2 + 9);
  if (uVar9 == 8) {
    if ((*(int *)(param_1 + 0x22c) == 0) || (iVar16 = *(int *)(param_1 + 0x230), iVar16 == 0)) {
      if (uVar15 != 0) {
        uVar7 = 0;
        uVar9 = 0;
        pbVar11 = param_3;
        do {
          uVar13 = (uint)*pbVar11;
          if ((uVar13 == pbVar11[2]) && (uVar13 == pbVar11[1])) {
            param_3[uVar9] = *pbVar11;
          }
          else {
            param_3[uVar9] =
                 (byte)(uVar5 * pbVar11[1] + uVar13 * uVar17 + pbVar11[2] * uVar6 >> 0xf);
            uVar7 = 1;
          }
          uVar9 = uVar9 + 1;
          pbVar11 = pbVar11 + 3;
        } while (uVar9 < uVar15);
        uVar9 = (uint)*(byte *)(param_2 + 2);
LAB_0016e5f8:
        bVar8 = (byte)uVar9;
        if (uVar9 == 6) {
          uVar9 = (uint)*(byte *)((int)param_2 + 9);
          if (uVar9 != 8) {
            if ((*(int *)(param_1 + 0x23c) == 0) || (*(int *)(param_1 + 0x238) == 0)) {
              if (uVar15 != 0) {
                uVar9 = 0;
                pbVar11 = param_3;
                while( true ) {
                  uVar13 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
                  if ((uVar13 != CONCAT11(pbVar11[4],pbVar11[5])) ||
                     (uVar13 != CONCAT11(pbVar11[2],pbVar11[3]))) {
                    uVar7 = 1;
                  }
                  uVar9 = uVar9 + 1;
                  uVar13 = uVar5 * CONCAT11(pbVar11[2],pbVar11[3]) + uVar13 * uVar17 +
                           uVar6 * CONCAT11(pbVar11[4],pbVar11[5]) >> 0xf;
                  *param_3 = (byte)(uVar13 >> 8);
                  param_3[1] = (byte)uVar13;
                  param_3[2] = pbVar11[6];
                  param_3[3] = pbVar11[7];
                  if (uVar15 <= uVar9) break;
                  param_3 = param_3 + 4;
                  pbVar11 = pbVar11 + 8;
                }
                bVar8 = *(byte *)(param_2 + 2);
                uVar9 = (uint)*(byte *)((int)param_2 + 9);
              }
            }
            else if (uVar15 != 0) {
              uVar9 = 0;
              pbVar11 = param_3;
              while( true ) {
                sVar14 = CONCAT11(*pbVar11,pbVar11[1]);
                if ((sVar14 != CONCAT11(pbVar11[4],pbVar11[5])) ||
                   (sVar14 != CONCAT11(pbVar11[2],pbVar11[3]))) {
                  uVar10 = *(uint *)(param_1 + 0x21c);
                  iVar16 = *(int *)(param_1 + 0x23c);
                  uVar13 = uVar5 * *(ushort *)
                                    ((uint)pbVar11[2] * 2 +
                                    *(int *)(((int)(uint)pbVar11[3] >> (uVar10 & 0xff)) * 4 + iVar16
                                            )) +
                           uVar17 * *(ushort *)
                                     ((uint)*pbVar11 * 2 +
                                     *(int *)(((int)(uint)pbVar11[1] >> (uVar10 & 0xff)) * 4 +
                                             iVar16)) +
                           uVar6 * *(ushort *)
                                    ((uint)pbVar11[4] * 2 +
                                    *(int *)(((int)(uint)pbVar11[5] >> (uVar10 & 0xff)) * 4 + iVar16
                                            )) >> 0xf;
                  sVar14 = *(short *)(((uVar13 << 0x10) >> 0x18) * 2 +
                                     *(int *)(((int)(uVar13 & 0xff) >> (uVar10 & 0xff)) * 4 +
                                             *(int *)(param_1 + 0x238)));
                  uVar7 = 1;
                }
                *param_3 = (byte)((ushort)sVar14 >> 8);
                param_3[1] = (byte)sVar14;
                uVar9 = uVar9 + 1;
                param_3[2] = pbVar11[6];
                param_3[3] = pbVar11[7];
                if (uVar15 <= uVar9) break;
                param_3 = param_3 + 4;
                pbVar11 = pbVar11 + 8;
              }
              bVar8 = *(byte *)(param_2 + 2);
              uVar9 = (uint)*(byte *)((int)param_2 + 9);
            }
            goto LAB_0016e600;
          }
          local_34 = *(int *)(param_1 + 0x22c);
          if ((local_34 != 0) && (iVar16 = *(int *)(param_1 + 0x230), iVar16 != 0)) {
            if (uVar15 != 0) {
              uVar9 = 0;
              pbVar11 = param_3;
              while( true ) {
                uVar13 = (uint)*(byte *)(iVar16 + (uint)*pbVar11);
                if ((uVar13 != *(byte *)(iVar16 + (uint)pbVar11[2])) ||
                   (uVar13 != *(byte *)(iVar16 + (uint)pbVar11[1]))) {
                  uVar7 = 1;
                }
                uVar9 = uVar9 + 1;
                *param_3 = *(byte *)(local_34 +
                                    (uVar5 * *(byte *)(iVar16 + (uint)pbVar11[1]) + uVar13 * uVar17
                                     + *(byte *)(iVar16 + (uint)pbVar11[2]) * uVar6 >> 0xf));
                param_3[1] = pbVar11[3];
                if (uVar15 <= uVar9) break;
                local_34 = *(int *)(param_1 + 0x22c);
                iVar16 = *(int *)(param_1 + 0x230);
                param_3 = param_3 + 2;
                pbVar11 = pbVar11 + 4;
              }
              bVar8 = *(byte *)(param_2 + 2);
              uVar9 = (uint)*(byte *)((int)param_2 + 9);
            }
            goto LAB_0016e600;
          }
          if (uVar15 == 0) goto LAB_0016e600;
          uVar9 = 0;
          pbVar11 = param_3;
          while( true ) {
            uVar13 = (uint)*pbVar11;
            if ((uVar13 != pbVar11[2]) || (uVar13 != pbVar11[1])) {
              uVar7 = 1;
            }
            uVar9 = uVar9 + 1;
            *param_3 = (byte)(uVar5 * pbVar11[1] + uVar13 * uVar17 + uVar6 * pbVar11[2] >> 0xf);
            param_3[1] = pbVar11[3];
            if (uVar15 <= uVar9) break;
            param_3 = param_3 + 2;
            pbVar11 = pbVar11 + 4;
          }
          bVar8 = *(byte *)(param_2 + 2);
        }
        uVar9 = (uint)*(byte *)((int)param_2 + 9);
        goto LAB_0016e600;
      }
    }
    else if (uVar15 != 0) {
      uVar9 = 0;
      uVar7 = 0;
      pbVar11 = param_3;
      while( true ) {
        uVar13 = (uint)*(byte *)(iVar16 + (uint)*pbVar11);
        uVar10 = (uint)*(byte *)(iVar16 + (uint)pbVar11[2]);
        if ((uVar13 == uVar10) && (uVar13 == *(byte *)(iVar16 + (uint)pbVar11[1]))) {
          param_3[uVar9] = pbVar11[2];
        }
        else {
          uVar7 = 1;
          param_3[uVar9] =
               *(byte *)(*(int *)(param_1 + 0x22c) +
                        (uVar5 * *(byte *)(iVar16 + (uint)pbVar11[1]) + uVar13 * uVar17 +
                         uVar6 * uVar10 >> 0xf));
        }
        uVar9 = uVar9 + 1;
        pbVar11 = pbVar11 + 3;
        if (uVar15 <= uVar9) break;
        iVar16 = *(int *)(param_1 + 0x230);
      }
      uVar9 = (uint)*(byte *)(param_2 + 2);
      goto LAB_0016e5f8;
    }
  }
  else if ((*(int *)(param_1 + 0x23c) == 0) || (*(int *)(param_1 + 0x238) == 0)) {
    if (uVar15 != 0) {
      uVar7 = 0;
      uVar9 = 0;
      pbVar11 = param_3;
      pbVar12 = param_3;
      while( true ) {
        pbVar1 = pbVar11 + 3;
        uVar13 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
        pbVar2 = pbVar11 + 2;
        pbVar3 = pbVar11 + 4;
        pbVar4 = pbVar11 + 5;
        pbVar11 = pbVar11 + 6;
        if ((uVar13 != CONCAT11(*pbVar3,*pbVar4)) || (uVar13 != CONCAT11(*pbVar2,*pbVar1))) {
          uVar7 = 1;
        }
        uVar9 = uVar9 + 1;
        uVar13 = uVar5 * CONCAT11(*pbVar2,*pbVar1) + uVar17 * uVar13 +
                 uVar6 * CONCAT11(*pbVar3,*pbVar4) >> 0xf;
        *pbVar12 = (byte)(uVar13 >> 8);
        pbVar12[1] = (byte)uVar13;
        if (uVar15 <= uVar9) break;
        pbVar12 = pbVar12 + 2;
      }
      uVar9 = (uint)*(byte *)(param_2 + 2);
      goto LAB_0016e5f8;
    }
  }
  else if (uVar15 != 0) {
    uVar7 = 0;
    uVar9 = 0;
    pbVar11 = param_3;
    pbVar12 = param_3;
    while( true ) {
      sVar14 = CONCAT11(*pbVar11,pbVar11[1]);
      if ((sVar14 != CONCAT11(pbVar11[4],pbVar11[5])) || (sVar14 != CONCAT11(pbVar11[2],pbVar11[3]))
         ) {
        uVar13 = *(uint *)(param_1 + 0x21c);
        iVar16 = *(int *)(param_1 + 0x23c);
        uVar10 = uVar5 * *(ushort *)
                          ((uint)pbVar11[2] * 2 +
                          *(int *)(((int)(uint)pbVar11[3] >> (uVar13 & 0xff)) * 4 + iVar16)) +
                 *(ushort *)
                  ((uint)*pbVar11 * 2 +
                  *(int *)(((int)(uint)pbVar11[1] >> (uVar13 & 0xff)) * 4 + iVar16)) * uVar17 +
                 uVar6 * *(ushort *)
                          ((uint)pbVar11[4] * 2 +
                          *(int *)(((int)(uint)pbVar11[5] >> (uVar13 & 0xff)) * 4 + iVar16)) >> 0xf;
        sVar14 = *(short *)(((uVar10 << 0x10) >> 0x18) * 2 +
                           *(int *)(((int)(uVar10 & 0xff) >> (uVar13 & 0xff)) * 4 +
                                   *(int *)(param_1 + 0x238)));
        uVar7 = 1;
      }
      uVar9 = uVar9 + 1;
      *pbVar12 = (byte)((ushort)sVar14 >> 8);
      pbVar12[1] = (byte)sVar14;
      if (uVar15 <= uVar9) break;
      pbVar12 = pbVar12 + 2;
      pbVar11 = pbVar11 + 6;
    }
    uVar9 = (uint)*(byte *)(param_2 + 2);
    goto LAB_0016e5f8;
  }
  uVar7 = 0;
LAB_0016e600:
  uVar5 = *(byte *)((int)param_2 + 10) - 2;
  uVar9 = (uVar5 & 0xff) * uVar9;
  *(char *)((int)param_2 + 10) = (char)uVar5;
  *(byte *)(param_2 + 2) = bVar8 & 0xfd;
  *(char *)((int)param_2 + 0xb) = (char)uVar9;
  if ((uVar9 & 0xff) < 8) {
    param_2[1] = (uVar9 & 0xff) * uVar15 + 7 >> 3;
  }
  else {
    param_2[1] = (uVar9 * 0x1000000 >> 0x1b) * uVar15;
  }
  return uVar7;
}


