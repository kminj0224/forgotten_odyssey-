/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000164bc  Symbol: __cxa_allocate_exception */

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
LAB_000164d4:
    iVar1 = __cxa_get_globals();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    memset(__s,0,0x80);
    return (int)__s + 0x80;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(DAT_000165c0 + 0x1650c));
  iVar1 = DAT_000165cc;
  if (iVar2 != 0) {
    FUN_00016420();
    if (extraout_r1 == -1) {
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
    __cxa_end_cleanup();
LAB_0001658c:
    piVar3 = (int *)__cxa_allocate_exception(4);
    iVar1 = DAT_000165d8 + 0x165b0;
    iVar2 = DAT_000165dc + 0x165b4;
    *piVar3 = DAT_000165d4 + 0x165ac;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,iVar1,iVar2);
  }
  if (param_1 + 0x80U < 0x201) {
    uVar5 = 0;
    uVar4 = *(uint *)(DAT_000165c4 + 0x16524);
    do {
      if ((uVar4 & 1) == 0) {
        *(uint *)(DAT_000165c8 + 0x1655c) = *(uint *)(DAT_000165c4 + 0x16524) | 1 << (uVar5 & 0xff);
        iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x16564));
        if (iVar1 != 0) goto LAB_0001658c;
        __s = (void *)(DAT_000165d0 + 0x16578 + uVar5 * 0x200);
        goto LAB_000164d4;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 >> 1;
    } while (uVar5 != 0x20);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


