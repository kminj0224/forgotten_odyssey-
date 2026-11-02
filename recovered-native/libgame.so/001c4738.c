/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4738  Symbol: FUN_001c4738 */

void FUN_001c4738(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  
  uVar1 = __cxa_allocate_exception(8);
  FUN_001eed40(auStack_14,param_1,auStack_18);
  FUN_001c7ad0(uVar1,auStack_14);
  FUN_001ed6b8(auStack_14);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(DAT_001c47a8 + 0x1c478c),
              *(undefined4 *)(&UNK_001c4790 + DAT_001c47ac));
}


