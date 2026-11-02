/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af3c0  Symbol: FUN_001af3c0 */

void FUN_001af3c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  puVar1 = (undefined4 *)FUN_001af29c(param_1,param_2,0x80);
  *puVar1 = 0;
  puVar1[2] = param_4;
  puVar1[1] = param_5;
  puVar1[10] = 0;
  puVar1[3] = param_6;
  puVar1[8] = param_3;
  puVar1[0xb] = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 **)(iVar2 + 0x48) = puVar1;
  return;
}


