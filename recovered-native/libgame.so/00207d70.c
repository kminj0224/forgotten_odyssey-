/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207d70  Symbol: FUN_00207d70 */

FILE ** FUN_00207d70(FILE **param_1,FILE *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == (FILE *)0x0) {
    if (param_2 == (FILE *)0x0) {
      return (FILE **)0x0;
    }
    puVar1 = (undefined4 *)__errno();
    *puVar1 = 0;
    do {
      iVar2 = fflush(*param_1);
      if (iVar2 == 0) {
        *param_1 = param_2;
        *(undefined *)(param_1 + 1) = 0;
        return param_1;
      }
      piVar3 = (int *)__errno();
    } while (*piVar3 == 4);
  }
  return (FILE **)0x0;
}


