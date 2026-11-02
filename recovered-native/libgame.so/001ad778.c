/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad778  Symbol: FUN_001ad778 */

void FUN_001ad778(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = *(int *)(param_1 + 0x70);
  iVar9 = *(int *)(param_1 + 0x78);
  piVar5 = *(int **)(*(int *)(param_1 + 0x1e0) + 0x18);
  if (0 < param_4) {
    iVar12 = 0;
    iVar13 = 0;
    do {
      iVar11 = 0;
      iVar10 = *(int *)(param_2 + iVar12);
      iVar6 = *(int *)(param_3 + iVar12);
      if (iVar4 != 0) {
        do {
          cVar3 = '\0';
          if (0 < iVar9) {
            iVar7 = 0;
            piVar2 = piVar5;
            do {
              pbVar1 = (byte *)(iVar10 + iVar7);
              iVar8 = *piVar2;
              piVar2 = piVar2 + 1;
              iVar7 = iVar7 + 1;
              cVar3 = cVar3 + *(char *)(iVar8 + (uint)*pbVar1);
            } while (iVar7 != iVar9);
            iVar10 = iVar10 + iVar9;
          }
          *(char *)(iVar6 + iVar11) = cVar3;
          iVar11 = iVar11 + 1;
        } while (iVar4 != iVar11);
      }
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar13 != param_4);
  }
  return;
}


