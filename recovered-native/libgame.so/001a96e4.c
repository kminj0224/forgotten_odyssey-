/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a96e4  Symbol: FUN_001a96e4 */

undefined4 FUN_001a96e4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x14) != 0xcc) {
    (***(code ***)(param_1 + 0x1b8))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xcc;
  }
  if (*(int *)(*(int *)(param_1 + 0x1b8) + 8) == 0) {
LAB_001a978a:
    uVar1 = 1;
    *(uint *)(param_1 + 0x14) = 0xce - (uint)(*(int *)(param_1 + 0x44) == 0);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x8c);
    do {
      while (*(uint *)(param_1 + 0x74) <= uVar2) {
        uVar2 = 0;
        (**(code **)(*(int *)(param_1 + 0x1b8) + 4))(param_1);
        (***(code ***)(param_1 + 0x1b8))(param_1);
        *(undefined4 *)(param_1 + 0x8c) = 0;
        if (*(int *)(*(int *)(param_1 + 0x1b8) + 8) == 0) goto LAB_001a978a;
      }
      uVar3 = uVar2;
      if (*(int *)(param_1 + 8) != 0) {
        *(uint *)(*(int *)(param_1 + 8) + 4) = uVar2;
        *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x74);
        (***(code ***)(param_1 + 8))(param_1);
        uVar3 = *(uint *)(param_1 + 0x8c);
      }
      (**(code **)(*(int *)(param_1 + 0x1bc) + 4))(param_1,0,param_1 + 0x8c,0);
      uVar2 = *(uint *)(param_1 + 0x8c);
    } while (uVar2 != uVar3);
    uVar1 = 0;
  }
  return uVar1;
}


