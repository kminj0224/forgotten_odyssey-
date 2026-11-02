/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab610  Symbol: FUN_001ab610 */

void FUN_001ab610(void)

{
  int param_8;
  int param_10;
  int param_11;
  
  if (param_11 != **(int **)(param_8 + param_10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


