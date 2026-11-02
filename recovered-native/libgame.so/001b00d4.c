/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b00d4  Symbol: FUN_001b00d4 */

void FUN_001b00d4(int *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = DAT_001b0280 + 0x1b00ea;
  iVar5 = param_1[0x69];
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x31;
    (**(code **)*param_1)();
  }
  if (param_1[0x42] == 0) {
    *(int *)(iVar5 + 4) = iVar7 + DAT_001b0288;
  }
  else if (param_1[0x5c] == 0) {
    if (param_1[0x5a] == 0) {
      *(int *)(iVar5 + 4) = iVar7 + DAT_001b0284;
    }
    else {
      *(int *)(iVar5 + 4) = iVar7 + DAT_001b0290;
    }
  }
  else if (param_1[0x5a] == 0) {
    *(int *)(iVar5 + 4) = iVar7 + DAT_001b028c;
  }
  else {
    *(int *)(iVar5 + 4) = iVar7 + DAT_001b0294;
  }
  if (0 < param_1[0x48]) {
    piVar8 = param_1 + 0x49;
    iVar6 = 0;
    iVar7 = iVar5;
    do {
      iVar2 = *piVar8;
      if ((param_1[0x5a] == 0) && (param_1[0x5c] == 0)) {
        uVar3 = *(uint *)(iVar2 + 0x14);
        if (0xf < uVar3) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(uint *)(*param_1 + 0x18) = uVar3;
          (**(code **)*param_1)(param_1);
        }
        iVar4 = (uVar3 + 0x12) * 4 + iVar5;
        pvVar1 = *(void **)(iVar4 + 4);
        if (pvVar1 == (void *)0x0) {
          pvVar1 = (void *)(**(code **)param_1[1])(param_1,1,0x40);
          *(void **)(iVar4 + 4) = pvVar1;
        }
        memset(pvVar1,0,0x40);
        *(undefined4 *)(iVar7 + 0x24) = 0;
        *(undefined4 *)(iVar7 + 0x34) = 0;
      }
      if (param_1[0x5b] != 0) {
        uVar3 = *(uint *)(iVar2 + 0x18);
        if (0xf < uVar3) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(uint *)(*param_1 + 0x18) = uVar3;
          (**(code **)*param_1)(param_1);
        }
        iVar2 = (uVar3 + 0x22) * 4 + iVar5;
        pvVar1 = *(void **)(iVar2 + 4);
        if (pvVar1 == (void *)0x0) {
          pvVar1 = (void *)(**(code **)param_1[1])(param_1,1,0x100);
          *(void **)(iVar2 + 4) = pvVar1;
        }
        memset(pvVar1,0,0x100);
      }
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < param_1[0x48]);
  }
  *(undefined4 *)(iVar5 + 0x10) = 0x10000;
  *(undefined4 *)(iVar5 + 0x1c) = 0xb;
  *(undefined4 *)(iVar5 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  iVar7 = param_1[0x3b];
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(int *)(iVar5 + 0x44) = iVar7;
  return;
}


