/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016fbc  Symbol: __cxa_end_catch */

void __cxa_end_catch(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = __cxa_get_globals_fast();
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  piVar1 = (int *)uVar5;
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    return;
  }
  if (((((*(char *)(iVar4 + 0x20) != 'G') || (*(char *)(iVar4 + 0x21) != 'N')) ||
       (*(char *)(iVar4 + 0x22) != 'U')) ||
      ((*(char *)(iVar4 + 0x23) != 'C' || (*(char *)(iVar4 + 0x24) != 'C')))) ||
     ((*(char *)(iVar4 + 0x25) != '+' ||
      ((*(char *)(iVar4 + 0x26) != '+' || (1 < *(byte *)(iVar4 + 0x27))))))) {
    *piVar1 = 0;
    _Unwind_DeleteException(iVar4 + 0x20,uVar2,0,in_r3);
    return;
  }
  iVar3 = *(int *)(iVar4 + 0x14);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0) {
      *piVar1 = *(int *)(iVar4 + 0x10);
    }
  }
  else {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar4 + 0x10);
      *piVar1 = iVar3;
      _Unwind_DeleteException(iVar4 + 0x20,uVar2,iVar3,in_r3);
      return;
    }
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
  }
  *(int *)(iVar4 + 0x14) = iVar3;
  return;
}


