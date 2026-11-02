/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a34a0  Symbol: FUN_001a34a0 */

int FUN_001a34a0(byte *param_1,int *param_2,byte *param_3,int *param_4,int param_5)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *local_30;
  
  if ((((param_2 == (int *)0x0) || (param_1 == (byte *)0x0)) || (param_4 == (int *)0x0)) ||
     ((param_3 == (byte *)0x0 || (param_5 == 0)))) {
LAB_001a35a6:
    iVar3 = -1;
  }
  else {
    pbVar4 = param_1 + *param_2;
    pbVar6 = param_3 + *param_4;
    uVar8 = (uint)*param_3;
    pbVar5 = param_1;
    pbVar7 = param_3;
    local_30 = pbVar6;
    while ((pbVar7 < pbVar6 && (pbVar5 < pbVar4 + -1))) {
      if (0x7f < uVar8) {
        uVar1 = *(ushort *)((uVar8 - 0x80) * 2 + param_5);
        if (uVar1 == 0) {
          *param_2 = (int)pbVar5 - (int)param_1;
          *param_4 = (int)pbVar7 - (int)param_3;
          goto LAB_001a35a6;
        }
        bVar2 = (byte)(uVar1 >> 6);
        if (DAT_001a35b0 < uVar1) {
          *pbVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
          pbVar5[1] = bVar2 & 0x3f | 0x80;
          pbVar5[2] = (byte)uVar1 & 0x3f | 0x80;
          pbVar5 = pbVar5 + 3;
        }
        else {
          *pbVar5 = bVar2 & 0x1f | 0xc0;
          pbVar5[1] = (byte)uVar1 & 0x3f | 0x80;
          pbVar5 = pbVar5 + 2;
        }
        pbVar7 = pbVar7 + 1;
        uVar8 = (uint)*pbVar7;
      }
      if ((int)pbVar4 - (int)pbVar5 < (int)local_30 - (int)pbVar7) {
        local_30 = pbVar7 + ((int)pbVar4 - (int)pbVar5);
      }
      while ((pbVar7 < local_30 && (uVar8 < 0x80))) {
        *pbVar5 = (byte)uVar8;
        pbVar7 = pbVar7 + 1;
        pbVar5 = pbVar5 + 1;
        uVar8 = (uint)*pbVar7;
      }
    }
    if (((pbVar5 < pbVar4) && (pbVar7 < pbVar6)) && (uVar8 < 0x80)) {
      *pbVar5 = (byte)uVar8;
      pbVar7 = pbVar7 + 1;
      pbVar5 = pbVar5 + 1;
    }
    *param_2 = (int)pbVar5 - (int)param_1;
    *param_4 = (int)pbVar7 - (int)param_3;
    iVar3 = *param_2;
  }
  return iVar3;
}


