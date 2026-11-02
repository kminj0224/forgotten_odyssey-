/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000167e8  Symbol: __cxa_free_dependent_exception */

void __cxa_free_dependent_exception(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  
  if ((param_1 < (void *)(DAT_000168b4 + 0x167f8)) || ((void *)(DAT_000168b4 + 0x176f8) <= param_1))
  {
    free(param_1);
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_000168b8 + 0x16824));
  iVar2 = DAT_000168c8;
  if (iVar1 != 0) {
    while (FUN_00016420(), extraout_r1 != -1) {
      __cxa_end_cleanup();
    }
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
  *(uint *)(DAT_000168c4 + 0x16850) =
       *(uint *)(DAT_000168c4 + 0x16850) &
       ~(1 << ((uint)((ulonglong)DAT_000168c0 *
                      (ulonglong)(uint)((int)param_1 - (DAT_000168bc + 0x1683c)) >> 0x26) & 0xff));
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x16868));
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_000168d0 + 0x16894;
  iVar1 = DAT_000168d4 + 0x16898;
  *piVar3 = DAT_000168cc + 0x16890;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar2,iVar1);
}


