/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ca64  Symbol: FUN_0019ca64 */

int FUN_0019ca64(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  if (((int)param_3 < 1) || (param_1 == param_2)) {
    iVar1 = 0;
  }
  else if (param_1 == (char *)0x0) {
    iVar1 = -1;
  }
  else if (param_2 == (char *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = strncmp(param_1,param_2,param_3);
  }
  return iVar1;
}


