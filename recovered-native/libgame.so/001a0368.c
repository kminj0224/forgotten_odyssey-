/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a0368  Symbol: FUN_001a0368 */

void FUN_001a0368(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_001a03d0 + 0x1a0372;
  if ((param_2 != 0) && (iVar2 = *(int *)(param_1 + 0x18), iVar2 != 0)) {
    FUN_00190950(iVar2,1,iVar1 + DAT_001a03d4);
    if ((*(int *)(param_2 + 0x24) != 0) && (*(int *)(*(int *)(param_2 + 0x24) + 0xc) != 0)) {
      FUN_00190a68(iVar2);
      FUN_00190950(iVar2,1,iVar1 + DAT_001a03d8);
    }
    FUN_00190a68(iVar2,*(undefined4 *)(param_2 + 8));
    FUN_00190950(iVar2,2,iVar1 + DAT_001a03dc);
    FUN_001a02f0(iVar2,param_2);
    FUN_00190950(iVar2,1,iVar1 + DAT_001a03e0);
  }
  return;
}


