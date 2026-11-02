/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c920  Symbol: FUN_0019c920 */

int FUN_0019c920(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if ((param_3 != 0) && (param_2 != (void *)0x0)) {
    if ((int)param_3 < 0) {
      iVar1 = 0;
    }
    else {
      iVar2 = 0;
      if (param_1 == 0) {
        iVar1 = FUN_0019c88c(param_2,param_3);
      }
      else {
        while( true ) {
          if (*(char *)(param_1 + iVar2) == '\0') break;
          iVar2 = iVar2 + 1;
        }
        iVar1 = (***(code ***)(DAT_0019c998 + 0x19c92c + DAT_0019c99c))(param_1,iVar2 + param_3 + 1)
        ;
        if (iVar1 == 0) {
          FUN_00179430(0,0);
          iVar1 = param_1;
        }
        else {
          memcpy((void *)(iVar1 + iVar2),param_2,param_3);
          *(undefined *)(iVar1 + iVar2 + param_3) = 0;
        }
      }
    }
  }
  return iVar1;
}


