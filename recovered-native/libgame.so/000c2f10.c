/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c2f10  Symbol: FUN_000c2f10 */

void FUN_000c2f10(void)

{
  int unaff_r6;
  int param_11;
  int *param_12;
  int in_stack_000002d4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (unaff_r6 < param_11) {
    FUN_000c232e();
  }
  if (in_stack_000002d4 != *param_12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c2f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


