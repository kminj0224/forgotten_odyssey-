/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e24fc  Symbol: FUN_001e24fc */

int ** FUN_001e24fc(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,undefined4 *param_8,int *param_9)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  void *pvVar16;
  bool bVar17;
  bool bVar18;
  undefined local_4c;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  piVar2 = param_9;
  iVar4 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar3 = FUN_001c60f4(DAT_001e31b4 + 0x1e2518);
  iVar14 = *(int *)(*(int *)(iVar4 + 0x6c) + 0xc);
  iVar13 = DAT_001e31b8 + 0x1e2538;
  iVar12 = *(int *)(iVar14 + iVar3 * 4);
  if (iVar12 == 0) {
    piVar7 = (int *)operator_new(0x68);
    *piVar7 = DAT_001e31c0 + 0x1e3054;
    piVar7[1] = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    *(undefined *)(piVar7 + 4) = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[8] = 0;
    *(undefined *)(piVar7 + 9) = 0;
    *(undefined *)((int)piVar7 + 0x25) = 0;
    *(undefined *)(piVar7 + 0x19) = 0;
    FUN_001da934(piVar7,iVar4 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar4 + 0x6c),piVar7,iVar3);
    iVar12 = *(int *)(iVar14 + iVar3 * 4);
  }
  iVar4 = FUN_001df02c(&local_38);
  iVar3 = FUN_001df02c(&param_5);
  if (iVar4 == iVar3) {
    uVar11 = 0;
LAB_001e2564:
    uVar15 = 0;
    bVar17 = true;
    cVar10 = *(char *)(iVar12 + 0x10);
    pvVar16 = *(void **)(iVar13 + DAT_001e31bc);
    bVar18 = false;
  }
  else {
    uVar11 = FUN_001d8014(&local_38);
    bVar18 = *(byte *)(iVar12 + 0x4b) == uVar11;
    if ((bVar18) || (*(byte *)(iVar12 + 0x4a) == uVar11)) {
      cVar10 = *(char *)(iVar12 + 0x10);
      if (((cVar10 == '\0') || (*(byte *)(iVar12 + 0x25) != uVar11)) &&
         (*(byte *)(iVar12 + 0x24) != uVar11)) {
        if (bVar18) {
          uVar8 = 0x2b;
        }
        else {
          uVar8 = 0x2d;
        }
        FUN_001ee2f0(piVar2,uVar8);
        if (local_38 != (int *)0x0) {
          if ((uint)local_38[2] < (uint)local_38[3]) {
            local_38[2] = local_38[2] + 1;
          }
          else {
            (**(code **)(*local_38 + 0x28))();
          }
          local_34 = (int *)0xffffffff;
        }
        iVar4 = FUN_001df02c(&local_38);
        iVar3 = FUN_001df02c(&param_5);
        if (iVar4 == iVar3) goto LAB_001e2564;
        uVar11 = FUN_001d8014(&local_38);
        cVar10 = *(char *)(iVar12 + 0x10);
      }
    }
    else {
      cVar10 = *(char *)(iVar12 + 0x10);
    }
    uVar15 = 0;
    pvVar16 = *(void **)(iVar13 + DAT_001e31bc);
    bVar18 = false;
    while( true ) {
      if ((cVar10 != '\0') && (*(byte *)(iVar12 + 0x25) == uVar11)) {
        bVar17 = false;
        goto LAB_001e2580;
      }
      if (*(byte *)(iVar12 + 0x24) == uVar11) {
        bVar17 = false;
        goto LAB_001e2580;
      }
      if (*(byte *)(iVar12 + 0x4e) != uVar11) {
        bVar17 = false;
        goto LAB_001e2580;
      }
      if (!bVar18) {
        iVar3 = *piVar2;
        iVar4 = *(int *)(iVar3 + -0xc);
        uVar6 = iVar4 + 1;
        if ((*(uint *)(iVar3 + -8) < uVar6) || (0 < *(int *)(iVar3 + -4))) {
          FUN_001ee274(piVar2,uVar6);
          iVar3 = *piVar2;
          iVar4 = *(int *)(iVar3 + -0xc);
        }
        *(undefined *)(iVar3 + iVar4) = 0x30;
        iVar4 = *piVar2;
        if ((void *)(iVar4 + -0xc) != pvVar16) {
          *(undefined4 *)(iVar4 + -4) = 0;
          *(uint *)(iVar4 + -0xc) = uVar6;
          *(undefined *)(iVar4 + uVar6) = 0;
        }
        bVar18 = true;
      }
      uVar15 = uVar15 + 1;
      if (local_38 != (int *)0x0) {
        if ((uint)local_38[2] < (uint)local_38[3]) {
          local_38[2] = local_38[2] + 1;
        }
        else {
          (**(code **)(*local_38 + 0x28))();
        }
        local_34 = (int *)0xffffffff;
      }
      iVar4 = FUN_001df02c(&local_38);
      iVar3 = FUN_001df02c(&param_5);
      if (iVar4 == iVar3) break;
      uVar11 = FUN_001d8014(&local_38);
      cVar10 = *(char *)(iVar12 + 0x10);
    }
    cVar10 = *(char *)(iVar12 + 0x10);
    bVar17 = true;
  }
