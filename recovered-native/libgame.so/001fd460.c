/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fd460  Symbol: FUN_001fd460 */

int ** FUN_001fd460(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
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
  void *pvVar12;
  wchar_t __c;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  size_t local_5c;
  uint local_58;
  int iStack_54;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar5 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar4 = FUN_001c60f4(DAT_001fdddc + 0x1fd47c);
  iVar16 = *(int *)(*(int *)(iVar5 + 0x6c) + 0xc);
  iVar14 = *(int *)(iVar16 + iVar4 * 4);
  if (iVar14 == 0) {
    piVar7 = (int *)operator_new(0x128);
    *piVar7 = DAT_001fdde4 + 0x1fdc80;
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
    iVar14 = *(int *)(iVar16 + iVar4 * 4);
  }
  uVar15 = *(uint *)(iVar5 + 0xc) & 0x4a;
  if (uVar15 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar15 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  iVar5 = FUN_001f67d0(&local_38);
  iVar4 = FUN_001f67d0(&param_5);
  if (iVar5 == iVar4) {
    __c = L'\0';
    bVar20 = false;
  }
  else {
    __c = FUN_001ef914(&local_38);
    bVar20 = __c == *(wchar_t *)(iVar14 + 0xbc);
    if ((!bVar20) && (__c != *(wchar_t *)(iVar14 + 0xc0))) {
      cVar11 = *(char *)(iVar14 + 0x10);
LAB_001fda58:
      uVar17 = 0;
      bVar3 = false;
      do {
        if (((cVar11 != '\0') && (*(wchar_t *)(iVar14 + 0x28) == __c)) ||
           (*(wchar_t *)(iVar14 + 0x24) == __c)) {
LAB_001fdc38:
          bVar1 = false;
          goto LAB_001fd4ec;
        }
        if (*(wchar_t *)(iVar14 + 0xcc) == __c) {
          if ((bVar3) && (uVar18 != 10)) goto LAB_001fda98;
          if (uVar15 == 0) {
            bVar3 = true;
            uVar18 = 8;
            uVar17 = uVar15;
          }
          else {
            if (uVar18 == 8) {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar17 + 1;
            }
            bVar3 = true;
          }
        }
        else {
          if (!bVar3) {
            bVar1 = false;
            goto LAB_001fd4ec;
          }
LAB_001fda98:
          if ((*(wchar_t *)(iVar14 + 0xc4) != __c) && (*(wchar_t *)(iVar14 + 200) != __c))
          goto LAB_001fdc38;
          if (uVar15 == 0) {
            uVar18 = 0x10;
            bVar3 = false;
            uVar17 = uVar15;
          }
          else {
            if (uVar18 != 0x10) {
              bVar1 = false;
              local_5c = uVar18;
              goto LAB_001fd4f8;
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
          cVar11 = *(char *)(iVar14 + 0x10);
          bVar1 = true;
          goto LAB_001fd4ec;
        }
        __c = FUN_001ef914(&local_38);
        if (!bVar3) goto LAB_001fdcc8;
        cVar11 = *(char *)(iVar14 + 0x10);
      } while( true );
    }
    cVar11 = *(char *)(iVar14 + 0x10);
    if (((cVar11 != '\0') && (__c == *(wchar_t *)(iVar14 + 0x28))) ||
       (__c == *(wchar_t *)(iVar14 + 0x24))) goto LAB_001fda58;
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
    if (iVar5 != iVar4) {
      __c = FUN_001ef914(&local_38);
      cVar11 = *(char *)(iVar14 + 0x10);
      goto LAB_001fda58;
    }
  }
  cVar11 = *(char *)(iVar14 + 0x10);
  uVar17 = 0;
  bVar1 = true;
  bVar3 = false;
LAB_001fd4ec:
  local_5c = uVar18;
  if (uVar18 == 0x10) {
    local_5c = 0x16;
  }
LAB_001fd4f8:
  pvVar8 = *(void **)(DAT_001fdde0 + 0x1fd508);
  local_2c[0] = (int)pvVar8 + 0xc;
  if (cVar11 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  if (bVar20) {
    local_58 = 0;
    iStack_54 = -0x80000000;
  }
  else {
    local_58 = 0xffffffff;
    iStack_54 = 0x7fffffff;
  }
  uVar21 = __aeabi_uldivmod(local_58,iStack_54,uVar18);
  uVar15 = (uint)((ulonglong)uVar21 >> 0x20);
  bVar2 = bVar1;
  if (*(char *)(iVar14 + 0x124) == '\0') {
    if (bVar1) {
      local_78 = 0;
      local_74 = 0;
      bVar19 = false;
      bVar2 = false;
    }
    else {
      local_78 = 0;
      local_74 = 0;
      while( true ) {
        if (local_5c < 0xb) {
          if (((uint)__c < 0x30) || ((uint)(local_5c + L'0') <= (uint)__c)) goto LAB_001fd954;
          uVar13 = __c + L'\xffffffd0';
        }
        else {
          uVar13 = __c + L'\xffffffd0';
          if (9 < uVar13) {
            if ((uint)(__c + L'\xffffff9f') < 6) {
              uVar13 = __c + L'\xffffffa9';
            }
            else {
              if (5 < (uint)(__c + L'\xffffffbf')) goto LAB_001fd954;
              uVar13 = __c + L'\xffffffc9';
            }
          }
        }
        bVar19 = local_74 <= uVar15;
        if (uVar15 == local_74) {
          bVar19 = local_78 <= (uint)uVar21;
        }
        if (bVar19) {
          uVar17 = uVar17 + 1;
          local_6c = (int)((ulonglong)uVar18 * (ulonglong)local_78 >> 0x20);
          uVar10 = uVar18 * local_74 + local_6c;
          local_70 = (uint)((ulonglong)uVar18 * (ulonglong)local_78);
          uVar9 = iStack_54 - (((int)uVar13 >> 0x1f) + (uint)(local_58 < uVar13));
          bVar19 = uVar10 <= uVar9;
          if (uVar9 == uVar10) {
            bVar19 = local_70 <= local_58 - uVar13;
          }
          if (!bVar19) {
            bVar2 = true;
          }
          local_78 = local_70 + uVar13;
          local_74 = uVar10 + ((int)uVar13 >> 0x1f) + (uint)CARRY4(local_70,uVar13);
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
LAB_001fd868:
      bVar19 = false;
      bVar1 = true;
    }
LAB_001fd870:
    iVar5 = *(int *)(local_2c[0] + -0xc);
    if (iVar5 == 0) {
      pvVar12 = (void *)(local_2c[0] + -0xc);
      iVar4 = local_2c[0];
    }
    else {
LAB_001fd96c:
      uVar15 = iVar5 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar15) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar15);
        iVar5 = *(int *)(local_2c[0] + -0xc);
      }
      iVar4 = local_2c[0];
      *(char *)(local_2c[0] + iVar5) = (char)uVar17;
      if ((void *)(local_2c[0] + -0xc) != pvVar8) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar15;
        *(undefined *)(local_2c[0] + uVar15) = 0;
      }
      pvVar12 = (void *)(local_2c[0] + -0xc);
      iVar5 = FUN_00204bac(*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar14 + 0xc));
      if (iVar5 == 0) {
        *param_8 = 4;
      }
    }
  }
  else {
    if (bVar1) {
      bVar2 = false;
      local_78 = 0;
      local_74 = 0;
      bVar19 = false;
      goto LAB_001fd870;
    }
    local_78 = 0;
    local_74 = 0;
    if ((*(char *)(iVar14 + 0x10) != '\0') && (*(wchar_t *)(iVar14 + 0x28) == __c))
    goto LAB_001fd6c0;
    while (*(wchar_t *)(iVar14 + 0x24) != __c) {
      pwVar6 = wmemchr((wchar_t *)(iVar14 + 0xcc),__c,local_5c);
      if (pwVar6 == (wchar_t *)0x0) {
        bVar19 = false;
        goto LAB_001fd870;
      }
      uVar13 = (int)pwVar6 - (int)(wchar_t *)(iVar14 + 0xcc) >> 2;
      if (0xf < (int)uVar13) {
        uVar13 = uVar13 - 6;
      }
      bVar19 = local_74 <= uVar15;
      if (uVar15 == local_74) {
        bVar19 = local_78 <= (uint)uVar21;
      }
      if (bVar19) {
        uVar17 = uVar17 + 1;
        local_6c = (int)((ulonglong)uVar18 * (ulonglong)local_78 >> 0x20);
        uVar10 = uVar18 * local_74 + local_6c;
        local_70 = (uint)((ulonglong)uVar18 * (ulonglong)local_78);
        uVar9 = iStack_54 - (((int)uVar13 >> 0x1f) + (uint)(local_58 < uVar13));
        bVar19 = uVar10 <= uVar9;
        if (uVar9 == uVar10) {
          bVar19 = local_70 <= local_58 - uVar13;
        }
        if (!bVar19) {
          bVar2 = true;
        }
        local_78 = local_70 + uVar13;
        local_74 = uVar10 + ((int)uVar13 >> 0x1f) + (uint)CARRY4(local_70,uVar13);
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
        if (iVar5 == iVar4) goto LAB_001fd868;
        __c = FUN_001ef914(&local_38);
        if ((*(char *)(iVar14 + 0x10) == '\0') || (*(wchar_t *)(iVar14 + 0x28) != __c)) break;
LAB_001fd6c0:
        if (uVar17 == 0) {
          bVar19 = true;
          uVar17 = 0;
          goto LAB_001fd870;
        }
        iVar5 = *(int *)(local_2c[0] + -0xc);
        uVar13 = iVar5 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar13) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar13);
          iVar5 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar5) = (char)uVar17;
        if ((void *)(local_2c[0] + -0xc) == pvVar8) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar13;
          *(undefined *)(local_2c[0] + uVar13) = 0;
        }
      }
    }
