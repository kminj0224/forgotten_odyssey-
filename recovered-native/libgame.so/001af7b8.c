/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af7b8  Symbol: FUN_001af7b8 */

int FUN_001af7b8(int *param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_4 + param_3;
  if ((((uint)param_2[1] < uVar1) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[6] + param_2[4]) < uVar1)) {
    if (param_2[10] == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x47;
      (**(code **)*param_1)(param_1);
    }
    if (param_2[9] != 0) {
      FUN_001af0fc(param_1,param_2,1);
      param_2[9] = 0;
    }
    if ((uint)param_2[6] < param_3) {
      param_2[6] = param_3;
    }
    else {
      param_2[6] = uVar1 - param_2[4] & (int)~(uVar1 - param_2[4]) >> 0x1f;
    }
    FUN_001af0fc(param_1,param_2,0);
  }
  uVar4 = param_2[7];
  if (uVar4 < uVar1) {
    if (uVar4 < param_3) {
      uVar4 = param_3;
      if (param_5 == 0) goto LAB_001af834;
      *(undefined4 *)(*param_1 + 0x14) = 0x17;
      (**(code **)*param_1)(param_1);
LAB_001af890:
      param_2[7] = uVar1;
      iVar2 = param_2[8];
    }
    else {
      if (param_5 != 0) goto LAB_001af890;
LAB_001af834:
      iVar2 = param_2[8];
    }
    if (iVar2 != 0) {
      iVar2 = param_2[2];
      iVar3 = param_2[6];
      uVar4 = uVar4 - iVar3;
      if (uVar4 < uVar1 - iVar3) {
        iVar5 = uVar4 * 4;
        do {
          uVar4 = uVar4 + 1;
          jzero_far(*(undefined4 *)(*param_2 + iVar5),iVar2);
          iVar5 = iVar5 + 4;
        } while (uVar4 < uVar1 - iVar3);
        goto LAB_001af860;
      }
      goto LAB_001af862;
    }
    if (param_5 == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x17;
      (**(code **)*param_1)(param_1);
      iVar3 = param_2[6];
      goto LAB_001af86c;
    }
    iVar3 = param_2[6];
  }
  else {
LAB_001af860:
    iVar3 = param_2[6];
LAB_001af862:
    if (param_5 == 0) goto LAB_001af86c;
  }
  param_2[9] = 1;
LAB_001af86c:
  return *param_2 + (param_3 - iVar3) * 4;
}


