/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7304  Symbol: FUN_001c7304 */

int * FUN_001c7304(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  iVar2 = DAT_001c743c;
  *param_1 = 0;
  FUN_001c7290();
  iVar3 = DAT_001c7444;
  piVar5 = *(int **)(iVar2 + 0x1c7320 + DAT_001c7440);
  iVar1 = *piVar5;
  *param_1 = iVar1;
  if (iVar1 == **(int **)(iVar2 + 0x1c7320 + iVar3)) {
    FUN_0021100c(iVar1,1);
  }
  else {
    puVar4 = (uint *)(DAT_001c7448 + 0x1c7350);
    if (((*puVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar4), iVar2 != 0)) {
      *(undefined4 *)(DAT_001c7454 + 0x1c73bc) = 0;
      __cxa_guard_release(puVar4);
    }
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(DAT_001c744c + 0x1c7364));
    if (iVar2 != 0) {
      piVar5 = (int *)__cxa_allocate_exception(4);
      iVar1 = DAT_001c7458 + 0x1c73f0;
      iVar2 = DAT_001c745c + 0x1c73f4;
      iVar3 = DAT_001c7460 + 0x1c73f8;
      *piVar5 = iVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar5,iVar2,iVar3,iVar1,param_4);
    }
    FUN_0021100c(*piVar5,1);
    iVar2 = DAT_001c7450;
    *param_1 = *piVar5;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x1c738c));
    if (iVar2 != 0) {
      piVar5 = (int *)__cxa_allocate_exception(4);
      iVar2 = DAT_001c7468 + 0x1c742c;
      iVar3 = DAT_001c746c + 0x1c7430;
      *piVar5 = DAT_001c7464 + 0x1c7428;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar5,iVar2,iVar3);
    }
  }
  return param_1;
}


