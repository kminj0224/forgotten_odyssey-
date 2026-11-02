/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000165e0  Symbol: __cxa_free_exception */

void __cxa_free_exception(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  
  if ((param_1 < DAT_000166a4 + 0x165f0U) || (DAT_000166a4 + 0x1a5f0U <= param_1)) {
    free((void *)(param_1 - 0x80));
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_000166a8 + 0x1661c));
  iVar2 = DAT_000166b4;
  if (iVar1 != 0) {
    while (FUN_00016420(), extraout_r1 != -1) {
      __cxa_end_cleanup();
    }
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
  *(uint *)(DAT_000166ac + 0x16634) =
       *(uint *)(DAT_000166ac + 0x16634) & ~(1 << (param_1 - (DAT_000166b0 + 0x16638) >> 9 & 0xff));
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x16658));
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_000166bc + 0x16684;
  iVar1 = DAT_000166c0 + 0x16688;
  *piVar3 = DAT_000166b8 + 0x16680;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar2,iVar1);
}


