/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af57c  Symbol: FUN_001af57c */

void FUN_001af57c(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  if (param_2 < 2) {
    if (param_2 == 1) {
      for (iVar2 = *(int *)(iVar3 + 0x44); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
        while (*(int *)(iVar2 + 0x28) != 0) {
          *(undefined4 *)(iVar2 + 0x28) = 0;
          (**(code **)(iVar2 + 0x38))(param_1,iVar2 + 0x30);
          iVar2 = *(int *)(iVar2 + 0x2c);
          if (iVar2 == 0) goto LAB_001af62c;
        }
      }
LAB_001af62c:
      iVar2 = *(int *)(iVar3 + 0x48);
      *(undefined4 *)(iVar3 + 0x44) = 0;
      for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
        while (*(int *)(iVar2 + 0x28) != 0) {
          *(undefined4 *)(iVar2 + 0x28) = 0;
          (**(code **)(iVar2 + 0x38))(param_1,iVar2 + 0x30);
          iVar2 = *(int *)(iVar2 + 0x2c);
          if (iVar2 == 0) goto LAB_001af658;
        }
      }
LAB_001af658:
      *(undefined4 *)(iVar3 + 0x48) = 0;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(uint *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  iVar2 = iVar3 + (param_2 + 0xe) * 4;
  piVar1 = *(int **)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  while (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    iVar2 = piVar1[1] + piVar1[2] + 0x10;
    jpeg_free_large(param_1,piVar1,iVar2);
    *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) - iVar2;
    piVar1 = (int *)iVar4;
  }
  iVar2 = iVar3 + (param_2 + 0xc) * 4;
  piVar1 = *(int **)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  while (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    iVar2 = piVar1[1] + piVar1[2] + 0x10;
    jpeg_free_small(param_1,piVar1,iVar2);
    *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) - iVar2;
    piVar1 = (int *)iVar4;
  }
  return;
}


