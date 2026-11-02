/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4458  Symbol: FUN_001a4458 */

void FUN_001a4458(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_001a44a4 + 0x1a4464;
  if (*(int *)(iVar4 + DAT_001a44a8 + 0xc) == 0) {
    FUN_001a40e8();
  }
  if (param_1 == 0) {
    iVar2 = 0;
    uVar1 = DAT_001a44b0;
    iVar3 = DAT_001a44ac;
  }
  else {
    iVar2 = iVar4 + DAT_001a44a8;
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 < 0x32) {
      *(int *)(iVar3 * 4 + *(int *)(iVar2 + 0xc)) = param_1;
      *(int *)(iVar2 + 0x10) = iVar3 + 1;
      return;
    }
    iVar2 = iVar4 + DAT_001a44b8;
    uVar1 = DAT_001a44bc;
    iVar3 = DAT_001a44b4;
  }
  FUN_001a39bc(uVar1,iVar4 + iVar3,iVar2);
  return;
}


