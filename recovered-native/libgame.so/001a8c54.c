/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8c54  Symbol: FUN_001a8c54 */

void FUN_001a8c54(int param_1,int param_2,byte **param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte **ppbVar14;
  
  uVar13 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar10 = *(int *)(param_1 + 0x110);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar11 = uVar13 * 2 - iVar5;
  if (0 < iVar11) {
    if (iVar10 < 1) {
      return;
    }
    iVar12 = 0;
    ppbVar14 = param_3;
    do {
      pbVar8 = *ppbVar14 + iVar5;
      bVar3 = pbVar8[-1];
      pbVar6 = pbVar8 + iVar11;
      do {
        *pbVar8 = bVar3;
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 != pbVar6);
      iVar12 = iVar12 + 1;
      ppbVar14 = ppbVar14 + 1;
    } while (iVar12 != iVar10);
    iVar10 = *(int *)(param_1 + 0x110);
  }
  if (0 < iVar10) {
    iVar5 = 0;
    do {
      iVar10 = *param_4;
      pbVar6 = *param_3;
      pbVar8 = param_3[1];
      if (uVar13 != 0) {
        uVar7 = 1;
        uVar9 = 0;
        do {
          bVar3 = *pbVar6;
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 2;
          bVar4 = *pbVar8;
          pbVar2 = pbVar8 + 1;
          pbVar8 = pbVar8 + 2;
          *(char *)(iVar10 + uVar9) =
               (char)((int)((uint)*pbVar1 + (uint)bVar3 + (uint)bVar4 + (uint)*pbVar2 + uVar7) >> 2)
          ;
          uVar9 = uVar9 + 1;
          uVar7 = uVar7 ^ 3;
        } while (uVar9 < uVar13);
      }
      iVar5 = iVar5 + 2;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
    } while (iVar5 < *(int *)(param_1 + 0x110));
  }
  return;
}


