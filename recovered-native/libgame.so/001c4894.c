/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4894  Symbol: FUN_001c4894 */

void FUN_001c4894(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined auStack_1c [4];
  int local_18;
  int *local_14;
  
  piVar2 = (int *)__cxa_allocate_exception(0x10);
  local_14 = (int *)FUN_001c7d60();
  local_18 = param_1;
  (**(code **)(*local_14 + 0xc))(auStack_1c,local_14,param_1);
  FUN_001c7a74(piVar2,auStack_1c);
  FUN_001ed6b8(auStack_1c);
  *piVar2 = *(int *)(DAT_001c4938 + 0x1c48fc) + 8;
  iVar1 = DAT_001c493c;
  piVar2[2] = local_18;
  piVar2[3] = (int)local_14;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar2,*(undefined4 *)(&UNK_001c4920 + DAT_001c4940),*(undefined4 *)(iVar1 + 0x1c4918)
             );
}


