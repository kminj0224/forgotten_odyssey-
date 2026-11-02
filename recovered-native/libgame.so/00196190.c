/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196190  Symbol: FUN_00196190 */

void FUN_00196190(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (param_2 == 0) {
    FUN_0019594c();
  }
  else {
    while ((param_1[0x2e] != 0 && (iVar1 = FUN_00196118(param_2), iVar1 != 0))) {
      if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x3c), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1[1],param_1[0x2e]);
      }
      FUN_001958b0(param_1);
    }
  }
  return;
}


