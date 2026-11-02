/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c5418  Symbol: FUN_000c5418 */

void FUN_000c5418(void)

{
  int unaff_r6;
  int param_11;
  int *param_12;
  int in_stack_0000027c;
  
  if (unaff_r6 < param_11) {
    FUN_000c4820();
  }
  if (in_stack_0000027c != *param_12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


