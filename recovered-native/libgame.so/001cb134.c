/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cb134  Symbol: FUN_001cb134 */

int * FUN_001cb134(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 7;
  *param_1 = *(int *)(DAT_001cb220 + 0x1cb148) + 8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_001c7304(piVar2);
  iVar1 = DAT_001cb224 + 0x1cb188;
  *param_1 = iVar1;
  param_1[8] = 0;
  FUN_00207d60(param_1 + 9,param_1 + 8,param_3,iVar1,param_4);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x400;
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined *)((int)param_1 + 0x45) = 0;
  *(undefined *)((int)param_1 + 0x46) = 0;
  *(undefined *)((int)param_1 + 0x47) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar1 = FUN_001dbe88(piVar2);
  if (iVar1 == 0) {
    return param_1;
  }
  iVar1 = FUN_001da7f0(piVar2);
  param_1[0x15] = iVar1;
  return param_1;
}


