/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fb8f0  Symbol: FUN_001fb8f0 */

int ** FUN_001fb8f0(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,undefined2 *param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int *piVar6;
  undefined2 uVar7;
  void *pvVar8;
  char cVar9;
  wchar_t __c;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  bool bVar18;
  size_t local_54;
  size_t local_50;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar3 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar2 = FUN_001c60f4(DAT_001fc1a8 + 0x1fb90c);
  iVar13 = *(int *)(*(int *)(iVar3 + 0x6c) + 0xc);
  iVar11 = *(int *)(iVar13 + iVar2 * 4);
  if (iVar11 == 0) {
    piVar6 = (int *)operator_new(0x128);
    *piVar6 = DAT_001fc1b4 + 0x1fc068;
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    *(undefined *)(piVar6 + 4) = 0;
    piVar6[5] = 0;
    piVar6[6] = 0;
    piVar6[7] = 0;
    piVar6[8] = 0;
    piVar6[9] = 0;
    piVar6[10] = 0;
    *(undefined *)(piVar6 + 0x49) = 0;
    FUN_001f20dc(piVar6,iVar3 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar3 + 0x6c),piVar6,iVar2);
    iVar11 = *(int *)(iVar13 + iVar2 * 4);
  }
  uVar12 = *(uint *)(iVar3 + 0xc) & 0x4a;
  if (uVar12 == 0x40) {
    local_50 = 8;
  }
  else if (uVar12 == 8) {
    local_50 = 0x10;
  }
  else {
    local_50 = 10;
  }
  iVar3 = FUN_001f67d0(&local_38);
  iVar2 = FUN_001f67d0(&param_5);
  if (iVar3 == iVar2) {
    __c = L'\0';
    bVar18 = false;
  }
  else {
    __c = FUN_001ef914(&local_38);
    bVar18 = __c == *(wchar_t *)(iVar11 + 0xbc);
    if ((!bVar18) && (__c != *(wchar_t *)(iVar11 + 0xc0))) {
      cVar9 = *(char *)(iVar11 + 0x10);
LAB_001fbe28:
      uVar14 = 0;
      bVar1 = false;
      do {
        if (((cVar9 != '\0') && (*(wchar_t *)(iVar11 + 0x28) == __c)) ||
           (*(wchar_t *)(iVar11 + 0x24) == __c)) {
LAB_001fc010:
          uVar12 = 0;
          goto joined_r0x001fbf08;
        }
        if (*(wchar_t *)(iVar11 + 0xcc) == __c) {
          if ((bVar1) && (local_50 != 10)) goto LAB_001fbe6c;
          if (uVar12 == 0) {
            bVar1 = true;
            local_50 = 8;
            uVar14 = uVar12;
          }
          else {
            if (local_50 == 8) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar14 + 1;
            }
            bVar1 = true;
          }
        }
        else {
          if (!bVar1) {
            uVar12 = 0;
            goto joined_r0x001fbf08;
          }
LAB_001fbe6c:
          if ((*(wchar_t *)(iVar11 + 0xc4) != __c) && (*(wchar_t *)(iVar11 + 200) != __c))
          goto LAB_001fc010;
          if (uVar12 == 0) {
            local_50 = 0x10;
            bVar1 = false;
            uVar14 = uVar12;
          }
          else {
            if (local_50 != 0x10) {
              uVar12 = 0;
              goto LAB_001fb98c;
            }
            bVar1 = false;
            uVar14 = 0;
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
        iVar3 = FUN_001f67d0(&local_38);
        iVar2 = FUN_001f67d0(&param_5);
        if (iVar3 == iVar2) {
          cVar9 = *(char *)(iVar11 + 0x10);
          uVar12 = 1;
          goto joined_r0x001fbf08;
        }
        __c = FUN_001ef914(&local_38);
        if (!bVar1) goto LAB_001fc0b0;
        cVar9 = *(char *)(iVar11 + 0x10);
      } while( true );
    }
    cVar9 = *(char *)(iVar11 + 0x10);
    if (((cVar9 != '\0') && (__c == *(wchar_t *)(iVar11 + 0x28))) ||
       (__c == *(wchar_t *)(iVar11 + 0x24))) goto LAB_001fbe28;
    if (local_38 != (int *)0x0) {
      if ((uint)local_38[2] < (uint)local_38[3]) {
        local_38[2] = local_38[2] + 4;
      }
      else {
        (**(code **)(*local_38 + 0x28))();
      }
      local_34 = (int *)0xffffffff;
    }
    iVar3 = FUN_001f67d0(&local_38);
    iVar2 = FUN_001f67d0(&param_5);
    if (iVar3 != iVar2) {
      __c = FUN_001ef914(&local_38);
      cVar9 = *(char *)(iVar11 + 0x10);
      goto LAB_001fbe28;
    }
  }
  cVar9 = *(char *)(iVar11 + 0x10);
  uVar14 = 0;
  uVar12 = 1;
  bVar1 = false;
joined_r0x001fbf08:
  if (local_50 == 0x10) {
    local_54 = 0x16;
  }
  else {
LAB_001fb98c:
    local_54 = local_50;
  }
  pvVar8 = *(void **)(DAT_001fc1ac + 0x1fb9a4);
  local_2c[0] = (int)pvVar8 + 0xc;
  if (cVar9 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  uVar4 = __divsi3(DAT_001fc1b0,local_50);
  uVar15 = uVar12;
  uVar16 = uVar12;
  if (*(char *)(iVar11 + 0x124) == '\0') {
    if (uVar12 == 0) {
      while( true ) {
        if (local_54 < 0xb) {
          if (((uint)__c < 0x30) || ((uint)(local_54 + L'0') <= (uint)__c)) goto LAB_001fbd54;
          uVar10 = __c + L'\xffffffd0';
        }
        else {
          uVar10 = __c + L'\xffffffd0';
          if (9 < uVar10) {
            if ((uint)(__c + L'\xffffff9f') < 6) {
              uVar10 = __c + L'\xffffffa9';
            }
            else {
              if (5 < (uint)(__c + L'\xffffffbf')) goto LAB_001fbd54;
              uVar10 = __c + L'\xffffffc9';
            }
          }
        }
        if ((uVar4 & 0xffff) < uVar16) {
          uVar15 = 1;
        }
        else {
          uVar14 = uVar14 + 1;
          uVar16 = local_50 * uVar16 & 0xffff;
          if ((int)(0xffff - uVar10) < (int)uVar16) {
            uVar15 = 1;
          }
          uVar16 = uVar16 + uVar10 & 0xffff;
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
        iVar3 = FUN_001f67d0(&local_38);
        iVar2 = FUN_001f67d0(&param_5);
        if (iVar3 == iVar2) break;
        __c = FUN_001ef914(&local_38);
      }
LAB_001fbc50:
      uVar4 = 0;
      uVar12 = 1;
    }
    else {
      uVar4 = 0;
      uVar15 = 0;
      uVar16 = 0;
    }
LAB_001fbc58:
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 == 0) {
      pvVar17 = (void *)(local_2c[0] + -0xc);
      iVar2 = local_2c[0];
    }
    else {
LAB_001fbd6c:
      uVar10 = iVar3 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar10) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar10);
        iVar3 = *(int *)(local_2c[0] + -0xc);
      }
      iVar2 = local_2c[0];
      *(char *)(local_2c[0] + iVar3) = (char)uVar14;
      if ((void *)(local_2c[0] + -0xc) != pvVar8) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar10;
        *(undefined *)(local_2c[0] + uVar10) = 0;
      }
      pvVar17 = (void *)(local_2c[0] + -0xc);
      iVar3 = FUN_00204bac(*(undefined4 *)(iVar11 + 8),*(undefined4 *)(iVar11 + 0xc));
      if (iVar3 == 0) {
        *param_8 = 4;
      }
    }
  }
  else {
    if (uVar12 != 0) {
      uVar4 = 0;
      uVar15 = uVar4;
      uVar16 = uVar4;
      goto LAB_001fbc58;
    }
    if ((*(char *)(iVar11 + 0x10) != '\0') && (*(wchar_t *)(iVar11 + 0x28) == __c))
    goto LAB_001fbb04;
    while (*(wchar_t *)(iVar11 + 0x24) != __c) {
      pwVar5 = wmemchr((wchar_t *)(iVar11 + 0xcc),__c,local_54);
      if (pwVar5 == (wchar_t *)0x0) {
        uVar4 = 0;
        goto LAB_001fbc58;
      }
      iVar3 = (int)pwVar5 - (int)(wchar_t *)(iVar11 + 0xcc) >> 2;
      if (0xf < iVar3) {
        iVar3 = iVar3 + -6;
      }
      if ((uVar4 & 0xffff) < uVar16) {
        uVar15 = 1;
      }
      else {
        uVar16 = local_50 * uVar16 & 0xffff;
        if (0xffff - iVar3 < (int)uVar16) {
          uVar15 = 1;
        }
        uVar16 = uVar16 + iVar3 & 0xffff;
        uVar14 = uVar14 + 1;
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
        iVar3 = FUN_001f67d0(&local_38);
        iVar2 = FUN_001f67d0(&param_5);
        if (iVar3 == iVar2) goto LAB_001fbc50;
        __c = FUN_001ef914(&local_38);
        if ((*(char *)(iVar11 + 0x10) == '\0') || (*(wchar_t *)(iVar11 + 0x28) != __c)) break;
LAB_001fbb04:
        if (uVar14 == 0) {
          uVar4 = 1;
          uVar14 = 0;
          goto LAB_001fbc58;
        }
        iVar3 = *(int *)(local_2c[0] + -0xc);
        uVar10 = iVar3 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar10) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar10);
          iVar3 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar3) = (char)uVar14;
        if ((void *)(local_2c[0] + -0xc) == pvVar8) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar10;
          *(undefined *)(local_2c[0] + uVar10) = 0;
        }
      }
    }
LAB_001fbd54:
    uVar4 = 0;
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 != 0) goto LAB_001fbd6c;
    pvVar17 = (void *)(local_2c[0] + -0xc);
    iVar2 = local_2c[0];
  }
  uVar7 = (undefined2)uVar16;
  if ((((uVar14 == 0) && (!bVar1)) && (*(int *)(iVar2 + -0xc) == 0)) || (uVar4 != 0)) {
    uVar7 = 0;
  }
  else {
    if (uVar15 == 0) {
      if (bVar18) {
        uVar7 = (undefined2)(uVar16 * -0x10000 >> 0x10);
      }
      *param_9 = uVar7;
      goto LAB_001fbcd8;
    }
    uVar7 = 0xffff;
  }
  *param_9 = uVar7;
  *param_8 = 4;
LAB_001fbcd8:
  if (uVar12 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar17 != pvVar8) && (iVar3 = FUN_0021100c(iVar2 + -4,0xffffffff), iVar3 < 1)) {
    operator_delete(pvVar17);
  }
  return param_1;
LAB_001fc0b0:
  cVar9 = *(char *)(iVar11 + 0x10);
  uVar12 = 0;
  goto joined_r0x001fbf08;
}


