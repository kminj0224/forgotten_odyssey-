/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4a40  Symbol: FUN_001c4a40 */

void FUN_001c4a40(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __cxa_allocate_exception(0xc);
  FUN_001c8514(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,*(undefined4 *)(DAT_001c4a84 + 0x1c4a74),
              *(undefined4 *)(&UNK_001c4a78 + DAT_001c4a88));
}


