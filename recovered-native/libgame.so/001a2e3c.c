/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a2e3c  Symbol: FUN_001a2e3c */

int FUN_001a2e3c(ushort *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *local_2c;
  
  if (((param_2 == (int *)0x0) || (param_1 == (ushort *)0x0)) || (param_4 == (int *)0x0)) {
    iVar3 = 1;
LAB_001a2fb2:
    iVar3 = -iVar3;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    iVar3 = 0;
    *param_4 = 0;
  }
  else {
    pbVar10 = param_3 + *param_4;
    iVar3 = *param_2;
    iVar6 = *(int *)(DAT_001a2fb8 + 0x1a2e46 + DAT_001a2fbc);
    puVar5 = param_1;
    local_2c = param_3;
    while (local_2c < pbVar10) {
      uVar7 = (uint)*local_2c;
      iVar11 = 0;
      if (0x7f < uVar7) {
        if (uVar7 < 0xc0) {
          *param_2 = (int)puVar5 - (int)param_1 >> 1;
LAB_001a2ed0:
          *param_4 = (int)local_2c - (int)param_3;
          iVar3 = 2;
          goto LAB_001a2fb2;
        }
        if (uVar7 < 0xe0) {
          uVar7 = uVar7 & 0x1f;
          iVar11 = 1;
        }
        else if (uVar7 < 0xf0) {
          uVar7 = uVar7 & 0xf;
          iVar11 = 2;
        }
        else {
          if (0xf7 < uVar7) {
            *param_2 = (int)puVar5 - (int)param_1 >> 1;
            goto LAB_001a2ed0;
          }
          uVar7 = uVar7 & 7;
          iVar11 = 3;
        }
      }
      pbVar9 = local_2c + 1;
      if ((int)pbVar10 - (int)pbVar9 < iVar11) break;
      while ((iVar11 != 0 && (pbVar9 < pbVar10))) {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        if ((bVar1 & 0xc0) != 0x80) break;
        uVar7 = uVar7 << 6 | bVar1 & 0x3f;
        iVar11 = iVar11 + -1;
      }
      if (DAT_001a2fc0 < uVar7) {
        if ((DAT_001a2fc4 < uVar7) || (puVar4 = puVar5 + 1, param_1 + iVar3 / 2 <= puVar4)) break;
        uVar7 = uVar7 + DAT_001a2fc8;
        if (iVar6 == 0) {
          *puVar5 = (ushort)DAT_001a2fcc | (ushort)(uVar7 >> 10);
          *puVar4 = (ushort)uVar7 & (ushort)DAT_001a2fd0 | (ushort)DAT_001a2fd4;
          puVar5 = puVar5 + 2;
          local_2c = pbVar9;
        }
        else {
          uVar8 = DAT_001a2fcc | uVar7 >> 10;
          *(char *)puVar5 = (char)(uVar8 >> 8);
          uVar2 = DAT_001a2fd0;
          *(char *)((int)puVar5 + 1) = (char)uVar8;
          uVar7 = uVar7 & uVar2 | DAT_001a2fd4;
          *(char *)puVar4 = (char)(uVar7 >> 8);
          *(char *)((int)puVar5 + 3) = (char)uVar7;
          puVar5 = puVar5 + 2;
          local_2c = pbVar9;
        }
      }
      else {
        if (param_1 + iVar3 / 2 <= puVar5) break;
        if (iVar6 == 0) {
          *puVar5 = (ushort)uVar7;
          puVar5 = puVar5 + 1;
          local_2c = pbVar9;
        }
        else {
          *(char *)puVar5 = (char)(uVar7 >> 8);
          *(char *)((int)puVar5 + 1) = (char)uVar7;
          puVar5 = puVar5 + 1;
          local_2c = pbVar9;
        }
      }
    }
    *param_2 = (int)puVar5 - (int)param_1;
    *param_4 = (int)local_2c - (int)param_3;
    iVar3 = *param_2;
  }
  return iVar3;
}


