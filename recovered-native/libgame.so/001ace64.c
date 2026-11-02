/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ace64  Symbol: FUN_001ace64 */

void FUN_001ace64(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int param_5;
  int *param_6;
  int param_7;
  int *piVar4;
  int local_24 [2];
  
  iVar2 = *(int *)(param_1 + 0x1c4);
  uVar3 = param_7 - *param_6;
  if (*(uint *)(iVar2 + 0x10) < (uint)(param_7 - *param_6)) {
    uVar3 = *(uint *)(iVar2 + 0x10);
  }
  local_24[0] = 0;
  piVar4 = local_24;
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  (**(code **)(*(int *)(param_1 + 0x1d8) + 4))(param_1);
  (**(code **)(*(int *)(param_1 + 0x1e0) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0xc),param_5 + *param_6 * 4,local_24[0],uVar1,piVar4,
             uVar3);
  *param_6 = *param_6 + local_24[0];
  return;
}


