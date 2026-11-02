/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c4944  Symbol: FUN_001c4944 */

void FUN_001c4944(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  int local_18;
  int local_14;
  
  piVar2 = (int *)__cxa_allocate_exception(0x10);
  local_14 = FUN_001c87b4();
  local_18 = param_1;
  FUN_001eed40(auStack_1c,DAT_001c49e4 + 0x1c4974,auStack_20);
  FUN_001c79a0(piVar2,auStack_1c);
  FUN_001ed6b8(auStack_1c);
  *piVar2 = *(int *)(DAT_001c49e8 + 0x1c49a8) + 8;
  iVar1 = DAT_001c49ec;
  piVar2[2] = local_18;
  piVar2[3] = local_14;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(piVar2,*(undefined4 *)(&UNK_001c49cc + DAT_001c49f0),*(undefined4 *)(iVar1 + 0x1c49c4)
             );
}


