/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c2f0e  Symbol: FUN_000c2f0e */

void FUN_000c2f0e(void)

{
  int unaff_r6;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int in_stack_000002d4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (unaff_r6 + 1 < in_stack_0000008c) {
    FUN_000c232e();
  }
  if (in_stack_000002d4 != *in_stack_00000094) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c2f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


