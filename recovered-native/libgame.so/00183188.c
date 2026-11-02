/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00183188  Symbol: FUN_00183188 */

int FUN_00183188(int param_1,uint param_2,int param_3,uint param_4,byte param_5,byte param_6,
                byte param_7)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined *puVar9;
  code **ppcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4c;
  undefined *local_48;
  char *local_44;
  uint local_24 [2];
  int local_1c [2];
  
  iVar11 = DAT_001834b8 + 0x183194;
  if (((param_1 != 0) && (param_2 != 0)) && (-1 < param_3)) {
    local_24[0] = param_2;
    if ((*(int *)(param_1 + 0xf8) < 0x29) ||
       ((*(int *)(param_1 + 0x168) << 0xc < 0 && (*(int *)(param_1 + 0xf8) < 0x401)))) {
      iVar3 = (***(code ***)(iVar11 + DAT_001834bc))(300);
      if (iVar3 != 0) {
        if (local_24[0] < param_2 + param_3) {
          uVar6 = FUN_0017a970(param_1,local_24[0],local_1c);
        }
        else {
          uVar6 = 0;
        }
        iVar2 = DAT_001834c0;
        iVar12 = 0;
        iVar13 = 300;
        while (((iVar5 = iVar3, uVar6 != 0 && (uVar6 != param_5)) &&
               ((uVar6 != param_6 && (uVar6 != param_7))))) {
          if (uVar6 == 0x26) {
            if (*(char *)(local_24[0] + 1) == '#') {
              iVar4 = FUN_0017bd84(param_1,local_24);
              if (iVar4 != 0) {
                iVar4 = FUN_0017ab20(iVar3 + iVar12,iVar4);
                iVar12 = iVar12 + iVar4;
              }
              goto LAB_001834f0;
            }
            if (-1 < (int)(param_4 << 0x1f)) goto LAB_001834aa;
            if (**(int **)(iVar11 + DAT_001834c4) != 0) {
              (***(code ***)(iVar11 + DAT_001834cc))
                        (**(undefined4 **)(iVar11 + DAT_001834c8),DAT_001834d0 + iVar11);
            }
            iVar4 = FUN_0017d838(param_1,local_24);
            if ((*(int *)(param_1 + 0x184) == 1) || (*(int *)(param_1 + 0x184) == 0x59))
            goto LAB_0018355e;
            if (iVar4 != 0) {
              *(int *)(param_1 + 0x1b8) = *(int *)(iVar4 + 0x48) + *(int *)(param_1 + 0x1b8);
              puVar9 = *(undefined **)(iVar4 + 0x28);
              if (*(int *)(iVar4 + 0x30) == 6) {
                if (puVar9 == (undefined *)0x0) {
                  FUN_0017bae0(param_1,1,iVar11 + DAT_001834d4);
                  goto LAB_00183510;
                }
                iVar4 = FUN_0017ab20(iVar3 + iVar12,*puVar9);
                iVar12 = iVar12 + iVar4;
                if (iVar12 < iVar13 + -99) goto LAB_00183510;
                ppcVar10 = *(code ***)(iVar11 + iVar2);
                goto LAB_00183502;
              }
              if (puVar9 != (undefined *)0x0) {
                piVar8 = (int *)(param_1 + 0xf8);
                *piVar8 = *piVar8 + 1;
                local_44 = (char *)FUN_0018357c(param_1,*(undefined4 *)(iVar4 + 0x28),param_4,0,0,0)
                ;
                *piVar8 = *piVar8 + -1;
                pcVar7 = local_44;
                if (local_44 != (char *)0x0) {
                  for (; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
                    *(char *)(iVar3 + iVar12) = *pcVar7;
                    iVar12 = iVar12 + 1;
                    iVar5 = iVar3;
                    if (iVar13 + -99 <= iVar12) {
                      iVar5 = FUN_0017ba44(param_1,iVar12,iVar4);
                      if (iVar5 != 0) goto LAB_00183552;
                      iVar13 = iVar13 * 2 + 100;
                      iVar5 = (***(code ***)(iVar11 + iVar2))(iVar3,iVar13);
                      if (iVar5 == 0) goto LAB_00183544;
                    }
                    iVar3 = iVar5;
                  }
                  goto LAB_0018349c;
                }
                goto LAB_00183510;
              }
              local_4c = FUN_0019c49c(*(undefined4 *)(iVar4 + 8));
              local_48 = *(undefined **)(iVar4 + 8);
              *(undefined *)(iVar3 + iVar12) = 0x26;
              if ((iVar13 + -99) - local_4c <= iVar12 + 1) {
                iVar13 = iVar13 * 2 + 100;
                iVar5 = (***(code ***)(iVar11 + iVar2))(iVar3,iVar13);
                if (iVar5 == 0) goto LAB_00183540;
              }
              puVar9 = (undefined *)(iVar5 + iVar12);
              local_44 = (char *)(iVar12 + 1);
              while( true ) {
                puVar9 = puVar9 + 1;
                iVar12 = (int)local_44 + 1;
                if (local_4c < 1) break;
                uVar1 = *local_48;
                local_48 = local_48 + 1;
                *puVar9 = uVar1;
                local_4c = local_4c + -1;
                local_44 = (char *)iVar12;
              }
              *(undefined *)(iVar5 + (int)local_44) = 0x3b;
            }
          }
          else {
            if ((uVar6 == 0x25) && ((param_4 & 2) != 0)) {
              if (**(int **)(iVar11 + DAT_001834c4) != 0) {
                (***(code ***)(iVar11 + DAT_001834cc))
                          (**(undefined4 **)(iVar11 + DAT_001834c8),iVar11 + DAT_001834d8,
                           local_24[0]);
              }
              iVar4 = FUN_00183084(param_1,local_24);
              if (*(int *)(param_1 + 0x184) != 0x59) {
                if (iVar4 != 0) {
                  *(int *)(param_1 + 0x1b8) = *(int *)(iVar4 + 0x48) + *(int *)(param_1 + 0x1b8);
                  if (*(int *)(iVar4 + 0x28) == 0) {
                    FUN_00182e50(param_1,iVar4);
                  }
                  piVar8 = (int *)(param_1 + 0xf8);
                  *piVar8 = *piVar8 + 1;
                  local_44 = (char *)FUN_0018357c(param_1,*(undefined4 *)(iVar4 + 0x28),param_4,0,0,
                                                  0);
                  *piVar8 = *piVar8 + -1;
                  pcVar7 = local_44;
                  if (local_44 != (char *)0x0) {
                    for (; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
                      *(char *)(iVar3 + iVar12) = *pcVar7;
                      iVar12 = iVar12 + 1;
                      iVar5 = iVar3;
                      if (iVar13 + -99 <= iVar12) {
                        iVar5 = FUN_0017ba44(param_1,iVar12,iVar4);
                        if (iVar5 != 0) goto LAB_00183552;
                        iVar13 = iVar13 * 2 + 100;
                        iVar5 = (***(code ***)(iVar11 + iVar2))(iVar3,iVar13);
                        if (iVar5 == 0) goto LAB_00183544;
                      }
                      iVar3 = iVar5;
                    }
LAB_0018349c:
                    (***(code ***)(iVar11 + DAT_001834dc))(local_44);
                    iVar5 = iVar3;
                  }
                }
                goto LAB_00183510;
              }
              goto LAB_0018355e;
            }
LAB_001834aa:
            if (local_1c[0] == 1) {
              *(char *)(iVar3 + iVar12) = (char)uVar6;
              iVar12 = iVar12 + 1;
            }
            else {
              iVar4 = FUN_0017ab20(iVar3 + iVar12);
              iVar12 = iVar12 + iVar4;
            }
            local_24[0] = local_24[0] + local_1c[0];
LAB_001834f0:
            if (iVar13 + -99 <= iVar12) {
              ppcVar10 = *(code ***)(iVar11 + iVar2);
LAB_00183502:
              iVar13 = iVar13 * 2 + 100;
              iVar5 = (**ppcVar10)(iVar3,iVar13);
              if (iVar5 == 0) goto LAB_00183540;
            }
          }
LAB_00183510:
          if (param_2 + param_3 <= local_24[0]) break;
          uVar6 = FUN_0017a970(param_1,local_24[0],local_1c);
          iVar3 = iVar5;
        }
        *(undefined *)(iVar5 + iVar12) = 0;
        return iVar5;
      }
LAB_00183540:
      local_44 = (char *)0x0;
LAB_00183544:
      FUN_00179430(param_1,0);
      if (local_44 != (char *)0x0) {
LAB_00183552:
        (***(code ***)(iVar11 + DAT_00183578))(local_44);
      }
LAB_0018355e:
      if (iVar3 == 0) {
        return 0;
      }
      (***(code ***)(iVar11 + DAT_00183578))(iVar3);
    }
    else {
      FUN_0017b7fc(param_1,0x59,0);
    }
  }
  return 0;
}


