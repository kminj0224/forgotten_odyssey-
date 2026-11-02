/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018bd7c  Symbol: FUN_0018bd7c */

undefined4 FUN_0018bd7c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1c [2];
  
  iVar5 = DAT_0018bdec + 0x18bd88;
  if (((param_2 == 0) || (param_1 == 0)) || (*(int *)(param_1 + 4) != 1)) {
    return 0;
  }
  iVar1 = FUN_001894b4(param_2,local_1c);
  if (iVar1 != 0) {
    iVar2 = FUN_0019c88c(param_2,local_1c[0]);
    iVar3 = FUN_00189e8c(*(undefined4 *)(param_1 + 0x20),param_1,iVar2);
    if (iVar2 != 0) {
      (***(code ***)(iVar5 + DAT_0018bdf0))(iVar2);
    }
    if (iVar3 != 0) goto LAB_0018bdde;
  }
  iVar3 = 0;
  iVar1 = param_2;
LAB_0018bdde:
  uVar4 = FUN_0018bca8(param_1,iVar3,iVar1,param_3);
  return uVar4;
}


