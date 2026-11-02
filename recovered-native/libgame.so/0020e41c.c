/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020e41c  Symbol: FUN_0020e41c */

/* WARNING: Type propagation algorithm not settling */

void FUN_0020e41c(uint *param_1,int *param_2)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  int **ppiVar8;
  int **ppiVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int ***pppiVar14;
  int **ppiVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined *puVar20;
  int iVar21;
  size_t sVar22;
  char *__s1;
  int iVar23;
  byte *pbVar24;
  uint uVar25;
  int **ppiVar26;
  byte *pbVar27;
  bool bVar28;
  int **local_80;
  int **local_70;
  int **local_6c;
  int **local_68 [2];
  int local_60;
  int **local_5c;
  int **local_58 [13];
  
  iVar23 = DAT_0020cbac;
  if (param_2 == (int *)0x0) {
    param_1[0x47] = 1;
    return;
  }
  if (param_1[0x47] != 0) {
    return;
  }
  iVar12 = *param_2;
  switch(iVar12) {
  case 0:
    if ((*param_1 & 4) == 0) {
      iVar23 = param_2[1];
      iVar12 = param_2[2];
      if (iVar12 != 0) {
        iVar21 = 0;
        uVar13 = param_1[0x41];
        do {
          uVar1 = *(undefined *)(iVar23 + iVar21);
          if (uVar13 == 0xff) {
            *(undefined *)((int)param_1 + 0x103) = 0;
            (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
            uVar6 = 1;
            uVar13 = 0;
            param_1[0x49] = param_1[0x49] + 1;
          }
          else {
            uVar6 = uVar13 + 1;
          }
          iVar21 = iVar21 + 1;
          *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
          param_1[0x41] = uVar6;
          *(undefined *)(param_1 + 0x42) = uVar1;
          uVar13 = uVar6;
        } while (iVar12 != iVar21);
      }
    }
    else {
      pbVar27 = (byte *)param_2[1];
      pbVar24 = pbVar27 + param_2[2];
      if (pbVar27 < pbVar24) {
        do {
          bVar2 = *pbVar27;
          if (((3 < (int)pbVar24 - (int)pbVar27) && (bVar2 == 0x5f)) &&
             ((pbVar27[1] == 0x5f && ((pbVar27[2] == 0x55 && (pbVar27 + 3 < pbVar24)))))) {
            uVar13 = 0;
            pbVar10 = pbVar27 + 3;
            do {
              pbVar11 = pbVar10 + 1;
              uVar25 = (uint)*pbVar10;
              uVar6 = uVar25 - 0x30;
              if (9 < (uVar6 & 0xff)) {
                uVar6 = uVar25 - 0x37;
                if ((5 < uVar25 - 0x41) && (uVar6 = uVar25 - 0x57, 5 < uVar25 - 0x61)) {
                  if (pbVar10 < pbVar24) {
                    bVar28 = uVar13 == 0xff;
                    if (uVar13 < 0x100) {
                      bVar28 = uVar25 == 0x5f;
                    }
                    if (bVar28) {
                      uVar6 = param_1[0x41];
                      if (uVar6 == 0xff) {
                        *(undefined *)((int)param_1 + 0x103) = 0;
                        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
                        uVar6 = 0;
                        param_1[0x41] = 0;
                        param_1[0x49] = param_1[0x49] + 1;
                      }
                      *(char *)((int)param_1 + uVar6 + 4) = (char)uVar13;
                      *(char *)(param_1 + 0x42) = (char)uVar13;
                      param_1[0x41] = uVar6 + 1;
                      pbVar27 = pbVar10;
                      goto LAB_0020d9bc;
                    }
                  }
                  break;
                }
              }
              uVar13 = uVar6 + uVar13 * 0x10;
              pbVar10 = pbVar11;
            } while (pbVar11 != pbVar24);
          }
          uVar13 = param_1[0x41];
          if (uVar13 == 0xff) {
            *(undefined *)((int)param_1 + 0x103) = 0;
            (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
            uVar6 = 1;
            uVar13 = 0;
            param_1[0x49] = param_1[0x49] + 1;
          }
          else {
            uVar6 = uVar13 + 1;
          }
          *(byte *)((int)param_1 + uVar13 + 4) = bVar2;
          param_1[0x41] = uVar6;
          *(byte *)(param_1 + 0x42) = bVar2;
LAB_0020d9bc:
          pbVar27 = pbVar27 + 1;
        } while (pbVar27 < pbVar24);
      }
    }
    break;
  case 1:
    goto LAB_0020c8f0;
  case 2:
LAB_0020c8f0:
    FUN_0020e41c(param_1,param_2[1]);
    uVar13 = param_1[0x41];
    if ((*param_1 & 4) == 0) {
      puVar17 = (undefined *)(DAT_0020cbf0 + 0x20c91a);
      puVar16 = (undefined *)(DAT_0020cbf0 + 0x20c918);
      do {
        puVar20 = puVar16 + 1;
        uVar1 = *puVar16;
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = uVar1;
        uVar13 = uVar6;
        puVar16 = puVar20;
      } while (puVar20 != puVar17);
    }
    else {
      if (uVar13 == 0xff) {
        uVar13 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = 0x2e;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = 0x2e;
    }
    goto LAB_0020bbb0;
  case 3:
    uVar13 = param_1[0x46];
    param_1[0x46] = 0;
    ppiVar26 = (int **)param_2[1];
    if (ppiVar26 != (int **)0x0) {
      piVar4 = *ppiVar26;
      ppiVar8 = (int **)param_1[0x45];
      local_68[0] = (int **)0x0;
      local_68[1] = ppiVar26;
      param_1[0x46] = (uint)local_68;
      local_60 = 0;
      local_5c = ppiVar8;
      if ((int)piVar4 - 0x1aU < 3) {
        uVar6 = 1;
        pppiVar14 = local_68;
        do {
          ppiVar26 = (int **)ppiVar26[1];
          if ((ppiVar26 == (int **)0x0) || (uVar6 == 4)) goto switchD_0020ba0c_caseD_43;
          piVar4 = *ppiVar26;
          pppiVar14[4] = (int **)param_1[0x46];
          pppiVar14[5] = ppiVar26;
          pppiVar14[6] = (int **)0x0;
          pppiVar14[7] = ppiVar8;
          param_1[0x46] = (uint)(local_68 + uVar6 * 4);
          uVar6 = uVar6 + 1;
          pppiVar14 = pppiVar14 + 4;
        } while ((int)piVar4 - 0x1aU < 3);
      }
      else {
        uVar6 = 1;
      }
      if (piVar4 == (int *)0x4) {
        param_1[0x45] = (uint)&local_70;
        local_70 = ppiVar8;
        local_6c = ppiVar26;
LAB_0020cac8:
        FUN_0020e41c(param_1,param_2[2]);
        if (*ppiVar26 == (int *)0x4) {
          param_1[0x45] = (uint)local_70;
        }
        if (uVar6 != 0) {
          pppiVar14 = local_68 + uVar6 * 4;
          do {
            uVar6 = uVar6 - 1;
            if (pppiVar14[-2] == (int **)0x0) {
              uVar25 = param_1[0x41];
              if (uVar25 == 0xff) {
                *(undefined *)((int)param_1 + 0x103) = 0;
                (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
                param_1[0x49] = param_1[0x49] + 1;
                uVar25 = 0;
              }
              *(undefined *)((int)param_1 + uVar25 + 4) = 0x20;
              ppiVar26 = pppiVar14[-3];
              param_1[0x41] = uVar25 + 1;
              *(undefined *)(param_1 + 0x42) = 0x20;
              FUN_0020e4f8(param_1,ppiVar26);
            }
            pppiVar14 = pppiVar14 + -4;
          } while (uVar6 != 0);
        }
        param_1[0x46] = uVar13;
        return;
      }
      if (piVar4 != (int *)0x2) goto LAB_0020cac8;
      ppiVar9 = (int **)ppiVar26[2];
      piVar4 = *ppiVar9;
      if (piVar4 == (int *)0x3f) {
        ppiVar9 = (int **)ppiVar9[1];
        piVar4 = *ppiVar9;
      }
      if (2 < (int)piVar4 - 0x1aU) goto LAB_0020cac8;
      if (uVar6 < 4) {
        pppiVar14 = local_68 + (uVar6 - 1) * 4;
        uVar25 = uVar6 - 1;
        do {
          uVar7 = uVar6;
          pppiVar14[4] = *pppiVar14;
          pppiVar14[5] = pppiVar14[1];
          pppiVar14[6] = pppiVar14[2];
          pppiVar14[7] = pppiVar14[3];
          pppiVar14[4] = (int **)(local_68 + uVar25 * 4);
          pppiVar14[2] = (int **)0x0;
          param_1[0x46] = (uint)(local_68 + uVar7 * 4);
          pppiVar14[1] = ppiVar9;
          pppiVar14[3] = ppiVar8;
          ppiVar9 = (int **)ppiVar9[1];
          uVar6 = uVar7 + 1;
          if (2 < (int)*ppiVar9 - 0x1aU) goto LAB_0020cac8;
          pppiVar14 = pppiVar14 + 4;
          uVar25 = uVar7;
        } while (uVar6 != 4);
      }
    }
  default:
switchD_0020ba0c_caseD_43:
    param_1[0x47] = 1;
    break;
  case 4:
    uVar13 = param_1[0x46];
    param_1[0x46] = 0;
    piVar4 = (int *)param_2[1];
    if (((((*param_1 & 4) == 0) || (*piVar4 != 0)) || (piVar4[2] != 6)) ||
       (iVar23 = strncmp((char *)piVar4[1],(char *)(DAT_0020e40c + 0x20e104),6), iVar23 != 0)) {
      FUN_0020e41c(param_1,piVar4);
      uVar25 = param_1[0x41];
      uVar6 = uVar25;
      if (*(char *)(param_1 + 0x42) == '<') {
        if (uVar25 == 0xff) {
          uVar25 = 0;
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          param_1[0x49] = param_1[0x49] + 1;
        }
        uVar6 = uVar25 + 1;
        *(undefined *)((int)param_1 + uVar25 + 4) = 0x20;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = 0x20;
      }
      if (uVar6 == 0xff) {
        uVar6 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar25 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar25 = uVar6 + 1;
      }
      *(undefined *)((int)param_1 + uVar6 + 4) = 0x3c;
      *(undefined *)(param_1 + 0x42) = 0x3c;
      param_1[0x41] = uVar25;
      FUN_0020e41c(param_1,param_2[2]);
      uVar25 = param_1[0x41];
      uVar6 = uVar25;
      if (*(char *)(param_1 + 0x42) == '>') {
        if (uVar25 == 0xff) {
          uVar25 = 0;
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          param_1[0x49] = param_1[0x49] + 1;
        }
        uVar6 = uVar25 + 1;
        *(undefined *)((int)param_1 + uVar25 + 4) = 0x20;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = 0x20;
      }
      if (uVar6 == 0xff) {
        uVar6 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar25 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar25 = uVar6 + 1;
      }
      *(undefined *)((int)param_1 + uVar6 + 4) = 0x3e;
      param_1[0x41] = uVar25;
      *(undefined *)(param_1 + 0x42) = 0x3e;
      param_1[0x46] = uVar13;
    }
    else {
      FUN_0020e41c(param_1,param_2[2]);
      FUN_0020b94c(param_1,DAT_0020e410 + 0x20e128);
      param_1[0x46] = uVar13;
    }
    break;
  case 5:
    puVar19 = (uint *)param_1[0x45];
    if (puVar19 != (uint *)0x0) {
      iVar23 = param_2[1];
      piVar4 = *(int **)(puVar19[1] + 8);
      if (piVar4 == (int *)0x0) {
LAB_0020cc90:
        bVar28 = true;
LAB_0020cc94:
        if (iVar23 != 0) {
          bVar28 = true;
        }
        if (!bVar28) {
LAB_0020cca8:
          piVar4 = (int *)piVar4[1];
          if (piVar4 != (int *)0x0) {
            if (*piVar4 != 0x2b) goto LAB_0020ccc0;
            uVar13 = param_1[0x48];
            if ((int)uVar13 < 1) {
              bVar28 = false;
LAB_0020dcb8:
              if (uVar13 != 0) {
                bVar28 = true;
              }
              if (bVar28) goto switchD_0020ba0c_caseD_43;
            }
            else {
              do {
                piVar4 = (int *)piVar4[2];
                uVar13 = uVar13 - 1;
                if (piVar4 == (int *)0x0) {
                  bVar28 = true;
                  goto LAB_0020dcb8;
                }
                if (*piVar4 != 0x2b) goto switchD_0020ba0c_caseD_43;
              } while (uVar13 != 0);
            }
            if (piVar4[1] != 0) {
LAB_0020ccc0:
              param_1[0x45] = *puVar19;
              FUN_0020e41c(param_1);
              param_1[0x45] = (uint)puVar19;
              return;
            }
          }
        }
      }
      else if (*piVar4 == 0x2b) {
        if (iVar23 < 1) {
          bVar28 = false;
          goto LAB_0020cc94;
        }
        do {
          piVar4 = (int *)piVar4[2];
          iVar23 = iVar23 + -1;
          if (piVar4 == (int *)0x0) goto LAB_0020cc90;
          if (*piVar4 != 0x2b) goto switchD_0020ba0c_caseD_43;
        } while (iVar23 != 0);
        goto LAB_0020cca8;
      }
    }
    goto switchD_0020ba0c_caseD_43;
  case 6:
    puVar17 = (undefined *)(DAT_0020cbf4 + 0x20cb36);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbf4 + 0x20cb30);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    sprintf((char *)local_68,(char *)(DAT_0020cc24 + 0x20d770));
    sVar5 = strlen((char *)local_68);
    if (sVar5 == 0) {
LAB_0020d590:
      uVar6 = param_1[0x41];
    }
    else {
      sVar22 = 0;
      uVar13 = param_1[0x41];
      do {
        cVar3 = *(char *)((int)local_68 + sVar22);
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        sVar22 = sVar22 + 1;
        *(char *)((int)param_1 + uVar13 + 4) = cVar3;
        param_1[0x41] = uVar6;
        *(char *)(param_1 + 0x42) = cVar3;
        uVar13 = uVar6;
      } while (sVar22 != sVar5);
    }
    goto LAB_0020d594;
  case 7:
    goto LAB_0020bbb0;
  case 8:
    uVar13 = param_1[0x41];
    if (uVar13 == 0xff) {
      uVar13 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar6 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar6 = uVar13 + 1;
    }
    *(undefined *)((int)param_1 + uVar13 + 4) = 0x7e;
    param_1[0x41] = uVar6;
    *(undefined *)(param_1 + 0x42) = 0x7e;
    goto LAB_0020bbb0;
  case 9:
    puVar17 = (undefined *)(DAT_0020cbec + 0x20c7e3);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbec + 0x20c7d8);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 10:
    puVar17 = (undefined *)(DAT_0020cbe8 + 0x20c76c);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbe8 + 0x20c764);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0xb:
    puVar16 = (undefined *)(DAT_0020cbe4 + 0x20c6eb);
    puVar17 = (undefined *)(DAT_0020cbe4 + 0x20c703);
    uVar13 = param_1[0x41];
    do {
      puVar16 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      iVar23 = DAT_0020cc28;
      uVar13 = uVar6;
    } while (puVar16 != puVar17);
    puVar16 = (undefined *)(DAT_0020cc28 + 0x20d80c);
    FUN_0020e41c(param_1,param_2[1]);
    uVar13 = param_1[0x41];
    do {
      puVar17 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar17;
    } while (puVar17 != (undefined *)(iVar23 + 0x20d810));
    goto LAB_0020bbb0;
  case 0xc:
    puVar17 = (undefined *)(DAT_0020cbe0 + 0x20c685);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbe0 + 0x20c678);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0xd:
    puVar17 = (undefined *)(DAT_0020cbdc + 0x20c616);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbdc + 0x20c604);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0xe:
    puVar17 = (undefined *)(DAT_0020cbd8 + 0x20c5a0);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbd8 + 0x20c590);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0xf:
    puVar16 = (undefined *)(DAT_0020cbd4 + 0x20c517);
    puVar17 = (undefined *)(DAT_0020cbd4 + 0x20c52c);
    uVar13 = param_1[0x41];
    do {
      puVar16 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
    } while (puVar16 != puVar17);
    goto LAB_0020bb68;
  case 0x10:
    puVar17 = (undefined *)(DAT_0020cbd0 + 0x20c4b5);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbd0 + 0x20c4a4);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0x11:
    puVar16 = (undefined *)(DAT_0020cbcc + 0x20c42b);
    puVar17 = (undefined *)(DAT_0020cbcc + 0x20c445);
    uVar13 = param_1[0x41];
    do {
      puVar16 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
    } while (puVar16 != puVar17);
    goto LAB_0020bb68;
  case 0x12:
    puVar17 = (undefined *)(DAT_0020cbc8 + 0x20c3c7);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbc8 + 0x20c3b8);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0x13:
    puVar17 = (undefined *)(DAT_0020cc0c + 0x20d203);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cc0c + 0x20d1f0);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0x14:
    puVar16 = (undefined *)(DAT_0020cc08 + 0x20d177);
    puVar17 = (undefined *)(DAT_0020cc08 + 0x20d18f);
    uVar13 = param_1[0x41];
    do {
      puVar16 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
    } while (puVar16 != puVar17);
    goto LAB_0020bb68;
  case 0x15:
    puVar17 = (undefined *)(DAT_0020cc04 + 0x20d115);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cc04 + 0x20d104);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0x16:
    iVar23 = param_2[1];
    iVar12 = param_2[2];
    if (iVar12 != 0) {
      iVar21 = 0;
      uVar13 = param_1[0x41];
      do {
        uVar1 = *(undefined *)(iVar23 + iVar21);
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        iVar21 = iVar21 + 1;
        *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = uVar1;
        uVar13 = uVar6;
      } while (iVar12 != iVar21);
    }
    break;
  case 0x17:
    goto LAB_0020bb20;
  case 0x18:
    goto LAB_0020bb20;
  case 0x19:
