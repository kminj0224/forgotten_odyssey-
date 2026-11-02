/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193700  Symbol: FUN_00193700 */

undefined4 FUN_00193700(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined *puVar5;
  int *piVar6;
  code **ppcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int local_1c;
  
  iVar11 = DAT_001939d4 + 0x19370c;
  if (param_1 == (char *)0x0) {
LAB_00193a40:
    piVar10 = (int *)0x0;
LAB_00193a42:
    uVar12 = 0;
LAB_00193a44:
    piVar8 = (int *)0x0;
    goto LAB_00193a26;
  }
  piVar9 = (int *)0x0;
  if (*param_1 == '\0') {
LAB_0019374a:
    piVar10 = (int *)0x0;
    if (param_2 == 0) {
LAB_00193768:
      if (piVar9 != (int *)0x0) {
        uVar12 = FUN_00191d4c(piVar9);
        piVar8 = (int *)0x0;
        goto LAB_00193a20;
      }
      goto LAB_00193a42;
    }
    piVar10 = (int *)FUN_00191b94();
    if (piVar10 == (int *)0x0) {
      if (piVar9 == (int *)0x0) {
        return 0;
      }
      piVar8 = (int *)0x0;
LAB_00193a1e:
      uVar12 = 0;
      goto LAB_00193a20;
    }
    iVar2 = FUN_001933bc(piVar10,param_2);
    if (iVar2 != 0) goto LAB_00193768;
    if (piVar9 == (int *)0x0) {
      if (piVar10[8] != 0) {
        (***(code ***)(iVar11 + DAT_001939d8))();
        piVar10[8] = 0;
      }
      uVar12 = FUN_00191d4c(piVar10);
      goto LAB_00193a44;
    }
    piVar8 = (int *)FUN_00191b94();
    if (piVar8 == (int *)0x0) goto LAB_00193a1e;
    piVar6 = piVar9;
    if (*piVar9 == 0) {
      piVar6 = piVar8;
      if (((piVar9[6] == 0) && (piVar9[2] == 0)) && (piVar9[3] == 0)) {
        if (*piVar10 != 0) {
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          *piVar8 = iVar2;
        }
        if (piVar10[2] == 0) {
          if (piVar10[3] != 0) {
            ppcVar7 = *(code ***)(iVar11 + DAT_001939dc);
            iVar2 = (**ppcVar7)();
            piVar8[3] = iVar2;
            if (piVar10[4] != 0) {
              iVar2 = (**ppcVar7)();
              piVar8[4] = iVar2;
            }
            piVar8[5] = piVar10[5];
          }
        }
        else {
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          piVar8[2] = iVar2;
        }
        if (piVar10[6] != 0) {
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          piVar8[6] = iVar2;
        }
        if (piVar9[10] == 0) {
          if (piVar9[7] == 0) {
            if (piVar10[10] != 0) goto LAB_00193828;
            if (piVar10[7] != 0) goto LAB_0019383a;
          }
          else {
LAB_0019383a:
            iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
            piVar8[7] = iVar2;
          }
        }
        else {
LAB_00193828:
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          piVar8[10] = iVar2;
        }
        if (piVar9[8] != 0) {
          iVar11 = (***(code ***)(iVar11 + DAT_001939dc))();
          piVar8[8] = iVar11;
        }
      }
      else {
        if (*piVar10 != 0) {
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          *piVar8 = iVar2;
        }
        if (piVar9[10] == 0) {
          if (piVar9[7] != 0) {
            iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
            piVar8[7] = iVar2;
          }
        }
        else {
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          piVar8[10] = iVar2;
        }
        if (piVar9[8] != 0) {
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          piVar8[8] = iVar2;
        }
        if (piVar9[2] == 0) {
          if (piVar9[3] != 0) {
            ppcVar7 = *(code ***)(iVar11 + DAT_001939dc);
            iVar2 = (**ppcVar7)();
            piVar8[3] = iVar2;
            if (piVar9[4] != 0) {
              iVar2 = (**ppcVar7)();
              piVar8[4] = iVar2;
            }
            piVar8[5] = piVar9[5];
            goto LAB_001938d2;
          }
          if (piVar10[2] == 0) {
            if (piVar10[3] != 0) {
              ppcVar7 = *(code ***)(iVar11 + DAT_001939dc);
              iVar2 = (**ppcVar7)();
              piVar8[3] = iVar2;
              if (piVar10[4] != 0) {
                iVar2 = (**ppcVar7)();
                piVar8[4] = iVar2;
              }
              piVar8[5] = piVar10[5];
            }
          }
          else {
            iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
            piVar8[2] = iVar2;
          }
          pcVar3 = (char *)piVar9[6];
          if (pcVar3 == (char *)0x0) {
            local_1c = 2;
LAB_00193936:
            if ((char *)piVar10[6] != (char *)0x0) {
              sVar4 = strlen((char *)piVar10[6]);
              local_1c = sVar4 + local_1c;
            }
            puVar5 = (undefined *)(***(code ***)(iVar11 + DAT_001939e0))(local_1c);
            piVar8[6] = (int)puVar5;
            if (puVar5 == (undefined *)0x0) {
              (***(code ***)(iVar11 + DAT_001939e8))
                        (**(undefined4 **)(iVar11 + DAT_001939e4),iVar11 + DAT_001939ec);
              goto LAB_00193a1e;
            }
            *puVar5 = 0;
            if (piVar10[6] == 0) {
              iVar11 = 0;
            }
            else {
              iVar2 = 0;
              iVar11 = 0;
              while (pcVar3 = (char *)(piVar10[6] + iVar2), *pcVar3 != '\0') {
                while( true ) {
                  cVar1 = *pcVar3;
                  pcVar3 = pcVar3 + 1;
                  if (cVar1 == '/') break;
                  if (cVar1 == '\0') goto LAB_001939aa;
                  iVar2 = iVar2 + 1;
                }
                iVar2 = iVar2 + 1;
                for (; iVar11 < iVar2; iVar11 = iVar11 + 1) {
                  *(undefined *)(piVar8[6] + iVar11) = *(undefined *)(piVar10[6] + iVar11);
                }
              }
            }
LAB_001939aa:
            *(undefined *)(piVar8[6] + iVar11) = 0;
            if (((char *)piVar9[6] != (char *)0x0) && (*(char *)piVar9[6] != '\0')) {
              if ((iVar11 == 0) && (piVar10[3] != 0)) {
                *(undefined *)piVar8[6] = 0x2f;
                iVar11 = 1;
              }
              for (iVar2 = 0; *(char *)(piVar9[6] + iVar2) != '\0'; iVar2 = iVar2 + 1) {
                *(char *)(piVar8[6] + iVar11) = *(char *)(piVar9[6] + iVar2);
                iVar11 = iVar11 + 1;
              }
            }
            *(undefined *)(piVar8[6] + iVar11) = 0;
            FUN_00191a58(piVar8[6]);
            goto LAB_00193a0e;
          }
          if (*pcVar3 != '/') {
            sVar4 = strlen(pcVar3);
            local_1c = sVar4 + 2;
            goto LAB_00193936;
          }
        }
        else {
          iVar2 = (***(code ***)(iVar11 + DAT_001939dc))();
          piVar8[2] = iVar2;
LAB_001938d2:
          if (piVar9[6] == 0) goto LAB_00193a0e;
        }
        iVar11 = (***(code ***)(iVar11 + DAT_001939dc))();
        piVar8[6] = iVar11;
      }
    }
LAB_00193a0e:
    uVar12 = FUN_00191d4c(piVar6);
  }
  else {
    piVar9 = (int *)FUN_00191b94();
    if (piVar9 == (int *)0x0) goto LAB_00193a40;
    iVar2 = FUN_001933bc(piVar9,param_1);
    if (iVar2 != 0) {
      piVar8 = (int *)0x0;
      piVar10 = (int *)0x0;
      goto LAB_00193a1e;
    }
    if (*piVar9 == 0) goto LAB_0019374a;
    uVar12 = FUN_0019c904(param_1);
    piVar8 = (int *)0x0;
    piVar10 = (int *)0x0;
  }
LAB_00193a20:
  FUN_001919b8(piVar9);
LAB_00193a26:
  if (piVar10 != (int *)0x0) {
    FUN_001919b8(piVar10);
  }
  if (piVar8 != (int *)0x0) {
    FUN_001919b8(piVar8);
  }
  return uVar12;
}


