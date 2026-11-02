/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001600c  Symbol: _edata */

void * _edata(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint unaff_r4;
  void *__s;
  undefined in_ZR;
  
  iVar1 = DAT_000160a8;
  while( true ) {
    if ((bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    if ((param_4 & 1) == 0) break;
    unaff_r4 = unaff_r4 + 1;
    in_ZR = unaff_r4 == 0x20;
    param_4 = param_4 >> 1;
  }
  *(uint *)(DAT_000160a4 + 0x16030) = param_3 | 1 << (unaff_r4 & 0xff);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x16038));
  if (iVar1 == 0) {
    __s = (void *)(DAT_000160ac + 0x16050 + unaff_r4 * 0x78);
    iVar1 = __cxa_get_globals();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    memset(__s,0,0x78);
    return __s;
  }
  piVar2 = (int *)__cxa_allocate_exception(4);
  iVar1 = DAT_000160b4 + 0x1608c;
  iVar3 = DAT_000160b8 + 0x16090;
  *piVar2 = DAT_000160b0 + 0x16088;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar2,iVar1,iVar3);
}


