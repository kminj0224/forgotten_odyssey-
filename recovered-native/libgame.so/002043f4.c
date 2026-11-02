/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002043f4  Symbol: FUN_002043f4 */

int * FUN_002043f4(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    param_4 = 1;
  }
  iVar1 = DAT_002044a8 + 0x20440c;
  param_1[1] = param_4;
  *param_1 = iVar1;
  iVar1 = DAT_002044ac;
  if (param_2 == 0) {
    *(undefined *)(param_1 + 3) = 0;
    param_2 = **(int **)(iVar1 + 0x204498);
    param_1[4] = 0;
    param_1[5] = 0;
    param_2 = param_2 + 1;
  }
  else if (param_3 == 0) {
    *(undefined *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    *(undefined *)(param_1 + 3) = 1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  param_1[6] = param_2;
  memset((void *)((int)param_1 + 0x1d),0,0x100);
  *(undefined *)(param_1 + 7) = 0;
  memset((void *)((int)param_1 + 0x11d),0,0x100);
  *(undefined *)((int)param_1 + 0x21d) = 0;
  return param_1;
}


