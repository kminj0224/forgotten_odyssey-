/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015d90  Symbol: __cxa_allocate_exception */

int __cxa_allocate_exception(int param_1)

{
  void *__s;
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  uint uVar4;
  uint uVar5;
  
  __s = malloc(param_1 + 0x80U);
  if (__s != (void *)0x0) {
LAB_00015da8:
    iVar1 = __cxa_get_globals();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    memset(__s,0,0x80);
    return (int)__s + 0x80;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00015e94 + 0x15de0));
  iVar1 = DAT_00015ea0;
  if (iVar2 != 0) {
    FUN_00015cf4();
    if (extraout_r1 == -1) {
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
    __cxa_end_cleanup();
LAB_00015e60:
    piVar3 = (int *)__cxa_allocate_exception(4);
    iVar1 = DAT_00015eac + 0x15e84;
    iVar2 = DAT_00015eb0 + 0x15e88;
    *piVar3 = DAT_00015ea8 + 0x15e80;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,iVar1,iVar2);
  }
  if (param_1 + 0x80U < 0x201) {
    uVar5 = 0;
    uVar4 = *(uint *)(DAT_00015e98 + 0x15df8);
    do {
      if ((uVar4 & 1) == 0) {
        *(uint *)(DAT_00015e9c + 0x15e30) = *(uint *)(DAT_00015e98 + 0x15df8) | 1 << (uVar5 & 0xff);
        iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x15e38));
        if (iVar1 != 0) goto LAB_00015e60;
        __s = (void *)(DAT_00015ea4 + 0x15e4c + uVar5 * 0x200);
        goto LAB_00015da8;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 >> 1;
    } while (uVar5 != 0x20);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


