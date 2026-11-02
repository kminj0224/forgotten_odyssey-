/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b56bc  Symbol: FUN_001b56bc */

void FUN_001b56bc(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x70);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    while( true ) {
      if (0 < iVar4) {
        iVar7 = 0;
        piVar8 = param_2;
        do {
          iVar6 = *(int *)(*piVar8 + param_3);
          if (iVar5 != 0) {
            puVar3 = (undefined *)(*param_4 + iVar7);
            iVar2 = 0;
            do {
              puVar1 = (undefined *)(iVar6 + iVar2);
              iVar2 = iVar2 + 1;
              *puVar3 = *puVar1;
              puVar3 = puVar3 + iVar4;
            } while (iVar2 != iVar5);
          }
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar7 != iVar4);
      }
      param_3 = param_3 + 4;
      bVar9 = param_5 == 0;
      param_5 = param_5 + -1;
      if (bVar9) break;
      param_4 = param_4 + 1;
    }
  }
  return;
}


