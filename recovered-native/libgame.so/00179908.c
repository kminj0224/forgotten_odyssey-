/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179908  Symbol: FUN_00179908 */

void FUN_00179908(int *param_1)

{
  int iVar1;
  int iVar2;
  code **ppcVar3;
  
  iVar2 = DAT_00179af0 + 0x179912;
  if (param_1 != (int *)0x0) {
    while (iVar1 = FUN_0017ad38(param_1), iVar1 != 0) {
      FUN_00179898();
    }
    if (param_1[0x3d] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x31] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x10] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0xc] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[5] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[6] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x38] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x39] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if ((*param_1 != 0) && (*param_1 != *(int *)(iVar2 + DAT_00179af8))) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x2d] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x21] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x4b] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x4a] != 0) {
      FUN_0019d610();
    }
    if (param_1[0x54] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x56] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x55] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x57] != 0) {
      FUN_0018f328(param_1[0x57],**(undefined4 **)(iVar2 + DAT_00179af4));
    }
    if (param_1[0x58] != 0) {
      FUN_0018f328(param_1[0x58],0);
    }
    iVar1 = param_1[0x5d];
    if (iVar1 != 0) {
      ppcVar3 = *(code ***)(iVar2 + DAT_00179af4);
      do {
        iVar1 = *(int *)(iVar1 + 0x18);
        (**ppcVar3)();
      } while (iVar1 != 0);
    }
    iVar1 = param_1[0x5f];
    if (iVar1 != 0) {
      ppcVar3 = *(code ***)(iVar2 + DAT_00179af4);
      do {
        iVar1 = *(int *)(iVar1 + 0x18);
        (**ppcVar3)();
      } while (iVar1 != 0);
    }
    if (param_1[0x62] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[100] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x66] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x67] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    if (param_1[0x68] != 0) {
      (***(code ***)(iVar2 + DAT_00179af4))();
    }
    (***(code ***)(iVar2 + DAT_00179af4))(param_1);
  }
  return;
}


