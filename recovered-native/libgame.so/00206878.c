/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206878  Symbol: FUN_00206878 */

int * FUN_00206878(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_002043f4(param_1,0,0,param_3);
  iVar1 = DAT_00206910;
  *param_1 = DAT_0020690c + 0x2068ac;
  iVar1 = strcmp(param_2,(char *)(iVar1 + 0x2068b4));
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,(char *)(DAT_00206914 + 0x2068cc)), iVar1 != 0)) {
    FUN_001c9708(param_1 + 2);
    FUN_001c96cc(param_1 + 2,param_2,0);
    return param_1;
  }
  return param_1;
}


