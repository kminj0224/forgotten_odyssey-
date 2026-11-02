/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a63e4  Symbol: jinit_c_main_controller */

void jinit_c_main_controller(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0x40,*(code **)param_1[1],param_4);
  iVar3 = DAT_001a6454;
  param_1[0x62] = (int)piVar1;
  *piVar1 = iVar3 + 0x1a6402 + DAT_001a6458;
  if (param_1[0x34] == 0) {
    if (param_2 == 0) {
      iVar3 = param_1[0x15];
      if (0 < param_1[0x13]) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          iVar2 = (**(code **)(param_1[1] + 8))
                            (param_1,1,*(int *)(iVar3 + 0x24) * *(int *)(iVar3 + 0x1c),
                             *(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 0x28));
          piVar1[6] = iVar2;
          iVar3 = iVar3 + 0x58;
          piVar1 = piVar1 + 1;
        } while (iVar4 < param_1[0x13]);
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 3;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}


