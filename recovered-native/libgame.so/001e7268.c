/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7268  Symbol: FUN_001e7268 */

long * FUN_001e7268(long *param_1,int param_2,long param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  long lVar2;
  
  *param_1 = -1;
  param_1[1] = -1;
  param_1[2] = 0;
  if ((param_5 != 0) && (param_5 != 1)) {
    param_5 = 2;
  }
  iVar1 = fseek(*(FILE **)(param_2 + 0x20),param_3,param_5);
  if (iVar1 == 0) {
    lVar2 = ftell(*(FILE **)(param_2 + 0x20));
    *param_1 = lVar2;
    param_1[1] = lVar2 >> 0x1f;
    param_1[2] = 0;
  }
  return param_1;
}


