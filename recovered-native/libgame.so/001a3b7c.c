/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a3b7c  Symbol: FUN_001a3b7c */

void FUN_001a3b7c(int param_1,int *param_2,byte **param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *local_58;
  int local_54;
  char acStack_50 [49];
  undefined local_1f;
  int local_1c;
  
  iVar4 = DAT_001a3c58 + 0x1a3b88;
  local_1c = **(int **)(iVar4 + DAT_001a3c5c);
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == (byte **)0x0)) {
    iVar2 = -1;
    goto LAB_001a3c44;
  }
  pbVar3 = param_3[1];
  iVar2 = 0;
  if (pbVar3 == (byte *)0x0) goto LAB_001a3c44;
  local_54 = param_2[2] - param_2[1];
  local_58 = pbVar3;
  if (local_54 <= (int)pbVar3 * 2) {
    FUN_00189b88(param_2,(int)pbVar3 * 2 + param_2[2]);
    local_54 = (param_2[2] + -1) - param_2[1];
  }
  if (*(code **)(param_1 + 4) == (code *)0x0) {
LAB_001a3bf8:
    iVar2 = DAT_001a3c64;
    pbVar3 = *param_3;
    snprintf(acStack_50,0x31,(char *)(iVar4 + DAT_001a3c60),(uint)*pbVar3,(uint)pbVar3[1],
             (uint)pbVar3[2],(uint)pbVar3[3]);
    local_1f = 0;
    FUN_001a39bc(DAT_001a3c68,iVar4 + iVar2,acStack_50);
    iVar1 = -2;
  }
  else {
    iVar1 = (**(code **)(param_1 + 4))(*param_2 + param_2[1],&local_54,*param_3,&local_58);
    FUN_0018a7b0(param_3,local_58);
    iVar2 = param_2[1];
    param_2[1] = local_54 + iVar2;
    *(undefined *)(*param_2 + local_54 + iVar2) = 0;
    if (iVar1 == -2) goto LAB_001a3bf8;
    if (iVar1 == -3) {
      iVar1 = 0;
    }
  }
  iVar2 = local_54;
  if (local_54 == 0) {
    iVar2 = iVar1;
  }
LAB_001a3c44:
  if (local_1c != **(int **)(iVar4 + DAT_001a3c5c)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


