/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00203160  Symbol: operator.new */

/* operator new(unsigned int) */

void * operator_new(uint param_1)

{
  void *pvVar1;
  int *piVar2;
  code *pcVar3;
  code **ppcVar4;
  int iVar5;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  iVar5 = DAT_002031fc + 0x203184;
  if (pvVar1 == (void *)0x0) {
    ppcVar4 = *(code ***)(iVar5 + DAT_00203200);
    pcVar3 = *ppcVar4;
    while( true ) {
      if (pcVar3 == (code *)0x0) {
        piVar2 = (int *)__cxa_allocate_exception(4);
        *piVar2 = *(int *)(iVar5 + DAT_00203204) + 8;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(piVar2,*(undefined4 *)(iVar5 + DAT_00203208),
                    *(undefined4 *)(iVar5 + DAT_0020320c));
      }
      (*pcVar3)();
      pvVar1 = malloc(param_1);
      if (pvVar1 != (void *)0x0) break;
      pcVar3 = *ppcVar4;
    }
    return pvVar1;
  }
  return pvVar1;
}


