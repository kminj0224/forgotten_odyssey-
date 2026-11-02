/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f4d0  Symbol: FUN_0001f4d0 */

void FUN_0001f4d0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == 0 || *param_2 == 6) {
    FUN_0001e2ac();
    return;
  }
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 0xff) {
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    iVar2 = 1;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    iVar2 = iVar1 + 1;
    iVar3 = iVar1;
  }
  *(undefined *)(param_1 + iVar3 + 4) = 0x28;
  *(int *)(param_1 + 0x104) = iVar2;
  *(undefined *)(param_1 + 0x108) = 0x28;
  FUN_0001e2ac(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x104);
  if (iVar3 == 0xff) {
    iVar3 = 0;
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    iVar1 = 1;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    iVar1 = iVar3 + 1;
  }
  *(undefined *)(param_1 + iVar3 + 4) = 0x29;
  *(int *)(param_1 + 0x104) = iVar1;
  *(undefined *)(param_1 + 0x108) = 0x29;
  return;
}


