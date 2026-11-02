/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c4330  Symbol: FUN_000c4330 */

void FUN_000c4330(void)

{
  int unaff_r6;
  int param_11;
  int *param_12;
  int in_stack_0000032c;
  
  if (unaff_r6 < param_11) {
    FUN_000c3746();
  }
  if (in_stack_0000032c != *param_12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


