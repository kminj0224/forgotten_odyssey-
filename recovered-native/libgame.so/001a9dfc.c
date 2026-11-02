/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9dfc  Symbol: FUN_001a9dfc */

void FUN_001a9dfc(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x72];
  *piVar1 = DAT_001a9e34 + 0x1a9e0c + DAT_001a9e38;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 1;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)param_1[0x73])(param_1);
  param_1[0x28] = 0;
  return;
}


