/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad800  Symbol: FUN_001ad800 */

void FUN_001ad800(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = *(int *)(param_1 + 0x70);
  piVar8 = *(int **)(*(int *)(param_1 + 0x1e0) + 0x18);
  iVar4 = *piVar8;
  iVar6 = piVar8[1];
  iVar9 = piVar8[2];
  if (0 < param_4) {
    iVar13 = 0;
    iVar12 = 0;
    do {
      pbVar7 = *(byte **)(param_2 + iVar13);
      iVar11 = *(int *)(param_3 + iVar13);
      if (iVar10 != 0) {
        iVar5 = 0;
        do {
          bVar3 = *pbVar7;
          pbVar1 = pbVar7 + 1;
          pbVar2 = pbVar7 + 2;
          pbVar7 = pbVar7 + 3;
          *(char *)(iVar11 + iVar5) =
               *(char *)(iVar6 + (uint)*pbVar1) + *(char *)(iVar9 + (uint)*pbVar2) +
               *(char *)(iVar4 + (uint)bVar3);
          iVar5 = iVar5 + 1;
        } while (iVar10 != iVar5);
      }
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar12 != param_4);
  }
  return;
}


