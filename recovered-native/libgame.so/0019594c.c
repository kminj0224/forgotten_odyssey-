/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019594c  Symbol: FUN_0019594c */

void FUN_0019594c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1[0x2f];
  if (iVar2 != 0) {
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x3c), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1[1],param_1[0x2e]);
      }
      FUN_001958b0(param_1);
    }
  }
  return;
}


