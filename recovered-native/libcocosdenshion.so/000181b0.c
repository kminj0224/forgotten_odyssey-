/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000181b0  Symbol: FUN_000181b0 */

int FUN_000181b0(int param_1,int param_2)

{
  char *__s1;
  uint uVar1;
  int iVar2;
  char *__s2;
  
  if (param_2 == param_1) {
    return 1;
  }
  __s1 = *(char **)(param_1 + 4);
  if (*__s1 == '*') {
    if (__s1[1] == '*') {
      return 0;
    }
    __s1 = __s1 + 1;
  }
  __s2 = *(char **)(param_2 + 4);
  if (*__s2 == '*') {
    __s2 = __s2 + 1;
  }
  uVar1 = strcmp(__s1,__s2);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


