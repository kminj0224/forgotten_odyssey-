/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6308  Symbol: FUN_001a6308 */

void FUN_001a6308(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x188);
  if (*(uint *)(iVar4 + 8) < *(uint *)(param_1 + 0x11c)) {
    uVar3 = *(uint *)(iVar4 + 0xc);
    do {
      uVar2 = *(uint *)(param_1 + 0x118);
      if (uVar3 < uVar2) {
        (**(code **)(*(int *)(param_1 + 0x18c) + 4))
                  (param_1,param_2,param_3,param_4,iVar4 + 0x18,iVar4 + 0xc,uVar2);
        if (*(int *)(iVar4 + 0xc) != *(int *)(param_1 + 0x118)) {
          return;
        }
      }
      else if (uVar3 != uVar2) {
        return;
      }
      iVar1 = (**(code **)(*(int *)(param_1 + 400) + 4))(param_1,iVar4 + 0x18);
      if (iVar1 == 0) {
        if (*(int *)(iVar4 + 0x10) != 0) {
          return;
        }
        *param_3 = *param_3 + -1;
        *(undefined4 *)(iVar4 + 0x10) = 1;
        return;
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        *param_3 = *param_3 + 1;
        *(undefined4 *)(iVar4 + 0x10) = 0;
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
      uVar2 = *(int *)(iVar4 + 8) + 1;
      *(uint *)(iVar4 + 8) = uVar2;
      uVar3 = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x11c));
  }
  return;
}


