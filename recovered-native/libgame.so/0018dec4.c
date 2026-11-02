/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018dec4  Symbol: FUN_0018dec4 */

undefined4 FUN_0018dec4(undefined4 param_1,int param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int **local_4c;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  int **local_20;
  int **local_1c [2];
  
  iVar3 = DAT_0018e1a4 + 0x18ded2;
  local_28 = 0;
  if (param_2 != 0) {
    local_20 = (int **)0x0;
    local_24 = (int *)0x0;
    local_2c = 0;
    iVar5 = *(int *)(param_2 + 0x20);
    if ((iVar5 != 0) && (*(int *)(param_2 + 4) == 1)) {
      bVar1 = false;
      iVar11 = 0;
      piVar12 = (int *)0xffffffff;
      iVar6 = param_2;
LAB_0018df04:
      do {
        iVar10 = iVar6;
        if (*(int *)(iVar10 + 4) == 1) {
          piVar12 = (int *)((int)piVar12 + 1);
          iVar11 = iVar10;
          if (*(int ***)(iVar10 + 0x30) == (int **)0x0) goto LAB_0018e040;
          local_4c = (int **)0x0;
          bVar2 = true;
          for (local_1c[0] = *(int ***)(iVar10 + 0x30); local_1c[0] != (int **)0x0;
              local_1c[0] = (int **)*local_1c[0]) {
            if (!bVar1) {
              iVar6 = *(int *)(param_2 + 0x14);
              if (((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != iVar6)) &&
                 (iVar6 = FUN_001899c4(&local_20), iVar6 == -1)) goto LAB_0018e16c;
              bVar1 = true;
            }
            if (((param_3 & 1) != 0) && (local_20 != (int **)0x0)) {
              for (ppiVar8 = (int **)*local_20; ppiVar8 != (int **)0x0; ppiVar8 = (int **)*ppiVar8)
              {
                if (((((int)ppiVar8[5] + 1 < 0 == SCARRY4((int)ppiVar8[5],1)) &&
                     (ppiVar8[4] == (int *)0xffffffff)) &&
                    ((local_1c[0][3] == (int *)ppiVar8[3][3] || (iVar6 = FUN_0019c30c(), iVar6 != 0)
                     ))) && ((local_1c[0][2] == (int *)ppiVar8[3][2] ||
                             (iVar6 = FUN_0019c30c(), iVar6 != 0)))) {
                  iVar6 = FUN_00189ab8(&local_24,&local_28,&local_2c,local_1c[0],ppiVar8[3]);
                  if (iVar6 == -1) goto LAB_0018e16c;
                  if (local_4c == (int **)0x0) {
                    *(int **)(iVar10 + 0x30) = *local_1c[0];
                  }
                  else {
                    *local_4c = *local_1c[0];
                  }
                  goto LAB_0018e028;
                }
              }
            }
            if (((bVar2) && (*(int ***)(iVar10 + 0x24) != (int **)0x0)) &&
               (*(int ***)(iVar10 + 0x24) == local_1c[0])) {
              bVar2 = false;
            }
            if (local_20 != (int **)0x0) {
              for (ppiVar8 = (int **)*local_20; ppiVar8 != (int **)0x0; ppiVar8 = (int **)*ppiVar8)
              {
                if ((((int)ppiVar8[5] + 1 < 0 == SCARRY4((int)ppiVar8[5],1)) &&
                    (ppiVar8[4] == (int *)0xffffffff)) &&
                   ((local_1c[0][3] == (int *)ppiVar8[3][3] || (iVar6 = FUN_0019c30c(), iVar6 != 0))
                   )) {
                  ppiVar8[4] = piVar12;
                }
              }
            }
            iVar6 = FUN_00189900(&local_20,0xffffffff,local_1c[0],local_1c[0],piVar12);
            if (iVar6 == 0) goto LAB_0018e16c;
            local_4c = local_1c[0];
LAB_0018e028:
          }
          if (bVar2) goto LAB_0018e040;
        }
        else {
          if (*(int *)(iVar10 + 4) != 2) goto LAB_0018e0f8;
LAB_0018e040:
          if (*(int *)(iVar10 + 0x24) != 0) {
            if (!bVar1) {
              iVar6 = *(int *)(param_2 + 0x14);
              if (((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != iVar6)) &&
                 (iVar6 = FUN_001899c4(&local_20), iVar6 == -1)) goto LAB_0018e16c;
              bVar1 = true;
            }
            if (local_24 != (int *)0x0) {
              piVar7 = local_24;
              for (iVar6 = 0; iVar6 < local_2c; iVar6 = iVar6 + 1) {
                iVar4 = *piVar7;
                piVar7 = piVar7 + 2;
                if (*(int *)(iVar10 + 0x24) == iVar4) {
                  *(int *)(iVar10 + 0x24) = local_24[iVar6 * 2 + 1];
                  break;
                }
              }
            }
            ppiVar8 = local_20;
            if (local_20 == (int **)0x0) {
LAB_0018e0bc:
              iVar6 = FUN_0018d848(iVar5,iVar11,*(undefined4 *)(iVar10 + 0x24),local_1c,&local_20,
                                   piVar12,*(int *)(iVar10 + 4) == 2);
              ppiVar8 = local_1c[0];
              if (iVar6 == -1) {
LAB_0018e16c:
                uVar9 = 0xffffffff;
LAB_0018e170:
                iVar5 = 0;
                if (local_24 != (int *)0x0) {
                  for (; iVar5 < local_2c; iVar5 = iVar5 + 1) {
                    FUN_00189514(local_24[iVar5 * 2]);
                  }
                  (***(code ***)(iVar3 + DAT_0018e1a8))();
                }
                if (local_20 == (int **)0x0) {
                  return uVar9;
                }
                FUN_001897a4();
                return uVar9;
              }
            }
            else {
              do {
                ppiVar8 = (int **)*ppiVar8;
                if (ppiVar8 == (int **)0x0) goto LAB_0018e0bc;
              } while ((ppiVar8[4] != (int *)0xffffffff) || (*(int **)(iVar10 + 0x24) != ppiVar8[2])
                      );
              ppiVar8 = (int **)ppiVar8[3];
            }
            *(int ***)(iVar10 + 0x24) = ppiVar8;
          }
        }
        if ((*(int *)(iVar10 + 4) != 1) ||
           (iVar6 = *(int *)(iVar10 + 0x2c), *(int *)(iVar10 + 0x2c) == 0)) {
          while ((*(int *)(iVar10 + 4) != 1 ||
                 (iVar6 = *(int *)(iVar10 + 0xc), *(int *)(iVar10 + 0xc) == 0))) {
LAB_0018e0f8:
            do {
              if (iVar10 == param_2) {
                uVar9 = 0;
                goto LAB_0018e170;
              }
              if (*(int *)(iVar10 + 4) == 1) {
                if ((local_20 != (int **)0x0) && (*local_20 != (int *)0x0)) {
                  while ((ppiVar8 = (int **)local_20[1], ppiVar8 != (int **)0x0 &&
                         ((int)piVar12 <= (int)ppiVar8[5]))) {
                    local_20[1] = ppiVar8[1];
                    if (local_20[1] == (int *)0x0) {
                      *local_20 = (int *)0x0;
                    }
                    else {
                      *local_20[1] = 0;
                    }
                    *ppiVar8 = local_20[2];
                    local_20[2] = (int *)ppiVar8;
                  }
                  for (ppiVar8 = (int **)*local_20; ppiVar8 != (int **)0x0;
                      ppiVar8 = (int **)*ppiVar8) {
                    if ((int)piVar12 <= (int)ppiVar8[4]) {
                      ppiVar8[4] = (int *)0xffffffff;
                    }
                  }
                }
                piVar12 = (int *)((int)piVar12 + -1);
              }
              iVar6 = *(int *)(iVar10 + 0x18);
              if (*(int *)(iVar10 + 0x18) != 0) goto LAB_0018df04;
              piVar7 = (int *)(iVar10 + 4);
              iVar10 = *(int *)(iVar10 + 0x14);
            } while (*piVar7 != 2);
          }
        }
      } while( true );
    }
  }
  return 0xffffffff;
}


