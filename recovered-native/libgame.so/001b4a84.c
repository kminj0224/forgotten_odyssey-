/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b4a84  Symbol: FUN_001b4a84 */

int FUN_001b4a84(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int *local_34;
  
  iVar3 = *(int *)(param_1 + 0x1c0);
  iVar4 = *(int *)(param_1 + 0x148);
  while( true ) {
    if ((*(int *)(param_1 + 0x98) <= *(int *)(param_1 + 0x90)) &&
       ((*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0x98) ||
        (*(uint *)(param_1 + 0x9c) < *(uint *)(param_1 + 0x94))))) break;
    iVar1 = (***(code ***)(param_1 + 0x1c8))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar7 = *(int *)(param_1 + 0xd8);
  if (0 < iVar1) {
    local_38 = (undefined4 *)(iVar3 + 0x48);
    local_3c = 0;
    local_34 = param_2;
    while( true ) {
      if (*(int *)(iVar7 + 0x34) != 0) {
        piVar2 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x20))
                                  (param_1,*local_38,
                                   *(int *)(iVar7 + 0xc) * *(int *)(param_1 + 0x9c),
                                   *(int *)(iVar7 + 0xc),0);
        if (*(uint *)(param_1 + 0x9c) < iVar4 - 1U) {
          local_40 = *(int *)(iVar7 + 0xc);
        }
        else {
          iVar3 = *(int *)(iVar7 + 0xc);
          __aeabi_uidivmod(*(undefined4 *)(iVar7 + 0x20),iVar3);
          local_40 = extraout_r1;
          if (extraout_r1 == 0) {
            local_40 = iVar3;
          }
        }
        pcVar5 = *(code **)(*(int *)(param_1 + 0x1d4) + local_3c * 4 + 4);
        iVar3 = *local_34;
        if (local_40 < 1) {
          iVar1 = *(int *)(param_1 + 0x24);
        }
        else {
          local_44 = 0;
          uVar6 = *(uint *)(iVar7 + 0x1c);
          while( true ) {
            iVar1 = *piVar2;
            if (uVar6 != 0) {
              iVar8 = 0;
              uVar9 = 0;
              do {
                (*pcVar5)(param_1,iVar7,iVar1,iVar3,iVar8);
                uVar9 = uVar9 + 1;
                iVar1 = iVar1 + 0x80;
                iVar8 = iVar8 + *(int *)(iVar7 + 0x24);
                uVar6 = *(uint *)(iVar7 + 0x1c);
              } while (uVar9 < uVar6);
            }
            local_44 = local_44 + 1;
            piVar2 = piVar2 + 1;
            if (local_40 <= local_44) break;
            iVar3 = iVar3 + *(int *)(iVar7 + 0x28) * 4;
          }
          iVar1 = *(int *)(param_1 + 0x24);
        }
      }
      local_3c = local_3c + 1;
      local_34 = local_34 + 1;
      local_38 = local_38 + 1;
      if (iVar1 <= local_3c) break;
      iVar7 = iVar7 + 0x58;
    }
  }
  uVar6 = *(int *)(param_1 + 0x9c) + 1;
  *(uint *)(param_1 + 0x9c) = uVar6;
  return 4 - (uint)(uVar6 < *(uint *)(param_1 + 0x148));
}


