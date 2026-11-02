/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a2970  Symbol: FUN_001a2970 */

int FUN_001a2970(byte *param_1,int *param_2,ushort *param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint local_3c;
  ushort *local_38;
  
  iVar8 = *param_2;
  iVar6 = DAT_001a2ae0 + 0x1a2988;
  uVar3 = DAT_001a2ae4 & *param_4;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  if (uVar3 == 1) {
    *param_4 = *param_4 - 1;
  }
  uVar3 = *param_4;
  iVar6 = *(int *)(iVar6 + DAT_001a2ae8);
  pbVar4 = param_1;
  local_38 = param_3;
  do {
    if ((param_3 + (int)uVar3 / 2 <= local_38) || (*param_2 <= ((int)pbVar4 - (int)param_1) + 5))
    goto LAB_001a2acc;
    puVar9 = local_38 + 1;
    if (iVar6 == 0) {
      uVar1 = *local_38;
    }
    else {
      uVar1 = *local_38;
    }
    uVar7 = (uint)uVar1;
    puVar10 = puVar9;
    if ((uVar7 & 0xfc00) == 0xd800) {
      if (param_3 + (int)uVar3 / 2 <= puVar9) {
LAB_001a2acc:
        *param_2 = (int)pbVar4 - (int)param_1;
        *param_4 = (int)local_38 - (int)param_3;
        return *param_2;
      }
      puVar10 = local_38 + 2;
      if (iVar6 == 0) {
        uVar1 = *puVar9;
      }
      else {
        uVar1 = *puVar9;
      }
      local_3c = (uint)uVar1;
      if ((local_3c & 0xfc00) != 0xdc00) {
        *param_2 = (int)pbVar4 - (int)param_1;
        *param_4 = (int)local_38 - (int)param_3;
        return -2;
      }
      uVar7 = ((uVar7 & DAT_001a2aec) << 10 | local_3c & DAT_001a2aec) + 0x10000;
    }
    if (param_1 + iVar8 <= pbVar4) goto LAB_001a2acc;
    if (uVar7 < 0x80) {
      *pbVar4 = (byte)uVar7;
      uVar5 = 0xfffffffa;
    }
    else if (DAT_001a2af0 < uVar7) {
      if (DAT_001a2af4 < uVar7) {
        *pbVar4 = (byte)(uVar7 >> 0x12) | 0xf0;
        uVar5 = 0xc;
      }
      else {
        *pbVar4 = (byte)(uVar7 >> 8) >> 4 | 0xe0;
        uVar5 = 6;
      }
    }
    else {
      *pbVar4 = (byte)((uVar7 << 0x15) >> 0x1b) | 0xc0;
      uVar5 = 0;
    }
    while ((pbVar4 = pbVar4 + 1, local_38 = puVar10, -1 < (int)uVar5 && (pbVar4 < param_1 + iVar8)))
    {
      uVar2 = uVar5 & 0xff;
      uVar5 = uVar5 - 6;
      *pbVar4 = (byte)(uVar7 >> uVar2) & 0x3f | 0x80;
    }
  } while( true );
}


