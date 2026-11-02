/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a838c  Symbol: jpeg_set_defaults */

void jpeg_set_defaults(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_001a84a4 + 0x1a8398;
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_1[0x15] == 0) {
    iVar1 = (**(code **)param_1[1])(param_1,0,0x370,*(code **)param_1[1],param_4);
    param_1[0x15] = iVar1;
  }
  iVar1 = DAT_001a84a8;
  param_1[0xe] = 1;
  param_1[0xf] = 1;
  iVar1 = iVar3 + iVar1;
  param_1[0x12] = 8;
  jpeg_set_quality(param_1,0x4b,1);
  FUN_001a81f8(param_1,param_1 + 0x1e,iVar1,iVar1 + 0x14);
  iVar4 = iVar3 + DAT_001a84ac;
  FUN_001a81f8(param_1,param_1 + 0x22,iVar1 + 0x20,iVar1 + 0x34);
  FUN_001a81f8(param_1,param_1 + 0x1f,iVar4 + 0x58,iVar4 + 0x6c);
  FUN_001a81f8(param_1,param_1 + 0x23,iVar4 + 0x78,iVar3 + DAT_001a84b0 + 0xc);
  piVar2 = param_1 + 0x26;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(undefined *)piVar2 = 0;
    *(undefined *)(piVar2 + 4) = 1;
    *(undefined *)(piVar2 + 8) = 5;
    piVar2 = (int *)((int)piVar2 + 1);
  } while (iVar3 != 0x10);
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (8 < param_1[0x12]) {
    param_1[0x36] = 1;
  }
  param_1[0x37] = 0;
  param_1[0x38] = 1;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined *)(param_1 + 0x3e) = 1;
  *(undefined *)((int)param_1 + 0xf9) = 1;
  *(undefined *)((int)param_1 + 0xfa) = 0;
  *(undefined2 *)(param_1 + 0x3f) = 1;
  *(undefined2 *)((int)param_1 + 0xfe) = 1;
  jpeg_default_colorspace(param_1);
  return;
}


