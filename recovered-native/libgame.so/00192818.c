/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00192818  Symbol: FUN_00192818 */

void FUN_00192818(FILE *param_1,undefined4 param_2)

{
  char *__s;
  int iVar1;
  
  __s = (char *)FUN_00191d4c(param_2);
  iVar1 = DAT_00192840 + 0x19282a;
  if (__s != (char *)0x0) {
    fputs(__s,param_1);
    (***(code ***)(iVar1 + DAT_00192844))(__s);
  }
  return;
}


