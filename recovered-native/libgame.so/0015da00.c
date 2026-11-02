/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015da00  Symbol: setDoubleForKey */

/* cocos2d::CCUserDefault::setDoubleForKey(char const*, double) */

void cocos2d::CCUserDefault::setDoubleForKey(char *param_1,double param_2)

{
  int in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  int *piVar1;
  char acStack_50 [52];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0015da48 + 0x15da0c);
  local_1c = *piVar1;
  if (in_r1 != 0) {
    memset(acStack_50,0,0x32);
    sprintf(acStack_50,(char *)(DAT_0015da4c + 0x15da2c),in_r2,in_r3);
    param_1 = (char *)FUN_0015d876(in_r1,acStack_50);
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


