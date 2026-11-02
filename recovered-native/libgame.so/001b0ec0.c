/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b0ec0  Symbol: FUN_001b0ec0 */

undefined4 FUN_001b0ec0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint local_58;
  int local_50;
  int local_48;
  int local_38 [5];
  
  iVar7 = *(int *)(param_1 + 400);
  iVar10 = 0;
  for (iVar13 = 0; iVar13 < *(int *)(param_1 + 0x120); iVar13 = iVar13 + 1) {
    iVar2 = *(int *)(param_1 + iVar10 + 0x124);
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                      (param_1,*(undefined4 *)((*(int *)(iVar2 + 4) + 0x10) * 4 + iVar7),
                       iVar4 * *(int *)(iVar7 + 8),iVar4,0);
    *(undefined4 *)((int)local_38 + iVar10) = uVar1;
    iVar10 = iVar10 + 4;
  }
  local_48 = *(int *)(iVar7 + 0x10);
  local_50 = local_48 << 2;
  iVar10 = *(int *)(iVar7 + 0x14);
  do {
    if (iVar10 <= local_48) {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      iVar7 = *(int *)(param_1 + 400);
      if (*(int *)(param_1 + 0x120) < 2) {
        if (*(uint *)(iVar7 + 8) < *(int *)(param_1 + 0x11c) - 1U) {
          *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc);
        }
        else {
          *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x4c);
        }
      }
      else {
        *(undefined4 *)(iVar7 + 0x14) = 1;
      }
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(undefined4 *)(iVar7 + 0x10) = 0;
      return 1;
    }
    local_58 = *(uint *)(iVar7 + 0xc);
    if (local_58 < *(uint *)(param_1 + 0x134)) {
      do {
        if (0 < *(int *)(param_1 + 0x120)) {
          iVar13 = 0;
          iVar2 = 0;
          iVar10 = 0;
          do {
            iVar12 = *(int *)(param_1 + iVar13 + 0x124);
            iVar5 = *(int *)(iVar12 + 0x3c);
            iVar4 = *(int *)(iVar12 + 0x38);
            if (0 < iVar5) {
              iVar3 = iVar4 * 0x80;
              iVar8 = 0;
              piVar9 = (int *)(*(int *)((int)local_38 + iVar13) + local_50);
              do {
                if (0 < iVar4) {
                  iVar5 = *piVar9 + iVar3 * local_58;
                  piVar11 = (int *)((iVar10 + 6) * 4 + iVar7);
                  iVar6 = 0;
                  do {
                    *piVar11 = iVar5;
                    piVar11 = piVar11 + 1;
                    iVar4 = *(int *)(iVar12 + 0x38);
                    iVar6 = iVar6 + 1;
                    iVar10 = iVar10 + 1;
                    iVar5 = iVar5 + 0x80;
                  } while (iVar6 < iVar4);
                  iVar5 = *(int *)(iVar12 + 0x3c);
                }
                iVar8 = iVar8 + 1;
                piVar9 = piVar9 + 1;
              } while (iVar8 < iVar5);
            }
            iVar2 = iVar2 + 1;
            iVar13 = iVar13 + 4;
          } while (iVar2 < *(int *)(param_1 + 0x120));
        }
        iVar10 = (**(code **)(*(int *)(param_1 + 0x1a4) + 4))(param_1,iVar7 + 0x18);
        if (iVar10 == 0) {
          *(int *)(iVar7 + 0x10) = local_48;
          *(uint *)(iVar7 + 0xc) = local_58;
          return 0;
        }
        local_58 = local_58 + 1;
      } while (local_58 < *(uint *)(param_1 + 0x134));
      iVar10 = *(int *)(iVar7 + 0x14);
    }
    *(undefined4 *)(iVar7 + 0xc) = 0;
    local_48 = local_48 + 1;
    local_50 = local_50 + 4;
  } while( true );
}


