/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201788  Symbol: __cxa_free_exception */

void __cxa_free_exception(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  
  if ((param_1 < DAT_0020184c + 0x201798U) || (DAT_0020184c + 0x205798U <= param_1)) {
    free((void *)(param_1 - 0x80));
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00201850 + 0x2017c4));
  iVar2 = DAT_0020185c;
  if (iVar1 != 0) {
    FUN_00201628();
    if (extraout_r1 != -1) {
                    /* WARNING: Subroutine does not return */
      __cxa_end_cleanup();
    }
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
  *(uint *)(DAT_00201854 + 0x2017dc) =
       *(uint *)(DAT_00201854 + 0x2017dc) &
       ~(1 << (param_1 - (DAT_00201858 + 0x2017e0) >> 9 & 0xff));
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x201800));
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00201864 + 0x20182c;
  iVar1 = DAT_00201868 + 0x201830;
  *piVar3 = DAT_00201860 + 0x201828;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar2,iVar1);
}


