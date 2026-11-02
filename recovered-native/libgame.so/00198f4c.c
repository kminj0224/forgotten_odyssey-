/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00198f4c  Symbol: FUN_00198f4c */

int FUN_00198f4c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar1 = FUN_00196608();
  if (iVar1 == 0) {
    FUN_00195ba4(param_1,0x44,DAT_00198fb4 + 0x198f64 + DAT_00198fb8,0,0);
  }
  else {
    FUN_00196588(param_1);
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '=') {
      FUN_0017a4a4(param_1);
      FUN_00196588(param_1);
      iVar2 = FUN_00198eb0(param_1);
    }
    else {
      iVar2 = FUN_0019acf8(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_0019c904(iVar1);
      }
    }
    *param_2 = iVar2;
  }
  return iVar1;
}


