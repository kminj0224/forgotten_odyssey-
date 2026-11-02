/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019957e  Symbol: caseD_12 */

void switchD_00199644::caseD_12(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *unaff_r4;
  int *piVar4;
  int unaff_r6;
  int param_9;
  int param_13;
  
  do {
    while( true ) {
      piVar4 = (int *)unaff_r4[9];
      if (piVar4 == (int *)0x0) {
        caseD_ffffffff();
      }
      if (*piVar4 == 0) {
        param_9 = (piVar4[3] + piVar4[6]) - piVar4[4];
      }
      else {
        param_9 = (piVar4[3] - piVar4[4]) + *(int *)(*(int *)(*piVar4 + 0x10) + 4);
      }
      if (param_9 == 0) {
        if (param_13 == 0) {
          caseD_ffffffff();
        }
        FUN_0019594c(unaff_r4);
        if (unaff_r4[0x2f] != 0) {
          FUN_00199f6c();
        }
        piVar1 = unaff_r4 + 0x2b;
        if (*piVar1 == -1) {
          FUN_00199f6c();
        }
        iVar2 = *unaff_r4;
        piVar4 = (int *)0xffffffff;
        *piVar1 = -1;
        if (iVar2 == 0) {
          FUN_00199f6c();
        }
        pcVar3 = *(code **)(iVar2 + 0x34);
        if (pcVar3 == (code *)0x0) {
          FUN_00199f6c();
        }
        (*pcVar3)(unaff_r4[1]);
        FUN_00199f6c();
      }
      if (param_9 < 1) {
        caseD_ffffffff();
      }
      if (*(char *)piVar4[4] != '\0') break;
      unaff_r4[0x32] = unaff_r4[0x32] + 1;
      *(int *)(unaff_r4[9] + 0x10) = *(int *)(unaff_r4[9] + 0x10) + 1;
      *(int *)(unaff_r4[9] + 0x20) = *(int *)(unaff_r4[9] + 0x20) + 1;
    }
  } while (0x11 < unaff_r4[0x2b] + 1U);
                    /* WARNING: Could not recover jumptable at 0x00199644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(unaff_r6 + DAT_00199874 + (unaff_r4[0x2b] + 1U) * 4) + unaff_r6 + DAT_00199874
            ))();
  return;
}


