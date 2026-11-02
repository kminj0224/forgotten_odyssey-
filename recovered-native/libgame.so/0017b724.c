/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017b724  Symbol: FUN_0017b724 */

int FUN_0017b724(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  
  iVar1 = DAT_0017b794;
  iVar3 = DAT_0017b790 + 0x17b730;
  if (param_1 == 0) {
LAB_0017b76a:
    iVar1 = -1;
  }
  else {
    piVar5 = (int *)(param_1 + 0xc0);
    iVar2 = *piVar5;
    if (iVar2 <= *(int *)(param_1 + 0xbc)) {
      *piVar5 = iVar2 << 1;
      pcVar4 = **(code ***)(iVar3 + iVar1);
      iVar1 = (*pcVar4)(*(int *)(param_1 + 0xc4),iVar2 << 3,iVar2 << 1,pcVar4,param_4);
      if (iVar1 == 0) {
        *piVar5 = *piVar5 / 2;
        FUN_00179430(param_1,0);
        goto LAB_0017b76a;
      }
      *(int *)(param_1 + 0xc4) = iVar1;
    }
    piVar5 = (int *)(param_1 + 0xbc);
    *(undefined4 *)(*piVar5 * 4 + *(int *)(param_1 + 0xc4)) = param_2;
    iVar1 = *piVar5;
    *(undefined4 *)(param_1 + 0xb8) = param_2;
    *piVar5 = iVar1 + 1;
  }
  return iVar1;
}


