/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e66dc  Symbol: FUN_001e66dc */

int ** FUN_001e66dc(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  size_t local_4c;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar2 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar1 = FUN_001c60f4(DAT_001e6ff0 + 0x1e66f8);
  iVar12 = *(int *)(*(int *)(iVar2 + 0x6c) + 0xc);
  iVar11 = *(int *)(iVar12 + iVar1 * 4);
  if (iVar11 == 0) {
    piVar4 = (int *)operator_new(0x68);
    *piVar4 = DAT_001e6ff8 + 0x1e6ea4;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    *(undefined *)(piVar4 + 4) = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    *(undefined *)(piVar4 + 9) = 0;
    *(undefined *)((int)piVar4 + 0x25) = 0;
    *(undefined *)(piVar4 + 0x19) = 0;
    FUN_001da934(piVar4,iVar2 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar2 + 0x6c),piVar4,iVar1);
    iVar11 = *(int *)(iVar12 + iVar1 * 4);
  }
  uVar9 = *(uint *)(iVar2 + 0xc) & 0x4a;
  if (uVar9 == 0x40) {
    uVar13 = 8;
  }
  else if (uVar9 == 8) {
    uVar13 = 0x10;
  }
  else {
    uVar13 = 10;
  }
  iVar2 = FUN_001df02c(&local_38);
  iVar1 = FUN_001df02c(&param_5);
  if (iVar2 == iVar1) {
    uVar8 = 0;
    bVar20 = false;
LAB_001e6758:
    uVar15 = 0;
    cVar6 = *(char *)(iVar11 + 0x10);
    pvVar17 = (void *)0x0;
    pvVar16 = (void *)0x1;
  }
  else {
    uVar8 = FUN_001d8014(&local_38);
    bVar20 = *(byte *)(iVar11 + 0x4a) == uVar8;
    if ((bVar20) || (*(byte *)(iVar11 + 0x4b) == uVar8)) {
      cVar6 = *(char *)(iVar11 + 0x10);
      if (((cVar6 == '\0') || (*(byte *)(iVar11 + 0x25) != uVar8)) &&
         (*(byte *)(iVar11 + 0x24) != uVar8)) {
        if (local_38 != (int *)0x0) {
          if ((uint)local_38[2] < (uint)local_38[3]) {
            local_38[2] = local_38[2] + 1;
          }
          else {
            (**(code **)(*local_38 + 0x28))();
          }
          local_34 = (int *)0xffffffff;
        }
        iVar2 = FUN_001df02c(&local_38);
        iVar1 = FUN_001df02c(&param_5);
        if (iVar2 == iVar1) goto LAB_001e6758;
        uVar8 = FUN_001d8014(&local_38);
        cVar6 = *(char *)(iVar11 + 0x10);
      }
    }
    else {
      cVar6 = *(char *)(iVar11 + 0x10);
    }
    uVar15 = 0;
    pvVar17 = (void *)0x0;
    do {
      if (((cVar6 != '\0') && (*(byte *)(iVar11 + 0x25) == uVar8)) ||
         (*(byte *)(iVar11 + 0x24) == uVar8)) {
LAB_001e6e74:
        pvVar16 = (void *)0x0;
        break;
      }
      if (*(byte *)(iVar11 + 0x4e) == uVar8) {
        if ((pvVar17 != (void *)0x0) && (uVar13 != 10)) goto LAB_001e6d00;
        if (uVar9 == 0) {
          pvVar17 = (void *)0x1;
          uVar13 = 8;
          uVar15 = uVar9;
        }
        else {
          if (uVar13 == 8) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar15 + 1;
          }
          pvVar17 = (void *)0x1;
        }
      }
      else {
        pvVar16 = pvVar17;
        if (pvVar17 == (void *)0x0) break;
LAB_001e6d00:
        if ((*(byte *)(iVar11 + 0x4c) != uVar8) && (*(byte *)(iVar11 + 0x4d) != uVar8))
        goto LAB_001e6e74;
        if (uVar9 == 0) {
          uVar13 = 0x10;
          pvVar17 = (void *)0x0;
          uVar15 = uVar9;
        }
        else {
          if (uVar13 != 0x10) {
            pvVar16 = (void *)0x0;
            local_4c = uVar13;
            goto LAB_001e6774;
          }
          pvVar17 = (void *)0x0;
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
      iVar2 = FUN_001df02c(&local_38);
      iVar1 = FUN_001df02c(&param_5);
      if (iVar2 == iVar1) {
        cVar6 = *(char *)(iVar11 + 0x10);
        pvVar16 = (void *)0x1;
        break;
      }
      uVar8 = FUN_001d8014(&local_38);
      cVar6 = *(char *)(iVar11 + 0x10);
      pvVar16 = pvVar17;
    } while (pvVar17 != (void *)0x0);
  }
  local_4c = uVar13;
  if (uVar13 == 0x10) {
    local_4c = 0x16;
  }
LAB_001e6774:
  pvVar10 = *(void **)(DAT_001e6ff4 + 0x1e6784);
  local_2c[0] = (int)pvVar10 + 0xc;
  if (cVar6 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  uVar21 = __aeabi_uldivmod(0xffffffff,0xffffffff,uVar13,0);
  uVar9 = (uint)((ulonglong)uVar21 >> 0x20);
  pvVar14 = pvVar16;
  if (*(char *)(iVar11 + 100) == '\0') {
    if (pvVar16 == (void *)0x0) {
      local_70 = 0;
      local_6c = 0;
      while( true ) {
        if (local_4c < 0xb) {
          if ((uVar8 < 0x30) || (local_4c + 0x30 <= uVar8)) goto LAB_001e6ba0;
          uVar5 = uVar8 - 0x30;
        }
        else {
          uVar5 = uVar8 - 0x30;
          if (9 < (uVar5 & 0xff)) {
            if ((uVar8 - 0x61 & 0xff) < 6) {
              uVar5 = uVar8 - 0x57;
            }
            else {
              if (5 < (uVar8 - 0x41 & 0xff)) goto LAB_001e6ba0;
              uVar5 = uVar8 - 0x37;
            }
          }
        }
        bVar19 = local_6c <= uVar9;
        if (uVar9 == local_6c) {
          bVar19 = local_70 <= (uint)uVar21;
        }
        if (bVar19) {
          local_64 = (int)((ulonglong)uVar13 * (ulonglong)local_70 >> 0x20);
          uVar8 = uVar13 * local_6c + local_64;
          local_68 = (uint)((ulonglong)uVar13 * (ulonglong)local_70);
          uVar7 = ~((int)uVar5 >> 0x1f);
          bVar19 = uVar8 <= uVar7;
          if (uVar7 == uVar8) {
            bVar19 = local_68 <= ~uVar5;
          }
          if (!bVar19) {
            pvVar14 = (void *)0x1;
          }
          local_70 = local_68 + uVar5;
          local_6c = uVar8 + ((int)uVar5 >> 0x1f) + (uint)CARRY4(local_68,uVar5);
          uVar15 = uVar15 + 1;
        }
        else {
          pvVar14 = (void *)0x1;
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
        iVar2 = FUN_001df02c(&local_38);
        iVar1 = FUN_001df02c(&param_5);
        if (iVar2 == iVar1) break;
        uVar8 = FUN_001d8014(&local_38);
      }
LAB_001e6aac:
      pvVar3 = (void *)0x0;
      pvVar16 = (void *)0x1;
    }
    else {
      local_70 = 0;
      local_6c = 0;
      pvVar3 = (void *)0x0;
      pvVar14 = (void *)0x0;
    }
LAB_001e6ab4:
    iVar2 = *(int *)(local_2c[0] + -0xc);
    if (iVar2 == 0) {
      pvVar18 = (void *)(local_2c[0] + -0xc);
      iVar1 = local_2c[0];
    }
    else {
LAB_001e6bb8:
      uVar9 = iVar2 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar9) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar9);
        iVar2 = *(int *)(local_2c[0] + -0xc);
      }
      iVar1 = local_2c[0];
      *(char *)(local_2c[0] + iVar2) = (char)uVar15;
      if ((void *)(local_2c[0] + -0xc) != pvVar10) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar9;
        *(undefined *)(local_2c[0] + uVar9) = 0;
      }
      pvVar18 = (void *)(local_2c[0] + -0xc);
      iVar2 = FUN_00204bac(*(undefined4 *)(iVar11 + 8),*(undefined4 *)(iVar11 + 0xc));
      if (iVar2 == 0) {
        *param_8 = 4;
      }
    }
  }
  else {
    if (pvVar16 != (void *)0x0) {
      pvVar3 = (void *)0x0;
      local_70 = 0;
      local_6c = 0;
      pvVar14 = pvVar3;
      goto LAB_001e6ab4;
    }
    local_70 = 0;
    local_6c = 0;
    if ((*(char *)(iVar11 + 0x10) != '\0') && (*(byte *)(iVar11 + 0x25) == uVar8))
    goto LAB_001e6920;
    while (*(byte *)(iVar11 + 0x24) != uVar8) {
      pvVar3 = memchr((void *)(iVar11 + 0x4e),uVar8,local_4c);
      if (pvVar3 == (void *)0x0) goto LAB_001e6ab4;
      uVar8 = (int)pvVar3 - (int)(void *)(iVar11 + 0x4e);
      if (0xf < (int)uVar8) {
        uVar8 = uVar8 - 6;
      }
      bVar19 = local_6c <= uVar9;
      if (uVar9 == local_6c) {
        bVar19 = local_70 <= (uint)uVar21;
      }
      if (bVar19) {
        local_64 = (int)((ulonglong)uVar13 * (ulonglong)local_70 >> 0x20);
        uVar5 = uVar13 * local_6c + local_64;
        local_68 = (uint)((ulonglong)uVar13 * (ulonglong)local_70);
        uVar7 = ~((int)uVar8 >> 0x1f);
        bVar19 = uVar5 <= uVar7;
        if (uVar7 == uVar5) {
          bVar19 = local_68 <= ~uVar8;
        }
        if (!bVar19) {
          pvVar14 = (void *)0x1;
        }
        local_70 = local_68 + uVar8;
        local_6c = uVar5 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(local_68,uVar8);
        uVar15 = uVar15 + 1;
      }
      else {
        pvVar14 = (void *)0x1;
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
        iVar2 = FUN_001df02c(&local_38);
        iVar1 = FUN_001df02c(&param_5);
        if (iVar2 == iVar1) goto LAB_001e6aac;
        uVar8 = FUN_001d8014(&local_38);
        if ((*(char *)(iVar11 + 0x10) == '\0') || (*(byte *)(iVar11 + 0x25) != uVar8)) break;
LAB_001e6920:
        if (uVar15 == 0) {
          pvVar3 = (void *)0x1;
          uVar15 = 0;
          goto LAB_001e6ab4;
        }
        iVar2 = *(int *)(local_2c[0] + -0xc);
        uVar8 = iVar2 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar8) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar8);
          iVar2 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar2) = (char)uVar15;
        if ((void *)(local_2c[0] + -0xc) == pvVar10) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar8;
          *(undefined *)(local_2c[0] + uVar8) = 0;
        }
      }
    }
