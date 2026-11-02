/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ddeb4  Symbol: FUN_000ddeb4 */

void FUN_000ddeb4(void)

{
  code *unaff_r4;
  int *unaff_r5;
  undefined4 unaff_r6;
  int *param_11;
  int in_stack_000003a4;
  
  (*unaff_r4)();
  (**(code **)(*unaff_r5 + 0xc4))(unaff_r5,unaff_r6);
  if (in_stack_000003a4 != *param_11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


