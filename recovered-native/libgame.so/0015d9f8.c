/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d9f8  Symbol: FUN_0015d9f8 */

void FUN_0015d9f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char acStack_74 [52];
  int iStack_40;
  int iStack_38;
  
  piVar1 = *(int **)(DAT_0015da48 + 0x15da0c);
  iStack_40 = *piVar1;
  iStack_38 = param_2;
  if (param_2 != 0) {
    memset(acStack_74,0,0x32);
    sprintf(acStack_74,(char *)(DAT_0015da4c + 0x15da2c),param_3,param_4);
    FUN_0015d876(param_2,acStack_74);
  }
  if (iStack_40 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


