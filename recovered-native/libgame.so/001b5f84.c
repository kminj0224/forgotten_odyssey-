/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b5f84  Symbol: FUN_001b5f84 */

uint FUN_001b5f84(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_001b6040 + 0x1b5f9a;
  if (param_3 < param_5) {
    iVar1 = FUN_001b5e98(param_1,param_2,param_3,param_5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_2 = *(int *)(param_1 + 8);
    param_3 = *(int *)(param_1 + 0xc);
  }
  uVar2 = param_3 - param_5;
  uVar3 = param_2 >> (uVar2 & 0xff) & *(uint *)(param_5 * 4 + iVar4 + DAT_001b6044);
  if (*(int *)(param_5 * 4 + param_4) < (int)uVar3) {
    piVar5 = (int *)((param_5 + 1) * 4 + param_4);
    do {
      if ((int)uVar2 < 1) {
        iVar4 = FUN_001b5e98(param_1,param_2,uVar2,1);
        if (iVar4 == 0) {
          return 0xffffffff;
        }
        param_2 = *(int *)(param_1 + 8);
        uVar2 = *(uint *)(param_1 + 0xc);
      }
      uVar2 = uVar2 - 1;
      uVar3 = param_2 >> (uVar2 & 0xff) & 1U | uVar3 << 1;
      iVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      param_5 = param_5 + 1;
    } while (iVar4 < (int)uVar3);
  }
  *(int *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (param_5 < 0x11) {
    uVar2 = (uint)*(byte *)(*(int *)(param_4 + 0x8c) + uVar3 +
                            *(int *)((param_5 + 0x12) * 4 + param_4) + 0x11);
  }
  else {
    *(undefined4 *)(**(int **)(param_1 + 0x10) + 0x14) = 0x79;
    (**(code **)(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10),0xffffffff);
    uVar2 = 0;
  }
  return uVar2;
}


