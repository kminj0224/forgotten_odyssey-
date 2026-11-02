/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019e5d4  Symbol: FUN_0019e5d4 */

void FUN_0019e5d4(int *param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  code **ppcVar7;
  int iVar8;
  char *local_2c;
  char *local_1c [2];
  
  iVar8 = DAT_0019e8d0 + 0x19e5e6;
  if (param_1[8] == 0) {
    pcVar1 = (char *)FUN_0017d590(param_1,param_2,local_1c);
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 == '\0') {
        iVar3 = FUN_0019c30c(local_1c[0],iVar8 + DAT_0019e8d4);
        if (iVar3 == 0) {
          FUN_0019e100(param_1,0x6a,iVar8 + DAT_0019e8dc,param_2,0);
        }
        else {
          FUN_0019e150(param_1,0x23,iVar8 + DAT_0019e8d8,param_2,0);
        }
        if (local_1c[0] != (char *)0x0) {
          (***(code ***)(iVar8 + DAT_0019e8e0))();
        }
        local_1c[0] = (char *)0x0;
        (***(code ***)(iVar8 + DAT_0019e8e0))(pcVar1);
        pcVar1 = (char *)FUN_0019c904(param_2);
        goto LAB_0019e65e;
      }
      goto LAB_0019e66e;
    }
