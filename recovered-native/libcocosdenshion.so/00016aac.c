/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016aac  Symbol: __cxa_begin_cleanup */

undefined4 __cxa_begin_cleanup(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __cxa_get_globals();
  if (((((*param_1 == 'G') && (param_1[1] == 'N')) && (param_1[2] == 'U')) &&
      ((param_1[3] == 'C' && (param_1[4] == 'C')))) &&
     ((param_1[5] == '+' && ((param_1[6] == '+' && ((byte)param_1[7] < 2)))))) {
    iVar2 = *(int *)(param_1 + -4);
    *(int *)(param_1 + -4) = iVar2 + 1;
    if (iVar2 + 1 == 1) {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(iVar1 + 8);
      *(char **)(iVar1 + 8) = param_1 + -0x20;
      return 1;
    }
  }
  else {
    if (*(int *)(iVar1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *(char **)(iVar1 + 8) = param_1 + -0x20;
  }
  return 1;
}


