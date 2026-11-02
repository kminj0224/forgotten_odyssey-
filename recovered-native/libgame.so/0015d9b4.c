/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d9b4  Symbol: setIntegerForKey */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::CCUserDefault::setIntegerForKey(char const*, int) */

void __thiscall
cocos2d::CCUserDefault::setIntegerForKey(CCUserDefault *this,char *param_1,int param_2)

{
  int *piVar1;
  char acStack_48 [52];
  int local_14;
  
  piVar1 = *(int **)(_FUN_0015d9f8 + 0x15d9c0);
  local_14 = *piVar1;
  if (param_1 != (char *)0x0) {
    memset(acStack_48,0,0x32);
    sprintf(acStack_48,(char *)(iRam0015d9fc + 0x15d9de),param_2);
    this = (CCUserDefault *)FUN_0015d876(param_1,acStack_48);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


