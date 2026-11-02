/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cd3c  Symbol: FUN_0015cd3c */

int FUN_0015cd3c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == *param_1) {
      return -1;
    }
    if (*(int *)(iVar1 * 4 + param_1[2]) == param_2) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


