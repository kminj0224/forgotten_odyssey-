/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8a70  Symbol: FUN_001a8a70 */

void FUN_001a8a70(int param_1,int param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  undefined uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int *local_34;
  int local_30;
  
  uVar10 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x19c) + *(int *)(param_2 + 4);
  uVar9 = (uint)*(byte *)(iVar4 + 0x5c);
  uVar11 = (uint)*(byte *)(iVar4 + 0x66);
  iVar5 = *(int *)(param_1 + 0x110);
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar4 = uVar9 * uVar10 - iVar6;
  if (0 < iVar4) {
    piVar12 = param_3;
    for (iVar13 = 0; iVar13 < iVar5; iVar13 = iVar13 + 1) {
      puVar7 = (undefined *)(*piVar12 + iVar6);
      uVar2 = puVar7[-1];
      puVar3 = puVar7 + iVar4;
      do {
        *puVar7 = uVar2;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar3);
      piVar12 = piVar12 + 1;
    }
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    local_30 = 0;
    local_34 = param_4;
    do {
      iVar4 = *local_34;
      if (uVar10 != 0) {
        iVar5 = 0;
        uVar14 = 0;
        while( true ) {
          iVar6 = 0;
          if (uVar11 != 0) {
            iVar6 = 0;
            iVar13 = 0;
            piVar12 = param_3;
            do {
              if (uVar9 != 0) {
                iVar8 = 0;
                do {
                  pbVar1 = (byte *)(*piVar12 + iVar5 + iVar8);
                  iVar8 = iVar8 + 1;
                  iVar6 = iVar6 + (uint)*pbVar1;
                } while (iVar8 < (int)uVar9);
              }
              iVar13 = iVar13 + 1;
              piVar12 = piVar12 + 1;
            } while (iVar13 < (int)uVar11);
          }
          uVar2 = __divsi3(iVar6 + ((int)(uVar11 * uVar9) >> 1),uVar11 * uVar9);
          *(undefined *)(iVar4 + uVar14) = uVar2;
          uVar14 = uVar14 + 1;
          if (uVar10 < uVar14 || uVar10 - uVar14 == 0) break;
          iVar5 = iVar5 + uVar9;
        }
      }
      local_34 = local_34 + 1;
      local_30 = uVar11 + local_30;
      param_3 = param_3 + uVar11;
    } while (local_30 < *(int *)(param_1 + 0x110));
  }
  return;
}


