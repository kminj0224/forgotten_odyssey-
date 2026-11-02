/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017c20  Symbol: __unexpected */

/* __cxxabiv1::__unexpected(void (*)()) */

void __cxxabiv1::__unexpected(_func_void *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


