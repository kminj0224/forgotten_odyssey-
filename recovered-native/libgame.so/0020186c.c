/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020186c  Symbol: __cxa_allocate_dependent_exception */

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
LAB_00201884:
    iVar1 = __cxa_get_globals();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    memset(__s,0,0x78);
    return __s;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(DAT_00201970 + 0x2018bc));
  iVar1 = DAT_0020197c;
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar4 = *(uint *)(DAT_00201974 + 0x2018d0);
    while ((uVar4 & 1) != 0) {
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 >> 1;
      if (uVar5 == 0x20) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    *(uint *)(DAT_00201978 + 0x201904) = *(uint *)(DAT_00201974 + 0x2018d0) | 1 << (uVar5 & 0xff);
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x20190c));
    if (iVar1 == 0) {
      __s = (void *)(DAT_00201980 + 0x201924 + uVar5 * 0x78);
      goto LAB_00201884;
    }
  }
  else {
    FUN_00201628();
  }
  piVar3 = (int *)__cxa_allocate_exception(4);
  iVar1 = DAT_00201988 + 0x201960;
  iVar2 = DAT_0020198c + 0x201964;
  *piVar3 = DAT_00201984 + 0x20195c;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar3,iVar1,iVar2);
}


