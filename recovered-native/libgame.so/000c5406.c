/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c5406  Symbol: FUN_000c5406 */

void FUN_000c5406(void)

{
  uint uVar1;
  int unaff_r5;
  int unaff_r6;
  CCArray *in_stack_0000007c;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int in_stack_0000027c;
  
  uVar1 = cocos2d::CCArray::count(in_stack_0000007c);
  if (unaff_r5 + 1U < uVar1) {
    FUN_000c4846();
  }
  if (unaff_r6 + 1 < in_stack_0000008c) {
    FUN_000c4820();
  }
  if (in_stack_0000027c != *in_stack_00000094) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


