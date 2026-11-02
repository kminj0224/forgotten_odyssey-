/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aced8  Symbol: FUN_001aced8 */

void FUN_001aced8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x1c4);
  uVar3 = *(uint *)(iVar2 + 0x18);
  if (uVar3 == 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x10),1);
    uVar3 = *(uint *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
  }
  (**(code **)(*(int *)(param_1 + 0x1d8) + 4))
            (param_1,param_2,param_3,param_4,uVar1,iVar2 + 0x18,*(undefined4 *)(iVar2 + 0x10));
  uVar4 = *(uint *)(iVar2 + 0x18);
  if (uVar3 < uVar4) {
    (**(code **)(*(int *)(param_1 + 0x1e0) + 4))
              (param_1,*(int *)(iVar2 + 0xc) + uVar3 * 4,0,uVar4 - uVar3);
    *param_6 = *param_6 + (uVar4 - uVar3);
    uVar4 = *(uint *)(iVar2 + 0x18);
  }
  if (*(uint *)(iVar2 + 0x10) <= uVar4) {
    *(uint *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(uint *)(iVar2 + 0x10);
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  return;
}


