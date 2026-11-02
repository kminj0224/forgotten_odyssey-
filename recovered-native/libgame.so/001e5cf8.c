/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e5cf8  Symbol: FUN_001e5cf8 */

int ** FUN_001e5cf8(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  void *pvVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  size_t local_58;
  uint local_50;
  int iStack_4c;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar3 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar2 = FUN_001c60f4(DAT_001e6678 + 0x1e5d14);
  iVar14 = *(int *)(*(int *)(iVar3 + 0x6c) + 0xc);
  iVar13 = *(int *)(iVar14 + iVar2 * 4);
  if (iVar13 == 0) {
    piVar5 = (int *)operator_new(0x68);
    *piVar5 = DAT_001e6680 + 0x1e6518;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    *(undefined *)(piVar5 + 4) = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    piVar5[8] = 0;
    *(undefined *)(piVar5 + 9) = 0;
    *(undefined *)((int)piVar5 + 0x25) = 0;
    *(undefined *)(piVar5 + 0x19) = 0;
    FUN_001da934(piVar5,iVar3 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar3 + 0x6c),piVar5,iVar2);
    iVar13 = *(int *)(iVar14 + iVar2 * 4);
  }
  uVar11 = *(uint *)(iVar3 + 0xc) & 0x4a;
  if (uVar11 == 0x40) {
    uVar16 = 8;
  }
  else if (uVar11 == 8) {
    uVar16 = 0x10;
  }
  else {
    uVar16 = 10;
  }
  iVar3 = FUN_001df02c(&local_38);
  iVar2 = FUN_001df02c(&param_5);
  if (iVar3 == iVar2) {
    uVar10 = 0;
    bVar20 = false;
  }
  else {
    uVar10 = FUN_001d8014(&local_38);
    bVar20 = *(byte *)(iVar13 + 0x4a) == uVar10;
    if ((!bVar20) && (*(byte *)(iVar13 + 0x4b) != uVar10)) {
      cVar7 = *(char *)(iVar13 + 0x10);
LAB_001e62f4:
      uVar15 = 0;
      bVar1 = false;
      do {
        if (((cVar7 != '\0') && (*(byte *)(iVar13 + 0x25) == uVar10)) ||
           (*(byte *)(iVar13 + 0x24) == uVar10)) {
LAB_001e64d4:
          pvVar18 = (void *)0x0;
          goto LAB_001e5d84;
        }
        if (*(byte *)(iVar13 + 0x4e) == uVar10) {
          if ((bVar1) && (uVar16 != 10)) goto LAB_001e6334;
          if (uVar11 == 0) {
            bVar1 = true;
            uVar16 = 8;
            uVar15 = uVar11;
          }
          else {
            if (uVar16 == 8) {
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
            pvVar18 = (void *)0x0;
            goto LAB_001e5d84;
          }
LAB_001e6334:
          if ((*(byte *)(iVar13 + 0x4c) != uVar10) && (*(byte *)(iVar13 + 0x4d) != uVar10))
          goto LAB_001e64d4;
          if (uVar11 == 0) {
            uVar16 = 0x10;
            bVar1 = false;
            uVar15 = uVar11;
          }
          else {
            if (uVar16 != 0x10) {
              pvVar18 = (void *)0x0;
              local_58 = uVar16;
              goto LAB_001e5d90;
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
          cVar7 = *(char *)(iVar13 + 0x10);
          pvVar18 = (void *)0x1;
          goto LAB_001e5d84;
        }
        uVar10 = FUN_001d8014(&local_38);
        if (!bVar1) goto LAB_001e6560;
        cVar7 = *(char *)(iVar13 + 0x10);
      } while( true );
    }
    cVar7 = *(char *)(iVar13 + 0x10);
    if (((cVar7 != '\0') && (*(byte *)(iVar13 + 0x25) == uVar10)) ||
       (*(byte *)(iVar13 + 0x24) == uVar10)) goto LAB_001e62f4;
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
      uVar10 = FUN_001d8014(&local_38);
      cVar7 = *(char *)(iVar13 + 0x10);
      goto LAB_001e62f4;
    }
  }
  cVar7 = *(char *)(iVar13 + 0x10);
  uVar15 = 0;
  pvVar18 = (void *)0x1;
  bVar1 = false;
LAB_001e5d84:
  local_58 = uVar16;
  if (uVar16 == 0x10) {
    local_58 = 0x16;
  }
LAB_001e5d90:
  pvVar12 = *(void **)(DAT_001e667c + 0x1e5da0);
  local_2c[0] = (int)pvVar12 + 0xc;
  if (cVar7 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  if (bVar20) {
    local_50 = 0;
    iStack_4c = -0x80000000;
  }
  else {
    local_50 = 0xffffffff;
    iStack_4c = 0x7fffffff;
  }
  uVar21 = __aeabi_uldivmod(local_50,iStack_4c,uVar16,0);
  uVar11 = (uint)((ulonglong)uVar21 >> 0x20);
  pvVar17 = pvVar18;
  if (*(char *)(iVar13 + 100) == '\0') {
    if (pvVar18 == (void *)0x0) {
      local_78 = 0;
      local_74 = 0;
      while( true ) {
        if (local_58 < 0xb) {
          if ((uVar10 < 0x30) || (local_58 + 0x30 <= uVar10)) goto LAB_001e61dc;
          uVar6 = uVar10 - 0x30;
        }
        else {
          uVar6 = uVar10 - 0x30;
          if (9 < (uVar6 & 0xff)) {
            if ((uVar10 - 0x61 & 0xff) < 6) {
              uVar6 = uVar10 - 0x57;
            }
            else {
              if (5 < (uVar10 - 0x41 & 0xff)) goto LAB_001e61dc;
              uVar6 = uVar10 - 0x37;
            }
          }
        }
        bVar19 = local_74 <= uVar11;
        if (uVar11 == local_74) {
          bVar19 = local_78 <= (uint)uVar21;
        }
        if (bVar19) {
          local_6c = (int)((ulonglong)uVar16 * (ulonglong)local_78 >> 0x20);
          uVar10 = uVar16 * local_74 + local_6c;
          local_70 = (uint)((ulonglong)uVar16 * (ulonglong)local_78);
          uVar8 = iStack_4c - (((int)uVar6 >> 0x1f) + (uint)(local_50 < uVar6));
          bVar19 = uVar10 <= uVar8;
          if (uVar8 == uVar10) {
            bVar19 = local_70 <= local_50 - uVar6;
          }
          if (!bVar19) {
            pvVar17 = (void *)0x1;
          }
          local_78 = local_70 + uVar6;
          local_74 = uVar10 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(local_70,uVar6);
          uVar15 = uVar15 + 1;
        }
        else {
          pvVar17 = (void *)0x1;
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
        uVar10 = FUN_001d8014(&local_38);
      }
LAB_001e60e4:
      pvVar4 = (void *)0x0;
      pvVar18 = (void *)0x1;
    }
    else {
      local_78 = 0;
      local_74 = 0;
      pvVar4 = (void *)0x0;
      pvVar17 = (void *)0x0;
    }
LAB_001e60ec:
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 == 0) {
      pvVar9 = (void *)(local_2c[0] + -0xc);
      iVar2 = local_2c[0];
      goto LAB_001e6100;
    }
  }
  else {
    if (pvVar18 != (void *)0x0) {
      pvVar4 = (void *)0x0;
      local_78 = 0;
      local_74 = 0;
      pvVar17 = pvVar4;
      goto LAB_001e60ec;
    }
    local_78 = 0;
    local_74 = 0;
    if ((*(char *)(iVar13 + 0x10) != '\0') && (*(byte *)(iVar13 + 0x25) == uVar10))
    goto LAB_001e5f4c;
    while (*(byte *)(iVar13 + 0x24) != uVar10) {
      pvVar4 = memchr((void *)(iVar13 + 0x4e),uVar10,local_58);
      if (pvVar4 == (void *)0x0) goto LAB_001e60ec;
      uVar10 = (int)pvVar4 - (int)(void *)(iVar13 + 0x4e);
      if (0xf < (int)uVar10) {
        uVar10 = uVar10 - 6;
      }
      bVar19 = local_74 <= uVar11;
      if (uVar11 == local_74) {
        bVar19 = local_78 <= (uint)uVar21;
      }
      if (bVar19) {
        local_6c = (int)((ulonglong)uVar16 * (ulonglong)local_78 >> 0x20);
        uVar6 = uVar16 * local_74 + local_6c;
        local_70 = (uint)((ulonglong)uVar16 * (ulonglong)local_78);
        uVar8 = iStack_4c - (((int)uVar10 >> 0x1f) + (uint)(local_50 < uVar10));
        bVar19 = uVar6 <= uVar8;
        if (uVar8 == uVar6) {
          bVar19 = local_70 <= local_50 - uVar10;
        }
        if (!bVar19) {
          pvVar17 = (void *)0x1;
        }
        local_78 = local_70 + uVar10;
        local_74 = uVar6 + ((int)uVar10 >> 0x1f) + (uint)CARRY4(local_70,uVar10);
        uVar15 = uVar15 + 1;
      }
      else {
        pvVar17 = (void *)0x1;
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
        if (iVar3 == iVar2) goto LAB_001e60e4;
        uVar10 = FUN_001d8014(&local_38);
        if ((*(char *)(iVar13 + 0x10) == '\0') || (*(byte *)(iVar13 + 0x25) != uVar10)) break;
LAB_001e5f4c:
        if (uVar15 == 0) {
          pvVar4 = (void *)0x1;
          uVar15 = 0;
          goto LAB_001e60ec;
        }
        iVar3 = *(int *)(local_2c[0] + -0xc);
        uVar10 = iVar3 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar10) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar10);
          iVar3 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar3) = (char)uVar15;
        if ((void *)(local_2c[0] + -0xc) == pvVar12) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar10;
          *(undefined *)(local_2c[0] + uVar10) = 0;
        }
      }
    }
