/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000160bc  Symbol: __cxa_free_dependent_exception */

void __cxa_free_dependent_exception(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  
  if ((param_1 < (void *)(DAT_00016188 + 0x160cc)) || ((void *)(DAT_00016188 + 0x16fcc) <= param_1))
  {
    free(param_1);
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_0001618c + 0x160f8));
  iVar2 = DAT_0001619c;
  if (iVar1 != 0) {
    while (FUN_00015cf4(), extraout_r1 != -1) {
      __cxa_end_cleanup();
    }
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
  *(uint *)(DAT_00016198 + 0x16124) =
       *(uint *)(DAT_00016198 + 0x16124) &
       ~(1 << ((uint)((ulonglong)DAT_00016194 *
                      (ulonglong)(uint)((int)param_1 - (DAT_00016190 + 0x16110)) >> 0x26) & 0xff));
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x1613c));
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_000161a4 + 0x16168;
  iVar1 = DAT_000161a8 + 0x1616c;
  *piVar3 = DAT_000161a0 + 0x16164;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar2,iVar1);
}


