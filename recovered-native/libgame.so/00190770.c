/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190770  Symbol: FUN_00190770 */

int FUN_00190770(undefined4 *param_1,char *param_2,code *param_3)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int local_38;
  code *local_30;
  size_t local_20;
  int local_1c [2];
  
  iVar8 = DAT_00190940 + 0x19077c;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (char *)0x0)) || (param_1[7] != 0)) ||
     ((param_1[4] == 0 || (*(int *)(param_1[4] + 0xc) == 2)))) {
LAB_00190924:
    iVar8 = -1;
  }
  else {
    sVar3 = strlen(param_2);
    if (-1 < (int)sVar3) {
      local_30 = param_3;
      if (param_3 == (code *)0x0) {
        local_30 = (code *)(iVar8 + DAT_00190944);
      }
      local_38 = 0;
      do {
        piVar4 = (int *)param_1[4];
        local_1c[0] = (piVar4[2] + -1) - piVar4[1];
        local_20 = sVar3;
        if (local_1c[0] < 0x28) {
          iVar8 = FUN_00189b88(piVar4,piVar4[2] + 100);
          if (iVar8 < 0) goto LAB_00190924;
          iVar6 = -1;
        }
        else {
          if (param_1[3] == 0) {
            iVar8 = (*local_30)(*piVar4 + piVar4[1],local_1c,param_2,&local_20);
            if ((iVar8 < 0) || (local_1c[0] == 0)) goto LAB_00190924;
            *(int *)(param_1[4] + 4) = *(int *)(param_1[4] + 4) + local_1c[0];
            *(undefined *)(*(int *)param_1[4] + ((int *)param_1[4])[1]) = 0;
            iVar8 = param_1[4];
          }
          else {
            if (param_1[5] == 0) {
              uVar5 = FUN_00189cd8();
              param_1[5] = uVar5;
            }
            iVar8 = (*local_30)(*(int *)param_1[4] + ((int *)param_1[4])[1],local_1c,param_2,
                                &local_20);
            if ((iVar8 < 0) || (local_1c[0] == 0)) goto LAB_00190924;
            *(int *)(param_1[4] + 4) = *(int *)(param_1[4] + 4) + local_1c[0];
            uVar1 = DAT_00190948;
            *(undefined *)(*(int *)param_1[4] + ((int *)param_1[4])[1]) = 0;
            if ((*(uint *)(param_1[4] + 4) <= uVar1) && (local_20 == sVar3)) {
              return local_38;
            }
            iVar8 = FUN_001a39f0(param_1[3],param_1[5]);
            if ((iVar8 != -3) && (iVar8 < 0)) {
              FUN_00190594(0x608,0);
              param_1[7] = 0x608;
              goto LAB_00190924;
            }
            iVar8 = param_1[5];
          }
          sVar2 = local_20;
          iVar8 = *(int *)(iVar8 + 4);
          sVar3 = sVar3 - local_20;
          if ((iVar8 <= (int)DAT_00190948) && ((int)sVar3 < 1)) {
            return local_38;
          }
          pcVar7 = (code *)param_1[1];
          if (pcVar7 == (code *)0x0) {
            iVar6 = param_1[4];
            if ((uint)(*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4)) <= DAT_00190948) {
              FUN_0018a828(iVar6,*(int *)(iVar6 + 8) + 4000);
            }
          }
          else {
            if (param_1[3] == 0) {
              iVar6 = (*pcVar7)(*param_1,*(undefined4 *)param_1[4],iVar8);
              if (iVar6 < 0) goto LAB_00190932;
              uVar5 = param_1[4];
            }
            else {
              iVar6 = (*pcVar7)(*param_1,*(undefined4 *)param_1[5],iVar8);
              if (iVar6 < 0) {
LAB_00190932:
                uVar5 = DAT_0019094c;
                FUN_00190594(DAT_0019094c,0);
                param_1[7] = uVar5;
                return iVar6;
              }
              uVar5 = param_1[5];
            }
            FUN_0018a7b0(uVar5,iVar6);
            param_1[6] = param_1[6] + iVar6;
          }
          param_2 = param_2 + sVar2;
          iVar6 = local_38;
          local_38 = iVar8 + local_38;
        }
        if (iVar6 == local_38) {
          return local_38;
        }
        if ((int)sVar3 < 1) {
          return local_38;
        }
      } while( true );
    }
    iVar8 = 0;
  }
  return iVar8;
}


