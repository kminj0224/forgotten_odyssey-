/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015f98  Symbol: __cxa_allocate_dependent_exception */

void * __cxa_allocate_dependent_exception(void)

{
  void *__s;
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  __s = malloc(0x78);
  if (__s != (void *)0x0) {
LAB_00015fb0:
    iVar1 = __cxa_get_globals();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    memset(__s,0,0x78);
    return __s;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(DAT_0001609c + 0x15fe8));
  iVar1 = DAT_000160a8;
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar4 = *(uint *)(DAT_000160a0 + 0x15ffc);
    while ((uVar4 & 1) != 0) {
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 >> 1;
      if (uVar5 == 0x20) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    *(uint *)(DAT_000160a4 + 0x16030) = *(uint *)(DAT_000160a0 + 0x15ffc) | 1 << (uVar5 & 0xff);
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x16038));
    if (iVar1 == 0) {
      __s = (void *)(DAT_000160ac + 0x16050 + uVar5 * 0x78);
      goto LAB_00015fb0;
    }
  }
  else {
    FUN_00015cf4();
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar1 = DAT_000160b4 + 0x1608c;
  iVar2 = DAT_000160b8 + 0x16090;
  *piVar3 = DAT_000160b0 + 0x16088;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar1,iVar2);
}


