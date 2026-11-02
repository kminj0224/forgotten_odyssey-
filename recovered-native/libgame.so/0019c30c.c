/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c30c  Symbol: FUN_0019c30c */

undefined4 FUN_0019c30c(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    if ((param_1 == 0) || (param_2 == 0)) {
      return 0;
    }
    iVar2 = 0;
    do {
      pcVar1 = (char *)(param_2 + iVar2);
      if (*pcVar1 != *(char *)(param_1 + iVar2)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (*pcVar1 != '\0');
  }
  return 1;
}


