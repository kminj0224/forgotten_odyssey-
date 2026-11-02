/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00171c68  Symbol: png_set_quantize */

void png_set_quantize(int param_1,byte *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  void *__s;
  byte *pbVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int **ppiVar10;
  char cVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  int iVar23;
  int **ppiVar24;
  int iVar25;
  int *piVar26;
  byte *pbVar27;
  uint uVar28;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_44;
  uint local_40;
  int local_3c;
  byte *local_38;
  int local_34;
  
  if (param_1 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x40;
  if (param_6 == 0) {
    uVar6 = png_malloc(param_1,param_3);
    *(undefined4 *)(param_1 + 0x2b4) = uVar6;
    for (iVar21 = 0; iVar21 < (int)param_3; iVar21 = iVar21 + 1) {
      *(char *)(*(int *)(param_1 + 0x2b4) + iVar21) = (char)iVar21;
    }
  }
  local_40 = param_3;
  if ((int)param_4 < (int)param_3) {
    local_40 = param_4;
    if (param_5 == 0) {
      uVar6 = png_malloc(param_1,param_3);
      *(undefined4 *)(param_1 + 0x314) = uVar6;
      uVar6 = png_malloc(param_1,param_3);
      *(undefined4 *)(param_1 + 0x318) = uVar6;
      for (iVar21 = 0; iVar21 < (int)param_3; iVar21 = iVar21 + 1) {
        *(char *)(*(int *)(param_1 + 0x314) + iVar21) = (char)iVar21;
        *(char *)(*(int *)(param_1 + 0x318) + iVar21) = (char)iVar21;
      }
      piVar7 = (int *)png_calloc(param_1,DAT_001722bc);
      piVar13 = (int *)((int)piVar7 + DAT_001722bc);
      local_58 = 0x60;
      ppiVar24 = (int **)0x0;
      uVar18 = param_3;
      do {
        iVar21 = 0;
        cVar11 = '\0';
        pbVar5 = param_2;
        while (piVar26 = piVar7, iVar21 < (int)(uVar18 - 1)) {
          iVar21 = iVar21 + 1;
          pbVar27 = pbVar5 + 3;
          for (iVar8 = iVar21; iVar8 < (int)uVar18; iVar8 = iVar8 + 1) {
            uVar20 = (int)((uint)pbVar5[1] - (uint)pbVar27[1]) >> 0x1f;
            uVar19 = (int)((uint)*pbVar5 - (uint)*pbVar27) >> 0x1f;
            uVar28 = (int)((uint)pbVar5[2] - (uint)pbVar27[2]) >> 0x1f;
            iVar12 = (((uint)pbVar5[1] - (uint)pbVar27[1]) + uVar20 ^ uVar20) +
                     (((uint)*pbVar5 - (uint)*pbVar27) + uVar19 ^ uVar19) +
                     (((uint)pbVar5[2] - (uint)pbVar27[2]) + uVar28 ^ uVar28);
            if (iVar12 <= local_58) {
              ppiVar24 = (int **)png_malloc_warn(param_1,8);
              if (ppiVar24 == (int **)0x0) goto LAB_00172054;
              *ppiVar24 = (int *)piVar7[iVar12];
              *(char *)((int)ppiVar24 + 5) = (char)iVar8;
              *(char *)(ppiVar24 + 1) = cVar11;
              piVar7[iVar12] = (int)ppiVar24;
            }
            pbVar27 = pbVar27 + 3;
          }
          cVar11 = cVar11 + '\x01';
          pbVar5 = pbVar5 + 3;
          if (ppiVar24 == (int **)0x0) goto LAB_00172054;
        }
        if (ppiVar24 != (int **)0x0) {
          iVar21 = 0;
          do {
            for (piVar14 = (int *)piVar7[iVar21]; piVar14 != (int *)0x0; piVar14 = (int *)*piVar14)
            {
              iVar8 = *(int *)(param_1 + 0x314);
              local_44 = (uint)*(byte *)(piVar14 + 1);
              if (((int)(uint)*(byte *)(iVar8 + local_44) < (int)uVar18) &&
                 (uVar19 = (uint)*(byte *)((int)piVar14 + 5),
                 (int)(uint)*(byte *)(iVar8 + uVar19) < (int)uVar18)) {
                local_4c = uVar19;
                if ((uVar18 & 1) == 0) {
                  local_4c = local_44;
                  local_44 = uVar19;
                }
                uVar18 = uVar18 - 1;
                pbVar5 = param_2 + uVar18 * 3;
                pbVar27 = param_2 + (uint)*(byte *)(iVar8 + local_44) * 3;
                *pbVar27 = *pbVar5;
                pbVar27[1] = pbVar5[1];
                pbVar27[2] = pbVar5[2];
                iVar8 = 0;
                if (param_6 == 0) {
                  while (iVar8 < (int)param_3) {
                    pcVar15 = (char *)(*(int *)(param_1 + 0x2b4) + iVar8);
                    if (*pcVar15 == *(char *)(*(int *)(param_1 + 0x314) + local_44)) {
                      *pcVar15 = *(char *)(*(int *)(param_1 + 0x314) + local_4c);
                    }
                    pbVar5 = (byte *)(*(int *)(param_1 + 0x2b4) + iVar8);
                    if (*pbVar5 == uVar18) {
                      iVar8 = iVar8 + 1;
                      *pbVar5 = *(byte *)(*(int *)(param_1 + 0x314) + local_44);
                    }
                    else {
                      iVar8 = iVar8 + 1;
                    }
                  }
                }
                *(undefined *)
                 (*(int *)(param_1 + 0x314) + (uint)*(byte *)(*(int *)(param_1 + 0x318) + uVar18)) =
                     *(undefined *)(*(int *)(param_1 + 0x314) + local_44);
                *(undefined *)
                 (*(int *)(param_1 + 0x318) + (uint)*(byte *)(*(int *)(param_1 + 0x314) + local_44))
                     = *(undefined *)(*(int *)(param_1 + 0x318) + uVar18);
                *(char *)(*(int *)(param_1 + 0x314) + local_44) = (char)uVar18;
                *(char *)(*(int *)(param_1 + 0x318) + uVar18) = (char)local_44;
              }
              if ((int)uVar18 <= (int)param_4) goto LAB_00172054;
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 <= local_58);
        }
LAB_00172054:
        do {
          ppiVar10 = (int **)*piVar26;
          while (ppiVar10 != (int **)0x0) {
            ppiVar10 = (int **)*ppiVar10;
            png_free(param_1);
            ppiVar24 = ppiVar10;
          }
          *piVar26 = 0;
          piVar26 = piVar26 + 1;
        } while (piVar26 != piVar13);
        if ((int)uVar18 <= (int)param_4) goto LAB_00172196;
        local_58 = local_58 + 0x60;
      } while( true );
    }
    uVar6 = png_malloc(param_1,param_3);
    *(undefined4 *)(param_1 + 0x310) = uVar6;
    for (iVar21 = 0; uVar18 = param_3, iVar21 < (int)param_3; iVar21 = iVar21 + 1) {
      *(char *)(*(int *)(param_1 + 0x310) + iVar21) = (char)iVar21;
    }
    do {
      uVar18 = uVar18 - 1;
      if ((int)uVar18 < (int)param_4) break;
      iVar21 = 0;
      bVar4 = true;
      while (iVar21 < (int)uVar18) {
        pbVar5 = (byte *)(*(int *)(param_1 + 0x310) + iVar21);
        iVar21 = iVar21 + 1;
        bVar1 = *(byte *)(*(int *)(param_1 + 0x310) + iVar21);
        bVar3 = *pbVar5;
        if (*(ushort *)((uint)bVar3 * 2 + param_5) < *(ushort *)((uint)bVar1 * 2 + param_5)) {
          *pbVar5 = bVar1;
          *(byte *)(*(int *)(param_1 + 0x310) + iVar21) = bVar3;
          bVar4 = false;
        }
      }
    } while (!bVar4);
    if (param_6 == 0) {
      uVar18 = param_3;
      pbVar5 = param_2;
      for (iVar21 = 0; iVar21 < (int)param_4; iVar21 = iVar21 + 1) {
        if ((int)param_4 <= (int)(uint)*(byte *)(*(int *)(param_1 + 0x310) + iVar21)) {
          uVar18 = uVar18 - 1;
          pbVar27 = (byte *)(*(int *)(param_1 + 0x310) + uVar18);
          while (bVar3 = *pbVar27, pbVar27 = pbVar27 + -1, (int)param_4 <= (int)(uint)bVar3) {
            uVar18 = uVar18 - 1;
          }
          pbVar27 = param_2 + uVar18 * 3;
          bVar3 = pbVar27[2];
          bVar1 = pbVar27[1];
          bVar2 = *pbVar27;
          *pbVar27 = *pbVar5;
          pbVar27[1] = pbVar5[1];
          pbVar27[2] = pbVar5[2];
          pbVar5[2] = bVar3;
          *pbVar5 = bVar2;
          pbVar5[1] = bVar1;
          *(char *)(*(int *)(param_1 + 0x2b4) + uVar18) = (char)iVar21;
          *(char *)(*(int *)(param_1 + 0x2b4) + iVar21) = (char)uVar18;
        }
        pbVar5 = pbVar5 + 3;
      }
      for (iVar21 = 0; iVar21 < (int)param_3; iVar21 = iVar21 + 1) {
        pbVar5 = (byte *)(*(int *)(param_1 + 0x2b4) + iVar21);
        uVar18 = (uint)*pbVar5;
        if ((int)param_4 <= (int)uVar18) {
          pbVar22 = param_2 + uVar18 * 3;
          iVar8 = (uint)pbVar22[1] - (uint)param_2[1];
          uVar18 = iVar8 >> 0x1f;
          iVar12 = (uint)*pbVar22 - (uint)*param_2;
          uVar19 = iVar12 >> 0x1f;
          iVar25 = (uint)pbVar22[2] - (uint)param_2[2];
          uVar28 = iVar25 >> 0x1f;
          iVar8 = (iVar8 + uVar18 ^ uVar18) + (iVar12 + uVar19 ^ uVar19) +
                  (iVar25 + uVar28 ^ uVar28);
          iVar12 = 0;
          pbVar27 = param_2;
          for (iVar25 = 1; iVar25 < (int)param_4; iVar25 = iVar25 + 1) {
            iVar23 = (uint)pbVar22[1] - (uint)pbVar27[4];
            uVar18 = iVar23 >> 0x1f;
            iVar16 = (uint)*pbVar22 - (uint)pbVar27[3];
            uVar19 = iVar16 >> 0x1f;
            iVar17 = (uint)pbVar22[2] - (uint)pbVar27[5];
            uVar28 = iVar17 >> 0x1f;
            iVar23 = (iVar23 + uVar18 ^ uVar18) + (iVar16 + uVar19 ^ uVar19) +
                     (iVar17 + uVar28 ^ uVar28);
            if (iVar23 < iVar8) {
              iVar8 = iVar23;
              iVar12 = iVar25;
            }
            pbVar27 = pbVar27 + 3;
          }
          *pbVar5 = (byte)iVar12;
        }
      }
    }
    else {
      pbVar5 = param_2;
      for (iVar21 = 0; iVar21 < (int)param_4; iVar21 = iVar21 + 1) {
        if ((int)param_4 <= (int)(uint)*(byte *)(*(int *)(param_1 + 0x310) + iVar21)) {
          param_3 = param_3 - 1;
          pbVar27 = (byte *)(*(int *)(param_1 + 0x310) + param_3);
          while (bVar3 = *pbVar27, pbVar27 = pbVar27 + -1, (int)param_4 <= (int)(uint)bVar3) {
            param_3 = param_3 - 1;
          }
          pbVar27 = param_2 + param_3 * 3;
          *pbVar5 = *pbVar27;
          pbVar5[1] = pbVar27[1];
          pbVar5[2] = pbVar27[2];
        }
        pbVar5 = pbVar5 + 3;
      }
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x310));
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
LAB_00171d82:
  if (*(int *)(param_1 + 0x1d8) == 0) {
    *(byte **)(param_1 + 0x1d8) = param_2;
  }
  *(undefined2 *)(param_1 + 0x1dc) = (undefined2)local_40;
  if (param_6 != 0) {
    uVar6 = png_calloc(param_1,0x8000);
    *(undefined4 *)(param_1 + 0x2b0) = uVar6;
    __s = (void *)png_malloc(param_1,0x8000);
    memset(__s,0xff,0x8000);
    local_38 = param_2;
    for (local_5c = 0; local_5c < (int)local_40; local_5c = local_5c + 1) {
      uVar18 = (uint)(*local_38 >> 3);
      uVar19 = (uint)(local_38[1] >> 3);
      local_34 = -uVar18;
      uVar28 = (uint)(local_38[2] >> 3);
      local_3c = 0;
      do {
        local_54 = uVar18 - local_3c;
        if ((int)uVar18 < local_3c) {
          local_54 = local_34;
        }
        local_58 = 0;
        local_50 = -uVar19;
        do {
          iVar21 = uVar19 - local_58;
          if ((int)uVar19 < local_58) {
            iVar21 = local_50;
          }
          iVar8 = iVar21;
          if (iVar21 < local_54) {
            iVar8 = local_54;
          }
          uVar20 = 0;
          iVar12 = -uVar28;
          do {
            uVar9 = local_3c << 10 | local_58 << 5 | uVar20;
            iVar25 = uVar28 - uVar20;
            if ((int)uVar28 < (int)uVar20) {
              iVar25 = iVar12;
            }
            iVar23 = iVar25;
            if (iVar25 < iVar8) {
              iVar23 = iVar8;
            }
            iVar23 = iVar25 + local_54 + iVar21 + iVar23;
            pbVar5 = (byte *)((int)__s + uVar9);
            if (iVar23 < (int)(uint)*pbVar5) {
              *pbVar5 = (byte)iVar23;
              *(undefined *)(*(int *)(param_1 + 0x2b0) + uVar9) = (undefined)local_5c;
            }
            uVar20 = uVar20 + 1;
            iVar12 = iVar12 + 1;
          } while (uVar20 != 0x20);
          local_58 = local_58 + 1;
          local_50 = local_50 + 1;
        } while (local_58 != 0x20);
        local_3c = local_3c + 1;
        local_34 = local_34 + 1;
      } while (local_3c != 0x20);
      local_38 = local_38 + 3;
    }
    png_free(param_1,__s);
  }
  return;
LAB_00172196:
  png_free(param_1,piVar7);
  png_free(param_1,*(undefined4 *)(param_1 + 0x318));
  png_free(param_1,*(undefined4 *)(param_1 + 0x314));
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  goto LAB_00171d82;
}


