/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018680  Symbol: FUN_00018680 */

void FUN_00018680(int param_1,undefined param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 0xff) {
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    *(undefined *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 0x104) = 1;
    *(undefined *)(param_1 + 0x108) = param_2;
    return;
  }
  *(undefined *)(param_1 + iVar1 + 4) = param_2;
  *(int *)(param_1 + 0x104) = iVar1 + 1;
  *(undefined *)(param_1 + 0x108) = param_2;
  return;
}


