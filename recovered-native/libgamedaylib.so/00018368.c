/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018368  Symbol: FUN_00018368 */

int FUN_00018368(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc);
  if (*pcVar2 == '_') {
    iVar1 = 0;
  }
  else {
    if (*pcVar2 == 'n') {
      return -1;
    }
    iVar1 = FUN_000181e8(param_1);
    pcVar2 = *(char **)(param_1 + 0xc);
    if (*pcVar2 != '_') {
      return -1;
    }
    iVar1 = iVar1 + 1;
  }
  *(char **)(param_1 + 0xc) = pcVar2 + 1;
  return iVar1;
}


