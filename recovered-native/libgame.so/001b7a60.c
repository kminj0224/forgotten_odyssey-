/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b7a60  Symbol: FUN_001b7a60 */

void FUN_001b7a60(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int local_40;
  
  iVar9 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(iVar9 + 0x30) == 0) {
    iVar6 = (**(code **)(*(int *)(param_1 + 0x1c0) + 0xc))
                      (param_1,*(undefined4 *)((*(int *)(iVar9 + 0x40) + 0xe) * 4 + iVar9));
    if (iVar6 == 0) {
      return;
    }
    *(undefined4 *)(iVar9 + 0x30) = 1;
    *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
  }
  iVar6 = *(int *)(iVar9 + 0x44);
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      (**(code **)(*(int *)(param_1 + 0x1c4) + 4))
                (param_1,*(undefined4 *)((*(int *)(iVar9 + 0x40) + 0xe) * 4 + iVar9),iVar9 + 0x34,
                 *(undefined4 *)(iVar9 + 0x48),param_2,param_3,param_4);
      if (*(uint *)(iVar9 + 0x34) < *(uint *)(iVar9 + 0x48)) {
        return;
      }
      *(undefined4 *)(iVar9 + 0x44) = 0;
      if (param_4 <= *param_3) {
        return;
      }
    }
    else if (iVar6 != 0) {
      return;
    }
    *(undefined4 *)(iVar9 + 0x34) = 0;
    *(int *)(iVar9 + 0x48) = *(int *)(param_1 + 0x144) + -1;
    if (*(int *)(iVar9 + 0x4c) == *(int *)(param_1 + 0x148)) {
      iVar15 = *(int *)(param_1 + 0x1bc);
      iVar6 = *(int *)(param_1 + 0xd8);
      if (0 < *(int *)(param_1 + 0x24)) {
        iVar7 = 0;
        while( true ) {
          iVar3 = *(int *)(iVar6 + 0x28) * *(int *)(iVar6 + 0xc);
          iVar14 = __divsi3(iVar3,*(undefined4 *)(param_1 + 0x144));
          __aeabi_uidivmod(*(undefined4 *)(iVar6 + 0x30),iVar3);
          iVar12 = extraout_r1;
          if (extraout_r1 == 0) {
            iVar12 = iVar3;
          }
          if (iVar7 == 0) {
            iVar3 = __divsi3(iVar12 + -1,iVar14);
            *(int *)(iVar15 + 0x48) = iVar3 + 1;
          }
          iVar3 = *(int *)(iVar7 * 4 + *(int *)((*(int *)(iVar15 + 0x40) + 0xe) * 4 + iVar15));
          if (0 < iVar14 * 2) {
            puVar2 = (undefined4 *)(iVar3 + iVar12 * 4);
            iVar4 = 0;
            do {
              iVar4 = iVar4 + 1;
              *puVar2 = *(undefined4 *)((iVar12 + -1) * 4 + iVar3);
              puVar2 = puVar2 + 1;
            } while (iVar4 != iVar14 * 2);
          }
          iVar7 = iVar7 + 1;
          if (*(int *)(param_1 + 0x24) <= iVar7) break;
          iVar6 = iVar6 + 0x58;
        }
      }
    }
    *(undefined4 *)(iVar9 + 0x44) = 1;
  }
  (**(code **)(*(int *)(param_1 + 0x1c4) + 4))
            (param_1,*(undefined4 *)((*(int *)(iVar9 + 0x40) + 0xe) * 4 + iVar9),iVar9 + 0x34,
             *(undefined4 *)(iVar9 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar9 + 0x48) <= *(uint *)(iVar9 + 0x34)) {
    if (*(int *)(iVar9 + 0x4c) == 1) {
      iVar7 = *(int *)(param_1 + 0x1bc);
      iVar15 = *(int *)(param_1 + 0xd8);
      iVar12 = *(int *)(param_1 + 0x24);
      iVar6 = *(int *)(param_1 + 0x144);
      if (0 < iVar12) {
        iVar3 = iVar6 + 1;
        iVar14 = iVar6 + 2;
        local_40 = 0;
        while( true ) {
          iVar6 = __divsi3(*(int *)(iVar15 + 0x28) * *(int *)(iVar15 + 0xc),iVar6);
          iVar4 = *(int *)(*(int *)(iVar7 + 0x38) + local_40 * 4);
          iVar5 = *(int *)(*(int *)(iVar7 + 0x3c) + local_40 * 4);
          if (0 < iVar6) {
            iVar12 = iVar14 * iVar6 * 4;
            iVar10 = iVar3 * iVar6 * 4;
            puVar16 = (undefined4 *)(iVar10 + iVar4);
            puVar13 = (undefined4 *)(iVar4 + iVar6 * -4);
            puVar11 = (undefined4 *)(iVar10 + iVar5);
            puVar2 = (undefined4 *)(iVar6 * -4 + iVar5);
            iVar8 = 0;
            iVar10 = 0;
            do {
              uVar1 = *puVar16;
              puVar16 = puVar16 + 1;
              iVar10 = iVar10 + 1;
              *puVar13 = uVar1;
              puVar13 = puVar13 + 1;
              uVar1 = *puVar11;
              puVar11 = puVar11 + 1;
              *puVar2 = uVar1;
              puVar2 = puVar2 + 1;
              *(undefined4 *)(iVar12 + iVar4 + iVar8) = *(undefined4 *)(iVar4 + iVar8);
              *(undefined4 *)(iVar12 + iVar5 + iVar8) = *(undefined4 *)(iVar5 + iVar8);
              iVar8 = iVar8 + 4;
            } while (iVar10 != iVar6);
            iVar12 = *(int *)(param_1 + 0x24);
          }
          local_40 = local_40 + 1;
          if (iVar12 <= local_40) break;
          iVar15 = iVar15 + 0x58;
          iVar6 = *(int *)(param_1 + 0x144);
        }
      }
    }
    *(uint *)(iVar9 + 0x40) = *(uint *)(iVar9 + 0x40) ^ 1;
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(int *)(iVar9 + 0x34) = *(int *)(param_1 + 0x144) + 1;
    *(int *)(iVar9 + 0x48) = *(int *)(param_1 + 0x144) + 2;
    *(undefined4 *)(iVar9 + 0x44) = 2;
  }
  return;
}


