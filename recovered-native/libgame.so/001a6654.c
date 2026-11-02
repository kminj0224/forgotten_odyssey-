/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6654  Symbol: FUN_001a6654 */

void FUN_001a6654(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_001a6490();
  FUN_001a64a8(param_1,param_1[0x13] * 3 + 8);
  if ((DAT_001a66e4 < param_1[0x11]) || (DAT_001a66e4 < param_1[0x10])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2a;
    *(int *)(*param_1 + 0x18) = DAT_001a66e4;
    (**(code **)*param_1)(param_1);
  }
  FUN_001a645c(param_1,param_1[0x12]);
  FUN_001a64a8(param_1,param_1[0x11]);
  FUN_001a64a8(param_1,param_1[0x10]);
  FUN_001a645c(param_1,param_1[0x13]);
  puVar1 = (undefined4 *)param_1[0x15];
  if (0 < param_1[0x13]) {
    iVar2 = 0;
    do {
      FUN_001a645c(param_1,*puVar1);
      FUN_001a645c(param_1,puVar1[2] * 0x10 + puVar1[3]);
      FUN_001a645c(param_1,puVar1[4]);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x16;
    } while (iVar2 < param_1[0x13]);
  }
  return;
}