LAB_001fd954:
    bVar19 = false;
    iVar5 = *(int *)(local_2c[0] + -0xc);
    if (iVar5 != 0) goto LAB_001fd96c;
    pvVar12 = (void *)(local_2c[0] + -0xc);
    iVar4 = local_2c[0];
  }
  if ((((uVar17 == 0) && (!bVar3)) && (*(int *)(iVar4 + -0xc) == 0)) || (bVar19)) {
    uVar15 = 0;
    uVar18 = 0;
  }
  else {
    if (!bVar2) {
      if (bVar20) {
        bVar20 = local_78 != 0;
        local_78 = -local_78;
        local_74 = -(local_74 + bVar20);
      }
      *param_9 = local_78;
      param_9[1] = local_74;
      goto LAB_001fd8c8;
    }
    if (bVar20) {
      uVar15 = 0;
      uVar18 = 0x80000000;
    }
    else {
      uVar15 = 0xffffffff;
      uVar18 = 0x7fffffff;
    }
  }
  *param_9 = uVar15;
  param_9[1] = uVar18;
  *param_8 = 4;
LAB_001fd8c8:
  if (bVar1) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar12 != pvVar8) && (iVar5 = FUN_0021100c(iVar4 + -4,0xffffffff), iVar5 < 1)) {
    operator_delete(pvVar12);
  }
  return param_1;
LAB_001fdcc8:
  cVar11 = *(char *)(iVar14 + 0x10);
  bVar1 = false;
  goto LAB_001fd4ec;
}


