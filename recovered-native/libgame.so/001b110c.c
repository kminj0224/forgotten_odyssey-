/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b110c  Symbol: FUN_001b110c */

void FUN_001b110c(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  int local_58;
  int local_48;
  int local_44;
  
  iVar8 = *(int *)(param_1 + 400);
  uVar9 = *(int *)(param_1 + 0x11c) - 1;
  iVar4 = *(int *)(param_1 + 0x54);
  if (0 < *(int *)(param_1 + 0x4c)) {
    local_48 = 0;
    puVar18 = param_2;
    local_44 = iVar8;
    while( true ) {
      piVar2 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x20))
                                (param_1,*(undefined4 *)(local_44 + 0x40),
                                 *(int *)(iVar4 + 0xc) * *(int *)(iVar8 + 8),*(int *)(iVar4 + 0xc),1
                                );
      uVar14 = *(uint *)(iVar8 + 8);
      if (uVar14 < uVar9) {
        local_58 = *(int *)(iVar4 + 0xc);
      }
      else {
        iVar13 = *(int *)(iVar4 + 0xc);
        __aeabi_uidivmod(*(undefined4 *)(iVar4 + 0x20),iVar13);
        local_58 = extraout_r1_00;
        if (extraout_r1_00 == 0) {
          local_58 = iVar13;
        }
      }
      iVar5 = *(int *)(iVar4 + 0x1c);
      iVar12 = *(int *)(iVar4 + 8);
      __aeabi_uidivmod(iVar5,iVar12);
      iVar13 = extraout_r1;
      if (0 < extraout_r1) {
        iVar13 = iVar12 - extraout_r1;
      }
      pcVar10 = *(code **)(*(int *)(param_1 + 0x1a0) + local_48 * 4 + 4);
      if (0 < local_58) {
        iVar11 = *(int *)(iVar4 + 0x28);
        iVar17 = 0;
        piVar15 = piVar2;
        while( true ) {
          iVar6 = *piVar15;
          (*pcVar10)(param_1,iVar4,*puVar18,iVar6,iVar17 * iVar11,0,iVar5);
          if (0 < iVar13) {
            puVar19 = (undefined2 *)(iVar6 + iVar5 * 0x80);
            jzero_far(puVar19,iVar13 << 7);
            uVar1 = puVar19[-0x40];
            iVar11 = 0;
            do {
              iVar11 = iVar11 + 1;
              *puVar19 = uVar1;
              puVar19 = puVar19 + 0x40;
            } while (iVar11 != iVar13);
          }
          iVar17 = iVar17 + 1;
          piVar15 = piVar15 + 1;
          if (local_58 <= iVar17) break;
          iVar11 = *(int *)(iVar4 + 0x28);
        }
        uVar14 = *(uint *)(iVar8 + 8);
      }
      if (uVar14 == uVar9) {
        uVar14 = __udivsi3(iVar13 + iVar5,iVar12);
        if (local_58 < *(int *)(iVar4 + 0xc)) {
          piVar15 = piVar2 + local_58;
          piVar2 = piVar2 + local_58 + -1;
          do {
            puVar19 = (undefined2 *)*piVar15;
            iVar11 = *piVar2;
            jzero_far(puVar19,(iVar13 + iVar5) * 0x80);
            if (uVar14 != 0) {
              uVar3 = 0;
              puVar16 = (undefined2 *)(iVar11 + (iVar12 + -1) * 0x80);
              while( true ) {
                uVar1 = *puVar16;
                if (0 < iVar12) {
                  iVar11 = 0;
                  puVar7 = puVar19;
                  do {
                    iVar11 = iVar11 + 1;
                    *puVar7 = uVar1;
                    puVar7 = puVar7 + 0x40;
                  } while (iVar11 != iVar12);
                }
                uVar3 = uVar3 + 1;
                puVar16 = puVar16 + iVar12 * 0x40;
                if (uVar14 <= uVar3) break;
                puVar19 = puVar19 + iVar12 * 0x40;
              }
            }
            local_58 = local_58 + 1;
            piVar15 = piVar15 + 1;
            piVar2 = piVar2 + 1;
          } while (local_58 < *(int *)(iVar4 + 0xc));
        }
      }
      local_48 = local_48 + 1;
      local_44 = local_44 + 4;
      puVar18 = puVar18 + 1;
      if (*(int *)(param_1 + 0x4c) <= local_48) break;
      iVar4 = iVar4 + 0x58;
    }
  }
  FUN_001b0ec0(param_1,param_2);
  return;
}


