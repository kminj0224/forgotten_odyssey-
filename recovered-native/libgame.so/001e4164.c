/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e4164  Symbol: FUN_001e4164 */

int ** FUN_001e4164(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,undefined2 *param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  undefined2 uVar7;
  void *pvVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  size_t local_54;
  size_t local_50;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar3 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar2 = FUN_001c60f4(DAT_001e4a28 + 0x1e4180);
  iVar14 = *(int *)(*(int *)(iVar3 + 0x6c) + 0xc);
  iVar12 = *(int *)(iVar14 + iVar2 * 4);
  if (iVar12 == 0) {
    piVar6 = (int *)operator_new(0x68);
    *piVar6 = DAT_001e4a34 + 0x1e48e8;
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    *(undefined *)(piVar6 + 4) = 0;
    piVar6[5] = 0;
    piVar6[6] = 0;
    piVar6[7] = 0;
    piVar6[8] = 0;
    *(undefined *)(piVar6 + 9) = 0;
    *(undefined *)((int)piVar6 + 0x25) = 0;
    *(undefined *)(piVar6 + 0x19) = 0;
    FUN_001da934(piVar6,iVar3 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar3 + 0x6c),piVar6,iVar2);
    iVar12 = *(int *)(iVar14 + iVar2 * 4);
  }
  uVar13 = *(uint *)(iVar3 + 0xc) & 0x4a;
  if (uVar13 == 0x40) {
    local_50 = 8;
  }
  else if (uVar13 == 8) {
    local_50 = 0x10;
  }
  else {
    local_50 = 10;
  }
  iVar3 = FUN_001df02c(&local_38);
  iVar2 = FUN_001df02c(&param_5);
  if (iVar3 == iVar2) {
    uVar11 = 0;
    bVar18 = false;
  }
  else {
    uVar11 = FUN_001d8014(&local_38);
    bVar18 = *(byte *)(iVar12 + 0x4a) == uVar11;
    if ((!bVar18) && (*(byte *)(iVar12 + 0x4b) != uVar11)) {
      cVar9 = *(char *)(iVar12 + 0x10);
LAB_001e46a8:
      uVar15 = 0;
      bVar1 = false;
      do {
        if (((cVar9 != '\0') && (*(byte *)(iVar12 + 0x25) == uVar11)) ||
           (*(byte *)(iVar12 + 0x24) == uVar11)) {
LAB_001e4890:
          uVar13 = 0;
          goto joined_r0x001e4788;
        }
        if (*(byte *)(iVar12 + 0x4e) == uVar11) {
          if ((bVar1) && (local_50 != 10)) goto LAB_001e46ec;
          if (uVar13 == 0) {
            bVar1 = true;
            local_50 = 8;
            uVar15 = uVar13;
          }
          else {
            if (local_50 == 8) {
              uVar15 = 0;
            }
            else {
              uVar15 = uVar15 + 1;
            }
            bVar1 = true;
          }
        }
        else {
          if (!bVar1) {
            uVar13 = 0;
            goto joined_r0x001e4788;
          }
LAB_001e46ec:
          if ((*(byte *)(iVar12 + 0x4c) != uVar11) && (*(byte *)(iVar12 + 0x4d) != uVar11))
          goto LAB_001e4890;
          if (uVar13 == 0) {
            local_50 = 0x10;
            bVar1 = false;
            uVar15 = uVar13;
          }
          else {
            if (local_50 != 0x10) {
              uVar13 = 0;
              goto LAB_001e4200;
            }
            bVar1 = false;
            uVar15 = 0;
          }
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
        iVar3 = FUN_001df02c(&local_38);
        iVar2 = FUN_001df02c(&param_5);
        if (iVar3 == iVar2) {
          cVar9 = *(char *)(iVar12 + 0x10);
          uVar13 = 1;
          goto joined_r0x001e4788;
        }
        uVar11 = FUN_001d8014(&local_38);
        if (!bVar1) goto LAB_001e4930;
        cVar9 = *(char *)(iVar12 + 0x10);
      } while( true );
    }
    cVar9 = *(char *)(iVar12 + 0x10);
    if (((cVar9 != '\0') && (*(byte *)(iVar12 + 0x25) == uVar11)) ||
       (*(byte *)(iVar12 + 0x24) == uVar11)) goto LAB_001e46a8;
    if (local_38 != (int *)0x0) {
      if ((uint)local_38[2] < (uint)local_38[3]) {
        local_38[2] = local_38[2] + 1;
      }
      else {
        (**(code **)(*local_38 + 0x28))();
      }
      local_34 = (int *)0xffffffff;
    }
    iVar3 = FUN_001df02c(&local_38);
    iVar2 = FUN_001df02c(&param_5);
    if (iVar3 != iVar2) {
      uVar11 = FUN_001d8014(&local_38);
      cVar9 = *(char *)(iVar12 + 0x10);
      goto LAB_001e46a8;
    }
  }
  cVar9 = *(char *)(iVar12 + 0x10);
  uVar15 = 0;
  uVar13 = 1;
  bVar1 = false;
joined_r0x001e4788:
  if (local_50 == 0x10) {
    local_54 = 0x16;
  }
  else {
LAB_001e4200:
    local_54 = local_50;
  }
  pvVar8 = *(void **)(DAT_001e4a2c + 0x1e4218);
  local_2c[0] = (int)pvVar8 + 0xc;
  if (cVar9 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  uVar4 = __divsi3(DAT_001e4a30,local_50);
  uVar16 = uVar13;
  uVar17 = uVar13;
  if (*(char *)(iVar12 + 100) == '\0') {
    if (uVar13 == 0) {
      while( true ) {
        if (local_54 < 0xb) {
          if ((uVar11 < 0x30) || (local_54 + 0x30 <= uVar11)) goto LAB_001e45d4;
          uVar10 = uVar11 - 0x30;
        }
        else {
          uVar10 = uVar11 - 0x30;
          if (9 < (uVar10 & 0xff)) {
            if ((uVar11 - 0x61 & 0xff) < 6) {
              uVar10 = uVar11 - 0x57;
            }
            else {
              if (5 < (uVar11 - 0x41 & 0xff)) goto LAB_001e45d4;
              uVar10 = uVar11 - 0x37;
            }
          }
        }
        if ((uVar4 & 0xffff) < uVar17) {
          uVar16 = 1;
        }
        else {
          uVar15 = uVar15 + 1;
          uVar11 = local_50 * uVar17 & 0xffff;
          if ((int)(0xffff - uVar10) < (int)uVar11) {
            uVar16 = 1;
          }
          uVar17 = uVar11 + uVar10 & 0xffff;
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
        iVar3 = FUN_001df02c(&local_38);
        iVar2 = FUN_001df02c(&param_5);
        if (iVar3 == iVar2) break;
        uVar11 = FUN_001d8014(&local_38);
      }
LAB_001e44c4:
      uVar11 = 0;
      uVar13 = 1;
    }
    else {
      uVar11 = 0;
      uVar16 = 0;
      uVar17 = 0;
    }
LAB_001e44cc:
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 == 0) {
      pvVar5 = (void *)(local_2c[0] + -0xc);
      iVar2 = local_2c[0];
    }
    else {
LAB_001e45ec:
      uVar4 = iVar3 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar4) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar4);
        iVar3 = *(int *)(local_2c[0] + -0xc);
      }
      iVar2 = local_2c[0];
      *(char *)(local_2c[0] + iVar3) = (char)uVar15;
      if ((void *)(local_2c[0] + -0xc) != pvVar8) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar4;
        *(undefined *)(local_2c[0] + uVar4) = 0;
      }
      pvVar5 = (void *)(local_2c[0] + -0xc);
      iVar3 = FUN_00204bac(*(undefined4 *)(iVar12 + 8),*(undefined4 *)(iVar12 + 0xc));
      if (iVar3 == 0) {
        *param_8 = 4;
      }
    }
  }
  else {
    if (uVar13 != 0) {
      uVar11 = 0;
      uVar16 = uVar11;
      uVar17 = uVar11;
      goto LAB_001e44cc;
    }
    if ((*(char *)(iVar12 + 0x10) != '\0') && (*(byte *)(iVar12 + 0x25) == uVar11))
    goto LAB_001e4374;
    while (*(byte *)(iVar12 + 0x24) != uVar11) {
      pvVar5 = memchr((void *)(iVar12 + 0x4e),uVar11,local_54);
      if (pvVar5 == (void *)0x0) {
        uVar11 = 0;
        goto LAB_001e44cc;
      }
      iVar3 = (int)pvVar5 - (int)(void *)(iVar12 + 0x4e);
      if (0xf < iVar3) {
        iVar3 = iVar3 + -6;
      }
      if ((uVar4 & 0xffff) < uVar17) {
        uVar16 = 1;
      }
      else {
        uVar11 = local_50 * uVar17 & 0xffff;
        if (0xffff - iVar3 < (int)uVar11) {
          uVar16 = 1;
        }
        uVar17 = uVar11 + iVar3 & 0xffff;
        uVar15 = uVar15 + 1;
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
        iVar3 = FUN_001df02c(&local_38);
        iVar2 = FUN_001df02c(&param_5);
        if (iVar3 == iVar2) goto LAB_001e44c4;
        uVar11 = FUN_001d8014(&local_38);
        if ((*(char *)(iVar12 + 0x10) == '\0') || (*(byte *)(iVar12 + 0x25) != uVar11)) break;
LAB_001e4374:
        if (uVar15 == 0) {
          uVar11 = 1;
          uVar15 = 0;
          goto LAB_001e44cc;
        }
        iVar3 = *(int *)(local_2c[0] + -0xc);
        uVar11 = iVar3 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar11) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar11);
          iVar3 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar3) = (char)uVar15;
        if ((void *)(local_2c[0] + -0xc) == pvVar8) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar11;
          *(undefined *)(local_2c[0] + uVar11) = 0;
        }
      }
    }
LAB_001e45d4:
    uVar11 = 0;
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 != 0) goto LAB_001e45ec;
    pvVar5 = (void *)(local_2c[0] + -0xc);
    iVar2 = local_2c[0];
  }
  uVar7 = (undefined2)uVar17;
  if ((((uVar15 == 0) && (!bVar1)) && (*(int *)(iVar2 + -0xc) == 0)) || (uVar11 != 0)) {
    uVar7 = 0;
  }
  else {
    if (uVar16 == 0) {
      if (bVar18) {
        uVar7 = (undefined2)(uVar17 * -0x10000 >> 0x10);
      }
      *param_9 = uVar7;
      goto LAB_001e454c;
    }
    uVar7 = 0xffff;
  }
  *param_9 = uVar7;
  *param_8 = 4;
LAB_001e454c:
  if (uVar13 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar5 != pvVar8) && (iVar3 = FUN_0021100c(iVar2 + -4,0xffffffff), iVar3 < 1)) {
    operator_delete(pvVar5);
  }
  return param_1;
LAB_001e4930:
  cVar9 = *(char *)(iVar12 + 0x10);
  uVar13 = 0;
  goto joined_r0x001e4788;
}


