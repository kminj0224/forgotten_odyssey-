/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d7d4  Symbol: FUN_0019d7d4 */

void FUN_0019d7d4(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1[1],DAT_0019d80c + 0x19d7e0 + DAT_0019d810,param_2);
    }
    param_1[0x15] = 2;
    param_1[0x2b] = -1;
    param_1[0x35] = 1;
  }
  return;
}