LAB_001e6ba0:
    pvVar3 = (void *)0x0;
    iVar2 = *(int *)(local_2c[0] + -0xc);
    if (iVar2 != 0) goto LAB_001e6bb8;
    pvVar18 = (void *)(local_2c[0] + -0xc);
    iVar1 = local_2c[0];
  }
  if ((((uVar15 == 0) && (pvVar17 == (void *)0x0)) && (*(int *)(iVar1 + -0xc) == 0)) ||
     (pvVar3 != (void *)0x0)) {
    uVar9 = 0;
    uVar13 = 0;
  }
  else {
    if (pvVar14 == (void *)0x0) {
      if (bVar20) {
        bVar20 = local_70 != 0;
        local_70 = -local_70;
        local_6c = -(local_6c + bVar20);
      }
      *param_9 = local_70;
      param_9[1] = local_6c;
      goto LAB_001e6b08;
    }
    uVar9 = 0xffffffff;
    uVar13 = 0xffffffff;
  }
  *param_9 = uVar9;
  param_9[1] = uVar13;
  *param_8 = 4;
LAB_001e6b08:
  if (pvVar16 != (void *)0x0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar18 != pvVar10) && (iVar2 = FUN_0021100c(iVar1 + -4,0xffffffff), iVar2 < 1)) {
    operator_delete(pvVar18);
  }
  return param_1;
}