LAB_0020bb20:
    local_68[0] = (int **)param_1[0x46];
    for (ppiVar26 = local_68[0]; ppiVar26 != (int **)0x0; ppiVar26 = (int **)*ppiVar26) {
      if (ppiVar26[2] == (int *)0x0) {
        if (2 < *ppiVar26[1] - 0x17U) break;
        if (iVar12 == *ppiVar26[1]) goto LAB_0020bb68;
      }
    }
    goto LAB_0020d258;
  case 0x1a:
    goto LAB_0020d254;
  case 0x1b:
    goto LAB_0020d254;
  case 0x1c:
    goto LAB_0020d254;
  case 0x1d:
    goto LAB_0020d254;
  case 0x1e:
    goto LAB_0020d254;
  case 0x1f:
    goto LAB_0020d254;
  case 0x20:
    goto LAB_0020d254;
  case 0x21:
    goto LAB_0020d254;
  case 0x22:
LAB_0020d254:
    local_68[0] = (int **)param_1[0x46];
LAB_0020d258:
    local_5c = (int **)param_1[0x45];
    param_1[0x46] = (uint)local_68;
    iVar23 = param_2[1];
LAB_0020d270:
    local_60 = 0;
    local_68[1] = (int **)param_2;
    FUN_0020e41c(param_1,iVar23);
    if (local_60 == 0) {
      FUN_0020e4f8(param_1,param_2);
    }
    param_1[0x46] = (uint)local_68[0];
    break;
  case 0x23:
    piVar4 = (int *)param_2[1];
    if ((*param_1 & 4) == 0) {
      iVar23 = piVar4[1];
      iVar12 = *piVar4;
      if (iVar23 != 0) {
        iVar21 = 0;
        uVar13 = param_1[0x41];
        do {
          uVar1 = *(undefined *)(iVar12 + iVar21);
          if (uVar13 == 0xff) {
            *(undefined *)((int)param_1 + 0x103) = 0;
            (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
            uVar6 = 1;
            uVar13 = 0;
            param_1[0x49] = param_1[0x49] + 1;
          }
          else {
            uVar6 = uVar13 + 1;
          }
          iVar21 = iVar21 + 1;
          *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
          param_1[0x41] = uVar6;
          *(undefined *)(param_1 + 0x42) = uVar1;
          uVar13 = uVar6;
        } while (iVar23 != iVar21);
      }
    }
    else {
      iVar23 = piVar4[3];
      iVar12 = piVar4[2];
      if (iVar23 != 0) {
        iVar21 = 0;
        uVar13 = param_1[0x41];
        do {
          uVar1 = *(undefined *)(iVar12 + iVar21);
          if (uVar13 == 0xff) {
            *(undefined *)((int)param_1 + 0x103) = 0;
            (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
            uVar6 = 1;
            uVar13 = 0;
            param_1[0x49] = param_1[0x49] + 1;
          }
          else {
            uVar6 = uVar13 + 1;
          }
          iVar21 = iVar21 + 1;
          *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
          param_1[0x41] = uVar6;
          *(undefined *)(param_1 + 0x42) = uVar1;
          uVar13 = uVar6;
        } while (iVar23 != iVar21);
      }
    }
    break;
  case 0x24:
    goto LAB_0020bb68;
  case 0x25:
    if ((*param_1 & 0x20) != 0) {
      FUN_0020eb90(param_1,param_2,param_1[0x46]);
    }
    if (param_2[1] == 0) {
      uVar13 = *param_1 & 0x20;
    }
    else {
      local_68[0] = (int **)param_1[0x46];
      local_5c = (int **)param_1[0x45];
      param_1[0x46] = (uint)local_68;
      local_60 = 0;
      local_68[1] = (int **)param_2;
      FUN_0020e41c(param_1,param_2[1]);
      param_1[0x46] = (uint)local_68[0];
      if (local_60 != 0) {
        return;
      }
      if ((*param_1 & 0x20) != 0) {
        return;
      }
      uVar6 = param_1[0x41];
      if (uVar6 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        param_1[0x49] = param_1[0x49] + 1;
        uVar13 = *param_1 & 0x20;
        uVar6 = 0;
      }
      else {
        uVar13 = 0;
      }
      *(undefined *)((int)param_1 + uVar6 + 4) = 0x20;
      param_1[0x41] = uVar6 + 1;
      *(undefined *)(param_1 + 0x42) = 0x20;
    }
    if (uVar13 == 0) {
      FUN_0020eb90(param_1,param_2,param_1[0x46]);
    }
    break;
  case 0x26:
    local_80 = (int **)param_1[0x46];
    local_5c = (int **)param_1[0x45];
    param_1[0x46] = (uint)local_68;
    local_60 = 0;
    if (local_80 == (int **)0x0) {
      uVar13 = 1;
    }
    else {
      iVar23 = *local_80[1];
      ppiVar26 = local_80;
      pppiVar14 = local_68;
      uVar6 = 1;
      while (uVar13 = uVar6, iVar23 - 0x17U < 3) {
        if (ppiVar26[2] == (int *)0x0) {
          uVar13 = uVar6 + 1;
          if (3 < uVar6) {
            param_1[0x47] = 1;
            return;
          }
          ppiVar8 = (int **)ppiVar26[1];
          ppiVar9 = (int **)ppiVar26[2];
          ppiVar15 = (int **)ppiVar26[3];
          local_68[uVar6 * 4] = (int **)*ppiVar26;
          local_68[uVar6 * 4 + 1] = ppiVar8;
          local_68[uVar6 * 4 + 2] = ppiVar9;
          local_68[uVar6 * 4 + 3] = ppiVar15;
          local_68[uVar6 * 4] = (int **)pppiVar14;
          pppiVar14 = local_68 + uVar6 * 4;
          param_1[0x46] = (uint)pppiVar14;
          ppiVar26[2] = (int *)0x1;
        }
        ppiVar26 = (int **)*ppiVar26;
        if (ppiVar26 == (int **)0x0) break;
        uVar6 = uVar13;
        iVar23 = *ppiVar26[1];
      }
    }
    local_68[0] = local_80;
    local_68[1] = (int **)param_2;
    FUN_0020e41c(param_1,param_2[2]);
    param_1[0x46] = (uint)local_80;
    if (local_60 == 0) {
      if (uVar13 != 1) {
        pppiVar14 = local_68 + uVar13 * 4;
        do {
          uVar13 = uVar13 - 1;
          FUN_0020e4f8(param_1,pppiVar14[-3]);
          pppiVar14 = pppiVar14 + -4;
        } while (uVar13 != 1);
        local_80 = (int **)param_1[0x46];
      }
      FUN_0020f1d8(param_1,param_2,local_80);
    }
    break;
  case 0x27:
    goto LAB_0020d2a8;
  case 0x28:
    if (*(short *)((int)param_2 + 10) != 0) {
      puVar17 = (undefined *)(DAT_0020cc30 + 0x20db75);
      uVar13 = param_1[0x41];
      puVar16 = (undefined *)(DAT_0020cc30 + 0x20db70);
      do {
        puVar20 = puVar16 + 1;
        uVar1 = *puVar16;
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = uVar1;
        uVar13 = uVar6;
        puVar16 = puVar20;
      } while (puVar20 != puVar17);
    }
    if (*(int *)(param_2[1] + 4) == DAT_0020cbf8 + 0x20cee0) {
      uVar13 = param_1[0x41];
    }
    else {
      FUN_0020e41c(param_1);
      uVar6 = param_1[0x41];
      if (uVar6 == 0xff) {
        uVar6 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar13 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar13 = uVar6 + 1;
      }
      *(undefined *)((int)param_1 + uVar6 + 4) = 0x20;
      param_1[0x41] = uVar13;
      *(undefined *)(param_1 + 0x42) = 0x20;
    }
    if (*(short *)(param_2 + 2) == 0) {
      puVar17 = (undefined *)(DAT_0020cc2c + 0x20dad2);
      puVar16 = (undefined *)(DAT_0020cc2c + 0x20dacc);
      do {
        puVar20 = puVar16 + 1;
        uVar1 = *puVar16;
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = uVar1;
        uVar13 = uVar6;
        puVar16 = puVar20;
      } while (puVar20 != puVar17);
    }
    else {
      puVar17 = (undefined *)(DAT_0020cbfc + 0x20cdd6);
      puVar16 = (undefined *)(DAT_0020cbfc + 0x20cdd0);
      do {
        puVar20 = puVar16 + 1;
        uVar1 = *puVar16;
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = uVar1;
        uVar13 = uVar6;
        puVar16 = puVar20;
      } while (puVar20 != puVar17);
    }
    break;
  case 0x29:
LAB_0020d2a8:
    local_68[0] = (int **)param_1[0x46];
    local_5c = (int **)param_1[0x45];
    param_1[0x46] = (uint)local_68;
    iVar23 = param_2[2];
    goto LAB_0020d270;
  case 0x2a:
    goto LAB_0020d338;
  case 0x2b:
LAB_0020d338:
    if (param_2[1] != 0) {
      FUN_0020e41c();
    }
    if (param_2[2] != 0) {
      uVar6 = param_1[0x41];
      uVar13 = uVar6;
      if (0xfd < uVar6) {
        uVar13 = 0;
        *(undefined *)((int)param_1 + uVar6 + 4) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,uVar6,param_1[0x44]);
        param_1[0x41] = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      puVar17 = (undefined *)(DAT_0020cc14 + 0x20d372);
      puVar16 = (undefined *)(DAT_0020cc14 + 0x20d370);
      do {
        puVar20 = puVar16 + 1;
        uVar1 = *puVar16;
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
        param_1[0x41] = uVar6;
        *(undefined *)(param_1 + 0x42) = uVar1;
        uVar13 = uVar6;
        puVar16 = puVar20;
      } while (puVar20 != puVar17);
      uVar13 = param_1[0x49];
      FUN_0020e41c(param_1,param_2[2]);
      if ((uVar13 == param_1[0x49]) && (param_1[0x41] == uVar6)) {
        param_1[0x41] = uVar6 - 2;
      }
    }
    break;
  case 0x2c:
    puVar17 = (undefined *)(DAT_0020cc00 + 0x20d01c);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cc00 + 0x20d014);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    iVar23 = param_2[1];
    pbVar27 = *(byte **)(iVar23 + 4);
    if (*pbVar27 - 0x61 < 0x1a) {
      if (uVar6 == 0xff) {
        uVar6 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar13 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar13 = uVar6 + 1;
      }
      *(undefined *)((int)param_1 + uVar6 + 4) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      param_1[0x41] = uVar13;
      iVar23 = param_2[1];
      pbVar27 = *(byte **)(iVar23 + 4);
    }
    iVar23 = *(int *)(iVar23 + 8);
    if (iVar23 != 0) {
      iVar12 = 0;
      uVar13 = param_1[0x41];
      do {
        bVar2 = pbVar27[iVar12];
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        iVar12 = iVar12 + 1;
        *(byte *)((int)param_1 + uVar13 + 4) = bVar2;
        param_1[0x41] = uVar6;
        *(byte *)(param_1 + 0x42) = bVar2;
        uVar13 = uVar6;
      } while (iVar23 != iVar12);
    }
    break;
  case 0x2d:
    puVar17 = (undefined *)(DAT_0020cbc4 + 0x20c34d);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbc4 + 0x20c344);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bbb0;
  case 0x2e:
    puVar17 = (undefined *)(DAT_0020cbc0 + 0x20c2d9);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbc0 + 0x20c2d0);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    piVar4 = (int *)param_2[1];
    if (*piVar4 == 4) {
      FUN_0020f46c(param_1,param_2);
      return;
    }
    goto LAB_0020bb70;
  case 0x2f:
    if (*(int *)param_2[1] == 0x2e) {
      uVar13 = param_1[0x41];
      if (uVar13 == 0xff) {
        uVar13 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)(param_1 + 0x42) = 0x28;
      param_1[0x41] = uVar6;
      *(undefined *)((int)param_1 + uVar13 + 4) = 0x28;
      if (**(int **)(param_2[1] + 4) == 4) {
        FUN_0020f46c(param_1,param_2[1]);
      }
      else {
        FUN_0020e41c();
      }
      uVar13 = param_1[0x41];
      if (uVar13 == 0xff) {
        uVar13 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = 0x29;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = 0x29;
    }
    else {
      FUN_0020e43c();
    }
    FUN_0020f640(param_1,param_2[2]);
    break;
  case 0x30:
    piVar4 = (int *)param_2[2];
    if (*piVar4 == 0x31) {
      if (((*(int *)param_2[1] == 0x2c) &&
          (iVar23 = ((int *)param_2[1])[1], *(int *)(iVar23 + 8) == 1)) &&
         (**(char **)(iVar23 + 4) == '>')) {
        FUN_00208f1c(param_1,0x28);
        piVar4 = (int *)param_2[2];
      }
      FUN_0020f640(param_1,piVar4[1]);
      iVar12 = param_2[1];
      __s1 = **(char ***)(iVar12 + 4);
      iVar23 = strcmp(__s1,(char *)(DAT_0020cbb0 + 0x20bf9c));
      if (iVar23 == 0) {
        uVar13 = param_1[0x41];
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          param_1[0x49] = param_1[0x49] + 1;
          uVar13 = 0;
        }
        *(undefined *)((int)param_1 + uVar13 + 4) = 0x5b;
        param_1[0x41] = uVar13 + 1;
        *(undefined *)(param_1 + 0x42) = 0x5b;
        FUN_0020e41c(param_1,*(undefined4 *)(param_2[2] + 8));
        uVar13 = param_1[0x41];
        if (uVar13 == 0xff) {
          uVar13 = 0;
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          param_1[0x49] = param_1[0x49] + 1;
        }
        *(undefined *)((int)param_1 + uVar13 + 4) = 0x5d;
        param_1[0x41] = uVar13 + 1;
        *(undefined *)(param_1 + 0x42) = 0x5d;
      }
      else {
        iVar23 = strcmp(__s1,(char *)(DAT_0020cbb4 + 0x20bfbc));
        if (iVar23 != 0) {
          FUN_0020e43c(param_1,iVar12);
        }
        FUN_0020f640(param_1,*(undefined4 *)(param_2[2] + 8));
      }
      if (*(int *)param_2[1] != 0x2c) {
        return;
      }
      iVar23 = ((int *)param_2[1])[1];
      if (*(int *)(iVar23 + 8) != 1) {
        return;
      }
      if (**(char **)(iVar23 + 4) != '>') {
        return;
      }
      FUN_00208f1c(param_1,0x29);
      return;
    }
    goto switchD_0020ba0c_caseD_43;
  case 0x31:
    goto switchD_0020ba0c_caseD_43;
  case 0x32:
    piVar4 = (int *)param_2[2];
    if ((*piVar4 == 0x33) && (*(int *)piVar4[2] == 0x34)) {
      FUN_0020f640(param_1,piVar4[1]);
      FUN_0020e43c(param_1,param_2[1]);
      FUN_0020f640(param_1,*(undefined4 *)(*(int *)(param_2[2] + 8) + 4));
      FUN_0020b94c(param_1,DAT_0020cba8 + 0x20bec8);
      FUN_0020f640(param_1,*(undefined4 *)(*(int *)(param_2[2] + 8) + 8));
      return;
    }
    goto switchD_0020ba0c_caseD_43;
  case 0x33:
    goto switchD_0020ba0c_caseD_43;
  case 0x34:
    goto switchD_0020ba0c_caseD_43;
  case 0x35:
    goto LAB_0020c038;
  case 0x36:
