/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f068  Symbol: FUN_0001f068 */

void FUN_0001f068(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_3 == (int *)0x0) {
LAB_0001f0b4:
    iVar4 = *(int *)(param_1 + 0x104);
  }
  else {
    iVar4 = param_3[2];
    piVar3 = param_3;
    while (iVar4 != 0) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)0x0) {
        FUN_0001ecd8(param_1,param_3,0,iVar4,param_4);
        goto LAB_0001f0b4;
      }
      iVar4 = piVar3[2];
    }
    if (*(int *)piVar3[1] == 0x26) {
      FUN_0001ecd8(param_1,param_3,0,0x26,param_4);
      iVar2 = *(int *)(param_1 + 0x104);
      goto LAB_0001f0d8;
    }
    puVar7 = (undefined *)(DAT_0001f2f8 + 0x1f156);
    iVar4 = *(int *)(param_1 + 0x104);
    puVar5 = (undefined *)(DAT_0001f2f8 + 0x1f154);
    do {
      while( true ) {
        puVar6 = puVar5 + 1;
        uVar1 = *puVar5;
        puVar5 = puVar6;
        if (iVar4 != 0xff) break;
        *(undefined *)(param_1 + 0x103) = 0;
        (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
        *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
        *(undefined *)(param_1 + 4) = uVar1;
        *(undefined4 *)(param_1 + 0x104) = 1;
        *(undefined *)(param_1 + 0x108) = uVar1;
        iVar4 = 1;
        iVar2 = param_1;
        if (puVar6 == puVar7) goto LAB_0001f1cc;
      }
      iVar2 = param_1 + iVar4;
      *(undefined *)(iVar2 + 4) = uVar1;
      *(int *)(param_1 + 0x104) = iVar4 + 1;
      *(undefined *)(param_1 + 0x108) = uVar1;
      iVar4 = iVar4 + 1;
    } while (puVar6 != puVar7);
LAB_0001f1cc:
    FUN_0001ecd8(param_1,param_3,0,iVar2,param_4);
    iVar2 = *(int *)(param_1 + 0x104);
    if (iVar2 == 0xff) {
      iVar2 = 0;
      *(undefined *)(param_1 + 0x103) = 0;
      (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
      iVar4 = 1;
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
    else {
      iVar4 = iVar2 + 1;
    }
    *(undefined *)(param_1 + iVar2 + 4) = 0x29;
    *(int *)(param_1 + 0x104) = iVar4;
    *(undefined *)(param_1 + 0x108) = 0x29;
  }
  if (iVar4 == 0xff) {
    iVar4 = 0;
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    iVar2 = 1;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    iVar2 = iVar4 + 1;
  }
  *(undefined *)(param_1 + iVar4 + 4) = 0x20;
  *(int *)(param_1 + 0x104) = iVar2;
  *(undefined *)(param_1 + 0x108) = 0x20;
LAB_0001f0d8:
  if (iVar2 == 0xff) {
    iVar2 = 0;
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    iVar4 = 1;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    iVar4 = iVar2 + 1;
  }
  *(undefined *)(param_1 + iVar2 + 4) = 0x5b;
  *(int *)(param_1 + 0x104) = iVar4;
  *(undefined *)(param_1 + 0x108) = 0x5b;
  if (*(int *)(param_2 + 4) != 0) {
    FUN_0001e2ac(param_1);
    iVar4 = *(int *)(param_1 + 0x104);
  }
  if (iVar4 == 0xff) {
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    *(undefined *)(param_1 + 4) = 0x5d;
    *(undefined4 *)(param_1 + 0x104) = 1;
    *(undefined *)(param_1 + 0x108) = 0x5d;
    return;
  }
  *(undefined *)(param_1 + iVar4 + 4) = 0x5d;
  *(int *)(param_1 + 0x104) = iVar4 + 1;
  *(undefined *)(param_1 + 0x108) = 0x5d;
  return;
}


