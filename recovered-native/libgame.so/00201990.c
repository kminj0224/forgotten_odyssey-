/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201990  Symbol: __cxa_free_dependent_exception */

void __cxa_free_dependent_exception(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  
  if ((param_1 < (void *)(DAT_00201a5c + 0x2019a0)) ||
     ((void *)(DAT_00201a5c + 0x2028a0) <= param_1)) {
    free(param_1);
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00201a60 + 0x2019cc));
  iVar2 = DAT_00201a70;
  if (iVar1 != 0) {
    FUN_00201628();
    if (extraout_r1 != -1) {
                    /* WARNING: Subroutine does not return */
      __cxa_end_cleanup();
    }
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
  *(uint *)(DAT_00201a6c + 0x2019f8) =
       *(uint *)(DAT_00201a6c + 0x2019f8) &
       ~(1 << ((uint)((ulonglong)DAT_00201a68 *
                      (ulonglong)(uint)((int)param_1 - (DAT_00201a64 + 0x2019e4)) >> 0x26) & 0xff));
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x201a10));
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00201a78 + 0x201a3c;
  iVar1 = DAT_00201a7c + 0x201a40;
  *piVar3 = DAT_00201a74 + 0x201a38;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar2,iVar1);
}


