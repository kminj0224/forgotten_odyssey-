/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190d30  Symbol: FUN_00190d30 */

FILE * FUN_00190d30(char *param_1)

{
  int iVar1;
  FILE *pFVar2;
  int iVar3;
  
  iVar3 = DAT_00190d90 + 0x190d3c;
  iVar1 = strcmp(param_1,(char *)(iVar3 + DAT_00190d94));
  if (iVar1 == 0) {
    pFVar2 = (FILE *)(*(int *)(iVar3 + DAT_00190d98) + 0x54);
  }
  else {
    iVar1 = FUN_0019c3dc(param_1,iVar3 + DAT_00190d9c,0x11);
    if (iVar1 == 0) {
      param_1 = param_1 + 0x10;
    }
    else {
      iVar1 = FUN_0019c3dc(param_1,iVar3 + DAT_00190da0,8);
      if (iVar1 == 0) {
        param_1 = param_1 + 7;
      }
    }
    if (param_1 != (char *)0x0) {
      pFVar2 = fopen(param_1,(char *)(iVar3 + DAT_00190da4));
      if (pFVar2 != (FILE *)0x0) {
        return pFVar2;
      }
      FUN_00190594(0,param_1);
    }
    pFVar2 = (FILE *)0x0;
  }
  return pFVar2;
}


