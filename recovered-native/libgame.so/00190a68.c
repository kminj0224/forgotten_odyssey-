/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190a68  Symbol: FUN_00190a68 */

size_t FUN_00190a68(int param_1,char *param_2)

{
  size_t sVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x1c) != 0)) || (param_2 == (char *)0x0)) {
    sVar1 = 0xffffffff;
  }
  else {
    sVar1 = strlen(param_2);
    if (0 < (int)sVar1) {
      sVar1 = FUN_00190950(param_1,sVar1,param_2);
    }
  }
  return sVar1;
}


