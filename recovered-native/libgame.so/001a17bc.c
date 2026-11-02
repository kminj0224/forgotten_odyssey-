/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a17bc  Symbol: FUN_001a17bc */

void FUN_001a17bc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined auStack_98 [16];
  int local_88;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_1c;
  
  iVar2 = DAT_001a185c + 0x1a17ca;
  local_1c = **(int **)(iVar2 + DAT_001a1860);
  FUN_0017c498();
  if ((param_3 != 0) && (param_1 != 0)) {
    if (param_6 == 0) {
      param_6 = iVar2 + DAT_001a1864;
    }
    memset(auStack_98,0,0x7c);
    local_70 = param_5;
    local_88 = param_6;
    local_80 = param_1;
    local_7c = param_2;
    local_74 = param_4;
    FUN_0019f968(auStack_98);
    local_78 = local_78 | 0x20;
    iVar1 = FUN_00189564(param_2);
    if (((iVar1 == 0) ||
        (iVar1 = FUN_0019fec0(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x34)),
        iVar1 < 0)) || (iVar1 == 0)) {
      FUN_001a0e5c(auStack_98,param_3);
    }
    else {
      FUN_001a0604(auStack_98,param_3);
    }
  }
  if (local_1c != **(int **)(iVar2 + DAT_001a1860)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


