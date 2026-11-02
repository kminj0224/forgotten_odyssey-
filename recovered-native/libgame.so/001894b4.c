/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001894b4  Symbol: FUN_001894b4 */

char * FUN_001894b4(char *param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 == (char *)0x0) || (param_2 == (int *)0x0)) || (*param_1 == ':')) {
LAB_001894dc:
    param_1 = (char *)0x0;
  }
  else {
    for (iVar1 = 0; param_1[iVar1] != ':'; iVar1 = iVar1 + 1) {
      if (param_1[iVar1] == '\0') goto LAB_001894dc;
    }
    *param_2 = iVar1;
    param_1 = param_1 + iVar1 + 1;
  }
  return param_1;
}


