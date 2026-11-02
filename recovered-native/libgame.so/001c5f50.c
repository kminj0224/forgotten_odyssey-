/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c5f50  Symbol: FUN_001c5f50 */

void FUN_001c5f50(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(DAT_001c60b8 + 0x1c5f64);
  if (((*puVar4 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(puVar4,param_2,param_3,DAT_001c60bc + 0x1c5f6c), iVar1 != 0)) {
    *(undefined4 *)(DAT_001c60d4 + 0x1c6018) = 0;
    __cxa_guard_release(puVar4);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(DAT_001c60c0 + 0x1c5f88));
  if (iVar1 != 0) {
    piVar2 = (int *)__cxa_allocate_exception(4);
    iVar1 = DAT_001c60dc + 0x1c6068;
    iVar3 = DAT_001c60e0 + 0x1c606c;
    *piVar2 = DAT_001c60d8 + 0x1c6064;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar2,iVar1,iVar3);
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + param_3 * 4) == 0) {
    FUN_0021100c(param_2 + 1,1);
    *(int **)(*(int *)(param_1 + 0xc) + param_3 * 4) = param_2;
  }
  else if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(DAT_001c60c4 + 0x1c5fc4));
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)__cxa_allocate_exception(4);
  iVar1 = DAT_001c60cc + 0x1c5ff0;
  iVar3 = DAT_001c60d0 + 0x1c5ff4;
  *piVar2 = DAT_001c60c8 + 0x1c5fec;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar2,iVar1,iVar3);
}


