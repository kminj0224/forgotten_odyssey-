/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017dbe4  Symbol: FUN_0017dbe4 */

bool FUN_0017dbe4(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  if ((((*(int *)(*param_1 + 0x48) != *(int *)(*param_1 + 0x44)) &&
       ((int *)param_1[0x3a] != (int *)0x0)) && (iVar2 = *(int *)param_1[0x3a], iVar2 != 1)) &&
     (iVar2 != -2)) {
    if (param_4 == 0) {
      for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
        cVar1 = *(char *)(param_2 + iVar2);
        if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
          return false;
        }
      }
    }
    if (param_1[0xd] == 0) {
      return false;
    }
    if (param_1[2] != 0) {
      iVar2 = FUN_0019408c(param_1[2],*(undefined4 *)(param_1[0xd] + 8));
      if (iVar2 == 0) {
        return true;
      }
      if (iVar2 == 1) {
        return false;
      }
    }
    cVar1 = **(char **)(param_1[9] + 0x10);
    if (((cVar1 == '\r') || (cVar1 == '<')) &&
       ((*(int *)(param_1[0xd] + 0xc) != 0 ||
        ((cVar1 != '<' || ((*(char **)(param_1[9] + 0x10))[1] != '/')))))) {
      iVar2 = FUN_001895dc();
      if (iVar2 == 0) {
        if (*(int *)(param_1[0xd] + 4) == 1) {
          return true;
        }
        iVar2 = *(int *)(param_1[0xd] + 0x28);
      }
      else {
        iVar2 = FUN_00189644();
        if (iVar2 != 0) {
          return false;
        }
        if (*(int *)(param_1[0xd] + 0xc) == 0) {
          return true;
        }
        iVar2 = FUN_00189644();
      }
      return iVar2 == 0;
    }
  }
  return false;
}


