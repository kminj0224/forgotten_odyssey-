/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b79e8  Symbol: FUN_001b79e8 */

void FUN_001b79e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(iVar2 + 0x30) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1c0) + 0xc))(param_1,iVar2 + 8);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x30) = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x144);
  (**(code **)(*(int *)(param_1 + 0x1c4) + 4))
            (param_1,iVar2 + 8,iVar2 + 0x34,uVar3,param_2,param_3,param_4);
  if (uVar3 <= *(uint *)(iVar2 + 0x34)) {
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
  }
  return;
}


