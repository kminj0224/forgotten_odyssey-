/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000165ec  Symbol: __cxa_call_unexpected */

void __cxa_call_unexpected(char *param_1)

{
  bool bVar1;
  _func_void *p_Var2;
  
  if (((((*param_1 == 'G') && (param_1[1] == 'N')) && (param_1[2] == 'U')) &&
      ((param_1[3] == 'C' && (param_1[4] == 'C')))) &&
     ((param_1[5] == '+' && ((param_1[6] == '+' && ((byte)param_1[7] < 2)))))) {
    p_Var2 = *(_func_void **)(param_1 + -0x18);
    bVar1 = false;
  }
  else {
    p_Var2 = (_func_void *)0x0;
    bVar1 = true;
  }
  __cxa_begin_catch();
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    std::unexpected();
  }
                    /* WARNING: Subroutine does not return */
  __cxxabiv1::__unexpected(p_Var2);
}


