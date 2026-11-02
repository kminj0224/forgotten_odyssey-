/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00199568  Symbol: FUN_00199568 */

void FUN_00199568(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int local_38;
  
  iVar5 = DAT_00199870 + 0x199580;
  do {
    while( true ) {
      piVar4 = (int *)param_1[9];
      if (piVar4 == (int *)0x0) {
        switchD_00199644::caseD_ffffffff();
      }
      if (*piVar4 == 0) {
        local_38 = (piVar4[3] + piVar4[6]) - piVar4[4];
      }
      else {
        local_38 = (piVar4[3] - piVar4[4]) + *(int *)(*(int *)(*piVar4 + 0x10) + 4);
      }
      if (local_38 == 0) {
        if (param_2 == 0) {
          switchD_00199644::caseD_ffffffff();
        }
        FUN_0019594c(param_1);
        if (param_1[0x2f] != 0) {
          FUN_00199f6c();
        }
        piVar1 = param_1 + 0x2b;
        if (*piVar1 == -1) {
          FUN_00199f6c();
        }
        iVar2 = *param_1;
        piVar4 = (int *)0xffffffff;
        *piVar1 = -1;
        if (iVar2 == 0) {
          FUN_00199f6c();
        }
        pcVar3 = *(code **)(iVar2 + 0x34);
        if (pcVar3 == (code *)0x0) {
          FUN_00199f6c();
        }
        (*pcVar3)(param_1[1]);
        FUN_00199f6c();
      }
      if (local_38 < 1) {
        switchD_00199644::caseD_ffffffff();
      }
      if (*(char *)piVar4[4] != '\0') break;
      param_1[0x32] = param_1[0x32] + 1;
      *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 1;
      *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 1;
    }
  } while (0x11 < param_1[0x2b] + 1U);
  iVar5 = iVar5 + DAT_00199874;
                    /* WARNING: Could not emulate address calculation at 0x00199640 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(iVar5 + (param_1[0x2b] + 1U) * 4) + iVar5))();
  return;
}


