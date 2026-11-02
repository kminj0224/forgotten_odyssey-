/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8034  Symbol: jpeg_simple_progression */

void jpeg_simple_progression(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[0x13];
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (iVar3 == 3) {
    iVar4 = 10;
    if (param_1[0x14] == 3) goto LAB_001a8064;
  }
  else if (4 < iVar3) {
    iVar4 = iVar3 * 6;
    goto LAB_001a8064;
  }
  iVar4 = iVar3 * 4 + 2;
LAB_001a8064:
  iVar1 = param_1[0x6a];
  if ((iVar1 == 0) || (param_1[0x6b] < iVar4)) {
    iVar1 = iVar4;
    if (iVar4 < 10) {
      iVar1 = 10;
    }
    param_1[0x6b] = iVar1;
    iVar1 = (**(code **)param_1[1])(param_1,0,iVar1 * 0x24,*(code **)param_1[1],param_4);
    param_1[0x6a] = iVar1;
  }
  param_1[0x33] = iVar1;
  param_1[0x32] = iVar4;
  if (iVar3 == 3) {
    if (param_1[0x14] == 3) {
      puVar2 = (undefined4 *)FUN_001a7fe4(iVar1,3,0,1);
      puVar2[6] = 5;
      puVar2[1] = 0;
      puVar2[5] = 1;
      puVar2[7] = 0;
      puVar2[8] = 2;
      puVar2[10] = 2;
      puVar2[0xe] = 1;
      puVar2[0xf] = 0x3f;
      puVar2[0x10] = 0;
      puVar2[0x11] = 1;
      puVar2[0x13] = 1;
      puVar2[0x17] = 1;
      puVar2[0x18] = 0x3f;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 1;
      puVar2[0x20] = 6;
      puVar2[0x1c] = 0;
      puVar2[0x21] = 0x3f;
      puVar2[0x22] = 0;
      puVar2[0x23] = 2;
      *puVar2 = 1;
      puVar2[9] = 1;
      puVar2[0x12] = 1;
      puVar2[0x1b] = 1;
      puVar2[0x25] = 0;
      puVar2[0x24] = 1;
      puVar2[0x29] = 1;
      puVar2[0x2a] = 0x3f;
      puVar2[0x2b] = 2;
      puVar2[0x2c] = 1;
      puVar2 = (undefined4 *)FUN_001a7fe4(puVar2 + 0x2d,3,1,0);
      puVar2[1] = 2;
      puVar2[5] = 1;
      puVar2[6] = 0x3f;
      puVar2[7] = 1;
      puVar2[8] = 0;
      puVar2[10] = 1;
      puVar2[0xe] = 1;
      puVar2[0xf] = 0x3f;
      puVar2[0x10] = 1;
      puVar2[0x11] = 0;
      *puVar2 = 1;
      puVar2[9] = 1;
      puVar2[0x12] = 1;
      puVar2[0x13] = 0;
      puVar2[0x17] = 1;
      puVar2[0x18] = 0x3f;
      puVar2[0x19] = 1;
      puVar2[0x1a] = 0;
      return;
    }
    puVar2 = (undefined4 *)FUN_001a7fe4(iVar1,3,0,1);
  }
  else {
    puVar2 = (undefined4 *)FUN_001a7fe4(iVar1,iVar3,0,1);
    if (iVar3 < 1) {
      FUN_001a7fe4(puVar2,iVar3,1,0);
      return;
    }
  }
  iVar4 = 0;
  do {
    puVar2[1] = iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = 1;
    puVar2[5] = 1;
    puVar2[6] = 5;
    puVar2[7] = 0;
    puVar2[8] = 2;
    puVar2 = puVar2 + 9;
  } while (iVar4 < iVar3);
  iVar4 = 0;
  do {
    puVar2[1] = iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = 1;
    puVar2[5] = 6;
    puVar2[6] = 0x3f;
    puVar2[7] = 0;
    puVar2[8] = 2;
    puVar2 = puVar2 + 9;
  } while (iVar4 < iVar3);
  iVar4 = 0;
  do {
    puVar2[1] = iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = 1;
    puVar2[5] = 1;
    puVar2[6] = 0x3f;
    puVar2[7] = 2;
    puVar2[8] = 1;
    puVar2 = puVar2 + 9;
  } while (iVar4 < iVar3);
  puVar2 = (undefined4 *)FUN_001a7fe4(puVar2,iVar3,1,0);
  iVar4 = 0;
  do {
    puVar2[1] = iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = 1;
    puVar2[5] = 1;
    puVar2[6] = 0x3f;
    puVar2[7] = 1;
    puVar2[8] = 0;
    puVar2 = puVar2 + 9;
  } while (iVar4 < iVar3);
  return;
}


