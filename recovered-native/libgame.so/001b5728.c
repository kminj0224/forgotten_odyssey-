/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b5728  Symbol: FUN_001b5728 */

void FUN_001b5728(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x70);
  param_3 = param_3 << 2;
  for (param_5 = param_5 + -1; -1 < param_5; param_5 = param_5 + -1) {
    iVar4 = *(int *)(*param_2 + param_3);
    puVar2 = (undefined *)*param_4;
    param_4 = param_4 + 1;
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        uVar1 = *(undefined *)(iVar4 + uVar5);
        puVar2[2] = uVar1;
        puVar2[1] = uVar1;
        *puVar2 = uVar1;
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 3;
      } while (uVar5 < uVar3);
    }
    param_3 = param_3 + 4;
  }
  return;
}


