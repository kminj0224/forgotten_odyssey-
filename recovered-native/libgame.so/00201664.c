/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201664  Symbol: __cxa_allocate_exception */

int __cxa_allocate_exception(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *__s;
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  __s = malloc(param_1 + 0x80U);
  if (__s != (void *)0x0) {
LAB_0020167c:
    iVar1 = __cxa_get_globals();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    memset(__s,0,0x80);
    return (int)__s + 0x80;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00201768 + 0x2016b4));
  iVar1 = DAT_00201774;
  if (iVar2 != 0) {
    FUN_00201628();
    if (extraout_r1 == -1) {
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
                    /* WARNING: Subroutine does not return */
    __cxa_end_cleanup();
  }
  if (param_1 + 0x80U < 0x201) {
    uVar6 = 0;
    uVar4 = *(uint *)(DAT_0020176c + 0x2016cc);
    do {
      if ((uVar4 & 1) == 0) {
        *(uint *)(DAT_00201770 + 0x201704) =
             *(uint *)(DAT_0020176c + 0x2016cc) | 1 << (uVar6 & 0xff);
        iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x20170c));
        if (iVar1 != 0) {
          piVar3 = (int *)__cxa_allocate_exception(4);
          iVar5 = DAT_0020177c + 0x201754;
          iVar1 = DAT_00201780 + 0x201758;
          iVar2 = DAT_00201784 + 0x20175c;
          *piVar3 = iVar5;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(piVar3,iVar1,iVar2,iVar5,param_4);
        }
        __s = (void *)(DAT_00201778 + 0x201720 + uVar6 * 0x200);
        goto LAB_0020167c;
      }
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 >> 1;
    } while (uVar6 != 0x20);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


