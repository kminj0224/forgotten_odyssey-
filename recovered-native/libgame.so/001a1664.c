/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1664  Symbol: FUN_001a1664 */

void FUN_001a1664(int param_1,int *param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_a8;
  int local_9c;
  undefined auStack_98 [16];
  int local_88;
  int local_80;
  int local_7c;
  uint local_78;
  undefined4 local_70;
  int local_1c;
  
  iVar4 = DAT_001a175c + 0x1a1670;
  local_1c = **(int **)(iVar4 + DAT_001a1760);
  local_9c = 0;
  if (param_3 == (int *)0x0) {
    param_3 = &local_9c;
  }
  if (param_2 == (int *)0x0) {
    *param_3 = 0;
    goto LAB_001a1746;
  }
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 == 0) goto LAB_001a1746;
  local_a8 = param_4;
  if (param_4 == 0) {
    local_a8 = *(int *)(param_1 + 0x3c);
    iVar1 = 0;
    if (local_a8 != 0) goto LAB_001a16ac;
  }
  else {
LAB_001a16ac:
    iVar1 = FUN_001a4238(local_a8);
    if (iVar1 == 0) {
      FUN_0019fa0c(DAT_001a1764,param_1,local_a8);
      goto LAB_001a1746;
    }
  }
  iVar2 = FUN_0018fadc(iVar1);
  iVar1 = DAT_001a1768;
  if (iVar2 != 0) {
    memset(auStack_98,0,0x7c);
    local_88 = local_a8;
    local_70 = param_5;
    local_80 = iVar2;
    local_7c = param_1;
    FUN_0019f968(auStack_98);
    local_78 = local_78 | 0x20;
    FUN_001a0bd4(auStack_98,param_1);
    FUN_0019065c(iVar2);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *param_3 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
      puVar3 = *(undefined4 **)(iVar2 + 0x10);
    }
    else {
      *param_3 = *(int *)(*(int *)(iVar2 + 0x14) + 4);
      puVar3 = *(undefined4 **)(iVar2 + 0x14);
    }
    iVar1 = FUN_0019c88c(*puVar3);
    *param_2 = iVar1;
    FUN_001906f8(iVar2);
    if ((*param_2 != 0) || (*param_3 < 1)) goto LAB_001a1746;
    *param_3 = 0;
    iVar1 = DAT_001a176c;
  }
  FUN_0019fcac(iVar4 + iVar1);
LAB_001a1746:
  if (local_1c == **(int **)(iVar4 + DAT_001a1760)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


