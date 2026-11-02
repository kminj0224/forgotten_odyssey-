/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202d74  Symbol: __terminate */

/* __cxxabiv1::__terminate(void (*)()) */

void __cxxabiv1::__terminate(_func_void *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  abort();
}


