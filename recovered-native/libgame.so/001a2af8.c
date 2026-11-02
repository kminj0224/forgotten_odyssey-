/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a2af8  Symbol: FUN_001a2af8 */

int FUN_001a2af8(ushort *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *local_2c;
  
  if (((param_2 == (int *)0x0) || (param_1 == (ushort *)0x0)) || (param_4 == (int *)0x0)) {
    iVar2 = 1;
LAB_001a2c66:
    iVar2 = -iVar2;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    iVar2 = 0;
    *param_4 = 0;
  }
  else {
    pbVar9 = param_3 + *param_4;
    iVar2 = *param_2;
    iVar5 = *(int *)(DAT_001a2c6c + 0x1a2b02 + DAT_001a2c70);
    puVar4 = param_1;
    local_2c = param_3;
    while (local_2c < pbVar9) {
      uVar6 = (uint)*local_2c;
      iVar10 = 0;
      if (0x7f < uVar6) {
        if (uVar6 < 0xc0) {
          *param_2 = (int)puVar4 - (int)param_1;
LAB_001a2b88:
          *param_4 = (int)local_2c - (int)param_3;
          iVar2 = 2;
          goto LAB_001a2c66;
        }
        if (uVar6 < 0xe0) {
          uVar6 = uVar6 & 0x1f;
          iVar10 = 1;
        }
        else if (uVar6 < 0xf0) {
          uVar6 = uVar6 & 0xf;
          iVar10 = 2;
        }
        else {
          if (0xf7 < uVar6) {
            *param_2 = (int)puVar4 - (int)param_1;
            goto LAB_001a2b88;
          }
          uVar6 = uVar6 & 7;
          iVar10 = 3;
        }
      }
      pbVar8 = local_2c + 1;
      if ((int)pbVar9 - (int)pbVar8 < iVar10) break;
      while ((iVar10 != 0 && (pbVar8 < pbVar9))) {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if ((bVar1 & 0xc0) != 0x80) break;
        uVar6 = uVar6 << 6 | bVar1 & 0x3f;
        iVar10 = iVar10 + -1;
      }
      if (DAT_001a2c74 < uVar6) {
        if ((DAT_001a2c78 < uVar6) || (puVar3 = puVar4 + 1, param_1 + iVar2 / 2 <= puVar3)) break;
        uVar6 = uVar6 + DAT_001a2c7c;
        if (iVar5 == 0) {
          uVar7 = DAT_001a2c80 | uVar6 >> 10;
          *(char *)puVar4 = (char)uVar7;
          *(char *)((int)puVar4 + 1) = (char)(uVar7 >> 8);
          uVar6 = uVar6 & DAT_001a2c84 | DAT_001a2c88;
          *(char *)puVar3 = (char)uVar6;
          *(char *)((int)puVar4 + 3) = (char)(uVar6 >> 8);
          puVar4 = puVar4 + 2;
          local_2c = pbVar8;
        }
        else {
          local_2c._0_2_ = (ushort)DAT_001a2c80 | (ushort)(uVar6 >> 10);
          *puVar4 = (ushort)local_2c;
          *puVar3 = (ushort)uVar6 & (ushort)DAT_001a2c84 | (ushort)DAT_001a2c88;
          puVar4 = puVar4 + 2;
          local_2c = pbVar8;
        }
      }
      else {
        if (param_1 + iVar2 / 2 <= puVar4) break;
        if (iVar5 == 0) {
          *(char *)puVar4 = (char)uVar6;
          *(char *)((int)puVar4 + 1) = (char)(uVar6 >> 8);
          puVar4 = puVar4 + 1;
          local_2c = pbVar8;
        }
        else {
          *puVar4 = (ushort)uVar6;
          puVar4 = puVar4 + 1;
          local_2c = pbVar8;
        }
      }
    }
    *param_2 = (int)puVar4 - (int)param_1;
    *param_4 = (int)local_2c - (int)param_3;
    iVar2 = *param_2;
  }
  return iVar2;
}


