/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c1efa  Symbol: FUN_000c1efa */

void FUN_000c1efa(void)

{
  undefined4 param_11;
  int param_12;
  int *param_13;
  int in_stack_0000023c;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_12 != 1) {
    FUN_000c12ec();
  }
  if (in_stack_0000023c != *param_13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c1f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_11);
  return;
}


