/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8b94  Symbol: FUN_001a8b94 */

void FUN_001a8b94(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar14 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar13 = *(int *)(param_1 + 0x110);
  iVar10 = uVar14 * 2 - iVar5;
  if (0 < iVar10) {
    if (iVar13 < 1) {
      return;
    }
    iVar11 = 0;
    piVar12 = param_3;
    do {
      puVar8 = (undefined *)(*piVar12 + iVar5);
      uVar2 = puVar8[-1];
      puVar6 = puVar8 + iVar10;
      do {
        *puVar8 = uVar2;
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar6);
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar11 != iVar13);
    iVar13 = *(int *)(param_1 + 0x110);
  }
  if (0 < iVar13) {
    iVar10 = 0;
    iVar5 = 0;
    do {
      iVar13 = *(int *)(param_4 + iVar5);
      pbVar9 = *(byte **)((int)param_3 + iVar5);
      if (uVar14 != 0) {
        uVar4 = 0;
        uVar7 = 0;
        do {
          pbVar1 = pbVar9 + 1;
          bVar3 = *pbVar9;
          pbVar9 = pbVar9 + 2;
          *(char *)(iVar13 + uVar7) = (char)((int)((uint)*pbVar1 + (uint)bVar3 + uVar4) >> 1);
          uVar7 = uVar7 + 1;
          uVar4 = uVar4 ^ 1;
        } while (uVar7 < uVar14);
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar10 < *(int *)(param_1 + 0x110));
  }
  return;
}


