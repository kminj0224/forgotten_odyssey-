/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a6c8  Symbol: FUN_0018a6c8 */

void FUN_0018a6c8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char *__format;
  char *__format_00;
  int iVar2;
  int iVar3;
  int local_60;
  char acStack_50 [52];
  int local_1c;
  
  iVar2 = DAT_0018a794 + 0x18a6d4;
  local_1c = **(int **)(iVar2 + DAT_0018a798);
  if (((param_2 == 0) || (param_3 == 0)) || (*(int *)(param_3 + 4) != 0x12)) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_00189d54(param_1,param_2,*(undefined4 *)(param_3 + 8));
    if (local_60 == 0) {
      if (*(int *)(param_3 + 0xc) == 0) {
        snprintf(acStack_50,0x32,(char *)(iVar2 + DAT_0018a79c));
      }
      else {
        snprintf(acStack_50,0x32,(char *)(iVar2 + DAT_0018a7a0));
      }
      iVar1 = FUN_00189e8c(param_1,param_2,acStack_50);
      iVar3 = 2;
      __format = (char *)(iVar2 + DAT_0018a7a4);
      __format_00 = (char *)(iVar2 + DAT_0018a7a8);
      while (iVar1 != 0) {
        if (iVar3 == DAT_0018a7ac) goto LAB_0018a77e;
        if (*(int *)(param_3 + 0xc) == 0) {
          snprintf(acStack_50,0x32,__format_00,iVar3 + -1);
        }
        else {
          snprintf(acStack_50,0x32,__format,*(int *)(param_3 + 0xc),iVar3 + -1);
        }
        iVar1 = FUN_00189e8c(param_1,param_2,acStack_50);
        iVar3 = iVar3 + 1;
      }
      local_60 = FUN_0018a4ec(param_2,*(undefined4 *)(param_3 + 8),acStack_50);
    }
  }
LAB_0018a77e:
  if (local_1c != **(int **)(iVar2 + DAT_0018a798)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_60);
  }
  return;
}


