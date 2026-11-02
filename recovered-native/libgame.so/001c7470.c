/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7470  Symbol: FUN_001c7470 */

undefined4 FUN_001c7470(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *local_1c;
  
  puVar4 = (uint *)(DAT_001c764c + 0x1c7484);
  FUN_001c7290();
  iVar3 = DAT_001c7650 + 0x1c74a0;
  if (((*puVar4 & 1) == 0) && (iVar1 = __cxa_guard_acquire(puVar4), iVar1 != 0)) {
    *(undefined4 *)(DAT_001c7668 + 0x1c7568) = 0;
    __cxa_guard_release(puVar4);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_001c7654 + 0x1c74ac));
  if (iVar1 != 0) {
    piVar2 = (int *)__cxa_allocate_exception(4);
    iVar3 = DAT_001c7670 + 0x1c75b8;
    iVar1 = DAT_001c7674 + 0x1c75bc;
    *piVar2 = DAT_001c766c + 0x1c75b4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar2,iVar3,iVar1);
  }
  puVar6 = *(undefined4 **)(iVar3 + DAT_001c7658);
  uVar5 = *puVar6;
  FUN_0021100c(*param_2,1);
  *puVar6 = *param_2;
  FUN_001c56e0(&local_1c,param_2);
  iVar1 = FUN_001ed39c(&local_1c,DAT_001c765c + 0x1c74f0);
  if (iVar1 != 0) {
    setlocale(6,local_1c);
  }
  if ((local_1c + -0xc != *(char **)(iVar3 + DAT_001c7660)) &&
     (iVar3 = FUN_0021100c(local_1c + -4,0xffffffff), iVar3 < 1)) {
    operator_delete(local_1c + -0xc);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(DAT_001c7664 + 0x1c7528));
  if (iVar3 == 0) {
    FUN_001c56d8(param_1,uVar5);
    return param_1;
  }
  piVar2 = (int *)__cxa_allocate_exception(4);
  iVar3 = DAT_001c767c + 0x1c75e4;
  iVar1 = DAT_001c7680 + 0x1c75e8;
  *piVar2 = DAT_001c7678 + 0x1c75e0;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar2,iVar3,iVar1);
}


