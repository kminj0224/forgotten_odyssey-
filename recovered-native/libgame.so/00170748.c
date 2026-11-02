/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00170748  Symbol: png_do_background */

void png_do_background(uint *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,
                      int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *extraout_r1;
  byte *extraout_r1_00;
  byte *extraout_r1_01;
  byte *extraout_r1_02;
  byte *extraout_r1_03;
  byte *extraout_r1_04;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  uint local_3c;
  
  uVar11 = DAT_00170e14;
  uVar12 = *param_1;
  if (param_4 == 0) {
    FUN_00170998();
    return;
  }
  bVar14 = *(byte *)(param_1 + 2);
  if ((bVar14 & 4) != 0) {
    if (param_3 == 0) {
      return;
    }
    if (bVar14 == 3) {
      return;
    }
  }
  if (bVar14 == 2) {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (param_6 == 0) {
        uVar11 = 0;
        if (uVar12 != 0) goto LAB_00171392;
        FUN_00170998();
        param_2 = extraout_r1_04;
        while (uVar11 = uVar11 + 1, uVar11 < uVar12) {
          param_2 = param_2 + 3;
LAB_00171392:
          if ((((ushort)*param_2 == *(ushort *)(param_3 + 2)) &&
              ((ushort)param_2[1] == *(ushort *)(param_3 + 4))) &&
             ((ushort)param_2[2] == *(ushort *)(param_3 + 6))) {
            *param_2 = (byte)*(undefined2 *)(param_4 + 2);
            param_2[1] = (byte)*(undefined2 *)(param_4 + 4);
            param_2[2] = (byte)*(undefined2 *)(param_4 + 6);
          }
        }
LAB_00170cd4:
        switchD_00170a8c::caseD_0();
        return;
      }
      if (uVar12 == 0) {
        switchD_00170a8c::caseD_0();
        param_2 = extraout_r1_02;
      }
      pbVar10 = param_2 + 1;
      pbVar9 = param_2 + 2;
      uVar11 = 0;
      while( true ) {
        if ((((uint)*(ushort *)(param_3 + 2) == (uint)*param_2) &&
            ((ushort)*pbVar10 == *(ushort *)(param_3 + 4))) &&
           ((ushort)*pbVar9 == *(ushort *)(param_3 + 6))) {
          *param_2 = (byte)*(undefined2 *)(param_4 + 2);
          *pbVar10 = (byte)*(undefined2 *)(param_4 + 4);
          *pbVar9 = (byte)*(undefined2 *)(param_4 + 6);
        }
        else {
          *param_2 = *(byte *)(param_6 + (uint)*param_2);
          *pbVar10 = *(byte *)(param_6 + (uint)*pbVar10);
          *pbVar9 = *(byte *)(param_6 + (uint)*pbVar9);
        }
        uVar11 = uVar11 + 1;
        pbVar10 = pbVar10 + 3;
        pbVar9 = pbVar9 + 3;
        if (uVar12 <= uVar11) break;
        param_2 = param_2 + 3;
      }
      goto LAB_001711b0;
    }
    if (param_9 == 0) {
      FUN_00171302();
      param_2 = extraout_r1_01;
    }
    bVar1 = 0;
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        if ((uint)*(ushort *)(param_3 + 2) == ((uint)*param_2 * 0x100 + (uint)param_2[1] & 0xffff))
        {
          local_3c = (uint)param_2[2];
          uVar6 = (uint)param_2[3];
          if ((uint)*(ushort *)(param_3 + 4) != (local_3c * 0x100 + uVar6 & 0xffff)) {
            uVar7 = (uint)param_2[4];
            uVar5 = (uint)param_2[5];
            goto LAB_001709ee;
          }
          uVar7 = (uint)param_2[4];
          uVar5 = (uint)param_2[5];
          if ((uint)*(ushort *)(param_3 + 6) != (uVar7 * 0x100 + uVar5 & 0xffff)) goto LAB_001709ee;
          *param_2 = (byte)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
          param_2[1] = (byte)*(undefined2 *)(param_4 + 2);
          param_2[2] = (byte)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
          param_2[3] = (byte)*(undefined2 *)(param_4 + 4);
          param_2[4] = (byte)((ushort)*(undefined2 *)(param_4 + 6) >> 8);
          param_2[5] = (byte)*(undefined2 *)(param_4 + 6);
        }
        else {
          local_3c = (uint)param_2[2];
          uVar7 = (uint)param_2[4];
          uVar6 = (uint)param_2[3];
          uVar5 = (uint)param_2[5];
LAB_001709ee:
          uVar4 = *(undefined2 *)
                   ((uint)*param_2 * 2 +
                   *(int *)(((int)(uint)param_2[1] >> (param_12 & 0xff)) * 4 + param_9));
          *param_2 = (byte)((ushort)uVar4 >> 8);
          param_2[1] = (byte)uVar4;
          uVar4 = *(undefined2 *)
                   (local_3c * 2 + *(int *)(((int)uVar6 >> (param_12 & 0xff)) * 4 + param_9));
          param_2[3] = (byte)uVar4;
          param_2[2] = (byte)((ushort)uVar4 >> 8);
          uVar4 = *(undefined2 *)
                   (uVar7 * 2 + *(int *)(((int)uVar5 >> (param_12 & 0xff)) * 4 + param_9));
          param_2[4] = (byte)((ushort)uVar4 >> 8);
          param_2[5] = (byte)uVar4;
        }
        uVar11 = uVar11 + 1;
        if (uVar12 <= uVar11) goto LAB_00170cd4;
        param_2 = param_2 + 6;
      } while( true );
    }
  }
  else {
    if (bVar14 < 3) {
      if (bVar14 != 0) {
        switchD_00170a8c::caseD_0();
        return;
      }
      if (0x10 < *(byte *)((int)param_1 + 9)) {
        switchD_00170a8c::caseD_0();
        return;
      }
      iVar13 = DAT_00170a98 + 0x170764 + DAT_00170aa0;
                    /* WARNING: Could not emulate address calculation at 0x00170a86 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(iVar13 + *(int *)(iVar13 + (uint)*(byte *)((int)param_1 + 9) * 4)))();
      return;
    }
    if (bVar14 == 4) {
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          if (uVar12 == 0) {
            switchD_00170a8c::caseD_0();
            param_2 = extraout_r1_03;
          }
          uVar11 = 0;
          pbVar9 = param_2;
          while( true ) {
            uVar7 = (uint)pbVar9[1];
            if (uVar7 == 0xff) {
              param_2[uVar11] = *pbVar9;
            }
            else if (uVar7 == 0) {
              param_2[uVar11] = (byte)*(undefined2 *)(param_4 + 8);
            }
            else {
              uVar7 = uVar7 * *pbVar9 + 0x80 + (0xff - uVar7) * (uint)*(ushort *)(param_5 + 8);
              param_2[uVar11] = (byte)((uVar7 * 0x10000 >> 0x18) + (uVar7 & 0xffff) >> 8);
            }
            uVar11 = uVar11 + 1;
            if (uVar12 <= uVar11) break;
            pbVar9 = pbVar9 + 2;
          }
          FUN_00170cd2();
          return;
        }
        if (uVar12 == 0) {
          switchD_00170a8c::caseD_0();
          return;
        }
        uVar11 = 0;
        pbVar9 = param_2;
        while( true ) {
          uVar7 = (uint)pbVar9[1];
          if (uVar7 == 0xff) {
            param_2[uVar11] = *(byte *)(param_6 + (uint)*pbVar9);
          }
          else if (uVar7 == 0) {
            param_2[uVar11] = (byte)*(undefined2 *)(param_4 + 8);
          }
          else {
            uVar7 = (uint)*(ushort *)(param_5 + 8) * (0xff - uVar7) + 0x80 +
                    *(byte *)(param_8 + (uint)*pbVar9) * uVar7;
            param_2[uVar11] =
                 *(byte *)(param_7 +
                          (((uVar7 * 0x10000 >> 0x18) + (uVar7 & 0xffff)) * 0x10000 >> 0x18));
          }
          uVar11 = uVar11 + 1;
          if (uVar12 <= uVar11) break;
          pbVar9 = pbVar9 + 2;
        }
        switchD_00170a8c::caseD_0(*(byte *)(param_1 + 2) & 4);
      }
      else {
        if (((param_10 == 0) || (param_9 == 0)) || (param_11 == 0)) {
          if (uVar12 == 0) {
            switchD_00170a8c::caseD_0();
            return;
          }
          uVar7 = 0;
          pbVar9 = param_2;
          while( true ) {
            uVar5 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3] & 0xffff;
            if (uVar5 == uVar11) {
              *param_2 = *pbVar9;
              param_2[1] = pbVar9[1];
            }
            else if (uVar5 == 0) {
              *param_2 = (byte)((ushort)*(undefined2 *)(param_4 + 8) >> 8);
              param_2[1] = (byte)*(undefined2 *)(param_4 + 8);
            }
            else {
              uVar5 = uVar5 * ((uint)pbVar9[1] + (uint)*pbVar9 * 0x100 & 0xffff) + 0x8000 +
                      (uVar11 - uVar5) * (uint)*(ushort *)(param_5 + 8);
              iVar13 = (uVar5 >> 0x10) + uVar5;
              *param_2 = (byte)((uint)iVar13 >> 0x18);
              param_2[1] = (byte)((uint)iVar13 >> 0x10);
            }
            uVar7 = uVar7 + 1;
            if (uVar12 <= uVar7) break;
            pbVar9 = pbVar9 + 4;
            param_2 = param_2 + 2;
          }
          FUN_00170cd2();
          return;
        }
        if (uVar12 == 0) {
          switchD_00170a8c::caseD_0();
          return;
        }
        uVar7 = 0;
        pbVar9 = param_2;
        while( true ) {
          uVar5 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3] & 0xffff;
          if (uVar5 == uVar11) {
            uVar4 = *(undefined2 *)
                     ((uint)*pbVar9 * 2 +
                     *(int *)(((int)(uint)pbVar9[1] >> (param_12 & 0xff)) * 4 + param_9));
            *param_2 = (byte)((ushort)uVar4 >> 8);
            param_2[1] = (byte)uVar4;
          }
          else if (uVar5 == 0) {
            *param_2 = (byte)((ushort)*(undefined2 *)(param_4 + 8) >> 8);
            param_2[1] = (byte)*(undefined2 *)(param_4 + 8);
          }
          else {
            uVar5 = (uVar11 - uVar5) * (uint)*(ushort *)(param_5 + 8) + 0x8000 +
                    uVar5 * *(ushort *)
                             ((uint)*pbVar9 * 2 +
                             *(int *)(((int)(uint)pbVar9[1] >> (param_12 & 0xff)) * 4 + param_11));
            uVar5 = (uVar5 >> 0x10) + uVar5;
            uVar4 = *(undefined2 *)
                     ((uVar5 >> 0x18) * 2 +
                     *(int *)(((int)(uVar5 >> 0x10 & 0xff) >> (param_12 & 0xff)) * 4 + param_10));
            *param_2 = (byte)((ushort)uVar4 >> 8);
            param_2[1] = (byte)uVar4;
          }
          uVar7 = uVar7 + 1;
          if (uVar12 <= uVar7) break;
          pbVar9 = pbVar9 + 4;
          param_2 = param_2 + 2;
        }
      }
LAB_001711b0:
      do {
        switchD_00170a8c::caseD_0();
      } while( true );
    }
    if (bVar14 != 6) {
      switchD_00170a8c::caseD_0();
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      FUN_0017101e();
      param_2 = extraout_r1;
    }
    uVar11 = DAT_00170e14;
    if (((param_10 != 0) && (param_9 != 0)) && (param_11 != 0)) {
      if (uVar12 == 0) {
        switchD_00170a8c::caseD_0();
        return;
      }
      uVar11 = 0;
      pbVar9 = param_2;
      do {
        uVar7 = (uint)pbVar9[6] * 0x100 + (uint)pbVar9[7] & 0xffff;
        if (uVar7 == DAT_00170a9c) {
          uVar4 = *(undefined2 *)
                   ((uint)*pbVar9 * 2 +
                   *(int *)(((int)(uint)pbVar9[1] >> (param_12 & 0xff)) * 4 + param_9));
          *param_2 = (byte)((ushort)uVar4 >> 8);
          param_2[1] = (byte)uVar4;
          uVar4 = *(undefined2 *)
                   ((uint)pbVar9[2] * 2 +
                   *(int *)(((int)(uint)pbVar9[3] >> (param_12 & 0xff)) * 4 + param_9));
          param_2[2] = (byte)((ushort)uVar4 >> 8);
          param_2[3] = (byte)uVar4;
          uVar4 = *(undefined2 *)
                   ((uint)pbVar9[4] * 2 +
                   *(int *)(((int)(uint)pbVar9[5] >> (param_12 & 0xff)) * 4 + param_9));
          param_2[4] = (byte)((ushort)uVar4 >> 8);
          param_2[5] = (byte)uVar4;
        }
        else if (uVar7 == 0) {
          *param_2 = (byte)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
          param_2[1] = (byte)*(undefined2 *)(param_4 + 2);
          param_2[2] = (byte)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
          param_2[3] = (byte)*(undefined2 *)(param_4 + 4);
          param_2[4] = (byte)((ushort)*(undefined2 *)(param_4 + 6) >> 8);
          param_2[5] = (byte)*(undefined2 *)(param_4 + 6);
        }
        else {
          iVar13 = DAT_00170a9c - uVar7;
          uVar5 = iVar13 * (uint)*(ushort *)(param_5 + 2) + 0x8000 +
                  uVar7 * *(ushort *)
                           ((uint)*pbVar9 * 2 +
                           *(int *)(((int)(uint)pbVar9[1] >> (param_12 & 0xff)) * 4 + param_11));
          uVar5 = uVar5 + (uVar5 >> 0x10);
          uVar4 = *(undefined2 *)
                   ((uVar5 >> 0x18) * 2 +
                   *(int *)(((int)(uVar5 >> 0x10 & 0xff) >> (param_12 & 0xff)) * 4 + param_10));
          param_2[1] = (byte)uVar4;
          *param_2 = (byte)((ushort)uVar4 >> 8);
          uVar5 = iVar13 * (uint)*(ushort *)(param_5 + 4) + 0x8000 +
                  uVar7 * *(ushort *)
                           ((uint)pbVar9[2] * 2 +
                           *(int *)(((int)(uint)pbVar9[3] >> (param_12 & 0xff)) * 4 + param_11));
          uVar5 = uVar5 + (uVar5 >> 0x10);
          uVar4 = *(undefined2 *)
                   ((uVar5 >> 0x18) * 2 +
                   *(int *)(((int)(uVar5 >> 0x10 & 0xff) >> (param_12 & 0xff)) * 4 + param_10));
          param_2[2] = (byte)((ushort)uVar4 >> 8);
          param_2[3] = (byte)uVar4;
          uVar7 = iVar13 * (uint)*(ushort *)(param_5 + 6) + 0x8000 +
                  uVar7 * *(ushort *)
                           ((uint)pbVar9[4] * 2 +
                           *(int *)(((int)(uint)pbVar9[5] >> (param_12 & 0xff)) * 4 + param_11));
          uVar7 = (uVar7 >> 0x10) + uVar7;
          uVar4 = *(undefined2 *)
                   ((uVar7 >> 0x18) * 2 +
                   *(int *)(((int)(uVar7 >> 0x10 & 0xff) >> (param_12 & 0xff)) * 4 + param_10));
          param_2[4] = (byte)((ushort)uVar4 >> 8);
          param_2[5] = (byte)uVar4;
        }
        uVar11 = uVar11 + 1;
        if (uVar12 <= uVar11) {
          FUN_001711ac();
          param_2 = extraout_r1_00;
        }
        pbVar9 = pbVar9 + 8;
        param_2 = param_2 + 6;
      } while( true );
    }
    if (uVar12 == 0) {
      switchD_00170a8c::caseD_0();
      return;
    }
    uVar7 = 0;
    pbVar9 = param_2;
    while( true ) {
      uVar5 = (uint)param_2[6] * 0x100 + (uint)param_2[7] & 0xffff;
      if (uVar5 == uVar11) {
        memcpy(pbVar9,param_2,6);
      }
      else if (uVar5 == 0) {
        *pbVar9 = (byte)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
        pbVar9[1] = (byte)*(undefined2 *)(param_4 + 2);
        pbVar9[2] = (byte)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
        pbVar9[3] = (byte)*(undefined2 *)(param_4 + 4);
        pbVar9[4] = (byte)((ushort)*(undefined2 *)(param_4 + 6) >> 8);
        pbVar9[5] = (byte)*(undefined2 *)(param_4 + 6);
      }
      else {
        bVar14 = param_2[2];
        bVar1 = param_2[3];
        bVar2 = param_2[4];
        bVar3 = param_2[5];
        iVar8 = uVar11 - uVar5;
        uVar6 = iVar8 * (uint)*(ushort *)(param_4 + 2) +
                uVar5 * ((uint)param_2[1] + (uint)*param_2 * 0x100 & 0xffff) + 0x8000;
        iVar13 = uVar6 + (uVar6 >> 0x10);
        pbVar9[1] = (byte)((uint)iVar13 >> 0x10);
        *pbVar9 = (byte)((uint)iVar13 >> 0x18);
        uVar6 = uVar5 * ((uint)bVar14 * 0x100 + (uint)bVar1 & 0xffff) + 0x8000 +
                iVar8 * (uint)*(ushort *)(param_4 + 4);
        iVar13 = (uVar6 >> 0x10) + uVar6;
        pbVar9[2] = (byte)((uint)iVar13 >> 0x18);
        pbVar9[3] = (byte)((uint)iVar13 >> 0x10);
        uVar5 = uVar5 * ((uint)bVar2 * 0x100 + (uint)bVar3 & 0xffff) + 0x8000 +
                (uint)*(ushort *)(param_4 + 6) * iVar8;
        iVar13 = (uVar5 >> 0x10) + uVar5;
        pbVar9[4] = (byte)((uint)iVar13 >> 0x18);
        pbVar9[5] = (byte)((uint)iVar13 >> 0x10);
      }
      uVar7 = uVar7 + 1;
      if (uVar12 <= uVar7) break;
      param_2 = param_2 + 8;
      pbVar9 = pbVar9 + 6;
    }
    bVar14 = *(byte *)(param_1 + 2);
    bVar1 = bVar14;
  }
  if ((bVar1 & 4) != 0) {
    *(byte *)(param_1 + 2) = bVar14 & 0xfb;
    uVar11 = *(byte *)((int)param_1 + 10) - 1;
    *(char *)((int)param_1 + 10) = (char)uVar11;
    uVar11 = (uint)*(byte *)((int)param_1 + 9) * (uVar11 & 0xff);
    *(char *)((int)param_1 + 0xb) = (char)uVar11;
    if ((uVar11 & 0xff) < 8) {
      param_1[1] = (uVar11 & 0xff) * uVar12 + 7 >> 3;
      FUN_00170998();
      return;
    }
    param_1[1] = (uVar11 * 0x1000000 >> 0x1b) * uVar12;
  }
  return;
}