LAB_001e2580:
  local_2c[0] = (int)pvVar16 + 0xc;
  if (cVar10 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  bVar1 = bVar17;
  if (*(char *)(iVar12 + 100) == '\0') {
    if (!bVar17) {
LAB_001e2804:
      if (uVar11 < 0x30) goto LAB_001e28c8;
      do {
        if (0x39 < uVar11) goto LAB_001e28c8;
        iVar3 = *piVar2;
        iVar4 = *(int *)(iVar3 + -0xc);
        uVar6 = iVar4 + 1;
        if ((*(uint *)(iVar3 + -8) < uVar6) || (0 < *(int *)(iVar3 + -4))) {
          FUN_001ee274(piVar2,uVar6);
          iVar3 = *piVar2;
          iVar4 = *(int *)(iVar3 + -0xc);
        }
        *(char *)(iVar3 + iVar4) = (char)uVar11;
        iVar4 = *piVar2;
        if ((void *)(iVar4 + -0xc) == pvVar16) {
          bVar18 = true;
        }
        else {
          *(undefined4 *)(iVar4 + -4) = 0;
          *(uint *)(iVar4 + -0xc) = uVar6;
          bVar18 = true;
          *(undefined *)(iVar4 + uVar6) = 0;
        }
        while( true ) {
          if (local_38 != (int *)0x0) {
            if ((uint)local_38[2] < (uint)local_38[3]) {
              local_38[2] = local_38[2] + 1;
            }
            else {
              (**(code **)(*local_38 + 0x28))();
            }
            local_34 = (int *)0xffffffff;
          }
          iVar4 = FUN_001df02c(&local_38);
          iVar3 = FUN_001df02c(&param_5);
          if (iVar4 == iVar3) goto LAB_001e2784;
          uVar11 = FUN_001d8014(&local_38);
          if (0x2f < uVar11) break;
LAB_001e28c8:
          if (((*(byte *)(iVar12 + 0x24) != uVar11) || (bVar1)) || (bVar17)) {
            if (((*(byte *)(iVar12 + 0x5c) != uVar11) && (*(byte *)(iVar12 + 0x62) != uVar11)) ||
               ((bVar17 || (!bVar18)))) goto LAB_001e2784;
            iVar3 = *piVar2;
            iVar4 = *(int *)(iVar3 + -0xc);
            uVar11 = iVar4 + 1;
            if ((*(uint *)(iVar3 + -8) < uVar11) || (0 < *(int *)(iVar3 + -4))) {
              FUN_001ee274(piVar2,uVar11);
              iVar3 = *piVar2;
              iVar4 = *(int *)(iVar3 + -0xc);
            }
            *(undefined *)(iVar3 + iVar4) = 0x65;
            iVar4 = *piVar2;
            if ((void *)(iVar4 + -0xc) != pvVar16) {
              *(undefined4 *)(iVar4 + -4) = 0;
              *(uint *)(iVar4 + -0xc) = uVar11;
              *(undefined *)(iVar4 + uVar11) = 0;
            }
            if (local_38 != (int *)0x0) {
              if ((uint)local_38[2] < (uint)local_38[3]) {
                local_38[2] = local_38[2] + 1;
              }
              else {
                (**(code **)(*local_38 + 0x28))();
              }
              local_34 = (int *)0xffffffff;
            }
            iVar4 = FUN_001df02c(&local_38);
            iVar3 = FUN_001df02c(&param_5);
            if (iVar4 == iVar3) {
              bVar17 = true;
              goto LAB_001e2784;
            }
            uVar11 = FUN_001d8014(&local_38);
            if (*(byte *)(iVar12 + 0x4b) == uVar11) {
              local_4c = 0x2b;
            }
            else {
              if (*(byte *)(iVar12 + 0x4a) != uVar11) {
                bVar17 = true;
                goto LAB_001e2804;
              }
              local_4c = 0x2d;
            }
            iVar3 = *piVar2;
            iVar4 = *(int *)(iVar3 + -0xc);
            uVar11 = iVar4 + 1;
            if ((*(uint *)(iVar3 + -8) < uVar11) || (0 < *(int *)(iVar3 + -4))) {
              FUN_001ee274(piVar2,uVar11);
              iVar3 = *piVar2;
              iVar4 = *(int *)(iVar3 + -0xc);
            }
            *(undefined *)(iVar3 + iVar4) = local_4c;
            iVar4 = *piVar2;
            if ((void *)(iVar4 + -0xc) == pvVar16) {
              bVar17 = true;
            }
            else {
              *(undefined4 *)(iVar4 + -4) = 0;
              *(uint *)(iVar4 + -0xc) = uVar11;
              bVar17 = true;
              *(undefined *)(iVar4 + uVar11) = 0;
            }
          }
          else {
            FUN_001ee2f0(piVar2,0x2e);
            bVar1 = true;
          }
        }
      } while( true );
    }
    bVar17 = false;
    bVar1 = false;
  }
  else {
    if (!bVar17) {
      cVar10 = *(char *)(iVar12 + 0x10);
LAB_001e25c8:
      if ((cVar10 != '\0') && (*(byte *)(iVar12 + 0x25) == uVar11)) goto LAB_001e26f0;
LAB_001e25dc:
      if (*(byte *)(iVar12 + 0x24) == uVar11) {
        if ((bVar1) || (bVar17)) goto LAB_001e2784;
        iVar4 = *(int *)(local_2c[0] + -0xc);
        if (iVar4 != 0) {
          uVar11 = iVar4 + 1;
          if ((*(uint *)(local_2c[0] + -8) < uVar11) || (0 < *(int *)(local_2c[0] + -4))) {
            FUN_001ee274(local_2c,uVar11);
            iVar4 = *(int *)(local_2c[0] + -0xc);
          }
          *(char *)(local_2c[0] + iVar4) = (char)uVar15;
          if ((void *)(local_2c[0] + -0xc) != pvVar16) {
            *(undefined4 *)(local_2c[0] + -4) = 0;
            *(uint *)(local_2c[0] + -0xc) = uVar11;
            *(undefined *)(local_2c[0] + uVar11) = 0;
          }
        }
        iVar3 = *piVar2;
        iVar4 = *(int *)(iVar3 + -0xc);
        uVar11 = iVar4 + 1;
        if ((*(uint *)(iVar3 + -8) < uVar11) || (0 < *(int *)(iVar3 + -4))) {
          FUN_001ee274(piVar2,uVar11);
          iVar3 = *piVar2;
          iVar4 = *(int *)(iVar3 + -0xc);
        }
        *(undefined *)(iVar3 + iVar4) = 0x2e;
        iVar4 = *piVar2;
        if ((void *)(iVar4 + -0xc) == pvVar16) {
          bVar1 = true;
        }
        else {
          *(undefined4 *)(iVar4 + -4) = 0;
          *(uint *)(iVar4 + -0xc) = uVar11;
          bVar1 = true;
          *(undefined *)(iVar4 + uVar11) = 0;
        }
      }
      else {
        pvVar5 = memchr((void *)(iVar12 + 0x4e),uVar11,10);
        if (pvVar5 == (void *)0x0) {
          if ((((*(byte *)(iVar12 + 0x5c) != uVar11) && (*(byte *)(iVar12 + 0x62) != uVar11)) ||
              (bVar17)) || (!bVar18)) goto LAB_001e2784;
          iVar4 = *(int *)(local_2c[0] + -0xc);
          if ((iVar4 != 0) && (!bVar1)) {
            uVar11 = iVar4 + 1;
            if ((*(uint *)(local_2c[0] + -8) < uVar11) || (0 < *(int *)(local_2c[0] + -4))) {
              FUN_001ee274(local_2c,uVar11);
              iVar4 = *(int *)(local_2c[0] + -0xc);
            }
            *(char *)(local_2c[0] + iVar4) = (char)uVar15;
            if ((void *)(local_2c[0] + -0xc) != pvVar16) {
              *(undefined4 *)(local_2c[0] + -4) = 0;
              *(uint *)(local_2c[0] + -0xc) = uVar11;
              *(undefined *)(local_2c[0] + uVar11) = 0;
            }
          }
          iVar3 = *piVar2;
          iVar4 = *(int *)(iVar3 + -0xc);
          uVar11 = iVar4 + 1;
          if ((*(uint *)(iVar3 + -8) < uVar11) || (0 < *(int *)(iVar3 + -4))) {
            FUN_001ee274(piVar2,uVar11);
            iVar3 = *piVar2;
            iVar4 = *(int *)(iVar3 + -0xc);
          }
          *(undefined *)(iVar3 + iVar4) = 0x65;
          iVar4 = *piVar2;
          if ((void *)(iVar4 + -0xc) != pvVar16) {
            *(undefined4 *)(iVar4 + -4) = 0;
            *(uint *)(iVar4 + -0xc) = uVar11;
            *(undefined *)(iVar4 + uVar11) = 0;
          }
          if (local_38 != (int *)0x0) {
            if ((uint)local_38[2] < (uint)local_38[3]) {
              local_38[2] = local_38[2] + 1;
            }
            else {
              (**(code **)(*local_38 + 0x28))();
            }
            local_34 = (int *)0xffffffff;
          }
          iVar4 = FUN_001df02c(&local_38);
          iVar3 = FUN_001df02c(&param_5);
          if (iVar4 == iVar3) {
            bVar17 = true;
            goto LAB_001e2784;
          }
          uVar11 = FUN_001d8014(&local_38);
          bVar17 = *(byte *)(iVar12 + 0x4b) != uVar11;
          if ((bVar17) && (*(byte *)(iVar12 + 0x4a) != uVar11)) {
            cVar10 = *(char *)(iVar12 + 0x10);
            bVar17 = true;
            goto LAB_001e25c8;
          }
          cVar10 = *(char *)(iVar12 + 0x10);
          if ((cVar10 != '\0') && (*(byte *)(iVar12 + 0x25) == uVar11)) {
            bVar17 = true;
            goto LAB_001e25c8;
          }
          if (*(byte *)(iVar12 + 0x24) == uVar11) goto LAB_001e2ee8;
          iVar4 = *piVar2;
          if (bVar17) {
            uVar9 = 0x2d;
          }
          else {
            uVar9 = 0x2b;
          }
          iVar3 = *(int *)(iVar4 + -0xc);
          uVar11 = iVar3 + 1;
          if ((*(uint *)(iVar4 + -8) < uVar11) || (0 < *(int *)(iVar4 + -4))) {
            FUN_001ee274(piVar2,uVar11);
            iVar4 = *piVar2;
            iVar3 = *(int *)(iVar4 + -0xc);
          }
          *(undefined *)(iVar4 + iVar3) = uVar9;
          iVar4 = *piVar2;
          if ((void *)(iVar4 + -0xc) != pvVar16) {
            *(undefined4 *)(iVar4 + -4) = 0;
            *(uint *)(iVar4 + -0xc) = uVar11;
            *(undefined *)(iVar4 + uVar11) = 0;
          }
          bVar17 = true;
        }
        else {
          iVar3 = *piVar2;
          iVar4 = *(int *)(iVar3 + -0xc);
          uVar11 = iVar4 + 1;
          if ((*(uint *)(iVar3 + -8) < uVar11) || (0 < *(int *)(iVar3 + -4))) {
            FUN_001ee274(piVar2,uVar11);
            iVar3 = *piVar2;
            iVar4 = *(int *)(iVar3 + -0xc);
          }
          uVar15 = uVar15 + 1;
          *(char *)(iVar3 + iVar4) = ((char)pvVar5 - (char)(void *)(iVar12 + 0x4e)) + '0';
          iVar4 = *piVar2;
          bVar18 = true;
          if ((void *)(iVar4 + -0xc) != pvVar16) {
            *(undefined4 *)(iVar4 + -4) = 0;
            *(uint *)(iVar4 + -0xc) = uVar11;
            *(undefined *)(iVar4 + uVar11) = 0;
          }
        }
      }
      while( true ) {
        if (local_38 != (int *)0x0) {
          if ((uint)local_38[2] < (uint)local_38[3]) {
            local_38[2] = local_38[2] + 1;
          }
          else {
            (**(code **)(*local_38 + 0x28))();
          }
          local_34 = (int *)0xffffffff;
        }
        iVar4 = FUN_001df02c(&local_38);
        iVar3 = FUN_001df02c(&param_5);
        if (iVar4 == iVar3) goto LAB_001e2784;
        uVar11 = FUN_001d8014(&local_38);
        if ((*(char *)(iVar12 + 0x10) == '\0') || (*(byte *)(iVar12 + 0x25) != uVar11)) break;
LAB_001e26f0:
        if ((bVar1) || (bVar17)) goto LAB_001e2784;
        if (uVar15 == 0) {
          FUN_001ed6f8(piVar2,0,*(undefined4 *)(*piVar2 + -0xc),0);
          goto LAB_001e2784;
        }
        iVar4 = *(int *)(local_2c[0] + -0xc);
        uVar11 = iVar4 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar11) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar11);
          iVar4 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar4) = (char)uVar15;
        if ((void *)(local_2c[0] + -0xc) == pvVar16) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar11;
          *(undefined *)(local_2c[0] + uVar11) = 0;
        }
      }
      goto LAB_001e25dc;
    }
    bVar17 = false;
    bVar1 = false;
  }
LAB_001e2784:
  iVar4 = local_2c[0];
  if (*(int *)(local_2c[0] + -0xc) != 0) {
    if ((!bVar1) && (!bVar17)) {
      FUN_001ee2f0(local_2c,uVar15 & 0xff);
    }
    iVar4 = local_2c[0];
    iVar3 = FUN_00204bac(*(undefined4 *)(iVar12 + 8),*(undefined4 *)(iVar12 + 0xc));
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if (((void *)(iVar4 + -0xc) != pvVar16) &&
     (iVar3 = FUN_0021100c(iVar4 + -4,0xffffffff), iVar3 < 1)) {
    operator_delete((void *)(iVar4 + -0xc));
  }
  return param_1;
LAB_001e2ee8:
  bVar17 = true;
  goto LAB_001e25c8;
}


