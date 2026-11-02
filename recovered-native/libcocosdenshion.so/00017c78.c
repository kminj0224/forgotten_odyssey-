/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017c78  Symbol: set_unexpected */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

_func_void * std::set_unexpected(_func_void *param_1)

{
  _func_void *p_Var1;
  
  p_Var1 = **(_func_void ***)(DAT_00017ca0 + 0x17c88);
  **(_func_void ***)(DAT_00017ca0 + 0x17c88) = param_1;
  return p_Var1;
}


