/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4468  Symbol: FUN_001c4468 */

void FUN_001c4468(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  
  uVar1 = __cxa_allocate_exception(8);
  FUN_001eed40(auStack_14,param_1,auStack_18);
  FUN_001c79d4(uVar1,auStack_14);
  FUN_001ed6b8(auStack_14);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(DAT_001c44d8 + 0x1c44bc),
              *(undefined4 *)(&UNK_001c44c0 + DAT_001c44dc));
}


