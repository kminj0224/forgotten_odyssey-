/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c2efe  Symbol: FUN_000c2efe */

void FUN_000c2efe(void)

{
  uint uVar1;
  int unaff_r5;
  int unaff_r6;
  CCArray *in_stack_0000007c;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int in_stack_000002d4;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = cocos2d::CCArray::count(in_stack_0000007c);
  if (unaff_r5 + 1U < uVar1) {
    FUN_000c2354();
  }
  if (unaff_r6 + 1 < in_stack_0000008c) {
    FUN_000c232e();
  }
  if (in_stack_000002d4 != *in_stack_00000094) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c2f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


