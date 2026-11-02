/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b48c0  Symbol: FUN_001b48c0 */

undefined4 FUN_001b48c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint local_58;
  int local_50;
  int local_48;
  int local_38 [5];
  
  iVar8 = *(int *)(param_1 + 0x1c0);
  iVar11 = 0;
  for (iVar14 = 0; iVar14 < *(int *)(param_1 + 0x150); iVar14 = iVar14 + 1) {
    iVar2 = *(int *)(param_1 + iVar11 + 0x154);
    iVar5 = *(int *)(iVar2 + 0xc);
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                      (param_1,*(undefined4 *)((*(int *)(iVar2 + 4) + 0x12) * 4 + iVar8),
                       iVar5 * *(int *)(param_1 + 0x94),iVar5,1);
    *(undefined4 *)((int)local_38 + iVar11) = uVar1;
    iVar11 = iVar11 + 4;
  }
  local_48 = *(int *)(iVar8 + 0x18);
  local_50 = local_48 << 2;
  iVar11 = *(int *)(iVar8 + 0x1c);
  do {
    if (iVar11 <= local_48) {
      uVar4 = *(int *)(param_1 + 0x94) + 1;
      *(uint *)(param_1 + 0x94) = uVar4;
      if (uVar4 < *(uint *)(param_1 + 0x148)) {
        iVar8 = *(int *)(param_1 + 0x1c0);
        if (*(int *)(param_1 + 0x150) < 2) {
          if (uVar4 < *(uint *)(param_1 + 0x148) - 1) {
            *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x154) + 0xc);
          }
          else {
            *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x154) + 0x4c);
          }
        }
        else {
          *(undefined4 *)(iVar8 + 0x1c) = 1;
        }
        *(undefined4 *)(iVar8 + 0x14) = 0;
        *(undefined4 *)(iVar8 + 0x18) = 0;
        uVar1 = 3;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x1c8) + 0xc))(param_1);
        uVar1 = 4;
      }
      return uVar1;
    }
    local_58 = *(uint *)(iVar8 + 0x14);
    if (local_58 < *(uint *)(param_1 + 0x164)) {
      do {
        if (0 < *(int *)(param_1 + 0x150)) {
          iVar14 = 0;
          iVar2 = 0;
          iVar11 = 0;
          do {
            iVar13 = *(int *)(param_1 + iVar14 + 0x154);
            iVar6 = *(int *)(iVar13 + 0x3c);
            iVar5 = *(int *)(iVar13 + 0x38);
            if (0 < iVar6) {
              iVar3 = iVar5 * 0x80;
              iVar9 = 0;
              piVar10 = (int *)(*(int *)((int)local_38 + iVar14) + local_50);
              do {
                if (0 < iVar5) {
                  iVar6 = *piVar10 + iVar3 * local_58;
                  piVar12 = (int *)((iVar11 + 8) * 4 + iVar8);
                  iVar7 = 0;
                  do {
                    *piVar12 = iVar6;
                    piVar12 = piVar12 + 1;
                    iVar5 = *(int *)(iVar13 + 0x38);
                    iVar7 = iVar7 + 1;
                    iVar11 = iVar11 + 1;
                    iVar6 = iVar6 + 0x80;
                  } while (iVar7 < iVar5);
                  iVar6 = *(int *)(iVar13 + 0x3c);
                }
                iVar9 = iVar9 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar9 < iVar6);
            }
            iVar2 = iVar2 + 1;
            iVar14 = iVar14 + 4;
          } while (iVar2 < *(int *)(param_1 + 0x150));
        }
        iVar11 = (**(code **)(*(int *)(param_1 + 0x1d0) + 4))(param_1,iVar8 + 0x20);
        if (iVar11 == 0) {
          *(int *)(iVar8 + 0x18) = local_48;
          *(uint *)(iVar8 + 0x14) = local_58;
          return 0;
        }
        local_58 = local_58 + 1;
      } while (local_58 < *(uint *)(param_1 + 0x164));
      iVar11 = *(int *)(iVar8 + 0x1c);
    }
    *(undefined4 *)(iVar8 + 0x14) = 0;
    local_48 = local_48 + 1;
    local_50 = local_50 + 4;
  } while( true );
}


