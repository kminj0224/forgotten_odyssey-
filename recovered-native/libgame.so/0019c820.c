/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c820  Symbol: FUN_0019c820 */

int FUN_0019c820(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 < 0) || (param_1 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (***(code ***)(DAT_0019c868 + 0x19c82c + DAT_0019c86c))(param_2 + 1);
    iVar2 = 0;
    if (iVar3 == 0) {
      FUN_00179430(0,0);
    }
    else {
      for (; iVar2 < param_2; iVar2 = iVar2 + 1) {
        cVar1 = *(char *)(param_1 + iVar2);
        *(char *)(iVar3 + iVar2) = cVar1;
        if (cVar1 == '\0') {
          return iVar3;
        }
      }
      *(undefined *)(iVar3 + param_2) = 0;
    }
  }
  return iVar3;
}


