/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c2c4  Symbol: FUN_0017c2c4 */

undefined4 FUN_0017c2c4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  
  iVar7 = DAT_0017c448 + 0x17c2d0;
  if (param_1 == 0) {
    return 1;
  }
  if (((param_5 == 0) && (param_2 != 0)) && (3 < param_3)) {
    local_28 = FUN_001a2fd8(param_2,param_3);
  }
  else {
    local_28 = 0;
  }
  iVar1 = FUN_0018fb60(local_28);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_0017c0fc(param_1);
  if (*(int *)(param_1 + 0x158) == 0) {
    iVar2 = (***(code ***)(iVar7 + DAT_0017c44c))(*(int *)(param_1 + 0xc0) * 0xc);
    *(int *)(param_1 + 0x158) = iVar2;
    if (iVar2 == 0) {
      FUN_00179430(param_1,0);
      goto LAB_0017c366;
    }
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    uVar4 = FUN_0018f794(param_4);
    *(undefined4 *)(param_1 + 0xb4) = uVar4;
  }
  piVar3 = (int *)FUN_001795e0(param_1);
  if (piVar3 != (int *)0x0) {
    if (param_4 == 0) {
      piVar3[1] = 0;
    }
    else {
      iVar2 = FUN_00193d34(param_4);
      piVar3[1] = iVar2;
    }
    *piVar3 = iVar1;
    piVar3[3] = **(int **)(iVar1 + 0x10);
    piVar3[4] = **(int **)(iVar1 + 0x10);
    piVar3[5] = **(int **)(iVar1 + 0x10) + (*(int **)(iVar1 + 0x10))[1];
    FUN_0017bfa0(param_1,piVar3);
    if (((0 < param_3) && (param_2 != 0)) &&
       ((piVar3 = *(int **)(param_1 + 0x24), piVar3 != (int *)0x0 && (iVar1 = *piVar3, iVar1 != 0)))
       ) {
      iVar2 = piVar3[3];
      iVar6 = piVar3[4];
      iVar5 = **(int **)(iVar1 + 0x10);
      FUN_00190bbc(iVar1,param_3,param_2);
      (*(int **)(param_1 + 0x24))[3] =
           **(int **)(**(int **)(param_1 + 0x24) + 0x10) + (iVar2 - iVar5);
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
           *(int *)(*(int *)(param_1 + 0x24) + 0xc) + (iVar6 - iVar2);
      piVar3 = *(int **)(**(int **)(param_1 + 0x24) + 0x10);
      (*(int **)(param_1 + 0x24))[5] = *piVar3 + piVar3[1];
    }
    if (param_5 == 0) {
      if (local_28 != 0) {
        FUN_00179fd4(param_1,local_28);
      }
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0) {
        (***(code ***)(iVar7 + DAT_0017c450))();
      }
      uVar4 = FUN_0019c904(param_5);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      iVar1 = FUN_001a4238(param_5);
      if (iVar1 == 0) {
        FUN_0017b798(param_1,0x20,iVar7 + DAT_0017c454,param_5);
      }
      else {
        FUN_00179f9c(param_1,iVar1);
      }
    }
    return 0;
  }
LAB_0017c366:
  FUN_0018ff94(iVar1);
  return 1;
}


