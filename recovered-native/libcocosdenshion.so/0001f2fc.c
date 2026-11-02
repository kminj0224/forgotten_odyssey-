/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f2fc  Symbol: FUN_0001f2fc */

void FUN_0001f2fc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  int local_1c;
  
  local_20 = *(undefined4 *)(param_1 + 0x114);
  iVar3 = 0;
  uVar4 = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 **)(param_1 + 0x114) = &local_20;
  *(undefined4 *)(param_1 + 0x118) = 0;
  local_1c = *(int *)(param_2 + 4);
  FUN_0001e2ac(param_1,*(undefined4 *)(local_1c + 4));
  *(undefined4 *)(param_1 + 0x114) = local_20;
  if (*(char *)(param_1 + 0x108) == '<') {
    iVar2 = *(int *)(param_1 + 0x104);
    if (iVar2 == 0xff) {
      *(undefined *)(param_1 + 0x103) = 0;
      (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
      iVar1 = 1;
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
    else {
      iVar1 = iVar2 + 1;
      iVar3 = iVar2;
    }
    *(undefined *)(param_1 + iVar3 + 4) = 0x20;
    *(int *)(param_1 + 0x104) = iVar1;
    *(undefined *)(param_1 + 0x108) = 0x20;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x104);
  }
  if (iVar1 == 0xff) {
    iVar1 = 0;
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    iVar3 = 1;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    iVar3 = iVar1 + 1;
  }
  *(undefined *)(param_1 + iVar1 + 4) = 0x3c;
  *(int *)(param_1 + 0x104) = iVar3;
  *(undefined *)(param_1 + 0x108) = 0x3c;
  FUN_0001e2ac(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 8));
  if (*(char *)(param_1 + 0x108) == '>') {
    iVar1 = *(int *)(param_1 + 0x104);
    if (iVar1 == 0xff) {
      iVar1 = 0;
      *(undefined *)(param_1 + 0x103) = 0;
      (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
      iVar3 = 1;
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
    else {
      iVar3 = iVar1 + 1;
    }
    *(undefined *)(param_1 + iVar1 + 4) = 0x20;
    *(int *)(param_1 + 0x104) = iVar3;
    *(undefined *)(param_1 + 0x108) = 0x20;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x104);
  }
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
  *(undefined *)(param_1 + iVar3 + 4) = 0x3e;
  *(int *)(param_1 + 0x104) = iVar1;
  *(undefined *)(param_1 + 0x108) = 0x3e;
  *(undefined4 *)(param_1 + 0x118) = uVar4;
  return;
}


