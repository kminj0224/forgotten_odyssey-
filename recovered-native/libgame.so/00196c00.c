/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196c00  Symbol: FUN_00196c00 */

void FUN_00196c00(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_38;
  int local_34;
  int local_28;
  
  iVar7 = DAT_00196d00 + 0x196c0c;
  piVar3 = (int *)(iVar7 + DAT_00196d04 + 0x58);
  iVar8 = 0;
  piVar6 = piVar3;
  while (*piVar6 != 0) {
    iVar1 = FUN_0019c30c(*piVar6,param_2);
    piVar6 = piVar6 + 2;
    if (iVar1 != 0) break;
    iVar8 = iVar8 + 1;
  }
  iVar1 = iVar7 + DAT_00196d04;
  iVar8 = *(int *)(iVar1 + iVar8 * 8 + 0x5c);
  local_34 = param_1[0x2f] + -1;
  local_38 = local_34 * 4;
  do {
    if (local_34 < 0) {
      return;
    }
    iVar2 = FUN_0019c30c(param_2,*(undefined4 *)(param_1[0x31] + local_38));
    if (iVar2 != 0) {
      piVar6 = param_1 + 0x2e;
      iVar7 = iVar7 + DAT_00196d08;
      while (iVar8 = FUN_0019c30c(param_2,*piVar6), iVar8 == 0) {
        iVar8 = FUN_00196b60(*piVar6);
        if ((iVar8 != 0) && (*(char *)(iVar8 + 5) == '\x03')) {
          FUN_00195ba4(param_1,0x4c,iVar7,param_2,*piVar6);
        }
        if ((*param_1 != 0) && (pcVar5 = *(code **)(*param_1 + 0x3c), pcVar5 != (code *)0x0)) {
          (*pcVar5)(param_1[1],*piVar6);
        }
        FUN_001958b0(param_1);
      }
      return;
    }
    uVar4 = *(undefined4 *)(param_1[0x31] + local_38);
    local_28 = 0;
    piVar6 = piVar3;
    while (*piVar6 != 0) {
      iVar2 = FUN_0019c30c(*piVar6,uVar4);
      piVar6 = piVar6 + 2;
      if (iVar2 != 0) break;
      local_28 = local_28 + 1;
    }
    local_38 = local_38 + -4;
    if (iVar8 < *(int *)(iVar1 + local_28 * 8 + 0x5c)) {
      return;
    }
    local_34 = local_34 + -1;
  } while( true );
}


