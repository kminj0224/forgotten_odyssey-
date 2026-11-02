/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b188  Symbol: FUN_0018b188 */

int FUN_0018b188(char *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0018b1fc + 0x18b194;
  if (((param_2 != (int *)0x0) && (*param_2 = 0, param_1 != (char *)0x0)) &&
     (iVar3 = 0, *param_1 != ':')) {
    for (; param_1[iVar3] != ':'; iVar3 = iVar3 + 1) {
      if (param_1[iVar3] == '\0') {
        return 0;
      }
    }
    iVar1 = FUN_0019c88c(param_1,iVar3,param_3,0x3a,param_4);
    *param_2 = iVar1;
    if (iVar1 != 0) {
      iVar3 = FUN_0019c904(param_1 + iVar3 + 1);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_001898e8(iVar2 + DAT_0018b200);
      if (*param_2 != 0) {
        (***(code ***)(iVar2 + DAT_0018b204))();
        *param_2 = 0;
        return 0;
      }
      return 0;
    }
    FUN_001898e8(iVar2 + DAT_0018b200);
  }
  return 0;
}


