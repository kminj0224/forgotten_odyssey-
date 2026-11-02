/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c73a2  Symbol: FUN_000c73a2 */

void FUN_000c73a2(void)

{
  int unaff_r6;
  int param_11;
  int *param_12;
  int in_stack_0000025c;
  code *UNRECOVERED_JUMPTABLE;
  
  if (unaff_r6 < param_11) {
    FUN_000c679a();
  }
  FUN_001ed6b8(&stack0x00000098);
  if (in_stack_0000025c != *param_12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c7454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


