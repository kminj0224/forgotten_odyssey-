/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a74b4  Symbol: jinit_c_master_control */

void jinit_c_master_control(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  int *piStack_4;
  
  iVar12 = DAT_001a77f0;
  iVar2 = DAT_001a77ec;
  iVar5 = DAT_001a77ec + -0x24;
  *(undefined4 *)(&stack0x00000000 + DAT_001a77ec) = param_2;
  piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0x24);
  param_1[0x61] = (int)piVar3;
  iVar12 = iVar12 + 0x1a74e0;
  *(int **)((int)&piStack_4 + iVar2) = piVar3;
  *piVar3 = iVar12 + DAT_001a77f4;
  piVar3[1] = iVar12 + DAT_001a77f8;
  piVar3[2] = iVar12 + DAT_001a77fc;
  piVar3[4] = 0;
  if (*(int *)(&stack0x00000000 + iVar2) == 0) {
    jpeg_calc_jpeg_dimensions(param_1);
    uVar11 = param_1[0x5e];
  }
  else {
    if (param_1[0x45] != param_1[0x46]) {
      *(undefined4 *)(*param_1 + 0x14) = 7;
      *(int *)(*param_1 + 0x18) = param_1[0x45];
      *(int *)(*param_1 + 0x1c) = param_1[0x46];
      (**(code **)*param_1)(param_1);
    }
    uVar11 = param_1[0x45];
    param_1[0x5e] = uVar11;
  }
  if (0xf < uVar11 - 1) {
    *(undefined4 *)(*param_1 + 0x14) = 7;
    *(int *)(*param_1 + 0x18) = param_1[0x5e];
    *(int *)(*param_1 + 0x1c) = param_1[0x5e];
    (**(code **)*param_1)(param_1);
    uVar11 = param_1[0x5e];
  }
  if (uVar11 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001a7b2c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar12 + DAT_001a7ce8 + uVar11 * 4) + iVar12 + DAT_001a7ce8))();
    return;
  }
  param_1[0x5f] = *(int *)(iVar12 + DAT_001a7800);
  iVar8 = param_1[0x5e];
  iVar12 = 0x3f;
  if (iVar8 < 8) {
    iVar12 = iVar8 * iVar8 + -1;
  }
  param_1[0x60] = iVar12;
  iVar12 = param_1[0x11];
  if ((((iVar12 == 0) || (param_1[0x10] == 0)) || (param_1[0x13] < 1)) || (param_1[9] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x21;
    (**(code **)*param_1)(param_1);
    iVar12 = param_1[0x11];
  }
  if ((DAT_001a7804 < iVar12) || (DAT_001a7804 < param_1[0x10])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2a;
    *(int *)(*param_1 + 0x18) = DAT_001a7804;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x12] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x12];
    (**(code **)*param_1)(param_1);
  }
  iVar12 = param_1[0x13];
  if (10 < iVar12) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    *(int *)(*param_1 + 0x18) = param_1[0x13];
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
    iVar12 = param_1[0x13];
  }
  param_1[0x43] = 1;
  param_1[0x44] = 1;
  iVar8 = param_1[0x15];
  if (0 < iVar12) {
    iVar6 = 0;
    while( true ) {
      iVar15 = *(int *)(iVar8 + 8);
      if (((3 < iVar15 - 1U) || (*(int *)(iVar8 + 0xc) < 1)) || (4 < *(int *)(iVar8 + 0xc))) {
        *(undefined4 *)(*param_1 + 0x14) = 0x13;
        (**(code **)*param_1)(param_1);
        iVar15 = *(int *)(iVar8 + 8);
        iVar12 = param_1[0x13];
      }
      if (iVar15 < param_1[0x43]) {
        iVar15 = param_1[0x43];
      }
      param_1[0x43] = iVar15;
      iVar15 = param_1[0x44];
      if (param_1[0x44] < *(int *)(iVar8 + 0xc)) {
        iVar15 = *(int *)(iVar8 + 0xc);
      }
      iVar6 = iVar6 + 1;
      param_1[0x44] = iVar15;
      if (iVar12 <= iVar6) break;
      iVar8 = iVar8 + 0x58;
    }
    iVar8 = param_1[0x15];
    if (0 < iVar12) {
      *(undefined4 *)(&stack0xffffffe4 + iVar2) = 0;
      *(undefined4 *)(&stack0xffffffec + iVar2) = 0x114;
      while( true ) {
        iVar6 = *(int *)(iVar8 + 8);
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(&stack0xffffffe4 + iVar2);
        iVar12 = param_1[0x38];
        iVar13 = *(int *)((int)param_1 + *(int *)(&stack0xffffffec + iVar2));
        iVar15 = 1;
        *(int *)(&stack0xffffffe8 + iVar2) = iVar6;
        *(int *)(&stack0xffffffe0 + iVar2) = iVar6 << 1;
        while( true ) {
          iVar4 = iVar15 * iVar13;
          iVar6 = 8;
          if (iVar12 == 0) {
            iVar6 = 4;
          }
          if ((iVar4 - iVar6 != 0 && iVar6 <= iVar4) ||
             (__aeabi_idivmod(param_1[0x43],*(int *)(&stack0xffffffe0 + iVar2) * iVar15),
             extraout_r1 != 0)) break;
          iVar15 = iVar15 << 1;
        }
        *(int *)(iVar8 + 0x24) = iVar4;
        iVar12 = param_1[0x46];
        iVar6 = 1;
        *(int *)(&stack0xffffffe0 + iVar2) = param_1[0x38];
        while( true ) {
          iVar15 = iVar6 * iVar12;
          iVar13 = 8;
          if (*(int *)(&stack0xffffffe0 + iVar2) == 0) {
            iVar13 = 4;
          }
          if ((iVar15 - iVar13 != 0 && iVar13 <= iVar15) ||
             (__aeabi_idivmod(param_1[0x44],iVar6 * *(int *)(iVar8 + 0xc) * 2), extraout_r1_00 != 0)
             ) break;
          iVar6 = iVar6 << 1;
        }
        *(int *)(iVar8 + 0x28) = iVar15;
        if (iVar15 * 2 < iVar4) {
          *(int *)(iVar8 + 0x24) = iVar15 * 2;
        }
        else if (iVar4 * 2 < iVar15) {
          *(int *)(iVar8 + 0x28) = iVar4 * 2;
        }
        uVar14 = jdiv_round_up(*(int *)(&stack0xffffffe8 + iVar2) * param_1[0x10],
                               param_1[0x5e] * param_1[0x43]);
        *(undefined4 *)(iVar8 + 0x1c) = uVar14;
        uVar14 = jdiv_round_up(param_1[0x11] * *(int *)(iVar8 + 0xc),param_1[0x5e] * param_1[0x44]);
        *(undefined4 *)(iVar8 + 0x20) = uVar14;
        uVar14 = jdiv_round_up(*(int *)(iVar8 + 8) * *(int *)(iVar8 + 0x24) * param_1[0x10],
                               param_1[0x5e] * param_1[0x43]);
        *(undefined4 *)(iVar8 + 0x2c) = uVar14;
        uVar14 = jdiv_round_up(*(int *)(iVar8 + 0xc) * *(int *)(iVar8 + 0x28) * param_1[0x11],
                               param_1[0x5e] * param_1[0x44]);
        *(undefined4 *)(iVar8 + 0x30) = uVar14;
        *(undefined4 *)(iVar8 + 0x34) = 1;
        iVar12 = *(int *)(&stack0xffffffe4 + iVar2);
        iVar6 = param_1[0x13];
        *(int *)(&stack0xffffffe4 + iVar2) = iVar12 + 1;
        if (iVar6 <= iVar12 + 1) break;
        iVar8 = iVar8 + 0x58;
      }
    }
  }
  iVar12 = jdiv_round_up(param_1[0x11],param_1[0x5e] * param_1[0x44]);
  iVar8 = param_1[0x33];
  param_1[0x47] = iVar12;
  *(int *)(&stack0xffffffe4 + iVar2) = iVar8;
  if (iVar8 == 0) {
    param_1[0x42] = *(int *)(&stack0xffffffe4 + iVar2);
    param_1[0x32] = 1;
  }
  else {
    if (param_1[0x32] < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x14;
      *(undefined4 *)(*param_1 + 0x18) = 0;
      (**(code **)*param_1)(param_1);
      *(int *)(&stack0xffffffe4 + iVar2) = param_1[0x33];
    }
    if ((*(int *)(*(int *)(&stack0xffffffe4 + iVar2) + 0x14) == 0) &&
       (*(int *)(*(int *)(&stack0xffffffe4 + iVar2) + 0x18) == 0x3f)) {
      param_1[0x42] = 0;
      iVar12 = param_1[0x13];
      if (0 < iVar12) {
        puVar7 = (undefined4 *)((int)&piStack_4 + DAT_001a7ce4 + iVar2 + -0x20);
        puVar16 = puVar7 + iVar12;
        do {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar16);
      }
    }
    else {
      param_1[0x42] = 1;
      iVar12 = param_1[0x13];
      if (0 < iVar12) {
        iVar8 = 0;
        puVar16 = (undefined4 *)(&stack0x00000004 + iVar2);
        do {
          puVar7 = puVar16 + 0x40;
          do {
            *puVar16 = 0xffffffff;
            puVar16 = puVar16 + 1;
          } while (puVar7 != puVar16);
          iVar12 = param_1[0x13];
          iVar8 = iVar8 + 1;
          puVar16 = puVar7;
        } while (iVar8 < iVar12);
      }
    }
    if (0 < param_1[0x32]) {
      iVar8 = 1;
      iVar12 = **(int **)(&stack0xffffffe4 + iVar2);
      *(int *)(&stack0xffffffe0 + iVar2) = iVar12;
      if (iVar12 - 1U < 4) goto LAB_001a77e6;
      do {
        *(undefined4 *)(*param_1 + 0x14) = 0x1b;
        *(int *)(*param_1 + 0x18) = iVar12;
        *(undefined4 *)(*param_1 + 0x1c) = 4;
        (**(code **)*param_1)(param_1);
        if (0 < iVar12) break;
LAB_001a785a:
        uVar11 = *(uint *)(*(int *)(&stack0xffffffe4 + iVar2) + 0x14);
        *(uint *)(&stack0xffffffe8 + iVar2) = uVar11;
        iVar6 = *(int *)(*(int *)(&stack0xffffffe4 + iVar2) + 0x1c);
        iVar12 = *(int *)(*(int *)(&stack0xffffffe4 + iVar2) + 0x18);
        iVar15 = *(int *)(*(int *)(&stack0xffffffe4 + iVar2) + 0x20);
        if (param_1[0x42] == 0) {
          if ((((iVar12 != 0x3f) || (*(int *)(&stack0xffffffe8 + iVar2) != 0)) || (iVar15 != 0)) ||
             (iVar6 != 0)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x12;
            *(int *)(*param_1 + 0x18) = iVar8;
            (**(code **)*param_1)(param_1);
          }
          if (0 < *(int *)(&stack0xffffffe0 + iVar2)) {
            iVar4 = *(int *)(&stack0xffffffe0 + iVar2);
            iVar13 = DAT_001a7ce4 + iVar5;
            iVar6 = *(int *)(*(int *)(&stack0xffffffe4 + iVar2) + 4) * 4;
            iVar9 = *(int *)((int)&piStack_4 + iVar6 + iVar13 + 4);
            iVar15 = 0;
            iVar12 = *(int *)(&stack0xffffffe4 + iVar2);
            while( true ) {
              if (iVar9 != 0) {
                *(undefined4 *)(*param_1 + 0x14) = 0x14;
                *(int *)(*param_1 + 0x18) = iVar8;
                (**(code **)*param_1)(param_1);
              }
              iVar15 = iVar15 + 1;
              *(undefined4 *)((int)&piStack_4 + iVar6 + iVar13 + 4) = 1;
              if (iVar4 <= iVar15) break;
              iVar6 = *(int *)(iVar12 + 8) * 4;
              iVar9 = *(int *)((int)&piStack_4 + iVar6 + iVar13 + 4);
              iVar12 = iVar12 + 4;
            }
          }
        }
        else {
          if ((((uVar11 < 0x40) && ((int)uVar11 <= iVar12)) && (-1 < iVar6)) &&
             (((iVar12 < 0x40 && (-1 < iVar15)) && ((iVar6 < 0xb && (iVar15 < 0xb)))))) {
            if (*(int *)(&stack0xffffffe8 + iVar2) != 0) goto LAB_001a79ba;
LAB_001a78ac:
            if (iVar12 != 0) {
              *(undefined4 *)(*param_1 + 0x14) = 0x12;
              *(int *)(*param_1 + 0x18) = iVar8;
              (**(code **)*param_1)(param_1);
            }
LAB_001a78b4:
            if (*(int *)(&stack0xffffffe0 + iVar2) < 1) goto LAB_001a7942;
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x12;
            *(int *)(*param_1 + 0x18) = iVar8;
            (**(code **)*param_1)(param_1);
            if (*(int *)(&stack0xffffffe8 + iVar2) == 0) goto LAB_001a78ac;
LAB_001a79ba:
            if (*(int *)(&stack0xffffffe0 + iVar2) != 1) {
              *(undefined4 *)(*param_1 + 0x14) = 0x12;
              *(int *)(*param_1 + 0x18) = iVar8;
              (**(code **)*param_1)(param_1);
              goto LAB_001a78b4;
            }
          }
          iVar13 = *(int *)(&stack0xffffffe4 + iVar2);
          *(undefined **)(&stack0xfffffff4 + iVar2) = &stack0x00000004 + iVar2;
          *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
          *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(&stack0xffffffe8 + iVar2) << 2;
          *(int *)(&stack0xffffffec + iVar2) = iVar6 + -1;
          do {
            piVar3 = (int *)(*(int *)(&stack0xfffffff4 + iVar2) + *(int *)(iVar13 + 4) * 0x100);
            if ((*(int *)(&stack0xffffffe8 + iVar2) == 0) || (-1 < *piVar3)) {
              iVar4 = *(int *)(&stack0xffffffe8 + iVar2);
            }
            else {
              *(undefined4 *)(*param_1 + 0x14) = 0x12;
              *(int *)(*param_1 + 0x18) = iVar8;
              (**(code **)*param_1)(param_1);
              iVar4 = *(int *)(&stack0xffffffe8 + iVar2);
            }
            if (*(int *)(&stack0xffffffe8 + iVar2) <= iVar12) {
              piVar3 = (int *)((int)piVar3 + *(int *)(&stack0xfffffff8 + iVar2));
LAB_001a791e:
              do {
                if (*piVar3 < 0) {
                  if (iVar6 == 0) {
                    iVar4 = iVar4 + 1;
                    *piVar3 = iVar15;
                    piVar3 = piVar3 + 1;
                    if (iVar12 < iVar4) break;
                    goto LAB_001a791e;
                  }
LAB_001a7902:
                  *(undefined4 *)(*param_1 + 0x14) = 0x12;
                  *(int *)(*param_1 + 0x18) = iVar8;
                  (**(code **)*param_1)(param_1);
                }
                else if ((iVar6 != *piVar3) || (iVar15 != *(int *)(&stack0xffffffec + iVar2)))
                goto LAB_001a7902;
                iVar4 = iVar4 + 1;
                *piVar3 = iVar15;
                piVar3 = piVar3 + 1;
              } while (iVar4 <= iVar12);
            }
            iVar4 = *(int *)(&stack0xfffffff0 + iVar2);
            *(int *)(&stack0xfffffff0 + iVar2) = iVar4 + 1;
            iVar13 = iVar13 + 4;
          } while (iVar4 + 1 < *(int *)(&stack0xffffffe0 + iVar2));
        }
LAB_001a7942:
        iVar8 = iVar8 + 1;
        if (param_1[0x32] < iVar8) {
          iVar12 = param_1[0x13];
          goto LAB_001a7a54;
        }
        *(int *)(&stack0xffffffe4 + iVar2) = *(int *)(&stack0xffffffe4 + iVar2) + 0x24;
        iVar12 = **(int **)(&stack0xffffffe4 + iVar2);
        *(int *)(&stack0xffffffe0 + iVar2) = iVar12;
      } while (3 < iVar12 - 1U);
LAB_001a77e6:
      piVar3 = *(int **)(&stack0xffffffe4 + iVar2);
      iVar12 = 0;
      do {
        while( true ) {
          iVar6 = piVar3[1];
          if ((iVar6 < 0) || (param_1[0x13] <= iVar6)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x14;
            *(int *)(*param_1 + 0x18) = iVar8;
            (**(code **)*param_1)(param_1);
          }
          if ((iVar12 == 0) || (*piVar3 < iVar6)) break;
          *(undefined4 *)(*param_1 + 0x14) = 0x14;
          iVar12 = iVar12 + 1;
          *(int *)(*param_1 + 0x18) = iVar8;
          piVar3 = piVar3 + 1;
          (**(code **)*param_1)(param_1);
          if (*(int *)(&stack0xffffffe0 + iVar2) <= iVar12) goto LAB_001a785a;
        }
        iVar12 = iVar12 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar12 < *(int *)(&stack0xffffffe0 + iVar2));
      goto LAB_001a785a;
    }
LAB_001a7a54:
    if (param_1[0x42] == 0) {
      if (0 < iVar12) {
        iVar8 = 0;
        iVar5 = DAT_001a7ce4 + iVar2;
        do {
          if (*(int *)((int)&piStack_4 + iVar8 * 4 + iVar5 + -0x20) == 0) {
            *(undefined4 *)(*param_1 + 0x14) = 0x2e;
            (**(code **)*param_1)(param_1);
            iVar12 = param_1[0x13];
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar12);
      }
    }
    else if (0 < iVar12) {
      iVar5 = 0;
      do {
        while (*(int *)(&stack0x00000004 + iVar5 * 0x100 + iVar2) < 0) {
          iVar5 = iVar5 + 1;
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)(param_1);
          iVar12 = param_1[0x13];
          if (iVar12 <= iVar5) goto LAB_001a7a8e;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar12);
    }
LAB_001a7a8e:
    if (param_1[0x5e] < 8) {
      puVar16 = (undefined4 *)param_1[0x33];
      iVar5 = 0;
      if (0 < param_1[0x32]) {
        iVar8 = 0;
        iVar12 = 0;
        puVar7 = puVar16;
        while( true ) {
          puVar1 = puVar7;
          puVar7 = puVar1 + 9;
          iVar12 = iVar12 + iVar5;
          iVar6 = param_1[0x60];
          if ((int)puVar16[iVar12 + 5] <= iVar6) {
            if (iVar6 < (int)puVar16[iVar12 + 6]) {
              puVar16[iVar12 + 6] = iVar6;
            }
            iVar5 = iVar5 + 1;
          }
          iVar8 = iVar8 + 1;
          if (param_1[0x32] <= iVar8) break;
          iVar12 = iVar5 * 8;
          if (iVar8 != iVar5) {
            puVar10 = puVar16 + iVar5 * 9;
            uVar14 = puVar1[10];
            uVar17 = puVar1[0xb];
            *puVar10 = *puVar7;
            puVar10[1] = uVar14;
            puVar10[2] = uVar17;
            uVar14 = puVar1[0xd];
            uVar17 = puVar1[0xe];
            puVar10[3] = puVar1[0xc];
            puVar10[4] = uVar14;
            puVar10[5] = uVar17;
            uVar14 = puVar1[0x10];
            uVar17 = puVar1[0x11];
            puVar10[6] = puVar1[0xf];
            puVar10[7] = uVar14;
            puVar10[8] = uVar17;
          }
        }
      }
      param_1[0x32] = iVar5;
    }
  }
  if (((param_1[0x42] != 0) || (param_1[0x5e] < 8)) && (param_1[0x35] == 0)) {
    param_1[0x36] = 1;
  }
  if (*(int *)(&stack0x00000000 + iVar2) == 0) {
    *(undefined4 *)(*(int *)((int)&piStack_4 + iVar2) + 0x14) =
         *(undefined4 *)(&stack0x00000000 + iVar2);
    iVar5 = *(int *)((int)&piStack_4 + iVar2);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    iVar12 = param_1[0x36];
  }
  else {
    if (param_1[0x36] == 0) {
      *(undefined4 *)(*(int *)((int)&piStack_4 + iVar2) + 0x14) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((int)&piStack_4 + iVar2) + 0x14) = 1;
    }
    iVar5 = *(int *)((int)&piStack_4 + iVar2);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    iVar12 = param_1[0x36];
  }
  if (iVar12 == 0) {
    *(int *)(*(int *)((int)&piStack_4 + iVar2) + 0x1c) = param_1[0x32];
  }
  else {
    *(int *)(iVar5 + 0x1c) = param_1[0x32] << 1;
  }
  return;
}


