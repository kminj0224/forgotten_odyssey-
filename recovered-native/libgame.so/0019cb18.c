/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019cb18  Symbol: FUN_0019cb18 */

char * FUN_0019cb18(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    if (param_2 != (char *)0x0) {
      for (; param_2[iVar2] != '\0'; iVar2 = iVar2 + 1) {
      }
      if (iVar2 == 0) {
        return param_1;
      }
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        if ((*param_2 == *param_1) && (iVar1 = FUN_0019ca64(param_1,param_2,iVar2), iVar1 == 0)) {
          return param_1;
        }
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


