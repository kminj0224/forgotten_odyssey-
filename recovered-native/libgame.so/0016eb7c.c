/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016eb7c  Symbol: png_do_gamma */

void png_do_gamma(uint *param_1,byte *param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  
  uVar6 = *param_1;
  bVar7 = *(byte *)((int)param_1 + 9);
  if (((param_3 != 0) && (bVar7 < 9)) || ((param_4 != 0 && (bVar7 == 0x10)))) {
    bVar1 = *(byte *)(param_1 + 2);
    if (bVar1 == 2) {
      if (bVar7 == 8) {
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *param_2 = *(byte *)(param_3 + (uint)*param_2);
            param_2[1] = *(byte *)(param_3 + (uint)param_2[1]);
            param_2[2] = *(byte *)(param_3 + (uint)param_2[2]);
            param_2 = param_2 + 3;
          } while (uVar5 < uVar6);
        }
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          do {
            uVar5 = uVar5 + 1;
            uVar2 = *(undefined2 *)
                     ((uint)*param_2 * 2 +
                     *(int *)(((int)(uint)param_2[1] >> (param_5 & 0xff)) * 4 + param_4));
            param_2[1] = (byte)uVar2;
            *param_2 = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     ((uint)param_2[2] * 2 +
                     *(int *)(((int)(uint)param_2[3] >> (param_5 & 0xff)) * 4 + param_4));
            param_2[3] = (byte)uVar2;
            param_2[2] = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     ((uint)param_2[4] * 2 +
                     *(int *)(((int)(uint)param_2[5] >> (param_5 & 0xff)) * 4 + param_4));
            param_2[4] = (byte)((ushort)uVar2 >> 8);
            param_2[5] = (byte)uVar2;
            param_2 = param_2 + 6;
          } while (uVar5 < uVar6);
        }
      }
    }
    else if (bVar1 < 3) {
      if (bVar1 == 0) {
        if (bVar7 == 2) {
          if (uVar6 == 0) {
            return;
          }
          iVar8 = 0;
          do {
            uVar5 = (uint)param_2[iVar8];
            uVar3 = uVar5 & 0xc0;
            uVar4 = uVar5 & 0x30;
            uVar9 = uVar5 & 0xc;
            uVar5 = uVar5 & 3;
            param_2[iVar8] =
                 *(byte *)(param_3 + ((int)uVar3 >> 4 | (int)uVar3 >> 2 | uVar3 | (int)uVar3 >> 6))
                 & 0xc0 | *(byte *)(param_3 + (uVar5 << 2 | uVar5 << 6 | uVar5 << 4 | uVar5)) >> 6 |
                 *(byte *)(param_3 + ((int)uVar4 >> 2 | uVar4 << 2 | uVar4 | (int)uVar4 >> 4)) >> 2
                 & 0x30 | *(byte *)(param_3 + (uVar9 << 4 | uVar9 << 2 | uVar9 | (int)uVar9 >> 2))
                          >> 4 & 0xc;
            iVar8 = iVar8 + 1;
          } while ((uint)(iVar8 * 4) < uVar6);
          bVar7 = *(byte *)((int)param_1 + 9);
        }
        if (bVar7 == 4) {
          if (uVar6 != 0) {
            iVar8 = 0;
            do {
              uVar5 = param_2[iVar8] & 0xf0;
              uVar3 = param_2[iVar8] & 0xf;
              param_2[iVar8] =
                   *(byte *)(param_3 + (uVar5 | (int)uVar5 >> 4)) & 0xf0 |
                   *(byte *)(param_3 + (uVar3 | uVar3 << 4)) >> 4;
              iVar8 = iVar8 + 1;
            } while ((uint)(iVar8 * 2) < uVar6);
          }
        }
        else if (bVar7 == 8) {
          if (uVar6 != 0) {
            uVar5 = 0;
            do {
              param_2[uVar5] = *(byte *)(param_3 + (uint)param_2[uVar5]);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
          }
        }
        else if ((bVar7 == 0x10) && (uVar6 != 0)) {
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            uVar2 = *(undefined2 *)
                     ((uint)*param_2 * 2 +
                     *(int *)(((int)(uint)param_2[1] >> (param_5 & 0xff)) * 4 + param_4));
            *param_2 = (byte)((ushort)uVar2 >> 8);
            param_2[1] = (byte)uVar2;
            param_2 = param_2 + 2;
          } while (uVar5 < uVar6);
        }
      }
    }
    else if (bVar1 == 4) {
      if (bVar7 == 8) {
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *param_2 = *(byte *)(param_3 + (uint)*param_2);
            param_2 = param_2 + 2;
          } while (uVar5 < uVar6);
        }
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          do {
            uVar5 = uVar5 + 1;
            uVar2 = *(undefined2 *)
                     ((uint)*param_2 * 2 +
                     *(int *)(((int)(uint)param_2[1] >> (param_5 & 0xff)) * 4 + param_4));
            *param_2 = (byte)((ushort)uVar2 >> 8);
            param_2[1] = (byte)uVar2;
            param_2 = param_2 + 4;
          } while (uVar5 < uVar6);
        }
      }
    }
    else if (bVar1 == 6) {
      if (bVar7 == 8) {
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *param_2 = *(byte *)(param_3 + (uint)*param_2);
            param_2[1] = *(byte *)(param_3 + (uint)param_2[1]);
            param_2[2] = *(byte *)(param_3 + (uint)param_2[2]);
            param_2 = param_2 + 4;
          } while (uVar5 < uVar6);
        }
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          do {
            uVar5 = uVar5 + 1;
            uVar2 = *(undefined2 *)
                     ((uint)*param_2 * 2 +
                     *(int *)(((int)(uint)param_2[1] >> (param_5 & 0xff)) * 4 + param_4));
            param_2[1] = (byte)uVar2;
            *param_2 = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     ((uint)param_2[2] * 2 +
                     *(int *)(((int)(uint)param_2[3] >> (param_5 & 0xff)) * 4 + param_4));
            param_2[3] = (byte)uVar2;
            param_2[2] = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     ((uint)param_2[4] * 2 +
                     *(int *)(((int)(uint)param_2[5] >> (param_5 & 0xff)) * 4 + param_4));
            param_2[4] = (byte)((ushort)uVar2 >> 8);
            param_2[5] = (byte)uVar2;
            param_2 = param_2 + 8;
          } while (uVar5 < uVar6);
        }
      }
    }
  }
  return;
}


