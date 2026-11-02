/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5a24  Symbol: FUN_001a5a24 */

void FUN_001a5a24(int **param_1)

{
  int **ppiVar1;
  
  if (param_1 != (int **)0x0) {
    ppiVar1 = (int **)**param_1;
    while (ppiVar1 != (int **)*param_1) {
      ppiVar1 = (int **)*ppiVar1;
      FUN_001a57ec(param_1);
    }
  }
  return;
}


