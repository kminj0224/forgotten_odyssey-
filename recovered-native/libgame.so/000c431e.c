/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c431e  Symbol: FUN_000c431e */

void FUN_000c431e(void)

{
  uint uVar1;
  int unaff_r5;
  int unaff_r6;
  CCArray *in_stack_00000070;
  int in_stack_00000088;
  int *in_stack_00000090;
  int in_stack_0000032c;
  
  uVar1 = cocos2d::CCArray::count(in_stack_00000070);
  if (unaff_r5 + 1U < uVar1) {
    FUN_000c376c();
  }
  if (unaff_r6 + 1 < in_stack_00000088) {
    FUN_000c3746();
  }
  if (in_stack_0000032c != *in_stack_00000090) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


