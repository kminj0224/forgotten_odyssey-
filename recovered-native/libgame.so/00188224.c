/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188224  Symbol: FUN_00188224 */

void FUN_00188224(void)

{
  int unaff_r4;
  int unaff_r5;
  int in_stack_000000ec;
  
  *(undefined4 *)(unaff_r4 + 0xac) = 6;
  switchD_00187544::caseD_12();
  if (in_stack_000000ec != **(int **)(unaff_r5 + DAT_0018827c)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