LAB_0020c038:
    if (*(int *)param_2[1] == 0x23) {
      uVar13 = *(uint *)(((int *)param_2[1])[1] + 0x10);
      if (uVar13 != 0) {
        if (uVar13 < 7) {
          piVar4 = (int *)param_2[2];
          if (*piVar4 == 0) {
            if (iVar12 == 0x36) {
              FUN_00208f1c(param_1,0x2d);
              piVar4 = (int *)param_2[2];
            }
            FUN_0020e41c(param_1,piVar4);
            switch(uVar13) {
            case 2:
              FUN_00208f1c(param_1,0x75);
              return;
            case 3:
              FUN_00208f1c(param_1,0x6c);
              return;
            case 4:
              FUN_0020b94c(param_1,DAT_0020e408 + 0x20df68);
              return;
            case 5:
              FUN_0020b94c(param_1,DAT_0020e404 + 0x20df54);
              return;
            case 6:
              FUN_0020b94c(param_1,DAT_0020e400 + 0x20df40);
              return;
            default:
              return;
            }
          }
        }
        else if ((((uVar13 == 7) && (piVar4 = (int *)param_2[2], *piVar4 == 0)) && (piVar4[2] == 1))
                && (iVar12 == 0x35)) {
          if (*(char *)piVar4[1] == '0') {
            FUN_0020b94c(param_1,DAT_0020e418 + 0x20e3f8);
            return;
          }
          if (*(char *)piVar4[1] == '1') {
            FUN_0020b94c(param_1,DAT_0020e3fc + 0x20dee8);
            return;
          }
        }
      }
    }
    else {
      uVar13 = 0;
    }
    uVar6 = param_1[0x41];
    if (uVar6 == 0xff) {
      uVar6 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar25 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar25 = uVar6 + 1;
    }
    *(undefined *)((int)param_1 + uVar6 + 4) = 0x28;
    *(undefined *)(param_1 + 0x42) = 0x28;
    param_1[0x41] = uVar25;
    FUN_0020e41c(param_1,param_2[1]);
    uVar6 = param_1[0x41];
    if (uVar6 == 0xff) {
      uVar6 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar25 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar25 = uVar6 + 1;
    }
    *(undefined *)((int)param_1 + uVar6 + 4) = 0x29;
    *(undefined *)(param_1 + 0x42) = 0x29;
    iVar23 = *param_2;
    param_1[0x41] = uVar25;
    if (iVar23 == 0x36) {
      if (uVar25 == 0xff) {
        uVar25 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        param_1[0x49] = param_1[0x49] + 1;
      }
      *(undefined *)((int)param_1 + uVar25 + 4) = 0x2d;
      param_1[0x41] = uVar25 + 1;
      *(undefined *)(param_1 + 0x42) = 0x2d;
    }
    if (uVar13 == 8) {
      uVar13 = param_1[0x41];
      if (uVar13 == 0xff) {
        uVar13 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        param_1[0x49] = param_1[0x49] + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = 0x5b;
      param_1[0x41] = uVar13 + 1;
      *(undefined *)(param_1 + 0x42) = 0x5b;
      FUN_0020e41c(param_1,param_2[2]);
      uVar13 = param_1[0x41];
      if (uVar13 == 0xff) {
        uVar13 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        param_1[0x49] = param_1[0x49] + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = 0x5d;
      param_1[0x41] = uVar13 + 1;
      *(undefined *)(param_1 + 0x42) = 0x5d;
      return;
    }
LAB_0020bbb0:
    FUN_0020e41c(param_1,param_2[2]);
    break;
  case 0x37:
    puVar17 = (undefined *)(DAT_0020cbb8 + 0x20c14a);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cbb8 + 0x20c13c);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    goto LAB_0020bb68;
  case 0x38:
    FUN_0020e41c(param_1,param_2[1]);
    FUN_0020e41c(param_1,param_2[2]);
    break;
  case 0x39:
    uVar13 = param_1[0x41];
    uVar1 = *(undefined *)(param_2 + 1);
    if (uVar13 == 0xff) {
      uVar13 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar6 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar6 = uVar13 + 1;
    }
    *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
    param_1[0x41] = uVar6;
    *(undefined *)(param_1 + 0x42) = uVar1;
    break;
  case 0x3a:
    sprintf((char *)local_68,(char *)(DAT_0020cba4 + 0x20bdac),param_2[1]);
    sVar5 = strlen((char *)local_68);
    if (sVar5 != 0) {
      sVar22 = 0;
      uVar13 = param_1[0x41];
      do {
        cVar3 = *(char *)((int)local_68 + sVar22);
        if (uVar13 == 0xff) {
          *(undefined *)((int)param_1 + 0x103) = 0;
          (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
          uVar6 = 1;
          uVar13 = 0;
          param_1[0x49] = param_1[0x49] + 1;
        }
        else {
          uVar6 = uVar13 + 1;
        }
        sVar22 = sVar22 + 1;
        *(char *)((int)param_1 + uVar13 + 4) = cVar3;
        param_1[0x41] = uVar6;
        *(char *)(param_1 + 0x42) = cVar3;
        uVar13 = uVar6;
      } while (sVar22 != sVar5);
    }
    break;
  case 0x3b:
    puVar17 = (undefined *)(DAT_0020cba0 + 0x20bd3e);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cba0 + 0x20bd34);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    FUN_0020e41c(param_1,param_2[1]);
    uVar13 = param_1[0x41];
    if (uVar13 == 0xff) {
      uVar13 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar6 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar6 = uVar13 + 1;
    }
    *(undefined *)((int)param_1 + uVar13 + 4) = 0x29;
    param_1[0x41] = uVar6;
    *(undefined *)(param_1 + 0x42) = 0x29;
    break;
  case 0x3c:
    puVar16 = (undefined *)(DAT_0020cb9c + 0x20bcbb);
    puVar17 = (undefined *)(DAT_0020cb9c + 0x20bcd8);
    uVar13 = param_1[0x41];
    do {
      puVar16 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
    } while (puVar16 != puVar17);
    goto LAB_0020bb68;
  case 0x3d:
    puVar16 = (undefined *)(DAT_0020cb98 + 0x20bc43);
    puVar17 = (undefined *)(DAT_0020cb98 + 0x20bc5f);
    uVar13 = param_1[0x41];
    do {
      puVar16 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
    } while (puVar16 != puVar17);
LAB_0020bb68:
    piVar4 = (int *)param_2[1];
LAB_0020bb70:
    FUN_0020e41c(param_1,piVar4);
    break;
  case 0x3e:
    puVar17 = (undefined *)(DAT_0020cb94 + 0x20bbd8);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cb94 + 0x20bbd0);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      iVar23 = DAT_0020cc1c;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    puVar16 = (undefined *)(DAT_0020cc1c + 0x20d654);
    FUN_0020e41c(param_1,param_2[1]);
    uVar13 = param_1[0x41];
    do {
      puVar17 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar17;
    } while (puVar17 != (undefined *)(iVar23 + 0x20d656));
    sprintf((char *)local_68,(char *)(DAT_0020cc20 + 0x20d6d4));
    sVar5 = strlen((char *)local_68);
    if (sVar5 == 0) goto LAB_0020d590;
    sVar22 = 0;
    uVar13 = param_1[0x41];
    do {
      cVar3 = *(char *)((int)local_68 + sVar22);
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      sVar22 = sVar22 + 1;
      *(char *)((int)param_1 + uVar13 + 4) = cVar3;
      param_1[0x41] = uVar6;
      *(char *)(param_1 + 0x42) = cVar3;
      uVar13 = uVar6;
    } while (sVar22 != sVar5);
    goto LAB_0020d594;
  case 0x3f:
    goto switchD_0020ba0c_caseD_43;
  case 0x40:
    puVar17 = (undefined *)(DAT_0020cc10 + 0x20d2e2);
    uVar13 = param_1[0x41];
    puVar16 = (undefined *)(DAT_0020cc10 + 0x20d2d4);
    do {
      puVar20 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar20;
    } while (puVar20 != puVar17);
    sprintf((char *)local_68,(char *)(DAT_0020cc18 + 0x20d508));
    sVar5 = strlen((char *)local_68);
    if (sVar5 == 0) goto LAB_0020d590;
    sVar22 = 0;
    uVar13 = param_1[0x41];
    do {
      cVar3 = *(char *)((int)local_68 + sVar22);
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      sVar22 = sVar22 + 1;
      *(char *)((int)param_1 + uVar13 + 4) = cVar3;
      param_1[0x41] = uVar6;
      *(char *)(param_1 + 0x42) = cVar3;
      uVar13 = uVar6;
    } while (sVar22 != sVar5);
