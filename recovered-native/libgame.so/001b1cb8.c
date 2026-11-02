/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1cb8  Symbol: FUN_001b1cb8 */

void FUN_001b1cb8(int *param_1)

{
  ushort *puVar1;
  short *psVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  int local_4c;
  int local_48;
  int local_44;
  
  iVar4 = DAT_001b1f74 + 0x1b1cce;
  iVar11 = param_1[0x68];
  iVar7 = param_1[0x15];
  if (param_1[0x13] < 1) {
    return;
  }
  local_44 = 0;
  local_48 = 0;
  iVar5 = iVar4 + DAT_001b1f78;
  puVar12 = (undefined4 *)(iVar4 + DAT_001b1f7c);
  iVar13 = *(int *)(iVar7 + 0x24) * 0x100 + *(int *)(iVar7 + 0x28);
  iVar17 = DAT_001b1f94;
  local_4c = iVar11;
  if (iVar13 == DAT_001b1f80) goto LAB_001b1f60;
  do {
    if (DAT_001b1f80 < iVar13) {
      iVar17 = DAT_001b219c;
      if (iVar13 != DAT_001b1f98) {
        if (DAT_001b1f98 < iVar13) {
          iVar17 = DAT_001b2178;
          if (iVar13 != DAT_001b1fb0) {
            if (DAT_001b1fb0 < iVar13) {
              iVar17 = DAT_001b2198;
              if (iVar13 != DAT_001b1fb8) {
                if (DAT_001b1fb8 < iVar13) {
                  iVar17 = DAT_001b21cc;
                  if (iVar13 == DAT_001b1fbc) goto LAB_001b1f60;
                  iVar14 = DAT_001b1fbc + 8;
                  iVar17 = DAT_001b1fc0;
                }
                else {
                  iVar14 = DAT_001b1fb8 + -0x101;
                  iVar17 = DAT_001b21c4;
                }
                goto joined_r0x001b1e68;
              }
            }
            else {
              iVar17 = DAT_001b2184;
              if ((iVar13 != DAT_001b1fb0 + -0x1fb) &&
                 (iVar17 = DAT_001b2180, iVar13 != DAT_001b1fb0 + -0xfa)) {
                iVar14 = DAT_001b1fb0 + -0x201;
                iVar17 = DAT_001b1fb4;
                goto joined_r0x001b1e68;
              }
            }
          }
        }
        else {
          iVar17 = DAT_001b21a8;
          if (iVar13 != 0x810) {
            if (iVar13 < 0x811) {
              iVar17 = DAT_001b21b8;
              if (iVar13 != DAT_001b1fd4) {
                if (iVar13 == DAT_001b1fd4 + 4) {
                  iVar17 = param_1[0x3a];
                  if (iVar17 == 1) {
                    *(undefined4 *)(local_4c + 0x2c) = *(undefined4 *)(iVar4 + DAT_001b21d0);
                    local_44 = 1;
                    goto LAB_001b1d68;
                  }
                  iVar14 = DAT_001b21c8;
                  if (iVar17 != 0) {
                    if (iVar17 != 2) {
                      *(undefined4 *)(*param_1 + 0x14) = 0x31;
                      (**(code **)*param_1)();
                      goto LAB_001b1d68;
                    }
                    *(undefined4 *)(local_4c + 100) = *(undefined4 *)(iVar4 + DAT_001b21d4);
                    local_44 = 2;
                    goto LAB_001b1d68;
                  }
                  goto LAB_001b1ede;
                }
                iVar14 = DAT_001b1fd4 + -0xf6;
                iVar17 = DAT_001b1fd8;
                goto joined_r0x001b1e68;
              }
            }
            else {
              iVar17 = DAT_001b21a4;
              if ((iVar13 != DAT_001b1f9c) && (iVar17 = DAT_001b21a0, iVar13 != DAT_001b1f9c + 5)) {
                iVar14 = DAT_001b1f9c + -0xfc;
                iVar17 = DAT_001b1fa0;
                goto joined_r0x001b1e68;
              }
            }
          }
        }
      }
    }
    else {
      iVar17 = DAT_001b217c;
      if (iVar13 != DAT_001b1f84) {
        if (DAT_001b1f84 < iVar13) {
          iVar17 = DAT_001b2174;
          if (iVar13 != DAT_001b1fa4) {
            if (DAT_001b1fa4 < iVar13) {
              iVar17 = DAT_001b21b4;
              if ((iVar13 != DAT_001b1fa8) && (iVar17 = DAT_001b21b0, iVar13 != DAT_001b1fa8 + 6)) {
                iVar14 = DAT_001b1fa8 + -3;
                iVar17 = DAT_001b1fac;
joined_r0x001b1e68:
                if (iVar13 != iVar14) {
LAB_001b1d4a:
                  *(undefined4 *)(*param_1 + 0x14) = 7;
                  *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(iVar7 + 0x24);
                  *(undefined4 *)(*param_1 + 0x1c) = *(undefined4 *)(iVar7 + 0x28);
                  (**(code **)*param_1)(param_1);
                  goto LAB_001b1d68;
                }
              }
            }
            else {
              iVar17 = DAT_001b21c0;
              if ((iVar13 != 0x408) && (iVar17 = DAT_001b21bc, iVar13 != DAT_001b1fc4)) {
                iVar14 = DAT_001b1fc4 + -0x101;
                iVar17 = DAT_001b1fc8;
                goto joined_r0x001b1e68;
              }
            }
          }
        }
        else {
          iVar17 = DAT_001b21ac;
          if (iVar13 != DAT_001b1f88) {
            if (DAT_001b1f88 < iVar13) {
              iVar17 = DAT_001b2194;
              if (((iVar13 != DAT_001b1f8c) && (iVar17 = DAT_001b2190, iVar13 != DAT_001b1f8c + 3))
                 && (iVar17 = DAT_001b1fdc, iVar13 != 0x204)) goto LAB_001b1d4a;
            }
            else {
              iVar17 = DAT_001b218c;
              if ((iVar13 != 0x102) && (iVar17 = DAT_001b2188, iVar13 != DAT_001b1fcc)) {
                iVar14 = DAT_001b1fd0;
                if (iVar13 == DAT_001b1fcc + -0x100) {
LAB_001b1ede:
                  *(undefined4 *)(local_4c + 0x2c) = *(undefined4 *)(iVar4 + iVar14);
                  local_44 = 0;
                  uVar15 = *(uint *)(iVar7 + 0x10);
                  iVar17 = uVar15 + 0x16;
                  if (3 < uVar15) goto LAB_001b1ef8;
                  goto LAB_001b1d76;
                }
                goto LAB_001b1d4a;
              }
            }
          }
        }
      }
    }
LAB_001b1f60:
    do {
      *(undefined4 *)(local_4c + 0x2c) = *(undefined4 *)(iVar4 + iVar17);
      local_44 = 0;
LAB_001b1d68:
      uVar15 = *(uint *)(iVar7 + 0x10);
      iVar17 = uVar15 + 0x16;
      if (uVar15 < 4) {
LAB_001b1d76:
        iVar13 = param_1[iVar17];
        if (iVar13 == 0) goto LAB_001b1ef8;
        iVar17 = iVar7;
        if (local_44 == 1) goto LAB_001b1f18;
LAB_001b1d8a:
        if (local_44 != 2) {
          iVar7 = iVar11 + (uVar15 + 0x14) * 4;
          piVar8 = *(int **)(iVar7 + 4);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)(**(code **)param_1[1])(param_1,1,0x100);
            *(int **)(iVar7 + 4) = piVar8;
          }
          iVar7 = 0;
          do {
            puVar1 = (ushort *)(iVar13 + iVar7);
            iVar7 = iVar7 + 2;
            *piVar8 = (uint)*puVar1 << 3;
            piVar8 = piVar8 + 1;
          } while (iVar7 != 0x80);
          goto LAB_001b1dae;
        }
        iVar7 = iVar11 + (uVar15 + 0x22) * 4;
        puVar3 = *(undefined4 **)(iVar7 + 4);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x100);
          *(undefined4 **)(iVar7 + 4) = puVar3;
        }
        iVar7 = 0;
        do {
          uVar6 = *(undefined4 *)((int)puVar12 + iVar7);
          uVar9 = ((undefined4 *)((int)puVar12 + iVar7))[1];
          puVar18 = (undefined2 *)(iVar7 * 2 + iVar13);
          puVar16 = puVar12;
          puVar19 = puVar3;
          do {
            uVar21 = __floatunsidf(*puVar18);
            uVar21 = __muldf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),uVar6,uVar9);
            uVar10 = *puVar16;
            puVar20 = puVar16 + 1;
            puVar16 = puVar16 + 2;
            uVar21 = __muldf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),uVar10,*puVar20);
            uVar21 = __muldf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),DAT_001b2160,DAT_001b2164
                             );
            __divdf3(DAT_001b2168,DAT_001b216c,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
            uVar10 = __truncdfsf2();
            puVar18 = puVar18 + 1;
            *puVar19 = uVar10;
            puVar19 = puVar19 + 1;
          } while (puVar16 != puVar12 + 0x10);
          iVar7 = iVar7 + 8;
          puVar3 = puVar3 + 8;
        } while (iVar7 != 0x40);
        *(int *)(local_4c + 4) = iVar4 + DAT_001b2170;
      }
      else {
LAB_001b1ef8:
        *(undefined4 *)(*param_1 + 0x14) = 0x36;
        *(uint *)(*param_1 + 0x18) = uVar15;
        (**(code **)*param_1)();
        iVar13 = param_1[iVar17];
        iVar17 = iVar7;
        if (local_44 != 1) goto LAB_001b1d8a;
LAB_001b1f18:
        iVar17 = iVar11 + (uVar15 + 0x14) * 4;
        piVar8 = *(int **)(iVar17 + 4);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)(**(code **)param_1[1])(param_1,1,0x100);
          *(int **)(iVar17 + 4) = piVar8;
        }
        iVar14 = 0;
        do {
          psVar2 = (short *)(iVar5 + iVar14);
          puVar1 = (ushort *)(iVar13 + iVar14);
          iVar14 = iVar14 + 2;
          *piVar8 = (int)((uint)*puVar1 * (int)*psVar2 + 0x400) >> 0xb;
          piVar8 = piVar8 + 1;
          iVar17 = iVar7;
        } while (iVar14 != 0x80);
LAB_001b1dae:
        *(int *)(local_4c + 4) = iVar4 + DAT_001b1f90;
      }
      local_48 = local_48 + 1;
      local_4c = local_4c + 4;
      if (param_1[0x13] <= local_48) {
        return;
      }
      iVar7 = iVar17 + 0x58;
      iVar13 = *(int *)(iVar17 + 0x7c) * 0x100 + *(int *)(iVar17 + 0x80);
      iVar17 = DAT_001b1f94;
    } while (iVar13 == DAT_001b1f80);
  } while( true );
}


