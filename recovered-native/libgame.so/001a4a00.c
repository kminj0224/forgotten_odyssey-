/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4a00  Symbol: FUN_001a4a00 */

undefined4 FUN_001a4a00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar10 = DAT_001a4ac4 + 0x1a4a0c;
  if ((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0019c904(param_1[2]);
    uVar2 = FUN_0019c904(param_1[4]);
    uVar3 = FUN_0019c904(param_1[6]);
    uVar4 = FUN_0019c904(param_1[7]);
    uVar5 = FUN_0019c904(param_1[8]);
    if (param_2[2] != 0) {
      (***(code ***)(iVar10 + DAT_001a4ac8))();
    }
    if (param_2[4] != 0) {
      (***(code ***)(iVar10 + DAT_001a4ac8))();
    }
    if (param_2[6] != 0) {
      (***(code ***)(iVar10 + DAT_001a4ac8))();
    }
    if (param_2[7] != 0) {
      (***(code ***)(iVar10 + DAT_001a4ac8))();
    }
    if (param_2[8] != 0) {
      (***(code ***)(iVar10 + DAT_001a4ac8))();
    }
    uVar8 = param_1[0xc];
    uVar7 = param_1[1];
    uVar9 = param_1[3];
    uVar11 = param_1[5];
    *param_2 = *param_1;
    uVar6 = param_1[9];
    param_2[0xc] = uVar8;
    param_2[1] = uVar7;
    param_2[3] = uVar9;
    uVar7 = param_1[10];
    uVar8 = param_1[0xc];
    param_2[5] = uVar11;
    param_2[9] = uVar6;
    uVar6 = param_1[0xb];
    param_2[2] = uVar1;
    param_2[6] = uVar3;
    param_2[10] = uVar7;
    param_2[0xc] = uVar8;
    param_2[0xb] = uVar6;
    param_2[4] = uVar2;
    param_2[7] = uVar4;
    param_2[8] = uVar5;
    uVar1 = 0;
  }
  return uVar1;
}


