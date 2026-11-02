/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c1ef8  Symbol: FUN_000c1ef8 */

void FUN_000c1ef8(void)

{
  undefined4 in_stack_00000080;
  int in_stack_00000088;
  int *in_stack_00000094;
  int in_stack_0000023c;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_stack_00000088 != 1) {
    FUN_000c12ec();
  }
  if (in_stack_0000023c != *in_stack_00000094) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c1f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(in_stack_00000080);
  return;
}


