/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b7d08  Symbol: jinit_d_main_controller */

void jinit_d_main_controller(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0x50);
  iVar6 = DAT_001b7e70;
  param_1[0x6f] = (int)piVar1;
  *piVar1 = iVar6 + 0x1b7d32 + DAT_001b7e74;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 3;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(param_1[0x76] + 8) == 0) {
    iVar6 = param_1[0x51];
    iVar8 = param_1[0x36];
    iVar7 = param_1[9];
  }
  else {
    iVar6 = param_1[0x51];
    if (iVar6 < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
      iVar6 = param_1[0x51];
    }
    iVar2 = param_1[0x6f];
    iVar7 = (**(code **)param_1[1])(param_1,1,param_1[9] << 3);
    *(int *)(iVar2 + 0x38) = iVar7;
    *(int *)(iVar2 + 0x3c) = iVar7 + param_1[9] * 4;
    iVar8 = param_1[0x36];
    iVar7 = param_1[9];
    if (0 < iVar7) {
      iVar3 = 0;
      do {
        iVar7 = __divsi3(*(int *)(iVar8 + 0x28) * *(int *)(iVar8 + 0xc),param_1[0x51]);
        iVar4 = (**(code **)param_1[1])(param_1,1,(iVar6 + 4) * 2 * iVar7 * 4);
        iVar4 = iVar4 + iVar7 * 4;
        iVar5 = iVar3 * 4;
        *(int *)(*(int *)(iVar2 + 0x38) + iVar5) = iVar4;
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0x58;
        *(int *)(*(int *)(iVar2 + 0x3c) + iVar5) = iVar4 + (iVar6 + 4) * iVar7 * 4;
        iVar7 = param_1[9];
      } while (iVar3 < iVar7);
      iVar8 = param_1[0x36];
    }
    iVar6 = param_1[0x51] + 2;
  }
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      iVar5 = *(int *)(iVar8 + 0x24);
      iVar4 = *(int *)(iVar8 + 0x1c);
      iVar3 = param_1[1];
      iVar7 = iVar7 + 1;
      iVar2 = __divsi3(*(int *)(iVar8 + 0x28) * *(int *)(iVar8 + 0xc),param_1[0x51]);
      iVar2 = (**(code **)(iVar3 + 8))(param_1,1,iVar5 * iVar4,iVar2 * iVar6);
      piVar1[2] = iVar2;
      iVar8 = iVar8 + 0x58;
      piVar1 = piVar1 + 1;
    } while (iVar7 < param_1[9]);
  }
  return;
}


