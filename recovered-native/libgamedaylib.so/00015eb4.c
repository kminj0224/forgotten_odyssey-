/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015eb4  Symbol: __cxa_free_exception */

void __cxa_free_exception(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  
  if ((param_1 < DAT_00015f78 + 0x15ec4U) || (DAT_00015f78 + 0x19ec4U <= param_1)) {
    free((void *)(param_1 - 0x80));
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00015f7c + 0x15ef0));
  iVar2 = DAT_00015f88;
  if (iVar1 != 0) {
    while (FUN_00015cf4(), extraout_r1 != -1) {
      __cxa_end_cleanup();
    }
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
  *(uint *)(DAT_00015f80 + 0x15f08) =
       *(uint *)(DAT_00015f80 + 0x15f08) & ~(1 << (param_1 - (DAT_00015f84 + 0x15f0c) >> 9 & 0xff));
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x15f2c));
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar2 = DAT_00015f90 + 0x15f58;
  iVar1 = DAT_00015f94 + 0x15f5c;
  *piVar3 = DAT_00015f8c + 0x15f54;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar2,iVar1);
}


