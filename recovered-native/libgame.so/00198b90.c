/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00198b90  Symbol: FUN_00198b90 */

byte * FUN_00198b90(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte *local_34;
  undefined auStack_20 [4];
  byte *local_1c [2];
  
  iVar10 = DAT_00198e90 + 0x198b9e;
  local_1c[0] = (byte *)0x0;
  pbVar3 = (byte *)(***(code ***)(iVar10 + DAT_00198e94))(100);
  if (pbVar3 == (byte *)0x0) {
    FUN_00195c00(param_1,iVar10 + DAT_00198e98);
  }
  else {
    iVar11 = 100;
    pbVar9 = pbVar3;
    while( true ) {
      pbVar8 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
      bVar1 = *pbVar8;
      uVar6 = (uint)bVar1;
      if (((uVar6 == 0) || (uVar6 == param_2)) ||
         ((param_2 == 0 &&
          ((((uVar6 == 0x3e || ((uVar6 - 9 & 0xff) < 2)) || (uVar6 == 0x20)) || (uVar6 == 0xd))))))
      break;
      if (uVar6 == 0x26) {
        if (pbVar8[1] == 0x23) {
          uVar6 = FUN_001989e4(param_1);
          if (uVar6 < 0x80) {
            *pbVar3 = (byte)uVar6;
            uVar7 = 0xfffffffa;
            pbVar3 = pbVar3 + 1;
          }
          else if (DAT_00198e9c < uVar6) {
            if (DAT_00198ea0 < uVar6) {
              *pbVar3 = (byte)((uVar6 << 0xb) >> 0x1d) | 0xf0;
              uVar7 = 0xc;
              pbVar3 = pbVar3 + 1;
            }
            else {
              *pbVar3 = (byte)(uVar6 >> 8) >> 4 | 0xe0;
              uVar7 = 6;
              pbVar3 = pbVar3 + 1;
            }
          }
          else {
            *pbVar3 = (byte)((uVar6 << 0x15) >> 0x1b) | 0xc0;
            uVar7 = 0;
            pbVar3 = pbVar3 + 1;
          }
          for (; -1 < (int)uVar7; uVar7 = uVar7 - 6) {
            *pbVar3 = (byte)(uVar6 >> (uVar7 & 0xff)) & 0x3f | 0x80;
            pbVar3 = pbVar3 + 1;
          }
          if (iVar11 + -99 <= (int)pbVar3 - (int)pbVar9) {
            pbVar8 = (byte *)(***(code ***)(iVar10 + DAT_00198ea4))(pbVar9,iVar11 * 2);
            if (pbVar8 == (byte *)0x0) {
LAB_00198ddc:
              FUN_00195c00(param_1,iVar10 + DAT_00198ea8);
              (***(code ***)(iVar10 + DAT_00198eac))(pbVar9);
              return (byte *)0x0;
            }
            pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar9);
LAB_00198cd4:
            iVar11 = iVar11 * 2;
            pbVar9 = pbVar8;
          }
        }
        else {
          puVar4 = (uint *)FUN_001982ac(param_1,local_1c);
          iVar2 = DAT_00198ea4;
          if (local_1c[0] == (byte *)0x0) {
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
            if (iVar11 + -99 <= (int)pbVar3 - (int)pbVar9) {
              pbVar8 = (byte *)(***(code ***)(iVar10 + DAT_00198ea4))(pbVar9,iVar11 * 2);
              if (pbVar8 == (byte *)0x0) goto LAB_00198ddc;
              pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar9);
              goto LAB_00198cd4;
            }
          }
          else if (puVar4 == (uint *)0x0) {
            *pbVar3 = bVar1;
            local_34 = local_1c[0];
            while (pbVar3 = pbVar3 + 1, *local_34 != 0) {
              pbVar8 = pbVar9;
              if (iVar11 + -99 <= (int)pbVar3 - (int)pbVar9) {
                iVar11 = iVar11 * 2;
                pbVar8 = (byte *)(***(code ***)(iVar10 + iVar2))(pbVar9,iVar11);
                if (pbVar8 == (byte *)0x0) goto LAB_00198ddc;
                pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar9);
              }
              bVar1 = *local_34;
              local_34 = local_34 + 1;
              *pbVar3 = bVar1;
              pbVar9 = pbVar8;
            }
          }
          else {
            pbVar8 = pbVar3;
            pbVar5 = pbVar9;
            if (iVar11 + -99 <= (int)pbVar3 - (int)pbVar9) {
              iVar11 = iVar11 * 2;
              pbVar5 = (byte *)(***(code ***)(iVar10 + DAT_00198ea4))(pbVar9,iVar11);
              if (pbVar5 == (byte *)0x0) goto LAB_00198ddc;
              pbVar8 = pbVar5 + ((int)pbVar3 - (int)pbVar9);
            }
            uVar6 = *puVar4;
            if (uVar6 < 0x80) {
              *pbVar8 = (byte)uVar6;
              uVar7 = 0xfffffffa;
              pbVar3 = pbVar8 + 1;
            }
            else if (DAT_00198e9c < uVar6) {
              pbVar3 = pbVar8 + 1;
              if (DAT_00198ea0 < uVar6) {
                *pbVar8 = (byte)((uVar6 << 0xb) >> 0x1d) | 0xf0;
                uVar7 = 0xc;
              }
              else {
                *pbVar8 = (byte)(uVar6 >> 8) >> 4 | 0xe0;
                uVar7 = 6;
              }
            }
            else {
              *pbVar8 = (byte)((uVar6 << 0x15) >> 0x1b) | 0xc0;
              uVar7 = 0;
              pbVar3 = pbVar8 + 1;
            }
            for (; pbVar9 = pbVar5, -1 < (int)uVar7; uVar7 = uVar7 - 6) {
              *pbVar3 = (byte)(uVar6 >> (uVar7 & 0xff)) & 0x3f | 0x80;
              pbVar3 = pbVar3 + 1;
            }
          }
        }
      }
      else {
        pbVar8 = pbVar3;
        pbVar5 = pbVar9;
        if (iVar11 + -99 <= (int)pbVar3 - (int)pbVar9) {
          iVar11 = iVar11 * 2;
          pbVar5 = (byte *)(***(code ***)(iVar10 + DAT_00198ea4))(pbVar9,iVar11);
          if (pbVar5 == (byte *)0x0) goto LAB_00198ddc;
          pbVar8 = pbVar5 + ((int)pbVar3 - (int)pbVar9);
        }
        uVar6 = FUN_001978a4(param_1,auStack_20);
        if (uVar6 < 0x80) {
          *pbVar8 = (byte)uVar6;
          uVar7 = 0xfffffffa;
          pbVar3 = pbVar8 + 1;
        }
        else if (DAT_00198e9c < uVar6) {
          pbVar3 = pbVar8 + 1;
          if (DAT_00198ea0 < uVar6) {
            *pbVar8 = (byte)((uVar6 << 0xb) >> 0x1d) | 0xf0;
            uVar7 = 0xc;
          }
          else {
            *pbVar8 = (byte)(uVar6 >> 8) >> 4 | 0xe0;
            uVar7 = 6;
          }
        }
        else {
          *pbVar8 = (byte)((uVar6 << 0x15) >> 0x1b) | 0xc0;
          uVar7 = 0;
          pbVar3 = pbVar8 + 1;
        }
        for (; -1 < (int)uVar7; uVar7 = uVar7 - 6) {
          *pbVar3 = (byte)(uVar6 >> (uVar7 & 0xff)) & 0x3f | 0x80;
          pbVar3 = pbVar3 + 1;
        }
        FUN_0017a4a4(param_1);
        pbVar9 = pbVar5;
      }
    }
    *pbVar3 = 0;
    pbVar3 = pbVar9;
  }
  return pbVar3;
}


