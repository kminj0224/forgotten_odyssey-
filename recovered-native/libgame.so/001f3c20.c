/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f3c20  Symbol: FUN_001f3c20 */

void FUN_001f3c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 wchar_t *param_5,int param_6,int param_7,int *param_8)

{
  wchar_t *__s1;
  int iVar1;
  
  if (param_5 == (wchar_t *)0x0) {
    iVar1 = FUN_001f3a68(param_6,param_4,param_2,param_3,param_7,param_7 + *param_8 * 4);
    iVar1 = iVar1 - param_6 >> 2;
  }
  else {
    iVar1 = (int)param_5 - param_7 >> 2;
    __s1 = (wchar_t *)FUN_001f3a68(param_6,param_4,param_2,param_3,param_7,param_7 + iVar1 * 4);
    wmemcpy(__s1,param_5,*param_8 - iVar1);
    iVar1 = (*param_8 - iVar1) + ((int)__s1 - param_6 >> 2);
  }
  *param_8 = iVar1;
  return;
}


