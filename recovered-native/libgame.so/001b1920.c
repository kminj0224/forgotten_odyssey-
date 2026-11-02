/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1920  Symbol: FUN_001b1920 */

void FUN_001b1920(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  undefined uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  iVar4 = *(int *)(param_1 + 0x4c);
  uVar5 = *(uint *)(param_1 + 0x1c);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    while( true ) {
      if (0 < iVar4) {
        iVar8 = 0;
        piVar7 = param_3;
        do {
          iVar6 = *(int *)(*piVar7 + param_4);
          if (uVar5 != 0) {
            puVar3 = (undefined *)(*param_2 + iVar8);
            uVar2 = 0;
            do {
              uVar1 = *puVar3;
              puVar3 = puVar3 + iVar4;
              *(undefined *)(iVar6 + uVar2) = uVar1;
              uVar2 = uVar2 + 1;
            } while (uVar2 < uVar5);
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar8 != iVar4);
      }
      param_4 = param_4 + 4;
      bVar9 = param_5 == 0;
      param_5 = param_5 + -1;
      if (bVar9) break;
      param_2 = param_2 + 1;
    }
  }
  return;
}


