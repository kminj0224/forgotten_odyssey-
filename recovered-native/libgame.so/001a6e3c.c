/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6e3c  Symbol: FUN_001a6e3c */

void FUN_001a6e3c(int *param_1)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (param_1[0x48] == 1) {
    iVar4 = param_1[0x49];
    param_1[0x4d] = *(int *)(iVar4 + 0x1c);
    param_1[0x4e] = *(int *)(iVar4 + 0x20);
    iVar6 = *(int *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar4 + 0x3c) = 1;
    *(undefined4 *)(iVar4 + 0x40) = 1;
    *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar4 + 0x48) = 1;
    __aeabi_uidivmod(*(undefined4 *)(iVar4 + 0x20),iVar6);
    iVar3 = extraout_r1_01;
    if (extraout_r1_01 == 0) {
      iVar3 = iVar6;
    }
    *(int *)(iVar4 + 0x4c) = iVar3;
    param_1[0x4f] = 1;
    param_1[0x50] = 0;
  }
  else {
    if (3 < param_1[0x48] - 1U) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      *(int *)(*param_1 + 0x18) = param_1[0x48];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    iVar3 = jdiv_round_up(param_1[0x10],param_1[0x5e] * param_1[0x43]);
    param_1[0x4d] = iVar3;
    iVar3 = jdiv_round_up(param_1[0x11],param_1[0x5e] * param_1[0x44]);
    param_1[0x4e] = iVar3;
    param_1[0x4f] = 0;
    if (0 < param_1[0x48]) {
      piVar8 = param_1 + 0x49;
      iVar3 = 0;
      do {
        iVar5 = *piVar8;
        iVar2 = *(int *)(iVar5 + 8);
        iVar6 = *(int *)(iVar5 + 0xc);
        *(int *)(iVar5 + 0x38) = iVar2;
        iVar7 = iVar6 * iVar2;
        *(int *)(iVar5 + 0x3c) = iVar6;
        *(int *)(iVar5 + 0x40) = iVar7;
        *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x24) * iVar2;
        __aeabi_uidivmod(*(undefined4 *)(iVar5 + 0x1c),iVar2);
        iVar4 = extraout_r1;
        if (extraout_r1 == 0) {
          iVar4 = iVar2;
        }
        *(int *)(iVar5 + 0x48) = iVar4;
        __aeabi_uidivmod(*(undefined4 *)(iVar5 + 0x20),iVar6);
        iVar4 = extraout_r1_00;
        if (extraout_r1_00 == 0) {
          iVar4 = iVar6;
        }
        *(int *)(iVar5 + 0x4c) = iVar4;
        if (10 < iVar7 + param_1[0x4f]) {
          *(undefined4 *)(*param_1 + 0x14) = 0xe;
          (**(code **)*param_1)(param_1);
        }
        if (0 < iVar7) {
          iVar6 = param_1[0x4f];
          piVar1 = param_1 + iVar6 + 0x50;
          iVar4 = iVar7;
          do {
            iVar4 = iVar4 + -1;
            *piVar1 = iVar3;
            piVar1 = piVar1 + 1;
          } while (iVar4 != 0);
          param_1[0x4f] = iVar7 + iVar6;
        }
        iVar3 = iVar3 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar3 < param_1[0x48]);
    }
  }
  if (0 < param_1[0x3c]) {
    iVar3 = param_1[0x3c] * param_1[0x4d];
    if (iVar3 - DAT_001a6fc0 != 0 && DAT_001a6fc0 <= iVar3) {
      iVar3 = DAT_001a6fc0;
    }
    param_1[0x3b] = iVar3;
  }
  return;
}


