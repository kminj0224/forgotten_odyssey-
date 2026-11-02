/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f1e1c  Symbol: FUN_001f1e1c */

int ** FUN_001f1e1c(int **param_1,int *param_2,int *param_3,int *param_4,int param_5,
                   undefined4 param_6,undefined4 param_7,int *param_8,int *param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 uStack_2c;
  
  piVar1 = (int *)FUN_001f1db0(param_5 + 0x6c);
  local_38 = param_3;
  local_34 = param_4;
  if (param_8 != param_9) {
    do {
      iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,*param_8,0);
      if (iVar2 == 0x25) {
        piVar4 = param_8 + 1;
        if (param_9 == piVar4) break;
        iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_8[1],0);
        if (iVar2 == 0x4f || iVar2 == 0x45) {
          piVar4 = param_8 + 2;
          if (param_9 == piVar4) break;
          iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,param_8[2]);
          iVar5 = iVar2;
        }
        else {
          iVar5 = 0;
          iVar3 = iVar2;
        }
        (**(code **)(*param_2 + 8))
                  (&local_30,param_2,local_38,local_34,param_5,param_6,param_7,iVar3,iVar5);
        local_38 = local_30;
        local_34 = (int *)CONCAT31(local_34._1_3_,(char)uStack_2c);
        param_8 = piVar4;
      }
      else {
        iVar2 = *param_8;
        if ((char)local_34 == '\0') {
          piVar4 = (int *)local_38[5];
          if (piVar4 < (int *)local_38[6]) {
            *piVar4 = iVar2;
            local_38[5] = (int)(piVar4 + 1);
          }
          else {
            iVar2 = (**(code **)(*local_38 + 0x34))();
          }
          if (iVar2 == -1) {
            local_34 = (int *)CONCAT31(local_34._1_3_,1);
          }
        }
      }
      param_8 = param_8 + 1;
    } while (param_9 != param_8);
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  return param_1;
}


