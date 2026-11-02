/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c73a0  Symbol: FUN_000c73a0 */

void FUN_000c73a0(void)

{
  int unaff_r6;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int in_stack_0000025c;
  code *UNRECOVERED_JUMPTABLE;
  
  if (unaff_r6 + 1 < in_stack_0000008c) {
    FUN_000c679a();
  }
  FUN_001ed6b8(&stack0x00000098);
  if (in_stack_0000025c != *in_stack_00000094) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c7454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


