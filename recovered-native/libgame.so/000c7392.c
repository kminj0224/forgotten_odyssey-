/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7392  Symbol: FUN_000c7392 */

void FUN_000c7392(void)

{
  uint uVar1;
  uint unaff_r4;
  int unaff_r6;
  CCArray *param_11;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int in_stack_0000025c;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = cocos2d::CCArray::count(param_11);
  if (unaff_r4 < uVar1) {
    FUN_000c67e8();
  }
  if (unaff_r6 + 1 < in_stack_0000008c) {
    FUN_000c679a();
  }
  FUN_001ed6b8(&stack0x00000098);
  if (in_stack_0000025c != *in_stack_00000094) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000c7454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


