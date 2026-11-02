/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ef8c  Symbol: FUN_0019ef8c */

void FUN_0019ef8c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = DAT_0019f0d0 + 0x19ef98;
  if ((((param_1 != (int *)0x0) && ((param_4 != 0 || (param_3 != 0)))) &&
      ((param_1[0x1a] != 0 || (param_1[0x45] != 0)))) &&
     ((((param_1[3] != 0 && (param_1[2] != 0)) && (*param_1 != 0)) &&
      ((pcVar7 = *(code **)(*param_1 + 0x10), pcVar7 != (code *)0x0 &&
       (iVar1 = (*pcVar7)(param_1[1],param_3,param_4), iVar1 != 0)))))) {
    FUN_0018a448(param_1[2],param_2,param_3,param_4);
    iVar6 = param_1[9];
    iVar8 = param_1[10];
    iVar5 = param_1[0xb];
    iVar2 = param_1[0xc];
    iVar9 = param_1[0x40];
    iVar3 = (***(code ***)(iVar10 + DAT_0019f0d4))(0x14);
    param_1[0xc] = iVar3;
    if (iVar3 == 0) {
      FUN_0019d7d4(param_1,iVar10 + DAT_0019f0d8);
      param_1[9] = iVar6;
      param_1[10] = iVar8;
      param_1[0xb] = iVar5;
      param_1[0xc] = iVar2;
      param_1[0x40] = iVar9;
    }
    else {
      param_1[10] = 0;
      param_1[0xb] = 5;
      param_1[9] = 0;
      FUN_0017c760(param_1,iVar1);
      if (3 < *(int *)(param_1[9] + 0x18)) {
        uVar4 = FUN_001a2fd8(*(undefined4 *)(param_1[9] + 0x10),4);
        FUN_00179fd4(param_1,uVar4);
      }
      if (*(int *)(iVar1 + 4) == 0) {
        uVar4 = FUN_00193d34(param_4);
        *(undefined4 *)(iVar1 + 4) = uVar4;
      }
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined4 *)(iVar1 + 0x20) = 1;
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1[9] + 0x10);
      iVar3 = param_1[9];
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
      FUN_001892e4(param_1,param_3,param_4);
      while (1 < param_1[10]) {
        FUN_0017c6c4(param_1);
      }
      FUN_00179898(param_1[9]);
      (***(code ***)(iVar10 + DAT_0019f0dc))(param_1[0xc]);
      param_1[9] = iVar6;
      param_1[10] = iVar8;
      param_1[0xb] = iVar5;
      param_1[0xc] = iVar2;
      param_1[0x40] = iVar9;
    }
  }
  return;
}


