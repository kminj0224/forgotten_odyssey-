/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b18d0  Symbol: FUN_001b18d0 */

void FUN_001b18d0(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x24);
  param_4 = param_4 << 2;
  for (param_5 = param_5 + -1; -1 < param_5; param_5 = param_5 + -1) {
    puVar3 = (undefined *)*param_2;
    param_2 = param_2 + 1;
    iVar2 = *(int *)(*param_3 + param_4);
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        *(undefined *)(iVar2 + uVar5) = *puVar3;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + iVar1;
      } while (uVar5 < uVar4);
    }
    param_4 = param_4 + 4;
  }
  return;
}


