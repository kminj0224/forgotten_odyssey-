/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001e2cc  Symbol: FUN_0001e2cc */

void FUN_0001e2cc(int param_1,int *param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_2 != 0x2c) {
    FUN_0001e2ac();
    return;
  }
  iVar4 = *(int *)(param_2[1] + 8);
  iVar5 = *(int *)(param_2[1] + 4);
  if (iVar4 != 0) {
    iVar3 = 0;
    iVar2 = *(int *)(param_1 + 0x104);
    do {
      while (uVar1 = *(undefined *)(iVar5 + iVar3), iVar2 == 0xff) {
        *(undefined *)(param_1 + 0x103) = 0;
        (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
        iVar3 = iVar3 + 1;
        *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
        *(undefined *)(param_1 + 4) = uVar1;
        *(undefined4 *)(param_1 + 0x104) = 1;
        *(undefined *)(param_1 + 0x108) = uVar1;
        iVar2 = 1;
        if (iVar4 == iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      *(undefined *)(param_1 + iVar2 + 4) = uVar1;
      *(int *)(param_1 + 0x104) = iVar2 + 1;
      *(undefined *)(param_1 + 0x108) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar4 != iVar3);
    return;
  }
  return;
}


