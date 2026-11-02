/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017b560  Symbol: FUN_0017b560 */

int FUN_0017b560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  
  iVar1 = DAT_0017b5d0;
  piVar5 = (int *)(param_1 + 0xf0);
  iVar2 = *piVar5;
  iVar3 = DAT_0017b5cc + 0x17b576;
  if (iVar2 <= *(int *)(param_1 + 0xec)) {
    *piVar5 = iVar2 << 1;
    pcVar4 = **(code ***)(iVar3 + iVar1);
    iVar1 = (*pcVar4)(*(int *)(param_1 + 0xf4),iVar2 << 3,iVar2 << 1,pcVar4,param_4);
    if (iVar1 == 0) {
      FUN_00179430(param_1,0);
      *piVar5 = *piVar5 / 2;
      return -1;
    }
    *(int *)(param_1 + 0xf4) = iVar1;
  }
  piVar5 = (int *)(param_1 + 0xec);
  *(undefined4 *)(*piVar5 * 4 + *(int *)(param_1 + 0xf4)) = param_2;
  iVar1 = *piVar5;
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xf4) + iVar1 * 4;
  *piVar5 = iVar1 + 1;
  return iVar1;
}


