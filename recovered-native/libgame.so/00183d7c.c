/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00183d7c  Symbol: FUN_00183d7c */

int FUN_00183d7c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                undefined4 *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_24;
  int local_20;
  
  *param_5 = 0;
  iVar6 = DAT_00183f18 + 0x183d9a;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  iVar1 = FUN_0017f794(param_1,param_4);
  if (iVar1 == 0) {
    FUN_0017bae0(param_1,0x44,iVar6 + DAT_00183f1c);
    return 0;
  }
  if ((*(int *)(param_1 + 0x160) == 0) ||
     (iVar2 = FUN_0018ed10(*(int *)(param_1 + 0x160),param_2,param_3,*param_4,iVar1), iVar2 == 0)) {
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  FUN_0017ff44(param_1);
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '=') {
    FUN_0017b798(param_1,0x29,iVar6 + DAT_00183f24,iVar1);
    return 0;
  }
  FUN_0017a4a4(param_1);
  FUN_0017ff44(param_1);
  local_24 = FUN_00183b00(param_1,param_6,param_7,local_20);
  if ((((local_20 != 0) && (*param_7 != 0)) &&
      (iVar2 = FUN_0017d2e8(param_1,local_24,param_6), iVar2 != local_24)) && (iVar2 != 0)) {
    (***(code ***)(iVar6 + DAT_00183f20))(local_24);
    local_24 = iVar2;
  }
  *(undefined4 *)(param_1 + 0xac) = 7;
  if (*param_4 != *(int *)(param_1 + 0x138)) goto LAB_00183f0c;
  if ((*(int *)(param_1 + 0x10c) == 0) ||
     (iVar2 = FUN_0019c30c(iVar1,iVar6 + DAT_00183f28), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0019c88c(local_24,*param_6);
    iVar3 = FUN_0017abf0();
    if (iVar3 == 0) {
      FUN_0017dcec(param_1,0x62,iVar6 + DAT_00183f2c,iVar2);
    }
  }
  iVar3 = FUN_0019c30c(iVar1,iVar6 + DAT_00183f30);
  if (iVar3 != 0) {
    iVar2 = FUN_0019c88c(local_24,*param_6);
    iVar3 = FUN_0019c30c(iVar2,iVar6 + DAT_00183f34);
    if (iVar3 == 0) {
      iVar3 = FUN_0019c30c(iVar2,iVar6 + DAT_00183f38);
      if (iVar3 == 0) {
        FUN_0017dcec(param_1,0x66,iVar6 + DAT_00183f3c,iVar2);
        goto LAB_00183efe;
      }
      puVar5 = *(undefined4 **)(param_1 + 0xe8);
      uVar4 = 1;
    }
    else {
      puVar5 = *(undefined4 **)(param_1 + 0xe8);
      uVar4 = 0;
    }
    *puVar5 = uVar4;
  }
LAB_00183efe:
  if (iVar2 != 0) {
    (***(code ***)(iVar6 + DAT_00183f20))(iVar2);
  }
LAB_00183f0c:
  *param_5 = local_24;
  return iVar1;
}