LAB_0020d594:
    if (uVar6 == 0xff) {
      uVar6 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar13 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar13 = uVar6 + 1;
    }
    *(undefined *)((int)param_1 + uVar6 + 4) = 0x7d;
    param_1[0x41] = uVar13;
    *(undefined *)(param_1 + 0x42) = 0x7d;
    break;
  case 0x41:
    piVar4 = (int *)FUN_00208f90(param_1,param_2[1]);
    if (piVar4 == (int *)0x0) {
      FUN_0020f640(param_1,param_2[1]);
      FUN_0020b94c(param_1,DAT_0020e414 + 0x20e204);
    }
    else if ((*piVar4 == 0x2b) && (piVar4[1] != 0)) {
      uVar13 = 0;
      do {
        uVar6 = uVar13;
        piVar4 = (int *)piVar4[2];
        uVar13 = uVar6 + 1;
        if ((piVar4 == (int *)0x0) || (*piVar4 != 0x2b)) break;
      } while (piVar4[1] != 0);
      iVar23 = param_2[1];
      puVar16 = (undefined *)(DAT_0020cbbc + 0x20c20c);
      uVar25 = 0;
      puVar17 = (undefined *)(DAT_0020cbbc + 0x20c20e);
      do {
        param_1[0x48] = uVar25;
        FUN_0020e41c(param_1,iVar23);
        if ((int)uVar25 < (int)uVar6) {
          uVar7 = param_1[0x41];
          puVar20 = puVar16;
          do {
            while( true ) {
              puVar18 = puVar20 + 1;
              uVar1 = *puVar20;
              puVar20 = puVar18;
              if (uVar7 != 0xff) break;
              *(undefined *)((int)param_1 + 0x103) = 0;
              (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
              param_1[0x49] = param_1[0x49] + 1;
              *(undefined *)(param_1 + 1) = uVar1;
              param_1[0x41] = 1;
              *(undefined *)(param_1 + 0x42) = uVar1;
              uVar7 = 1;
              if (puVar18 == puVar17) goto LAB_0020c2b0;
            }
            *(undefined *)((int)param_1 + uVar7 + 4) = uVar1;
            param_1[0x41] = uVar7 + 1;
            *(undefined *)(param_1 + 0x42) = uVar1;
            uVar7 = uVar7 + 1;
          } while (puVar18 != puVar17);
        }
LAB_0020c2b0:
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar13);
    }
    break;
  case 0x42:
    puVar16 = (undefined *)(DAT_0020cbac + 0x20bef0);
    FUN_0020e41c(param_1,param_2[1]);
    uVar13 = param_1[0x41];
    do {
      puVar17 = puVar16 + 1;
      uVar1 = *puVar16;
      if (uVar13 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar6 = 1;
        uVar13 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar6 = uVar13 + 1;
      }
      *(undefined *)((int)param_1 + uVar13 + 4) = uVar1;
      param_1[0x41] = uVar6;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar13 = uVar6;
      puVar16 = puVar17;
    } while (puVar17 != (undefined *)(iVar23 + 0x20bef8));
    FUN_0020e41c(param_1,param_2[2]);
    uVar13 = param_1[0x41];
    if (uVar13 == 0xff) {
      uVar13 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar6 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar6 = uVar13 + 1;
    }
    *(undefined *)((int)param_1 + uVar13 + 4) = 0x5d;
    param_1[0x41] = uVar6;
    *(undefined *)(param_1 + 0x42) = 0x5d;
  }
  return;
}


