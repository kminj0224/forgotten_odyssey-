/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2f0c  Symbol: FUN_001b2f0c */

void FUN_001b2f0c(int *param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar4 = DAT_001b311c + 0x1b2f26;
  iVar8 = param_1[0x69];
  if (param_2 == 0) {
    *(int *)(iVar8 + 8) = iVar4 + DAT_001b3128;
    iVar3 = param_1[0x42];
  }
  else {
    *(int *)(iVar8 + 8) = iVar4 + DAT_001b3120;
    iVar3 = param_1[0x42];
  }
  if (iVar3 == 0) {
    if (param_2 == 0) {
      *(int *)(iVar8 + 4) = iVar4 + DAT_001b312c;
    }
    else {
      *(int *)(iVar8 + 4) = iVar4 + DAT_001b3138;
    }
  }
  else {
    *(int **)(iVar8 + 0x78) = param_1;
    *(int *)(iVar8 + 0x6c) = param_2;
    if (param_1[0x5c] == 0) {
      if (param_1[0x5a] == 0) {
        *(int *)(iVar8 + 4) = iVar4 + DAT_001b313c;
      }
      else {
        *(int *)(iVar8 + 4) = iVar4 + DAT_001b3124;
      }
    }
    else if (param_1[0x5a] == 0) {
      *(int *)(iVar8 + 4) = iVar4 + DAT_001b3134;
    }
    else {
      *(int *)(iVar8 + 4) = iVar4 + DAT_001b3140;
      if (*(int *)(iVar8 + 0x88) == 0) {
        uVar2 = (**(code **)param_1[1])(param_1,1,1000);
        *(undefined4 *)(iVar8 + 0x88) = uVar2;
      }
    }
    *(undefined4 *)(iVar8 + 0x7c) = *(undefined4 *)(param_1[0x49] + 0x18);
    *(undefined4 *)(iVar8 + 0x80) = 0;
    *(undefined4 *)(iVar8 + 0x84) = 0;
  }
  if (0 < param_1[0x48]) {
    piVar9 = param_1 + 0x49;
    iVar3 = 0;
    iVar4 = iVar8;
    do {
      iVar5 = *piVar9;
      if ((param_1[0x5a] == 0) && (param_1[0x5c] == 0)) {
        uVar6 = *(uint *)(iVar5 + 0x14);
        if (param_2 == 0) {
          FUN_001b2cf0(param_1,1,uVar6,(uVar6 + 10) * 4 + iVar8 + 4);
        }
        else {
          if (3 < uVar6) {
            *(undefined4 *)(*param_1 + 0x14) = 0x34;
            *(uint *)(*param_1 + 0x18) = uVar6;
            (**(code **)*param_1)(param_1);
          }
          iVar7 = (uVar6 + 0x12) * 4 + iVar8;
          pvVar1 = *(void **)(iVar7 + 4);
          if (pvVar1 == (void *)0x0) {
            pvVar1 = (void *)(**(code **)param_1[1])(param_1,1,DAT_001b3130);
            *(void **)(iVar7 + 4) = pvVar1;
          }
          memset(pvVar1,0,DAT_001b3130);
        }
        *(undefined4 *)(iVar4 + 0x14) = 0;
      }
      if (param_1[0x5b] != 0) {
        uVar6 = *(uint *)(iVar5 + 0x18);
        if (param_2 == 0) {
          FUN_001b2cf0(param_1,0,uVar6,(uVar6 + 0xe) * 4 + iVar8 + 4);
        }
        else {
          if (3 < uVar6) {
            *(undefined4 *)(*param_1 + 0x14) = 0x34;
            *(uint *)(*param_1 + 0x18) = uVar6;
            (**(code **)*param_1)(param_1);
          }
          iVar5 = (uVar6 + 0x16) * 4 + iVar8;
          pvVar1 = *(void **)(iVar5 + 4);
          if (pvVar1 == (void *)0x0) {
            pvVar1 = (void *)(**(code **)param_1[1])(param_1,1,DAT_001b3130);
            *(void **)(iVar5 + 4) = pvVar1;
          }
          memset(pvVar1,0,DAT_001b3130);
        }
      }
      iVar3 = iVar3 + 1;
      piVar9 = piVar9 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < param_1[0x48]);
  }
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  iVar4 = param_1[0x3b];
  *(undefined4 *)(iVar8 + 0x28) = 0;
  *(int *)(iVar8 + 0x24) = iVar4;
  return;
}


