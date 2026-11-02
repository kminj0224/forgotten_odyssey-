/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c9b70  Symbol: FUN_001c9b70 */

int * FUN_001c9b70(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_001cdeec();
  *param_1 = DAT_001c9c10 + 0x1c9ba0;
  FUN_00207d70(param_1 + 9,param_2,param_3);
  iVar1 = FUN_00207ebc(param_1 + 9);
  if (iVar1 == 0) {
    return param_1;
  }
  param_1[0xb] = param_3;
  param_1[0x10] = param_4;
  FUN_001cdfe8(param_1);
  iVar1 = param_1[0xf];
  *(undefined *)((int)param_1 + 0x45) = 0;
  *(undefined *)((int)param_1 + 0x46) = 0;
  param_1[1] = iVar1;
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  return param_1;
}


