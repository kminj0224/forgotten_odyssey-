/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af088  Symbol: jround_up */

int jround_up(int param_1,int param_2)

{
  int extraout_r1;
  
  param_2 = param_1 + -1 + param_2;
  __aeabi_idivmod(param_2);
  return param_2 - extraout_r1;
}


