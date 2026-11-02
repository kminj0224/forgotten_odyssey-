/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ee24  Symbol: png_do_expand_palette */

void png_do_expand_palette(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  byte *pbVar10;
  
  uVar8 = *param_1;
  if (*(char *)(param_1 + 2) == '\x03') {
    bVar1 = *(byte *)((int)param_1 + 9);
    if (bVar1 < 8) {
      if (bVar1 == 2) {
        if (uVar8 != 0) {
          pbVar4 = (byte *)((uVar8 - 1 >> 2) + param_2);
          pbVar10 = (byte *)((uVar8 - 1) + param_2);
          uVar5 = (~(uVar8 + 3) & 3) << 1;
          uVar7 = 0;
          while( true ) {
            *pbVar10 = (byte)((int)(uint)*pbVar4 >> (uVar5 & 0xff)) & 3;
            if (uVar5 == 6) {
              pbVar4 = pbVar4 + -1;
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + 2;
            }
            uVar7 = uVar7 + 1;
            if (uVar8 <= uVar7) break;
            pbVar10 = pbVar10 + -1;
          }
        }
      }
      else if (bVar1 == 4) {
        if (uVar8 != 0) {
          pbVar4 = (byte *)((uVar8 - 1 >> 1) + param_2);
          pbVar10 = (byte *)((uVar8 - 1) + param_2);
          uVar5 = (uVar8 & 1) << 2;
          uVar7 = 0;
          while( true ) {
            *pbVar10 = (byte)((int)(uint)*pbVar4 >> (uVar5 & 0xff)) & 0xf;
            if (uVar5 == 4) {
              pbVar4 = pbVar4 + -1;
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + 4;
            }
            uVar7 = uVar7 + 1;
            if (uVar8 <= uVar7) break;
            pbVar10 = pbVar10 + -1;
          }
        }
      }
      else if ((bVar1 == 1) && (uVar8 != 0)) {
        pbVar4 = (byte *)((uVar8 - 1 >> 3) + param_2);
        puVar2 = (undefined *)((uVar8 - 1) + param_2);
        uVar5 = ~(uVar8 + 7) & 7;
        uVar7 = 0;
        do {
          if (((int)(uint)*pbVar4 >> (uVar5 & 0xff) & 1U) == 0) {
            *puVar2 = 0;
            if (uVar5 != 7) goto LAB_0016efa4;
LAB_0016efca:
            pbVar4 = pbVar4 + (uVar5 - 8);
            uVar5 = 0;
          }
          else {
            *puVar2 = 1;
            if (uVar5 == 7) goto LAB_0016efca;
LAB_0016efa4:
            uVar5 = uVar5 + 1;
          }
          uVar7 = uVar7 + 1;
          if (uVar8 <= uVar7) break;
          puVar2 = puVar2 + -1;
        } while( true );
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar8;
    }
    else if (bVar1 != 8) {
      return;
    }
    if (param_4 == 0) {
      if (uVar8 != 0) {
        iVar6 = param_2 + (uVar8 - 1);
        iVar3 = 0;
        puVar2 = (undefined *)(param_2 + uVar8 * 3);
        do {
          puVar2[-1] = *(undefined *)(param_3 + (uint)*(byte *)(iVar6 + iVar3) * 3 + 2);
          puVar2[-2] = *(undefined *)(param_3 + (uint)*(byte *)(iVar6 + iVar3) * 3 + 1);
          pbVar4 = (byte *)(iVar6 + iVar3);
          iVar3 = iVar3 + -1;
          puVar2[-3] = *(undefined *)((uint)*pbVar4 * 3 + param_3);
          puVar2 = puVar2 + -3;
        } while ((uint)-iVar3 < uVar8);
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 0x18;
      param_1[1] = uVar8 * 3;
      *(undefined *)(param_1 + 2) = 2;
      *(undefined *)((int)param_1 + 10) = 3;
    }
    else {
      if (uVar8 != 0) {
        pbVar4 = (byte *)(param_2 + (uVar8 - 1));
        puVar2 = (undefined *)(param_2 + uVar8 * 4 + -2);
        uVar7 = 0;
        while( true ) {
          if ((int)(uint)*pbVar4 < param_5) {
            puVar2[1] = *(undefined *)(param_4 + (uint)*pbVar4);
          }
          else {
            puVar2[1] = 0xff;
          }
          uVar7 = uVar7 + 1;
          *puVar2 = *(undefined *)(param_3 + (uint)*pbVar4 * 3 + 2);
          puVar2[-1] = *(undefined *)(param_3 + (uint)*pbVar4 * 3 + 1);
          puVar9 = puVar2 + -2;
          puVar2 = puVar2 + -4;
          *puVar9 = *(undefined *)((uint)*pbVar4 * 3 + param_3);
          if (uVar8 <= uVar7) break;
          pbVar4 = pbVar4 + -1;
        }
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 0x20;
      *(undefined *)(param_1 + 2) = 6;
      param_1[1] = uVar8 * 4;
      *(undefined *)((int)param_1 + 10) = 4;
    }
  }
  return;
}


