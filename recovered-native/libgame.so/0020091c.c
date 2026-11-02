/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020091c  Symbol: FUN_0020091c */

int * FUN_0020091c(int *param_1,wchar_t *param_2,int *param_3)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  *param_1 = DAT_0020098c + 0x20094c;
  FUN_00200268(param_1,sVar1 + *(int *)(*param_3 + -0xc));
  FUN_00200474(param_1,param_2,sVar1);
  FUN_002006c8(param_1,param_3);
  return param_1;
}


