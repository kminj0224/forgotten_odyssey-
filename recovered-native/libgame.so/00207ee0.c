/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207ee0  Symbol: FUN_00207ee0 */

FILE ** FUN_00207ee0(FILE **param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  FILE **ppFVar4;
  
  if (*param_1 == (FILE *)0x0) {
    ppFVar4 = (FILE **)0x0;
  }
  else if (*(char *)(param_1 + 1) == '\0') {
    *param_1 = (FILE *)0x0;
    ppFVar4 = param_1;
  }
  else {
    puVar1 = (undefined4 *)__errno();
    *puVar1 = 0;
    do {
      iVar2 = fclose(*param_1);
      if (iVar2 == 0) {
        *param_1 = (FILE *)0x0;
        return param_1;
      }
      piVar3 = (int *)__errno();
    } while (*piVar3 == 4);
    ppFVar4 = (FILE **)0x0;
    *param_1 = (FILE *)0x0;
  }
  return ppFVar4;
}


