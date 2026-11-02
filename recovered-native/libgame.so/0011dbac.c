/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011dbac  Symbol: Inventory_is_Full_Next */

/* New_Notice::Inventory_is_Full_Next() */

void __thiscall New_Notice::Inventory_is_Full_Next(New_Notice *this)

{
  int iVar1;
  char *__format;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char acStack_80 [100];
  int local_1c;
  
  piVar5 = *(int **)(DAT_0011dc48 + 0x11dbb8);
  local_1c = *piVar5;
  (**(code **)(*(int *)this + 0xd4))(this,1);
  memset(acStack_80,0,100);
  iVar2 = 1;
  iVar1 = 0;
  piVar3 = *(int **)(DAT_0011dc58 + 0x11dbf2);
  piVar4 = piVar3;
  do {
    if (*piVar4 ==
        *(int *)((**(int **)(DAT_0011dc54 + 0x11dbe0) + DAT_0011dc50) * 4 +
                **(int **)(DAT_0011dc4c + 0x11dbd8))) {
      iVar1 = iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 3;
  } while (iVar2 != 0x15);
  iVar2 = piVar3[iVar1 * 3 + 1];
  if (iVar2 == 0) {
    iVar2 = piVar3[iVar1 * 3 + 2];
    __format = (char *)(DAT_0011dc5c + 0x11dc1a);
    iVar1 = DAT_0011dc60 + 0x11dc1c;
  }
  else {
    __format = (char *)(DAT_0011dc64 + 0x11dc3e);
    iVar1 = DAT_0011dc68 + 0x11dc40;
  }
  sprintf(acStack_80,__format,iVar1,iVar2);
  noticeWithType(this,acStack_80,4,1);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


