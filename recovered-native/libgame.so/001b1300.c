/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1300  Symbol: FUN_001b1300 */

undefined4 FUN_001b1300(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_64;
  int local_58;
  int *local_4c;
  int local_48;
  uint local_40;
  
  iVar13 = *(int *)(param_1 + 400);
  uVar6 = *(int *)(param_1 + 0x134) - 1;
  local_58 = *(int *)(iVar13 + 0x10);
  iVar7 = *(int *)(param_1 + 0x11c);
  iVar8 = *(int *)(iVar13 + 0x14);
  do {
    if (iVar8 <= local_58) {
      *(int *)(iVar13 + 8) = *(int *)(iVar13 + 8) + 1;
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
    local_40 = *(uint *)(iVar13 + 0xc);
    if (local_40 <= uVar6) {
      do {
        if (0 < *(int *)(param_1 + 0x120)) {
          local_48 = 0;
          iVar8 = 0;
          local_4c = (int *)(param_1 + 0x124);
          do {
            iVar12 = *local_4c;
            pcVar9 = *(code **)(*(int *)(param_1 + 0x1a0) + *(int *)(iVar12 + 4) * 4 + 4);
            if (local_40 < uVar6) {
              iVar14 = *(int *)(iVar12 + 0x38);
            }
            else {
              iVar14 = *(int *)(iVar12 + 0x48);
            }
            iVar10 = *(int *)(iVar12 + 0x44);
            if (0 < *(int *)(iVar12 + 0x3c)) {
              iVar11 = local_58 * *(int *)(iVar12 + 0x28);
              local_64 = 0;
              do {
                if ((*(uint *)(iVar13 + 8) < iVar7 - 1U) ||
                   (local_64 + local_58 < *(int *)(iVar12 + 0x4c))) {
                  (*pcVar9)(param_1,iVar12,*(undefined4 *)(*(int *)(iVar12 + 4) * 4 + param_2),
                            *(undefined4 *)((iVar8 + 6) * 4 + iVar13),iVar11,local_40 * iVar10,
                            iVar14);
                  iVar3 = *(int *)(iVar12 + 0x38);
                  if (iVar3 <= iVar14) goto LAB_001b13bc;
                  jzero_far(*(undefined4 *)((iVar14 + iVar8 + 6) * 4 + iVar13),
                            (iVar3 - iVar14) * 0x80);
                  iVar3 = *(int *)(iVar12 + 0x38);
                  if (iVar3 <= iVar14) goto LAB_001b13bc;
                  puVar4 = (undefined4 *)(iVar13 + (iVar14 + iVar8 + 5) * 4);
                  iVar3 = iVar14;
                  do {
                    puVar1 = puVar4 + 1;
                    puVar2 = (undefined2 *)*puVar4;
                    puVar4 = puVar4 + 1;
                    iVar3 = iVar3 + 1;
                    *(undefined2 *)*puVar1 = *puVar2;
                  } while (iVar3 < *(int *)(iVar12 + 0x38));
                  iVar5 = *(int *)(iVar12 + 0x28);
                  iVar8 = iVar8 + *(int *)(iVar12 + 0x38);
                  if (*(int *)(iVar12 + 0x3c) <= local_64 + 1) break;
                }
                else {
                  iVar5 = (iVar8 + 6) * 4;
                  jzero_far(*(undefined4 *)(iVar5 + iVar13),*(int *)(iVar12 + 0x38) << 7);
                  iVar3 = *(int *)(iVar12 + 0x38);
                  if (0 < iVar3) {
                    puVar4 = (undefined4 *)(iVar13 + iVar5);
                    iVar5 = 0;
                    do {
                      puVar2 = (undefined2 *)*puVar4;
                      puVar4 = puVar4 + 1;
                      iVar5 = iVar5 + 1;
                      *puVar2 = **(undefined2 **)((iVar8 + 5) * 4 + iVar13);
                      iVar3 = *(int *)(iVar12 + 0x38);
                    } while (iVar5 < iVar3);
                  }
LAB_001b13bc:
                  iVar5 = *(int *)(iVar12 + 0x28);
                  iVar8 = iVar8 + iVar3;
                  if (*(int *)(iVar12 + 0x3c) <= local_64 + 1) break;
                }
                local_64 = local_64 + 1;
                iVar11 = iVar11 + iVar5;
              } while( true );
            }
            local_48 = local_48 + 1;
            local_4c = local_4c + 1;
          } while (local_48 < *(int *)(param_1 + 0x120));
        }
        iVar8 = (**(code **)(*(int *)(param_1 + 0x1a4) + 4))(param_1,iVar13 + 0x18);
        if (iVar8 == 0) {
          *(int *)(iVar13 + 0x10) = local_58;
          *(uint *)(iVar13 + 0xc) = local_40;
          return 0;
        }
        local_40 = local_40 + 1;
      } while (local_40 <= uVar6);
      iVar8 = *(int *)(iVar13 + 0x14);
    }
    *(undefined4 *)(iVar13 + 0xc) = 0;
    local_58 = local_58 + 1;
  } while( true );
}


