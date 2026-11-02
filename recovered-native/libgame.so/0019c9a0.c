/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c9a0  Symbol: FUN_0019c9a0 */

void FUN_0019c9a0(int param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
    if (param_1 == 0) {
      FUN_0019c904(param_2);
    }
    else {
      for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      }
      FUN_0019c920(param_1,param_2,(int)pcVar1 - (int)param_2);
    }
  }
  return;
}


