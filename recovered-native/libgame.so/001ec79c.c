/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ec79c  Symbol: FUN_001ec79c */

void FUN_001ec79c(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  if (uVar1 <= (uint)param_1[1]) {
    (**(code **)(*param_1 + 0x2c))(param_1);
    return;
  }
  if (*(int *)(uVar1 - 4) != param_2) {
    (**(code **)(*param_1 + 0x2c))(param_1);
    return;
  }
  param_1[2] = uVar1 - 4;
  return;
}


