/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00019110  Symbol: FUN_00019110 */

bool FUN_00019110(int param_1,uint param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    param_2 = (uint)**(byte **)(param_1 + 0xc);
    if (param_2 == 0) {
      return false;
    }
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  }
  if (param_2 != 0x68) {
    if (param_2 != 0x76) {
      return false;
    }
    FUN_00018914(param_1);
    if (**(char **)(param_1 + 0xc) != '_') {
      return false;
    }
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
  }
  FUN_00018914(param_1);
  bVar1 = **(char **)(param_1 + 0xc) == '_';
  if (bVar1) {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
  }
  return bVar1;
}


