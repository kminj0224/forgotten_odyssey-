/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00186000  Symbol: FUN_00186000 */

void FUN_00186000(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  code *pcVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int local_3c;
  int local_2c;
  char local_28 [12];
  int local_1c;
  
  iVar13 = DAT_0018631c + 0x18600c;
  local_1c = **(int **)(iVar13 + DAT_00186320);
  local_2c = 0;
  pcVar9 = *(char **)(param_1[9] + 0x10);
  if (*pcVar9 != '&') goto LAB_0018649c;
  if (pcVar9[1] == '#') {
    cVar1 = pcVar9[2];
    iVar2 = FUN_0017fcac(param_1);
    if (iVar2 == 0) goto LAB_0018649c;
    if (param_1[0x40] == 1) {
      iVar2 = FUN_0017ab20(local_28,iVar2);
      local_28[iVar2] = '\0';
      if (((*param_1 == 0) || (pcVar10 = *(code **)(*param_1 + 0x44), pcVar10 == (code *)0x0)) ||
         (param_1[0x35] != 0)) goto LAB_0018649c;
      iVar3 = param_1[1];
    }
    else {
      if (0xff < iVar2) {
        iVar2 = DAT_00186324;
        if ((cVar1 != 'X') && (cVar1 != 'x')) {
          iVar2 = DAT_00186328;
        }
        snprintf(local_28,10,(char *)(iVar13 + iVar2));
        if (((*param_1 == 0) || (pcVar10 = *(code **)(*param_1 + 0x40), pcVar10 == (code *)0x0)) ||
           (param_1[0x35] != 0)) goto LAB_0018649c;
        iVar3 = param_1[1];
        pcVar9 = local_28;
        goto LAB_00186396;
      }
      local_28[0] = (char)iVar2;
      local_28[1] = 0;
      if (((*param_1 == 0) || (pcVar10 = *(code **)(*param_1 + 0x44), pcVar10 == (code *)0x0)) ||
         (param_1[0x35] != 0)) goto LAB_0018649c;
      iVar3 = param_1[1];
      iVar2 = 1;
    }
    (*pcVar10)(iVar3,local_28,iVar2);
  }
  else {
    iVar2 = FUN_0017fa24(param_1);
    if ((iVar2 == 0) || (param_1[3] == 0)) goto LAB_0018649c;
    iVar3 = *(int *)(iVar2 + 0x48);
    if ((*(int *)(iVar2 + 8) == 0) || (iVar8 = *(int *)(iVar2 + 0x30), iVar8 == 6)) {
      iVar2 = *(int *)(iVar2 + 0x28);
      if ((((iVar2 != 0) && (*param_1 != 0)) &&
          (pcVar10 = *(code **)(*param_1 + 0x44), pcVar10 != (code *)0x0)) && (param_1[0x35] == 0))
      {
        iVar3 = param_1[1];
        uVar4 = FUN_0019c49c(iVar2);
        (*pcVar10)(iVar3,iVar2,uVar4);
      }
      goto LAB_0018649c;
    }
    if (iVar3 == 0) {
      iVar11 = param_1[0x6e];
      piVar12 = (int *)param_1[1];
      if (piVar12 == param_1) {
        piVar12 = (int *)0x0;
      }
      if (iVar8 == 1) {
        param_1[0x3e] = param_1[0x3e] + 1;
        local_3c = FUN_00185d68(param_1,*(undefined4 *)(iVar2 + 0x28),piVar12,&local_2c);
LAB_00186190:
        param_1[0x3e] = param_1[0x3e] + -1;
      }
      else {
        if (iVar8 == 2) {
          iVar8 = param_1[0x3e] + 1;
          param_1[0x3e] = iVar8;
          local_3c = FUN_001854f0(param_1[2],param_1,*param_1,piVar12,iVar8,
                                  *(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x34),
                                  &local_2c);
          goto LAB_00186190;
        }
        FUN_0017bf54(param_1,1,iVar13 + DAT_0018632c,0);
        local_3c = 0x58;
      }
      *(int *)(iVar2 + 0x48) = param_1[0x6e] - iVar11;
      if (local_3c == 0x59) {
        FUN_0017b7fc(param_1,0x59,0);
      }
      else {
        iVar8 = FUN_0017ba44(param_1,0,iVar2);
        if (iVar8 == 0) {
          if (local_3c == 0) {
            if (local_2c == 0) {
LAB_0018628a:
              if (local_2c == 0) goto LAB_00186298;
            }
            else if ((*(int *)(iVar2 + 0x30) - 1U < 2) && (*(int *)(iVar2 + 0xc) == 0)) {
              *(int *)(iVar2 + 0xc) = local_2c;
              if (param_1[4] == 0) {
                *(undefined4 *)(iVar2 + 0x44) = 1;
                for (; local_2c != 0; local_2c = *(int *)(local_2c + 0x18)) {
                  *(int *)(local_2c + 0x14) = iVar2;
                  if (*(int *)(local_2c + 0x18) == 0) {
                    *(int *)(iVar2 + 0x10) = local_2c;
                  }
                }
              }
              else if (((*(int *)(local_2c + 4) == 3) && (*(int *)(local_2c + 0x18) == 0)) ||
                      (param_1[0x6d] == 5)) {
                *(int *)(local_2c + 0x14) = iVar2;
                local_2c = 0;
                *(undefined4 *)(iVar2 + 0x44) = 1;
              }
              else {
                *(undefined4 *)(iVar2 + 0x44) = 0;
                for (; local_2c != 0; local_2c = *(int *)(local_2c + 0x18)) {
                  *(int *)(local_2c + 0x14) = param_1[0xd];
                  *(int *)(local_2c + 0x20) = param_1[2];
                  if (*(int *)(local_2c + 0x18) == 0) {
                    *(int *)(iVar2 + 0x10) = local_2c;
                  }
                }
                local_2c = *(int *)(iVar2 + 0xc);
              }
              goto LAB_00186298;
            }
            FUN_0018bb84();
            local_2c = 0;
          }
          else {
            if ((local_3c == 0x1b) || (local_3c == 0)) goto LAB_0018628a;
            FUN_0017b798(param_1,0x1a,iVar13 + DAT_00186330,*(undefined4 *)(iVar2 + 8));
          }
LAB_00186298:
          if (*(int *)(iVar2 + 0x48) == 0) {
            *(undefined4 *)(iVar2 + 0x48) = 1;
          }
          goto LAB_001862b6;
        }
      }
      FUN_0018bb84(local_2c);
      goto LAB_0018649c;
    }
    if (iVar3 != 1) {
      param_1[0x6e] = iVar3 + param_1[0x6e];
    }
LAB_001862b6:
    piVar12 = *(int **)(iVar2 + 0xc);
    if (piVar12 == (int *)0x0) {
      if (iVar3 != 0) {
        piVar12 = (int *)param_1[1];
        if (piVar12 == param_1) {
          piVar12 = (int *)0x0;
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          param_1[0x3e] = param_1[0x3e] + 1;
          iVar3 = FUN_00185d68(param_1,*(undefined4 *)(iVar2 + 0x28),piVar12,0);
        }
        else {
          if (*(int *)(iVar2 + 0x30) != 2) {
            FUN_0017bf54(param_1,1,iVar13 + DAT_001864b0,0);
            goto LAB_00186350;
          }
          iVar3 = param_1[0x3e] + 1;
          param_1[0x3e] = iVar3;
          iVar3 = FUN_001854f0(param_1[2],param_1,*param_1,piVar12,iVar3,
                               *(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x34),0);
        }
        param_1[0x3e] = param_1[0x3e] + -1;
        if (iVar3 == 0x59) {
          FUN_0017b7fc(param_1,0x59,0);
          goto LAB_0018649c;
        }
      }
LAB_00186350:
      if ((((*param_1 == 0) || (pcVar10 = *(code **)(*param_1 + 0x40), pcVar10 == (code *)0x0)) ||
          (param_1[4] != 0)) || (param_1[0x35] != 0)) goto LAB_0018649c;
    }
    else if (((*param_1 == 0) || (pcVar10 = *(code **)(*param_1 + 0x40), pcVar10 == (code *)0x0)) ||
            ((param_1[4] != 0 || (param_1[0x35] != 0)))) {
      if ((param_1[4] != 0) && (param_1[0xd] != 0)) {
        if (((local_2c == 0) && (*(int *)(iVar2 + 0x44) == 0)) || (param_1[0x6d] == 5)) {
          do {
            piVar5 = (int *)FUN_0018cd84(piVar12,param_1[2],1);
            if (piVar5 != (int *)0x0) {
              if (*piVar5 == 0) {
                *piVar5 = *piVar12;
              }
              piVar5 = (int *)FUN_0018c194(param_1[0xd]);
            }
            if (piVar12 == *(int **)(iVar2 + 0x10)) {
              if ((((piVar5 != (int *)0x0) && (param_1[0x6d] == 5)) && (piVar5[1] == 1)) &&
                 (piVar5[3] == 0)) {
                *(undefined2 *)((int)piVar5 + 0x3a) = 1;
              }
              break;
            }
            piVar12 = (int *)piVar12[6];
          } while (piVar12 != (int *)0x0);
        }
        else if (local_2c == 0) {
          piVar5 = *(int **)(iVar2 + 0x10);
          *(undefined4 *)(iVar2 + 0xc) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          do {
            piVar6 = (int *)piVar12[6];
            piVar12[6] = 0;
            piVar12[5] = 0;
            piVar7 = (int *)FUN_0018cd84(piVar12,param_1[2],1);
            if (piVar7 != (int *)0x0) {
              if (*piVar7 == 0) {
                *piVar7 = *piVar12;
              }
              FUN_0018c194(iVar2,piVar7);
              FUN_0018c194(param_1[0xd],piVar12);
            }
          } while ((piVar12 != piVar5) && (piVar12 = piVar6, piVar6 != (int *)0x0));
          if (*(int *)(iVar2 + 0x44) == 0) {
            *(undefined4 *)(iVar2 + 0x44) = 1;
          }
        }
        else {
          uVar4 = FUN_0019d178(param_1[0x4a],iVar13 + DAT_001864b4,0xffffffff);
          if (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3) {
            *(undefined4 *)(*(int *)(iVar2 + 0xc) + 8) = uVar4;
          }
          iVar3 = *(int *)(iVar2 + 0x10);
          if ((iVar3 != *(int *)(iVar2 + 0xc)) && (*(int *)(iVar3 + 4) == 3)) {
            *(undefined4 *)(iVar3 + 8) = uVar4;
          }
          FUN_0018c294(param_1[0xd],*(undefined4 *)(iVar2 + 0xc));
        }
        param_1[0x42] = 0;
        param_1[0x41] = 0;
      }
      goto LAB_0018649c;
    }
    iVar3 = param_1[1];
    pcVar9 = *(char **)(iVar2 + 8);
LAB_00186396:
    (*pcVar10)(iVar3,pcVar9);
  }
LAB_0018649c:
  if (local_1c == **(int **)(iVar13 + DAT_001864b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


