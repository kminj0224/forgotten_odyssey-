/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a2cbc  Symbol: FUN_001a2cbc */

int FUN_001a2cbc(byte *param_1,int *param_2,ushort *param_3,uint *param_4)

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
  ushort *local_44;
  
  iVar8 = *param_2;
  iVar6 = DAT_001a2e24 + 0x1a2cd4;
  uVar3 = DAT_001a2e28 & *param_4;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  if (uVar3 == 1) {
    *param_4 = *param_4 - 1;
  }
  uVar3 = *param_4;
  iVar6 = *(int *)(iVar6 + DAT_001a2e2c);
  pbVar4 = param_1;
  local_44 = param_3;
  while (local_44 < param_3 + (int)uVar3 / 2) {
    puVar9 = local_44 + 1;
    if (iVar6 == 0) {
      uVar1 = *local_44;
    }
    else {
      uVar1 = CONCAT11(*(undefined *)local_44,*(undefined *)((int)local_44 + 1));
    }
    uVar7 = (uint)uVar1;
    puVar10 = puVar9;
    if ((uVar7 & 0xfc00) == 0xd800) {
      if (param_3 + (int)uVar3 / 2 <= puVar9) {
LAB_001a2d7a:
        *param_2 = (int)pbVar4 - (int)param_1;
        *param_4 = (int)local_44 - (int)param_3;
        return -2;
      }
      puVar10 = local_44 + 2;
      if (iVar6 == 0) {
        uVar1 = *puVar9;
      }
      else {
        uVar1 = CONCAT11(*(undefined *)puVar9,*(undefined *)((int)local_44 + 3));
      }
      if ((uVar1 & 0xfc00) != 0xdc00) goto LAB_001a2d7a;
      uVar7 = ((uVar7 & DAT_001a2e30) * 0x400 | DAT_001a2e30 & uVar1) + 0x10000;
    }
    if (param_1 + iVar8 <= pbVar4) break;
    if (uVar7 < 0x80) {
      *pbVar4 = (byte)uVar7;
      uVar5 = 0xfffffffa;
    }
    else if (DAT_001a2e34 < uVar7) {
      if (DAT_001a2e38 < uVar7) {
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
    while ((pbVar4 = pbVar4 + 1, local_44 = puVar10, -1 < (int)uVar5 && (pbVar4 < param_1 + iVar8)))
    {
      uVar2 = uVar5 & 0xff;
      uVar5 = uVar5 - 6;
      *pbVar4 = (byte)(uVar7 >> uVar2) & 0x3f | 0x80;
    }
  }
  *param_2 = (int)pbVar4 - (int)param_1;
  *param_4 = (int)local_44 - (int)param_3;
  return *param_2;
}


