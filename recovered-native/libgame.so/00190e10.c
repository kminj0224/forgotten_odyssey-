/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190e10  Symbol: FUN_00190e10 */

size_t FUN_00190e10(FILE *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  
  iVar2 = DAT_00190e44 + 0x190e1a;
  if ((param_2 == (void *)0x0) || (param_1 == (FILE *)0x0)) {
    sVar1 = 0xffffffff;
  }
  else {
    sVar1 = fread(param_2,1,param_3,param_1);
    if ((int)sVar1 < 0) {
      FUN_00190594(0,iVar2 + DAT_00190e48);
    }
  }
  return sVar1;
}


