/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017d9d0  Symbol: FUN_0017d9d0 */

void FUN_0017d9d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 local_34;
  undefined4 local_30;
  int local_1c [2];
  
  iVar6 = DAT_0017db80 + 0x17d9e8;
  if ((*(int *)(param_1 + 0x160) != 0) && (iVar1 = FUN_0018eb6c(), iVar1 != 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x15c) == 0) {
    iVar1 = FUN_0018f404(10,*(undefined4 *)(param_1 + 0x128));
    *(int *)(param_1 + 0x15c) = iVar1;
    if (iVar1 == 0) goto LAB_0017db74;
  }
  iVar1 = FUN_001894b4(param_2,local_1c);
  if (iVar1 == 0) {
    local_30 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),param_2,0xffffffff);
    local_34 = 0;
  }
  else {
    local_30 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),iVar1,0xffffffff);
    local_34 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),param_2,local_1c[0]);
  }
  piVar2 = (int *)FUN_0018eb6c(*(undefined4 *)(param_1 + 0x15c),local_30,local_34);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(***(code ***)(iVar6 + DAT_0017db84))(0x6c);
    if (piVar2 == (int *)0x0) goto LAB_0017db74;
    piVar2[1] = 4;
    *piVar2 = 0;
    iVar1 = FUN_0018ef14(*(undefined4 *)(param_1 + 0x15c),local_30,local_34,piVar2,0);
    if (-1 < iVar1) goto LAB_0017dae2;
    pcVar4 = **(code ***)(iVar6 + DAT_0017db88);
  }
  else {
    if (*piVar2 < piVar2[1]) {
LAB_0017dae2:
      iVar1 = FUN_001894b4(param_3,local_1c);
      if (iVar1 == 0) {
        iVar1 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),param_3,0xffffffff);
        iVar3 = 0;
      }
      else {
        iVar1 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),iVar1,0xffffffff);
        iVar3 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),param_3,local_1c[0]);
      }
      iVar5 = *piVar2;
      piVar2[iVar5 * 5 + 2] = iVar1;
      piVar2[iVar5 * 5 + 3] = iVar3;
      local_1c[0] = FUN_0019c49c(param_4);
      iVar1 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),param_4,local_1c[0]);
      iVar3 = *piVar2;
      piVar2[iVar3 * 5 + 4] = iVar1;
      piVar2[(iVar3 + 1) * 5] = iVar1 + local_1c[0];
      if (*(int *)(param_1 + 0x60) == 0) {
        piVar2[iVar3 * 5 + 6] = 0;
      }
      else {
        piVar2[iVar3 * 5 + 6] = iVar6 + DAT_0017db90;
      }
      *piVar2 = *piVar2 + 1;
      return;
    }
    piVar2 = (int *)(***(code ***)(iVar6 + DAT_0017db8c))(piVar2,piVar2[1] * 0x28 + 0x1c);
    if (piVar2 == (int *)0x0) goto LAB_0017db74;
    piVar2[1] = piVar2[1] << 1;
    iVar1 = FUN_0018ef14(*(undefined4 *)(param_1 + 0x15c),local_30,local_34,piVar2,0);
    if (-1 < iVar1) goto LAB_0017dae2;
    pcVar4 = **(code ***)(iVar6 + DAT_0017db88);
  }
  (*pcVar4)(piVar2);
LAB_0017db74:
  FUN_00179430(param_1,0);
  return;
}


