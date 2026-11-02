/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a02f0  Symbol: FUN_001a02f0 */

void FUN_001a02f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_001a035c + 0x1a02fe + DAT_001a0364;
  iVar2 = DAT_001a035c + 0x1a02fe + DAT_001a0360;
  for (iVar5 = *(int *)(param_2 + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x18)) {
    if (*(int *)(iVar5 + 4) == 3) {
      FUN_001a0098(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x20),param_2,
                   *(undefined4 *)(iVar5 + 0x28));
    }
    else if (*(int *)(iVar5 + 4) == 5) {
      FUN_0018aa58(*(undefined4 *)(param_1 + 0x10),iVar2,1);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = *(undefined4 *)(iVar5 + 8);
      uVar1 = FUN_0019c49c(uVar6);
      FUN_0018aa58(uVar4,uVar6,uVar1);
      FUN_0018aa58(*(undefined4 *)(param_1 + 0x10),iVar3,1);
    }
  }
  return;
}


