/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00184c4c  Symbol: FUN_00184c4c */

void FUN_00184c4c(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  iVar6 = DAT_00184ebc + 0x184c58;
  iVar8 = param_1[0x52];
  if ((*(uint *)(iVar6 + DAT_00184ec0) < (uint)param_1[0x2f]) && (-1 < param_1[0x5a] << 0xc)) {
    FUN_0017bd20(param_1,1,iVar6 + DAT_00184ec4);
    param_1[0x2b] = -1;
    return;
  }
  if ((param_1[0x3b] == 0) || (iVar3 = *(int *)param_1[0x3a], iVar3 == -2)) {
    iVar3 = -1;
  }
  FUN_0017b560(param_1,iVar3);
  uVar7 = *(undefined4 *)(param_1[9] + 0x1c);
  if (param_1[0x51] == 0) {
    iVar3 = FUN_00184954(param_1);
  }
  else {
    iVar3 = FUN_00183f40(param_1,local_1c,&local_20,&local_24);
  }
  if (iVar3 == 0) {
    FUN_0017add8(param_1);
    return;
  }
  FUN_0017b724(param_1,iVar3);
  iVar4 = param_1[0xd];
  iVar5 = param_1[9];
  cVar1 = **(char **)(iVar5 + 0x10);
  if (cVar1 == '/') {
    if ((*(char **)(iVar5 + 0x10))[1] != '>') goto LAB_00184dc6;
    param_1[0x32] = param_1[0x32] + 2;
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 2;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 2;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar6 = FUN_0017a2bc(param_1[9],0xfa), iVar6 < 1)) {
      FUN_0017c6c4(param_1);
    }
    iVar6 = *param_1;
    if (param_1[0x51] == 0) {
      if (((iVar6 != 0) && (*(code **)(iVar6 + 0x3c) != (code *)0x0)) && (param_1[0x35] == 0)) {
        (**(code **)(iVar6 + 0x3c))(param_1[1],iVar3);
      }
    }
    else if (((iVar6 != 0) && (*(code **)(iVar6 + 0x78) != (code *)0x0)) && (param_1[0x35] == 0)) {
      (**(code **)(iVar6 + 0x78))(param_1[1],iVar3,local_1c[0],local_20);
    }
  }
  else {
    if (cVar1 == '>') {
      *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
      *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 1;
      param_1[0x32] = param_1[0x32] + 1;
      if (**(char **)(param_1[9] + 0x10) == '\0') {
        FUN_0017a2bc(param_1[9],0xfa);
      }
      FUN_00184ed0(param_1);
      bVar2 = **(byte **)(param_1[9] + 0x10);
      if (((1 < (byte)(bVar2 - 9)) && (bVar2 != 0xd)) && (bVar2 < 0x20)) {
        FUN_0017bcb4(param_1,0x4d,iVar6 + DAT_00184ecc,iVar3,uVar7,0);
        FUN_0017ad68(param_1);
        FUN_0017ad98(param_1);
        FUN_0017add8(param_1);
        if (iVar8 == param_1[0x52]) {
          return;
        }
        FUN_0017acd0(param_1,param_1[0x52] - iVar8);
        return;
      }
      if (param_1[0x51] == 0) {
        FUN_00180828(param_1,uVar7);
      }
      else {
        FUN_0018066c(param_1,local_1c[0],local_20,uVar7,param_1[0x52] - iVar8,local_24);
        FUN_0017ad98(param_1);
      }
      goto LAB_00184e8e;
    }
LAB_00184dc6:
    FUN_0017bcb4(param_1,0x49,iVar6 + DAT_00184ec8,iVar3,uVar7,0);
    FUN_0017ad68(param_1);
  }
  FUN_0017ad98(param_1);
  FUN_0017add8(param_1);
  if (iVar8 != param_1[0x52]) {
    FUN_0017acd0(param_1,param_1[0x52] - iVar8);
  }
LAB_00184e8e:
  if ((iVar4 != 0) && (param_1[0x11] != 0)) {
    FUN_001794d8(param_1);
  }
  return;
}


