/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aa150  Symbol: FUN_001aa150 */

void FUN_001aa150(int *param_1)

{
  void *__dest;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_1[0x54] == 1) {
    iVar5 = param_1[0x55];
    param_1[0x59] = *(int *)(iVar5 + 0x1c);
    param_1[0x5a] = *(int *)(iVar5 + 0x20);
    iVar7 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0x38) = 1;
    *(undefined4 *)(iVar5 + 0x3c) = 1;
    *(undefined4 *)(iVar5 + 0x40) = 1;
    *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(iVar5 + 0x48) = 1;
    __aeabi_uidivmod(*(undefined4 *)(iVar5 + 0x20),iVar7);
    iVar9 = extraout_r1_01;
    if (extraout_r1_01 == 0) {
      iVar9 = iVar7;
    }
    *(int *)(iVar5 + 0x4c) = iVar9;
    param_1[0x5b] = 1;
    param_1[0x5c] = 0;
    iVar5 = param_1[0x54];
  }
  else {
    if (3 < param_1[0x54] - 1U) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      *(int *)(*param_1 + 0x18) = param_1[0x54];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    iVar9 = jdiv_round_up(param_1[7],param_1[0x6a] * param_1[0x4e]);
    param_1[0x59] = iVar9;
    iVar9 = jdiv_round_up(param_1[8],param_1[0x6a] * param_1[0x4f]);
    param_1[0x5a] = iVar9;
    param_1[0x5b] = 0;
    if (param_1[0x54] < 1) goto LAB_001aa262;
    piVar4 = param_1 + 0x55;
    iVar9 = 0;
    do {
      iVar6 = *piVar4;
      iVar2 = *(int *)(iVar6 + 8);
      iVar7 = *(int *)(iVar6 + 0xc);
      *(int *)(iVar6 + 0x38) = iVar2;
      iVar8 = iVar7 * iVar2;
      *(int *)(iVar6 + 0x3c) = iVar7;
      *(int *)(iVar6 + 0x40) = iVar8;
      *(int *)(iVar6 + 0x44) = *(int *)(iVar6 + 0x24) * iVar2;
      __aeabi_uidivmod(*(undefined4 *)(iVar6 + 0x1c),iVar2);
      iVar5 = extraout_r1;
      if (extraout_r1 == 0) {
        iVar5 = iVar2;
      }
      *(int *)(iVar6 + 0x48) = iVar5;
      __aeabi_uidivmod(*(undefined4 *)(iVar6 + 0x20),iVar7);
      iVar5 = extraout_r1_00;
      if (extraout_r1_00 == 0) {
        iVar5 = iVar7;
      }
      *(int *)(iVar6 + 0x4c) = iVar5;
      if (10 < iVar8 + param_1[0x5b]) {
        *(undefined4 *)(*param_1 + 0x14) = 0xe;
        (**(code **)*param_1)(param_1);
      }
      if (0 < iVar8) {
        iVar7 = param_1[0x5b];
        piVar1 = param_1 + iVar7 + 0x5c;
        iVar5 = iVar8;
        do {
          iVar5 = iVar5 + -1;
          *piVar1 = iVar9;
          piVar1 = piVar1 + 1;
        } while (iVar5 != 0);
        param_1[0x5b] = iVar8 + iVar7;
      }
      iVar5 = param_1[0x54];
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar9 < iVar5);
  }
  if (0 < iVar5) {
    piVar4 = param_1 + 0x55;
    iVar9 = 0;
    do {
      iVar5 = *piVar4;
      if (*(int *)(iVar5 + 0x50) == 0) {
        uVar3 = *(uint *)(iVar5 + 0x10);
        if ((3 < uVar3) || (param_1[uVar3 + 0x29] == 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x36;
          *(uint *)(*param_1 + 0x18) = uVar3;
          (**(code **)*param_1)(param_1);
        }
        __dest = (void *)(**(code **)param_1[1])(param_1,1,0x84);
        memcpy(__dest,(void *)param_1[uVar3 + 0x29],0x84);
        *(void **)(iVar5 + 0x50) = __dest;
      }
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar9 < param_1[0x54]);
  }
LAB_001aa262:
  (**(code **)param_1[0x74])(param_1);
  (**(code **)param_1[0x70])(param_1);
  *(undefined4 *)param_1[0x72] = *(undefined4 *)(param_1[0x70] + 4);
  return;
}


