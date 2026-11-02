/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002081a8  Symbol: set_new_handler */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

_func_void * std::set_new_handler(_func_void *param_1)

{
  _func_void *p_Var1;
  
  p_Var1 = *(_func_void **)(DAT_002081c0 + 0x2081b4);
  *(_func_void **)(DAT_002081c0 + 0x2081b4) = param_1;
  return p_Var1;
}


