/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190e4c  Symbol: FUN_00190e4c */

FILE * FUN_00190e4c(char *param_1)

{
  int iVar1;
  FILE *pFVar2;
  int iVar3;
  
  iVar3 = DAT_00190ecc + 0x190e56;
  if (param_1 == (char *)0x0) {
    return (FILE *)0x0;
  }
  iVar1 = strcmp(param_1,(char *)(iVar3 + DAT_00190ed0));
  if (iVar1 == 0) {
    return *(FILE **)(iVar3 + DAT_00190ed4);
  }
  iVar1 = FUN_0019c3dc(param_1,iVar3 + DAT_00190ed8,0x11);
  if (iVar1 == 0) {
    param_1 = param_1 + 0x10;
  }
  else {
    iVar1 = FUN_0019c3dc(param_1,iVar3 + DAT_00190edc,8);
    if (iVar1 == 0) {
      param_1 = param_1 + 7;
    }
    else {
      iVar1 = FUN_0019c3dc(param_1,iVar3 + DAT_00190ee0,6);
      if (iVar1 != 0) goto LAB_00190ea8;
      param_1 = param_1 + 5;
    }
  }
  if (param_1 == (char *)0x0) {
    return (FILE *)0x0;
  }
LAB_00190ea8:
  iVar1 = FUN_0018ffe4(param_1);
  if (iVar1 != 0) {
    pFVar2 = fopen(param_1,(char *)(iVar3 + DAT_00190ee4));
    if (pFVar2 != (FILE *)0x0) {
      return pFVar2;
    }
    FUN_00190594(0,param_1);
  }
  return (FILE *)0x0;
}


