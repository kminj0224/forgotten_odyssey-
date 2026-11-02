/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fde40  Symbol: FUN_001fde40 */

int ** FUN_001fde40(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  int *piVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  wchar_t __c;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
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
  
  iVar5 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar4 = FUN_001c60f4(DAT_001fe75c + 0x1fde5c);
  iVar15 = *(int *)(*(int *)(iVar5 + 0x6c) + 0xc);
  iVar13 = *(int *)(iVar15 + iVar4 * 4);
  if (iVar13 == 0) {
    piVar7 = (int *)operator_new(0x128);
    *piVar7 = DAT_001fe764 + 0x1fe61c;
    piVar7[1] = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    *(undefined *)(piVar7 + 4) = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[10] = 0;
    *(undefined *)(piVar7 + 0x49) = 0;
    FUN_001f20dc(piVar7,iVar5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar5 + 0x6c),piVar7,iVar4);
    iVar13 = *(int *)(iVar15 + iVar4 * 4);
  }
  uVar14 = *(uint *)(iVar5 + 0xc) & 0x4a;
  if (uVar14 == 0x40) {
    uVar16 = 8;
  }
  else if (uVar14 == 8) {
    uVar16 = 0x10;
  }
  else {
    uVar16 = 10;
  }
  iVar5 = FUN_001f67d0(&local_38);
  iVar4 = FUN_001f67d0(&param_5);
  if (iVar5 == iVar4) {
    __c = L'\0';
    bVar20 = false;
LAB_001fdebc:
    uVar17 = 0;
    cVar11 = *(char *)(iVar13 + 0x10);
    bVar3 = false;
    bVar1 = true;
  }
  else {
    __c = FUN_001ef914(&local_38);
    bVar20 = __c == *(wchar_t *)(iVar13 + 0xbc);
    if ((bVar20) || (__c == *(wchar_t *)(iVar13 + 0xc0))) {
      cVar11 = *(char *)(iVar13 + 0x10);
      if (((cVar11 == '\0') || (__c != *(wchar_t *)(iVar13 + 0x28))) &&
         (__c != *(wchar_t *)(iVar13 + 0x24))) {
        if (local_38 != (int *)0x0) {
          if ((uint)local_38[2] < (uint)local_38[3]) {
            local_38[2] = local_38[2] + 4;
          }
          else {
            (**(code **)(*local_38 + 0x28))();
          }
          local_34 = (int *)0xffffffff;
        }
        iVar5 = FUN_001f67d0(&local_38);
        iVar4 = FUN_001f67d0(&param_5);
        if (iVar5 == iVar4) goto LAB_001fdebc;
        __c = FUN_001ef914(&local_38);
        cVar11 = *(char *)(iVar13 + 0x10);
      }
    }
    else {
      cVar11 = *(char *)(iVar13 + 0x10);
    }
    uVar17 = 0;
    bVar3 = false;
    do {
      if (((cVar11 != '\0') && (*(wchar_t *)(iVar13 + 0x28) == __c)) ||
         (*(wchar_t *)(iVar13 + 0x24) == __c)) {
LAB_001fe5e4:
        bVar1 = false;
        break;
      }
      if (*(wchar_t *)(iVar13 + 0xcc) == __c) {
        if ((bVar3) && (uVar16 != 10)) goto LAB_001fe470;
        if (uVar14 == 0) {
          bVar3 = true;
          uVar16 = 8;
          uVar17 = uVar14;
        }
        else {
          if (uVar16 == 8) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar17 + 1;
          }
          bVar3 = true;
        }
      }
      else {
        bVar1 = bVar3;
        if (!bVar3) break;
LAB_001fe470:
        if ((*(wchar_t *)(iVar13 + 0xc4) != __c) && (*(wchar_t *)(iVar13 + 200) != __c))
        goto LAB_001fe5e4;
        if (uVar14 == 0) {
          uVar16 = 0x10;
          bVar3 = false;
          uVar17 = uVar14;
        }
        else {
          if (uVar16 != 0x10) {
            bVar1 = false;
            local_4c = uVar16;
            goto LAB_001fded8;
          }
          bVar3 = false;
          uVar17 = 0;
        }
      }
      if (local_38 != (int *)0x0) {
        if ((uint)local_38[2] < (uint)local_38[3]) {
          local_38[2] = local_38[2] + 4;
        }
        else {
          (**(code **)(*local_38 + 0x28))();
        }
        local_34 = (int *)0xffffffff;
      }
      iVar5 = FUN_001f67d0(&local_38);
      iVar4 = FUN_001f67d0(&param_5);
      if (iVar5 == iVar4) {
        cVar11 = *(char *)(iVar13 + 0x10);
        bVar1 = true;
        break;
      }
      __c = FUN_001ef914(&local_38);
      cVar11 = *(char *)(iVar13 + 0x10);
      bVar1 = bVar3;
    } while (bVar3);
  }
  local_4c = uVar16;
  if (uVar16 == 0x10) {
    local_4c = 0x16;
  }
