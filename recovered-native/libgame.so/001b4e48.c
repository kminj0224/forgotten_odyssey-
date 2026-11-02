/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b4e48  Symbol: FUN_001b4e48 */

undefined4 FUN_001b4e48(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_60;
  int local_5c;
  int *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  
  iVar5 = *(int *)(param_1 + 0x1c0);
  uVar6 = *(int *)(param_1 + 0x164) - 1;
  iVar7 = *(int *)(param_1 + 0x148);
  local_44 = *(int *)(iVar5 + 0x18);
  iVar8 = *(int *)(iVar5 + 0x1c);
  do {
    if (iVar8 <= local_44) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      uVar6 = *(int *)(param_1 + 0x94) + 1;
      *(uint *)(param_1 + 0x94) = uVar6;
      if (uVar6 < *(uint *)(param_1 + 0x148)) {
        iVar5 = *(int *)(param_1 + 0x1c0);
        if (*(int *)(param_1 + 0x150) < 2) {
          if (uVar6 < *(uint *)(param_1 + 0x148) - 1) {
            *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x154) + 0xc);
          }
          else {
            *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x154) + 0x4c);
          }
        }
        else {
          *(undefined4 *)(iVar5 + 0x1c) = 1;
        }
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        uVar2 = 3;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x1c8) + 0xc))(param_1);
        uVar2 = 4;
      }
      return uVar2;
    }
    local_40 = *(uint *)(iVar5 + 0x14);
    if (local_40 <= uVar6) {
      do {
        jzero_far(*(undefined4 *)(iVar5 + 0x20),*(int *)(param_1 + 0x16c) << 7);
        iVar8 = (**(code **)(*(int *)(param_1 + 0x1d0) + 4))(param_1,iVar5 + 0x20);
        if (iVar8 == 0) {
          *(int *)(iVar5 + 0x18) = local_44;
          *(uint *)(iVar5 + 0x14) = local_40;
          return 0;
        }
        if (0 < *(int *)(param_1 + 0x150)) {
          local_4c = (int *)(param_1 + 0x154);
          local_48 = 0;
          local_5c = 0;
          do {
            iVar8 = *local_4c;
            if (*(int *)(iVar8 + 0x34) == 0) {
              local_5c = local_5c + *(int *)(iVar8 + 0x40);
            }
            else {
              iVar9 = *(int *)(iVar8 + 4) * 4;
              pcVar3 = *(code **)(*(int *)(param_1 + 0x1d4) + iVar9 + 4);
              if (local_40 < uVar6) {
                iVar1 = *(int *)(iVar8 + 0x38);
              }
              else {
                iVar1 = *(int *)(iVar8 + 0x48);
              }
              iVar10 = *(int *)(iVar8 + 0x44);
              iVar4 = *(int *)(iVar8 + 0x28);
              iVar11 = *(int *)(iVar8 + 0x3c);
              if (0 < iVar11) {
                iVar9 = *(int *)(param_2 + iVar9) + local_44 * iVar4 * 4;
                local_60 = 0;
                while( true ) {
                  if (((*(uint *)(param_1 + 0x94) < iVar7 - 1U) ||
                      (local_60 + local_44 < *(int *)(iVar8 + 0x4c))) && (0 < iVar1)) {
                    puVar12 = (undefined4 *)(iVar5 + (local_5c + 8) * 4);
                    iVar11 = 0;
                    iVar4 = local_40 * iVar10;
                    do {
                      uVar2 = *puVar12;
                      puVar12 = puVar12 + 1;
                      (*pcVar3)(param_1,iVar8,uVar2,iVar9,iVar4);
                      iVar11 = iVar11 + 1;
                      iVar4 = iVar4 + *(int *)(iVar8 + 0x24);
                    } while (iVar11 < iVar1);
                    iVar4 = *(int *)(iVar8 + 0x28);
                    iVar11 = *(int *)(iVar8 + 0x3c);
                  }
                  local_5c = local_5c + *(int *)(iVar8 + 0x38);
                  local_60 = local_60 + 1;
                  if (iVar11 <= local_60) break;
                  iVar9 = iVar9 + iVar4 * 4;
                }
              }
            }
            local_48 = local_48 + 1;
            local_4c = local_4c + 1;
          } while (local_48 < *(int *)(param_1 + 0x150));
        }
        local_40 = local_40 + 1;
      } while (local_40 <= uVar6);
      iVar8 = *(int *)(iVar5 + 0x1c);
    }
    *(undefined4 *)(iVar5 + 0x14) = 0;
    local_44 = local_44 + 1;
  } while( true );
}


