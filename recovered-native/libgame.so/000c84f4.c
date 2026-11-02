/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c84f4  Symbol: FUN_000c84f4 */

int * FUN_000c84f4(int *param_1,char *param_2,int *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  *param_1 = *(int *)(DAT_000c8534 + 0xc850a) + 0xc;
  FUN_001ee274(param_1,sVar1 + *(int *)(*param_3 + -0xc));
  FUN_001ee484(param_1,param_2,sVar1);
  FUN_001ee6cc(param_1,param_3);
  return param_1;
}


