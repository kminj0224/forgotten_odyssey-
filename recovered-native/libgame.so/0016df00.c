/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016df00  Symbol: png_do_unpack */

void png_do_unpack(uint *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  bVar1 = *(byte *)((int)param_1 + 9);
  if (bVar1 < 8) {
    uVar5 = *param_1;
    if (bVar1 == 2) {
      if (uVar5 != 0) {
        pbVar7 = (byte *)(param_2 + (uVar5 - 1 >> 2));
        pbVar6 = (byte *)(param_2 + (uVar5 - 1));
        uVar3 = (~(uVar5 + 3) & 3) << 1;
        uVar2 = 0;
        while( true ) {
          *pbVar6 = (byte)((int)(uint)*pbVar7 >> (uVar3 & 0xff)) & 3;
          if (uVar3 == 6) {
            pbVar7 = pbVar7 + -1;
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 + 2;
          }
          uVar2 = uVar2 + 1;
          if (uVar5 <= uVar2) break;
          pbVar6 = pbVar6 + -1;
        }
      }
    }
    else if (bVar1 == 4) {
      iVar4 = (uint)((uVar5 + 1 & 1) == 0) * 4;
      if (uVar5 != 0) {
        pbVar7 = (byte *)(param_2 + (uVar5 - 1 >> 1));
        pbVar6 = (byte *)(param_2 + (uVar5 - 1));
        uVar2 = 0;
        while( true ) {
          *pbVar6 = (byte)((int)(uint)*pbVar7 >> iVar4) & 0xf;
          if (iVar4 == 4) {
            pbVar7 = pbVar7 + -1;
            iVar4 = 0;
          }
          else {
            iVar4 = 4;
          }
          uVar2 = uVar2 + 1;
          if (uVar5 <= uVar2) break;
          pbVar6 = pbVar6 + -1;
        }
      }
    }
    else if ((bVar1 == 1) && (uVar5 != 0)) {
      pbVar7 = (byte *)(param_2 + (uVar5 - 1 >> 3));
      pbVar6 = (byte *)(param_2 + (uVar5 - 1));
      uVar3 = ~(uVar5 + 7) & 7;
      uVar2 = 0;
      while( true ) {
        *pbVar6 = (byte)((int)(uint)*pbVar7 >> (uVar3 & 0xff)) & 1;
        if (uVar3 == 7) {
          pbVar7 = pbVar7 + -1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 + 1;
        }
        uVar2 = uVar2 + 1;
        if (uVar5 <= uVar2) break;
        pbVar6 = pbVar6 + -1;
      }
    }
    *(undefined *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) << 3;
    param_1[1] = *(byte *)((int)param_1 + 10) * uVar5;
  }
  return;
}


