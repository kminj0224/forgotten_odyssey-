/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a13f8  Symbol: FUN_001a13f8 */

void FUN_001a13f8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_98 [16];
  int local_88;
  int local_80;
  int local_7c;
  uint local_78;
  undefined4 local_70;
  int local_1c;
  
  iVar3 = DAT_001a1488 + 0x1a1404;
  local_1c = **(int **)(iVar3 + DAT_001a148c);
  if (param_2 != 0) {
    iVar2 = DAT_001a148c;
    if (param_3 == 0) {
      param_3 = *(int *)(param_2 + 0x3c);
      iVar2 = 0;
      if (param_3 != 0) goto LAB_001a1420;
    }
    else {
LAB_001a1420:
      iVar2 = FUN_001a4238(param_3,iVar2);
      if (iVar2 == 0) goto LAB_001a1470;
    }
    iVar2 = FUN_0018ff70(param_1,iVar2,*(undefined4 *)(param_2 + 0x24));
    if (iVar2 != 0) {
      memset(auStack_98,0,0x7c);
      local_88 = param_3;
      local_80 = iVar2;
      local_7c = param_2;
      local_70 = param_4;
      FUN_0019f968(auStack_98);
      local_78 = local_78 | 0x20;
      FUN_001a0bd4(auStack_98,param_2);
      uVar1 = FUN_001906f8(iVar2);
      goto LAB_001a1474;
    }
  }
LAB_001a1470:
  uVar1 = 0xffffffff;
LAB_001a1474:
  if (local_1c != **(int **)(iVar3 + DAT_001a148c)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


