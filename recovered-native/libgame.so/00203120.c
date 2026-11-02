/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00203120  Symbol: __cxa_guard_release */

void __cxa_guard_release(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00211db0(param_1,1);
  if ((uVar1 & 0x10000) == 0) {
    return;
  }
  syscall(0xf0,param_1,1,0x7fffffff);
  return;
}


