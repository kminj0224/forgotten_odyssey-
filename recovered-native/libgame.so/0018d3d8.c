/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d3d8  Symbol: FUN_0018d3d8 */

char * FUN_0018d3d8(char *param_1,char *param_2,char *param_3,int param_4)

{
  size_t __n;
  size_t __n_00;
  int iVar1;
  
  iVar1 = DAT_0018d45c + 0x18d3e4;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    __n = strlen(param_1);
    __n_00 = strlen(param_2);
    if (((param_3 == (char *)0x0) || (param_4 <= (int)(__n + __n_00 + 1))) &&
       (param_3 = (char *)(***(code ***)(iVar1 + DAT_0018d460))(__n + __n_00 + 2),
       param_3 == (char *)0x0)) {
      FUN_001898e8(iVar1 + DAT_0018d464);
      param_1 = (char *)0x0;
    }
    else {
      memcpy(param_3,param_2,__n_00);
      param_3[__n_00] = ':';
      memcpy(param_3 + __n_00 + 1,param_1,__n);
      param_3[__n + __n_00 + 1] = '\0';
      param_1 = param_3;
    }
  }
  return param_1;
}


