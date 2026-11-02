/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001723ec  Symbol: png_do_shift */

void png_do_shift(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  uint local_48 [4];
  uint local_38 [5];
  
  uVar8 = (uint)*(byte *)(param_1 + 2);
  if (uVar8 != 3) {
    if ((int)(uVar8 << 0x1e) < 0) {
      uVar5 = (uint)*(byte *)((int)param_1 + 9);
      local_48[0] = (uint)*param_3;
      local_38[0] = uVar5 - local_48[0];
      local_48[1] = (uint)param_3[1];
      local_38[1] = uVar5 - local_48[1];
      local_48[2] = (uint)param_3[2];
      local_38[2] = uVar5 - local_48[2];
      iVar12 = 3;
    }
    else {
      local_48[0] = (uint)param_3[3];
      uVar5 = (uint)*(byte *)((int)param_1 + 9);
      local_38[0] = uVar5 - local_48[0];
      iVar12 = 1;
    }
    if ((int)(uVar8 << 0x1d) < 0) {
      bVar14 = param_3[4];
      local_38[iVar12] = uVar5 - bVar14;
      local_48[iVar12] = (uint)bVar14;
      iVar12 = iVar12 + 1;
    }
    if (uVar5 < 8) {
      uVar8 = param_1[1];
      if (((param_3[3] != 1) || (bVar14 = 0x55, uVar5 != 2)) &&
         ((uVar5 != 4 || (bVar14 = 0x11, param_3[3] != 3)))) {
        bVar14 = 0xff;
      }
      if (uVar8 != 0) {
        uVar5 = -local_48[0];
        uVar13 = 0;
        while( true ) {
          bVar9 = *param_2;
          *param_2 = 0;
          if (local_38[0] != uVar5 &&
              (int)(local_38[0] + local_48[0]) < 0 == SBORROW4(local_38[0],uVar5)) {
            bVar1 = 0;
            uVar2 = -local_38[0];
            iVar12 = local_38[0] - local_48[0];
            uVar6 = local_38[0];
            while( true ) {
              if ((int)uVar6 < 1) {
                *param_2 = bVar1 | (byte)((int)(uint)bVar9 >> (uVar2 & 0xff)) & bVar14;
              }
              else {
                *param_2 = bVar1 | bVar9 << (uVar6 & 0xff);
              }
              if (iVar12 <= (int)uVar5) break;
              iVar12 = iVar12 + uVar5;
              uVar6 = uVar5 + uVar6;
              uVar2 = uVar2 + local_48[0];
              bVar1 = *param_2;
            }
          }
          uVar13 = uVar13 + 1;
          if (uVar8 <= uVar13) break;
          param_2 = param_2 + 1;
        }
      }
    }
    else if (uVar5 == 8) {
      iVar7 = *param_1;
      if (iVar7 * iVar12 != 0) {
        uVar8 = 0;
        while( true ) {
          __aeabi_uidivmod(uVar8,iVar12);
          bVar14 = *param_2;
          *param_2 = 0;
          uVar2 = local_38[extraout_r1_00];
          uVar13 = local_48[extraout_r1_00];
          uVar5 = -uVar13;
          if (uVar2 != uVar5 && (int)(uVar2 + uVar13) < 0 == SBORROW4(uVar2,uVar5)) {
            iVar4 = uVar2 - uVar13;
            uVar6 = -uVar2;
            bVar9 = 0;
            while( true ) {
              if ((int)uVar2 < 1) {
                *param_2 = bVar9 | (byte)((int)(uint)bVar14 >> (uVar6 & 0xff));
              }
              else {
                *param_2 = bVar9 | bVar14 << (uVar2 & 0xff);
              }
              if ((int)(iVar4 + uVar5 + uVar13) <= (int)uVar5) break;
              uVar2 = uVar5 + uVar2;
              iVar4 = iVar4 + uVar5;
              uVar6 = uVar6 + uVar13;
              bVar9 = *param_2;
            }
          }
          uVar8 = uVar8 + 1;
          if ((uint)(iVar7 * iVar12) <= uVar8) break;
          param_2 = param_2 + 1;
        }
      }
    }
    else {
      iVar7 = *param_1;
      if (iVar7 * iVar12 != 0) {
        uVar8 = 0;
        do {
          __aeabi_uidivmod(uVar8,iVar12);
          uVar13 = (uint)*param_2 * 0x100 + (uint)param_2[1] & 0xffff;
          uVar2 = local_38[extraout_r1];
          uVar5 = local_48[extraout_r1];
          iVar4 = -uVar5;
          if (iVar4 < (int)uVar2) {
            iVar3 = uVar2 - uVar5;
            uVar6 = -uVar2;
            uVar11 = 0;
            do {
              while (0 < (int)uVar2) {
                iVar3 = iVar3 + iVar4;
                uVar11 = uVar11 | uVar13 << (uVar2 & 0xff) & 0xffff;
                uVar10 = (undefined2)uVar11;
                uVar2 = iVar4 + uVar2;
                uVar6 = uVar6 + uVar5;
                if ((int)(iVar3 + uVar5) <= iVar4) goto LAB_00172580;
              }
              iVar3 = iVar3 + iVar4;
              uVar11 = uVar11 | (int)uVar13 >> (uVar6 & 0xff) & 0xffffU;
              uVar10 = (undefined2)uVar11;
              uVar2 = iVar4 + uVar2;
              uVar6 = uVar6 + uVar5;
            } while (iVar4 < (int)(iVar3 + uVar5));
LAB_00172580:
            bVar14 = (byte)((ushort)uVar10 >> 8);
            bVar9 = (byte)uVar10;
          }
          else {
            bVar9 = 0;
            bVar14 = 0;
          }
          *param_2 = bVar14;
          param_2[1] = bVar9;
          uVar8 = uVar8 + 1;
          if ((uint)(iVar7 * iVar12) <= uVar8) {
            return;
          }
          param_2 = param_2 + 2;
        } while( true );
      }
    }
  }
  return;
}