LAB_0019e662:
    FUN_0019d7d4(param_1,iVar8 + DAT_0019e8e4);
  }
  else {
    pcVar1 = (char *)FUN_0019c904(param_2);
    local_1c[0] = (char *)0x0;
LAB_0019e65e:
    if (pcVar1 == (char *)0x0) goto LAB_0019e662;
LAB_0019e66e:
    if (param_1[8] == 0) {
      local_2c = param_3;
      if (local_1c[0] == (char *)0x0) {
        if (((((*pcVar1 == 'x') && (pcVar1[1] == 'm')) && (pcVar1[2] == 'l')) &&
            ((pcVar1[3] == 'n' && (pcVar1[4] == 's')))) && (pcVar1[5] == '\0')) {
          if (param_1[4] == 0) {
            piVar2 = param_1 + 0x3e;
            *piVar2 = *piVar2 + 1;
            local_2c = (char *)FUN_0018357c(param_1,param_3,1,0,0,0);
            *piVar2 = *piVar2 + -1;
          }
          if (*local_2c != '\0') {
            piVar2 = (int *)FUN_00193d0c(local_2c);
            if (piVar2 == (int *)0x0) {
              if ((*param_1 != 0) && (pcVar6 = *(code **)(*param_1 + 0x54), pcVar6 != (code *)0x0))
              {
                (*pcVar6)(param_1[1],iVar8 + DAT_0019e8e8,local_2c);
              }
            }
            else {
              if (((*piVar2 == 0) && (*param_1 != 0)) &&
                 (pcVar6 = *(code **)(*param_1 + 0x54), pcVar6 != (code *)0x0)) {
                (*pcVar6)(param_1[1],iVar8 + DAT_0019e8ec,local_2c);
              }
              FUN_001919b8(piVar2);
            }
          }
          FUN_0018a4ec(param_1[0xd],local_2c,0);
          ppcVar7 = *(code ***)(iVar8 + DAT_0019e8e0);
          (**ppcVar7)(pcVar1);
          if (local_2c == param_3) {
            return;
          }
          pcVar6 = *ppcVar7;
          pcVar1 = local_2c;
          goto LAB_0019e9fc;
        }
      }
      else if (((((*local_1c[0] == 'x') && (local_1c[0][1] == 'm')) && (local_1c[0][2] == 'l')) &&
               ((local_1c[0][3] == 'n' && (local_1c[0][4] == 's')))) && (local_1c[0][5] == '\0')) {
        if (param_1[4] == 0) {
          piVar2 = param_1 + 0x3e;
          *piVar2 = *piVar2 + 1;
          local_2c = (char *)FUN_0018357c(param_1,param_3,1,0,0,0);
          *piVar2 = *piVar2 + -1;
          if (local_2c == (char *)0x0) {
            FUN_0019d7d4(param_1,iVar8 + DAT_0019e8e4);
            ppcVar7 = *(code ***)(iVar8 + DAT_0019e8e0);
            (**ppcVar7)(local_1c[0]);
            pcVar6 = *ppcVar7;
            goto LAB_0019e9fc;
          }
        }
        if (*local_2c == '\0') {
          FUN_0019e150(param_1,0xcc,iVar8 + DAT_0019e8f0,pcVar1,0);
        }
        if ((param_1[0x43] != 0) && (*local_2c != '\0')) {
          piVar2 = (int *)FUN_00193d0c(local_2c);
          if (piVar2 == (int *)0x0) {
            FUN_0019e100(param_1,99,iVar8 + DAT_0019e8f4,pcVar1,param_3);
          }
          else {
            if (*piVar2 == 0) {
              FUN_0019e100(param_1,100,iVar8 + DAT_0019e8f8,pcVar1,param_3);
            }
            FUN_001919b8(piVar2);
          }
        }
        FUN_0018a4ec(param_1[0xd],local_2c,pcVar1);
        ppcVar7 = *(code ***)(iVar8 + DAT_0019e8e0);
        (**ppcVar7)(local_1c[0]);
        (**ppcVar7)(pcVar1);
        if (local_2c == param_3) {
          return;
        }
        pcVar6 = *ppcVar7;
        pcVar1 = local_2c;
        goto LAB_0019e9fc;
      }
    }
    if (local_1c[0] == (char *)0x0) {
      local_2c = (char *)0x0;
    }
    else {
      local_2c = (char *)FUN_00189e8c(param_1[2],param_1[0xd]);
      if (local_2c == (char *)0x0) {
        FUN_0019e150(param_1,0xc9,iVar8 + DAT_0019e8fc,local_1c[0],pcVar1);
      }
      for (iVar3 = *(int *)(param_1[0xd] + 0x2c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
        if (((*(int *)(iVar3 + 0x24) != 0) &&
            (iVar4 = FUN_0019c30c(pcVar1,*(undefined4 *)(iVar3 + 8)), iVar4 != 0)) &&
           ((local_2c == (char *)*(int *)(iVar3 + 0x24) ||
            (iVar4 = FUN_0019c30c(*(undefined4 *)((int)local_2c + 8),
                                  *(undefined4 *)(*(int *)(iVar3 + 0x24) + 8)), iVar4 != 0)))) {
          FUN_0019e150(param_1,0x2a,iVar8 + DAT_0019e900,pcVar1,*(undefined4 *)((int)local_2c + 8));
          param_1[3] = 0;
          if (param_1[0x48] == 0) {
            param_1[0x35] = 1;
          }
          goto LAB_0019e9f0;
        }
      }
    }
    iVar3 = FUN_0018aef4(param_1[0xd],local_2c,pcVar1,0);
    if (iVar3 != 0) {
      if ((param_1[4] == 0) && (param_1[8] == 0)) {
        iVar4 = FUN_0018c4e4(param_1[2],param_3);
        *(int *)(iVar3 + 0xc) = iVar4;
        for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x18)) {
          *(int *)(iVar4 + 0x14) = iVar3;
          if (*(int *)(iVar4 + 0x18) == 0) {
            *(int *)(iVar3 + 0x10) = iVar4;
          }
        }
      }
      else if (param_3 != (char *)0x0) {
        iVar4 = FUN_0018a0b0(param_1[2],param_3);
        *(int *)(iVar3 + 0xc) = iVar4;
        *(int *)(iVar3 + 0x10) = iVar4;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x14) = iVar3;
        }
      }
    }
    if (-1 < param_1[0x45] << 0x1c) {
      if (param_1[4] == 0) {
        if (param_1[0x18] != 2) {
LAB_0019e980:
          iVar4 = FUN_0019c30c(param_2,iVar8 + DAT_0019ea04);
          if (iVar4 == 0) {
            iVar4 = FUN_001943cc(param_1[2],param_1[0xd],iVar3);
            iVar5 = param_1[2];
            if (iVar4 == 0) {
              iVar4 = FUN_00193fb0(iVar5,param_1[0xd],iVar3);
              if (iVar4 != 0) {
                FUN_00195784(param_1 + 0x1b,param_1[2],param_3,iVar3);
              }
              goto LAB_0019e9f0;
            }
          }
          else {
            iVar4 = FUN_0018d14c(param_3,1);
            if (iVar4 != 0) {
              FUN_0019e068(param_1,DAT_0019ea0c,iVar8 + DAT_0019ea08,param_3,0);
            }
            iVar5 = param_1[2];
          }
          FUN_0019454c(param_1 + 0x1b,iVar5,param_3,iVar3);
        }
      }
      else if (param_1[0x36] == 0) goto LAB_0019e980;
    }
  }
LAB_0019e9f0:
  if (local_1c[0] == (char *)0x0) {
    return;
  }
  pcVar6 = **(code ***)(iVar8 + DAT_0019ea10);
  pcVar1 = local_1c[0];
LAB_0019e9fc:
  (*pcVar6)(pcVar1);
  return;
}


