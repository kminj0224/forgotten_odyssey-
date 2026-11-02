/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000166c4  Symbol: __cxa_allocate_dependent_exception */

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
LAB_000166dc:
    iVar1 = __cxa_get_globals();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    memset(__s,0,0x78);
    return __s;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(DAT_000167c8 + 0x16714));
  iVar1 = DAT_000167d4;
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar4 = *(uint *)(DAT_000167cc + 0x16728);
    while ((uVar4 & 1) != 0) {
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 >> 1;
      if (uVar5 == 0x20) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    *(uint *)(DAT_000167d0 + 0x1675c) = *(uint *)(DAT_000167cc + 0x16728) | 1 << (uVar5 & 0xff);
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x16764));
    if (iVar1 == 0) {
      __s = (void *)(DAT_000167d8 + 0x1677c + uVar5 * 0x78);
      goto LAB_000166dc;
    }
  }
  else {
    FUN_00016420();
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar1 = DAT_000167e0 + 0x167b8;
  iVar2 = DAT_000167e4 + 0x167bc;
  *piVar3 = DAT_000167dc + 0x167b4;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar1,iVar2);
}


