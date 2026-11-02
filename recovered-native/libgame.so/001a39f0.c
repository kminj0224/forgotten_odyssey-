/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a39f0  Symbol: FUN_001a39f0 */

void FUN_001a39f0(int param_1,int *param_2,byte **param_3)

{
  char *__format;
  int iVar1;
  byte **ppbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *local_5c;
  byte **local_58;
  int local_54;
  char acStack_50 [49];
  undefined local_1f;
  int local_1c;
  
  iVar5 = DAT_001a3b5c + 0x1a39fc;
  local_1c = **(int **)(iVar5 + DAT_001a3b60);
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    __format = (char *)(iVar5 + DAT_001a3b64);
    do {
      local_54 = param_2[2] - param_2[1];
      if (0 < local_54) {
        local_54 = local_54 + -1;
      }
      if (param_3 == (byte **)0x0) {
        local_58 = param_3;
        if ((*(code **)(param_1 + 8) != (code *)0x0) &&
           (iVar4 = (**(code **)(param_1 + 8))(*param_2 + param_2[1],&local_54,0,&local_58),
           -1 < iVar4)) {
          iVar4 = param_2[1];
          param_2[1] = local_54 + iVar4;
          *(undefined *)(*param_2 + local_54 + iVar4) = 0;
        }
LAB_001a3b44:
        iVar4 = 0;
        goto LAB_001a3b46;
      }
      ppbVar2 = (byte **)param_3[1];
      if (ppbVar2 == (byte **)0x0) goto LAB_001a3b44;
      local_58 = ppbVar2;
      if (local_54 <= (int)ppbVar2 * 4) {
        FUN_00189b88(param_2);
        local_54 = (param_2[2] + -1) - param_2[1];
      }
      if (*(code **)(param_1 + 8) == (code *)0x0) {
        FUN_001a39bc(DAT_001a3b6c,iVar5 + DAT_001a3b68,0);
        break;
      }
      iVar4 = (**(code **)(param_1 + 8))(*param_2 + param_2[1],&local_54,*param_3,&local_58);
      if (0 < local_54) {
        FUN_0018a7b0(param_3,local_58);
        param_2[1] = param_2[1] + local_54;
      }
      *(undefined *)(*param_2 + param_2[1]) = 0;
      if (iVar4 != -2) goto LAB_001a3b46;
      local_5c = param_3[1];
      iVar1 = FUN_0019c548(*param_3,&local_5c);
      if (iVar1 < 1) goto LAB_001a3b00;
      snprintf(acStack_50,0x14,__format,iVar1);
      FUN_0018a7b0(param_3,local_5c);
      FUN_0018a9a4(param_3,acStack_50,0xffffffff);
    } while( true );
  }
  iVar4 = -1;
LAB_001a3b46:
  if (local_1c == **(int **)(iVar5 + DAT_001a3b60)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
LAB_001a3b00:
  pbVar3 = *param_3;
  snprintf(acStack_50,0x31,(char *)(iVar5 + DAT_001a3b70),(uint)*pbVar3,(uint)pbVar3[1],
           (uint)pbVar3[2],(uint)pbVar3[3]);
  local_1f = 0;
  FUN_001a39bc(DAT_001a3b78,iVar5 + DAT_001a3b74,acStack_50);
  if (param_3[3] != (byte *)0x2) {
    **param_3 = 0x20;
  }
  goto LAB_001a3b46;
}


