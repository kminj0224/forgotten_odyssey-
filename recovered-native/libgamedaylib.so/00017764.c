/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017764  Symbol: set_new_handler */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

_func_void * std::set_new_handler(_func_void *param_1)

{
  _func_void *p_Var1;
  
  p_Var1 = *(_func_void **)(DAT_0001777c + 0x17770);
  *(_func_void **)(DAT_0001777c + 0x17770) = param_1;
  return p_Var1;
}


