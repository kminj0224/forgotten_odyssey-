/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c640a  Symbol: FUN_000c640a */

void FUN_000c640a(void)

{
  int *param_11;
  int in_stack_0000024c;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_stack_0000024c != *param_11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c6424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


