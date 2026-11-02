/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b3f2c  Symbol: FUN_001b3f2c */

void FUN_001b3f2c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1[0x74];
  iVar1 = (**(code **)(param_1[0x73] + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  if (0 < param_1[0x54]) {
    piVar4 = param_1 + 0x55;
    iVar6 = 0;
    iVar1 = iVar2;
    do {
      iVar5 = *piVar4;
      if (param_1[0x38] == 0) {
LAB_001b3f9a:
        memset(*(void **)((*(int *)(iVar5 + 0x14) + 0xe) * 4 + iVar2),0,0x40);
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        if (param_1[0x38] == 0) {
          iVar3 = param_1[0x6c];
        }
        else {
          iVar3 = param_1[0x66];
        }
        if (iVar3 != 0) {
LAB_001b3fc2:
          memset(*(void **)((*(int *)(iVar5 + 0x18) + 0x1e) * 4 + iVar2),0,0x100);
        }
      }
      else {
        if (param_1[0x66] != 0) goto LAB_001b3fc2;
        if (param_1[0x68] == 0) goto LAB_001b3f9a;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar6 < param_1[0x54]);
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0xfffffff0;
  *(int *)(iVar2 + 0x34) = param_1[0x46];
  return;
}


