/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aeba4  Symbol: jinit_2pass_quantizer */

void jinit_2pass_quantizer(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0x2c,*(code **)param_1[1],param_4);
  iVar2 = DAT_001aec90;
  param_1[0x78] = (int)piVar1;
  *piVar1 = iVar2 + 0x1aebc0 + DAT_001aec94;
  piVar1[3] = iVar2 + 0x1aebc0 + DAT_001aec98;
  piVar1[8] = 0;
  piVar1[10] = 0;
  if (param_1[0x1e] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  iVar4 = 0;
  piVar1[6] = iVar2;
  while( true ) {
    uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(iVar2 + iVar4) = uVar3;
    iVar4 = iVar4 + 4;
    if (iVar4 == 0x80) break;
    iVar2 = piVar1[6];
  }
  piVar1[7] = 1;
  if (param_1[0x1b] == 0) {
    piVar1[4] = 0;
  }
  else {
    iVar2 = param_1[0x18];
    if (iVar2 < 8) {
      *(undefined4 *)(*param_1 + 0x14) = 0x3a;
      *(undefined4 *)(*param_1 + 0x18) = 8;
      (**(code **)*param_1)(param_1);
    }
    else if (0x100 < iVar2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x3b;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    iVar4 = (**(code **)(param_1[1] + 8))(param_1,1,iVar2,3);
    piVar1[5] = iVar2;
    piVar1[4] = iVar4;
  }
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
    iVar2 = (**(code **)(param_1[1] + 4))(param_1,1,param_1[0x1c] * 6 + 0xc);
    piVar1[8] = iVar2;
    FUN_001aeb20(param_1);
  }
  return;
}


