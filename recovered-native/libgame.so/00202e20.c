/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202e20  Symbol: set_unexpected */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

_func_void * std::set_unexpected(_func_void *param_1)

{
  _func_void *p_Var1;
  
  p_Var1 = **(_func_void ***)(DAT_00202e48 + 0x202e30);
  **(_func_void ***)(DAT_00202e48 + 0x202e30) = param_1;
  return p_Var1;
}


