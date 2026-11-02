/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f968  Symbol: FUN_0019f968 */

void FUN_0019f968(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  size_t __n;
  int iVar5;
  int *piVar6;
  
  iVar5 = DAT_0019f9fc + 0x19f974;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
      *(int *)(param_1 + 0x74) = iVar5 + DAT_0019fa00;
    }
    iVar1 = DAT_0019fa04;
    piVar6 = *(int **)(iVar5 + DAT_0019fa04);
    iVar2 = FUN_0019c49c(*piVar6);
    if ((iVar2 == 0) || (*piVar6 == 0)) {
      memset((void *)(param_1 + 0x2c),0,0x3d);
    }
    else {
      *(int *)(param_1 + 0x70) = iVar2;
      uVar3 = __divsi3(0x3c,iVar2);
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      iVar2 = 0;
      while( true ) {
        __n = *(size_t *)(param_1 + 0x70);
        if (*(int *)(param_1 + 0x6c) <= iVar2) break;
        iVar4 = iVar2 * __n;
        iVar2 = iVar2 + 1;
        memcpy((void *)(param_1 + 0x2c + iVar4),**(void ***)(iVar5 + iVar1),__n);
      }
      *(undefined *)(param_1 + __n * *(int *)(param_1 + 0x6c) + 0x2c) = 0;
    }
    if (**(int **)(iVar5 + DAT_0019fa08) != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 4;
    }
  }
  return;
}


