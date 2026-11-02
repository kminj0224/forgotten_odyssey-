/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad64c  Symbol: FUN_001ad64c */

void FUN_001ad64c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar3 = *(int *)(param_1 + 0x1e0);
  if (*(int *)(param_1 + 0x58) == 1) {
    *(undefined4 *)(iVar3 + 0x1c) = 1;
    local_34 = 0x1fe;
  }
  else {
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    local_34 = 0;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,local_34 + 0x100,*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(iVar3 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(iVar3 + 0x14);
  if (0 < *(int *)(param_1 + 0x78)) {
    local_30 = 0;
    local_2c = 0;
    do {
      iVar7 = *(int *)(iVar3 + local_30 + 0x20);
      uVar1 = __divsi3(uVar1,iVar7);
      if (local_34 != 0) {
        piVar4 = (int *)(*(int *)(iVar3 + 0x18) + local_30);
        *piVar4 = *piVar4 + 0xff;
      }
      iVar9 = 0;
      iVar10 = 0;
      puVar5 = *(undefined **)(*(int *)(iVar3 + 0x18) + local_30);
      iVar6 = (iVar7 + -1) * 2;
      iVar2 = __divsi3(iVar7 + 0xfe,iVar6);
      do {
        if (iVar2 < iVar9) {
          iVar10 = iVar10 + 1;
          iVar8 = iVar7 + 0xfe + iVar10 * 0x1fe;
          while( true ) {
            iVar2 = __divsi3(iVar8,iVar6);
            iVar8 = iVar8 + 0x1fe;
            if (iVar9 <= iVar2) break;
            iVar10 = iVar10 + 1;
          }
        }
        puVar5[iVar9] = (char)iVar10 * (char)uVar1;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x100);
      if (local_34 != 0) {
        iVar7 = 1;
        do {
          puVar5[-iVar7] = *puVar5;
          iVar2 = iVar7 + 0xff;
          iVar7 = iVar7 + 1;
          puVar5[iVar2] = puVar5[0xff];
        } while (iVar7 != 0x100);
      }
      local_2c = local_2c + 1;
      local_30 = local_30 + 4;
    } while (local_2c < *(int *)(param_1 + 0x78));
  }
  return;
}