LAB_001e61dc:
    pvVar4 = (void *)0x0;
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 == 0) {
      pvVar9 = (void *)(local_2c[0] + -0xc);
      iVar2 = local_2c[0];
      goto LAB_001e6100;
    }
  }
  uVar11 = iVar3 + 1;
  if ((*(uint *)(local_2c[0] + -8) < uVar11) || (0 < *(int *)(local_2c[0] + -4))) {
    FUN_001ee274(local_2c,uVar11);
    iVar3 = *(int *)(local_2c[0] + -0xc);
  }
  iVar2 = local_2c[0];
  *(char *)(local_2c[0] + iVar3) = (char)uVar15;
  if ((void *)(local_2c[0] + -0xc) != pvVar12) {
    *(undefined4 *)(local_2c[0] + -4) = 0;
    *(uint *)(local_2c[0] + -0xc) = uVar11;
    *(undefined *)(local_2c[0] + uVar11) = 0;
  }
  pvVar9 = (void *)(local_2c[0] + -0xc);
  iVar3 = FUN_00204bac(*(undefined4 *)(iVar13 + 8),*(undefined4 *)(iVar13 + 0xc));
  if (iVar3 == 0) {
    *param_8 = 4;
  }
LAB_001e6100:
  if ((((uVar15 == 0) && (!bVar1)) && (*(int *)(iVar2 + -0xc) == 0)) || (pvVar4 != (void *)0x0)) {
    *param_9 = 0;
    param_9[1] = 0;
    *param_8 = 4;
  }
  else if (pvVar17 == (void *)0x0) {
    if (bVar20) {
      bVar20 = local_78 != 0;
      local_78 = -local_78;
      local_74 = -(local_74 + bVar20);
    }
    *param_9 = local_78;
    param_9[1] = local_74;
  }
  else {
    if (bVar20) {
      uVar11 = 0;
      uVar16 = 0x80000000;
    }
    else {
      uVar11 = 0xffffffff;
      uVar16 = 0x7fffffff;
    }
    *param_9 = uVar11;
    param_9[1] = uVar16;
    *param_8 = 4;
  }
  if (pvVar18 != (void *)0x0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar9 != pvVar12) && (iVar3 = FUN_0021100c(iVar2 + -4,0xffffffff), iVar3 < 1)) {
    operator_delete(pvVar9);
  }
  return param_1;
LAB_001e6560:
  cVar7 = *(char *)(iVar13 + 0x10);
  pvVar18 = (void *)0x0;
  goto LAB_001e5d84;
}