LAB_001fded8:
  pvVar8 = *(void **)(DAT_001fe760 + 0x1fdee8);
  local_2c[0] = (int)pvVar8 + 0xc;
  if (cVar11 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  uVar21 = __aeabi_uldivmod(0xffffffff,0xffffffff,uVar16,0);
  uVar14 = (uint)((ulonglong)uVar21 >> 0x20);
  bVar2 = bVar1;
  if (*(char *)(iVar13 + 0x124) == '\0') {
    local_70 = 0;
    local_6c = 0;
    if (bVar1) {
      bVar19 = false;
      bVar2 = false;
    }
    else {
      while( true ) {
        if (local_4c < 0xb) {
          if (((uint)__c < 0x30) || ((uint)(local_4c + L'0') <= (uint)__c)) goto LAB_001fe310;
          uVar12 = __c + L'\xffffffd0';
        }
        else {
          uVar12 = __c + L'\xffffffd0';
          if (9 < uVar12) {
            if ((uint)(__c + L'\xffffff9f') < 6) {
              uVar12 = __c + L'\xffffffa9';
            }
            else {
              if (5 < (uint)(__c + L'\xffffffbf')) goto LAB_001fe310;
              uVar12 = __c + L'\xffffffc9';
            }
          }
        }
        bVar19 = local_6c <= uVar14;
        if (uVar14 == local_6c) {
          bVar19 = local_70 <= (uint)uVar21;
        }
        if (bVar19) {
          uVar17 = uVar17 + 1;
          local_64 = (int)((ulonglong)uVar16 * (ulonglong)local_70 >> 0x20);
          uVar10 = uVar16 * local_6c + local_64;
          local_68 = (uint)((ulonglong)uVar16 * (ulonglong)local_70);
          uVar9 = ~((int)uVar12 >> 0x1f);
          bVar19 = uVar10 <= uVar9;
          if (uVar9 == uVar10) {
            bVar19 = local_68 <= ~uVar12;
          }
          if (!bVar19) {
            bVar2 = true;
          }
          local_70 = local_68 + uVar12;
          local_6c = uVar10 + ((int)uVar12 >> 0x1f) + (uint)CARRY4(local_68,uVar12);
        }
        else {
          bVar2 = true;
        }
        if (local_38 != (int *)0x0) {
          if ((uint)local_38[2] < (uint)local_38[3]) {
            local_38[2] = local_38[2] + 4;
          }
          else {
            (**(code **)(*local_38 + 0x28))();
          }
          local_34 = (int *)0xffffffff;
        }
        iVar5 = FUN_001f67d0(&local_38);
        iVar4 = FUN_001f67d0(&param_5);
        if (iVar5 == iVar4) break;
        __c = FUN_001ef914(&local_38);
      }
LAB_001fe228:
      bVar19 = false;
      bVar1 = true;
    }
LAB_001fe230:
    iVar5 = *(int *)(local_2c[0] + -0xc);
    if (iVar5 == 0) {
      pvVar18 = (void *)(local_2c[0] + -0xc);
      iVar4 = local_2c[0];
    }
    else {
LAB_001fe328:
      uVar14 = iVar5 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar14) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar14);
        iVar5 = *(int *)(local_2c[0] + -0xc);
      }
      iVar4 = local_2c[0];
      *(char *)(local_2c[0] + iVar5) = (char)uVar17;
      if ((void *)(local_2c[0] + -0xc) != pvVar8) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar14;
        *(undefined *)(local_2c[0] + uVar14) = 0;
      }
      pvVar18 = (void *)(local_2c[0] + -0xc);
      iVar5 = FUN_00204bac(*(undefined4 *)(iVar13 + 8),*(undefined4 *)(iVar13 + 0xc));
      if (iVar5 == 0) {
        *param_8 = 4;
      }
    }
  }
  else {
    if (bVar1) {
      bVar2 = false;
      local_70 = 0;
      local_6c = 0;
      bVar19 = false;
      goto LAB_001fe230;
    }
    local_70 = 0;
    local_6c = 0;
    if ((*(char *)(iVar13 + 0x10) != '\0') && (*(wchar_t *)(iVar13 + 0x28) == __c))
    goto LAB_001fe094;
    while (*(wchar_t *)(iVar13 + 0x24) != __c) {
      pwVar6 = wmemchr((wchar_t *)(iVar13 + 0xcc),__c,local_4c);
      if (pwVar6 == (wchar_t *)0x0) {
        bVar19 = false;
        goto LAB_001fe230;
      }
      uVar12 = (int)pwVar6 - (int)(wchar_t *)(iVar13 + 0xcc) >> 2;
      if (0xf < (int)uVar12) {
        uVar12 = uVar12 - 6;
      }
      bVar19 = local_6c <= uVar14;
      if (uVar14 == local_6c) {
        bVar19 = local_70 <= (uint)uVar21;
      }
      if (bVar19) {
        uVar17 = uVar17 + 1;
        local_64 = (int)((ulonglong)uVar16 * (ulonglong)local_70 >> 0x20);
        uVar10 = uVar16 * local_6c + local_64;
        local_68 = (uint)((ulonglong)uVar16 * (ulonglong)local_70);
        uVar9 = ~((int)uVar12 >> 0x1f);
        bVar19 = uVar10 <= uVar9;
        if (uVar9 == uVar10) {
          bVar19 = local_68 <= ~uVar12;
        }
        if (!bVar19) {
          bVar2 = true;
        }
        local_70 = local_68 + uVar12;
        local_6c = uVar10 + ((int)uVar12 >> 0x1f) + (uint)CARRY4(local_68,uVar12);
      }
      else {
        bVar2 = true;
      }
      while( true ) {
        if (local_38 != (int *)0x0) {
          if ((uint)local_38[2] < (uint)local_38[3]) {
            local_38[2] = local_38[2] + 4;
          }
          else {
            (**(code **)(*local_38 + 0x28))();
          }
          local_34 = (int *)0xffffffff;
        }
        iVar5 = FUN_001f67d0(&local_38);
        iVar4 = FUN_001f67d0(&param_5);
        if (iVar5 == iVar4) goto LAB_001fe228;
        __c = FUN_001ef914(&local_38);
        if ((*(char *)(iVar13 + 0x10) == '\0') || (*(wchar_t *)(iVar13 + 0x28) != __c)) break;
LAB_001fe094:
        if (uVar17 == 0) {
          bVar19 = true;
          uVar17 = 0;
          goto LAB_001fe230;
        }
        iVar5 = *(int *)(local_2c[0] + -0xc);
        uVar12 = iVar5 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar12) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar12);
          iVar5 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar5) = (char)uVar17;
        if ((void *)(local_2c[0] + -0xc) == pvVar8) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar12;
          *(undefined *)(local_2c[0] + uVar12) = 0;
        }
      }
    }
LAB_001fe310:
    bVar19 = false;
    iVar5 = *(int *)(local_2c[0] + -0xc);
    if (iVar5 != 0) goto LAB_001fe328;
    pvVar18 = (void *)(local_2c[0] + -0xc);
    iVar4 = local_2c[0];
  }
  if ((((uVar17 == 0) && (!bVar3)) && (*(int *)(iVar4 + -0xc) == 0)) || (bVar19)) {
    uVar14 = 0;
    uVar16 = 0;
  }
  else {
    if (!bVar2) {
      if (bVar20) {
        bVar20 = local_70 != 0;
        local_70 = -local_70;
        local_6c = -(local_6c + bVar20);
      }
      *param_9 = local_70;
      param_9[1] = local_6c;
      goto LAB_001fe284;
    }
    uVar14 = 0xffffffff;
    uVar16 = 0xffffffff;
  }
  *param_9 = uVar14;
  param_9[1] = uVar16;
  *param_8 = 4;
LAB_001fe284:
  if (bVar1) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar18 != pvVar8) && (iVar5 = FUN_0021100c(iVar4 + -4,0xffffffff), iVar5 < 1)) {
    operator_delete(pvVar18);
  }
  return param_1;
}


