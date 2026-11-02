/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c432e  Symbol: FUN_000c432e */

void FUN_000c432e(void)

{
  int unaff_r6;
  int in_stack_00000088;
  int *in_stack_00000090;
  int in_stack_0000032c;
  
  if (unaff_r6 + 1 < in_stack_00000088) {
    FUN_000c3746();
  }
  if (in_stack_0000032c != *in_stack_00000090) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


