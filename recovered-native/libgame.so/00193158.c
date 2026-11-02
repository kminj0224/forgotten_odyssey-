/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193158  Symbol: FUN_00193158 */

int FUN_00193158(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *local_14;
  
  local_14 = param_2;
  iVar1 = FUN_00192848(param_1,&local_14);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*local_14 == ':') {
    local_14 = local_14 + 1;
    iVar1 = FUN_00192d88(param_1,&local_14);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*local_14 == '?') {
      local_14 = local_14 + 1;
      iVar1 = FUN_00192eb8(param_1,&local_14);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if (*local_14 == '#') {
      local_14 = local_14 + 1;
      iVar1 = FUN_00193014(param_1,&local_14);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if (*local_14 == '\0') {
      return 0;
    }
    FUN_00191900(param_1);
  }
  return 1;
}


