/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020472c  Symbol: FUN_0020472c */

int * FUN_0020472c(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xb;
  *param_1 = DAT_002047a4 + 0x20474c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  do {
    piVar1[-2] = 0;
    piVar1[-1] = 0;
    piVar1 = piVar1 + 2;
  } while (piVar1 != param_1 + 0x1b);
  param_1[0x19] = 8;
  param_1[0x1a] = (int)(param_1 + 9);
  FUN_001c7304();
  return param_1;
}


