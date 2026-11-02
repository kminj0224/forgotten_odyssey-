/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202df4  Symbol: set_terminate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

_func_void * std::set_terminate(_func_void *param_1)

{
  _func_void *p_Var1;
  
  p_Var1 = **(_func_void ***)(DAT_00202e1c + 0x202e04);
  **(_func_void ***)(DAT_00202e1c + 0x202e04) = param_1;
  return p_Var1;
}


