/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000becf8  Symbol: Random */

/* Random(int, int) */

uint Random(int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int extraout_r1;
  
  uVar1 = param_2 | param_1;
  if (uVar1 != 0) {
    lVar2 = lrand48();
    __aeabi_idivmod(lVar2,(param_2 - param_1) + 1);
    uVar1 = extraout_r1 + param_1;
  }
  return uVar1;
}


