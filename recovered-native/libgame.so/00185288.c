/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00185288  Symbol: FUN_00185288 */

int FUN_00185288(int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_30;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (((((param_5 != (int *)0x0) && (param_1 != 0)) && (-1 < param_3)) &&
      ((param_2 != 0 && (*(uint *)(param_1 + 4) < 0xe)))) &&
     ((1 << (*(uint *)(param_1 + 4) & 0xff) & DAT_001854ec) != 0)) {
    for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x14)) {
      iVar6 = *(int *)(param_1 + 4);
      if (((iVar6 == 1) || (iVar6 == 9)) || (iVar6 == 0xd)) {
        iVar6 = param_1;
        if (*(int *)(param_1 + 4) == 1) {
          iVar6 = *(int *)(param_1 + 0x20);
        }
        if (iVar6 == 0) {
          return 1;
        }
        if (*(int *)(iVar6 + 4) == 9) {
          iVar2 = FUN_0017c008();
        }
        else {
          if (*(int *)(iVar6 + 4) != 0xd) {
            return 1;
          }
          iVar2 = FUN_0019774c();
        }
        if (iVar2 == 0) {
          return 2;
        }
        iVar3 = FUN_00189fb0(0);
        if (iVar3 == 0) {
          FUN_00179908(iVar2);
          return 2;
        }
        FUN_0018c194(param_1,iVar3);
        if (*(int *)(iVar6 + 0x50) == 0) {
          param_4 = param_4 | 0x1000;
        }
        else {
          if (*(int *)(iVar2 + 0x128) != 0) {
            FUN_0019d610();
          }
          *(undefined4 *)(iVar2 + 0x128) = *(undefined4 *)(iVar6 + 0x50);
        }
        FUN_0017b200(iVar2,param_4,0);
        FUN_0017c4fc(iVar2);
        *(int *)(iVar2 + 8) = iVar6;
        if (*(int *)(param_1 + 4) == 1) {
          FUN_0017becc(iVar2,param_1);
          local_28 = 0;
          for (local_30 = param_1; (local_30 != 0 && (*(int *)(local_30 + 4) == 1));
              local_30 = *(int *)(local_30 + 0x14)) {
            for (puVar7 = *(undefined4 **)(local_30 + 0x30); puVar7 != (undefined4 *)0x0;
                puVar7 = (undefined4 *)*puVar7) {
              local_24 = puVar7[3];
              if (*(int *)(iVar2 + 0x128) == 0) {
                local_20 = puVar7[2];
              }
              else {
                local_24 = FUN_0019d178(*(int *)(iVar2 + 0x128),local_24,0xffffffff);
                local_20 = FUN_0019d178(*(undefined4 *)(iVar2 + 0x128),puVar7[2],0xffffffff);
              }
              iVar8 = FUN_0017ae38(iVar2,local_24);
              if (iVar8 == 0) {
                FUN_0017b48c(iVar2,local_24,local_20);
                local_28 = local_28 + 1;
              }
            }
          }
          *(undefined4 *)(iVar2 + 0xac) = 7;
        }
        else {
          local_28 = 0;
        }
        if ((*(int *)(iVar2 + 0x68) != 0) || (*(int *)(iVar2 + 0x10) != 0)) {
          *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) | 8;
        }
        if (*(int *)(iVar6 + 4) == 0xd) {
          FUN_0019ac50(iVar2);
        }
        else {
          FUN_00184ed0(iVar2);
        }
        FUN_0017acd0(iVar2,local_28);
        pcVar5 = *(char **)(*(int *)(iVar2 + 0x24) + 0x10);
        cVar1 = *pcVar5;
        if (cVar1 == '<') {
          if (pcVar5[1] != '/') goto LAB_00185446;
          uVar4 = 0x55;
        }
        else {
          if (cVar1 == '\0') goto LAB_00185450;
LAB_00185446:
          uVar4 = 0x56;
        }
        FUN_0017b7fc(iVar2,uVar4,0);
LAB_00185450:
        if ((*(int *)(iVar2 + 0x34) != 0) && (*(int *)(iVar2 + 0x34) != param_1)) {
          FUN_0017b7fc(iVar2,0x55,0);
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
        if (*(int *)(iVar2 + 0xc) == 0) {
          local_30 = *(int *)(iVar2 + 0x54);
          if (local_30 == 0) {
            local_30 = 1;
          }
        }
        else {
          local_30 = 0;
        }
        iVar8 = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = 0;
        *(int *)(param_1 + 0x10) = iVar3;
        if (iVar8 != 0) {
          *(undefined4 *)(iVar8 + 0x1c) = 0;
        }
        *param_5 = iVar8;
        for (; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x18)) {
          *(undefined4 *)(iVar8 + 0x14) = 0;
        }
        FUN_0018b26c(iVar3);
        FUN_0018bf48(iVar3);
        if (local_30 != 0) {
          FUN_0018bb84(*param_5);
          *param_5 = 0;
        }
        if (*(int *)(iVar6 + 0x50) != 0) {
          *(undefined4 *)(iVar2 + 0x128) = 0;
        }
        FUN_00179908(iVar2);
        return local_30;
      }
    }
  }
  return 1;
}


