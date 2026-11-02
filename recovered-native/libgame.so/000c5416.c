/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c5416  Symbol: FUN_000c5416 */

void FUN_000c5416(void)

{
  int unaff_r6;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int in_stack_0000027c;
  
  if (unaff_r6 + 1 < in_stack_0000008c) {
    FUN_000c4820();
  }
  if (in_stack_0000027c != *in_stack_00000094) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


