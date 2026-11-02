/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001da624  Symbol: FUN_001da624 */

int ** FUN_001da624(int **param_1,int *param_2,int *param_3,int *param_4,int param_5,
                   undefined param_6,undefined4 param_7,byte *param_8,byte *param_9)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 uStack_2c;
  
  piVar2 = (int *)FUN_001da5b8(param_5 + 0x6c);
  local_38 = param_3;
  local_34 = param_4;
  if (param_8 != param_9) {
    do {
      bVar1 = *param_8;
      uVar5 = (uint)*(byte *)((int)piVar2 + bVar1 + 0x11d);
      if ((uVar5 == 0) && (uVar5 = (**(code **)(*piVar2 + 0x20))(piVar2), uVar5 != 0)) {
        *(char *)((int)piVar2 + bVar1 + 0x11d) = (char)uVar5;
      }
      if (uVar5 == 0x25) {
        pbVar6 = param_8 + 1;
        if (param_9 == pbVar6) break;
        uVar4 = (uint)param_8[1];
        uVar5 = (uint)*(byte *)((int)piVar2 + uVar4 + 0x11d);
        if ((uVar5 == 0) && (uVar5 = (**(code **)(*piVar2 + 0x20))(piVar2,uVar4,0), uVar5 != 0)) {
          *(char *)((int)piVar2 + uVar4 + 0x11d) = (char)uVar5;
        }
        if (uVar5 == 0x4f || uVar5 == 0x45) {
          pbVar6 = param_8 + 2;
          if (param_9 == pbVar6) break;
          bVar1 = param_8[2];
          uVar4 = (uint)*(byte *)((int)piVar2 + bVar1 + 0x11d);
          uVar7 = uVar5;
          if ((uVar4 == 0) && (uVar4 = (**(code **)(*piVar2 + 0x20))(piVar2), uVar4 != 0)) {
            *(char *)((int)piVar2 + bVar1 + 0x11d) = (char)uVar4;
          }
        }
        else {
          uVar7 = 0;
          uVar4 = uVar5;
        }
        (**(code **)(*param_2 + 8))
                  (&local_30,param_2,local_38,local_34,param_5,param_6,param_7,uVar4,uVar7);
        local_38 = local_30;
        local_34 = (int *)CONCAT31(local_34._1_3_,(char)uStack_2c);
        param_8 = pbVar6;
      }
      else if ((char)local_34 == '\0') {
        if ((byte *)local_38[5] < (byte *)local_38[6]) {
          *(byte *)local_38[5] = *param_8;
          local_38[5] = local_38[5] + 1;
        }
        else {
          iVar3 = (**(code **)(*local_38 + 0x34))();
          if (iVar3 == -1) {
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


