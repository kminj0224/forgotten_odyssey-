/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001fcaf4  Symbol: FUN_001fcaf4 */

int ** FUN_001fcaf4(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int *piVar7;
  void *pvVar8;
  char cVar9;
  wchar_t __c;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  void *pvVar16;
  bool bVar17;
  size_t local_54;
  size_t local_50;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar3 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar2 = FUN_001c60f4(DAT_001fd374 + 0x1fcb10);
  iVar12 = *(int *)(*(int *)(iVar3 + 0x6c) + 0xc);
  iVar10 = *(int *)(iVar12 + iVar2 * 4);
  if (iVar10 == 0) {
    piVar7 = (int *)operator_new(0x128);
    *piVar7 = DAT_001fd37c + 0x1fd234;
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
    FUN_001f20dc(piVar7,iVar3 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar3 + 0x6c),piVar7,iVar2);
    iVar10 = *(int *)(iVar12 + iVar2 * 4);
  }
  uVar11 = *(uint *)(iVar3 + 0xc) & 0x4a;
  if (uVar11 == 0x40) {
    local_50 = 8;
  }
  else if (uVar11 == 8) {
    local_50 = 0x10;
  }
  else {
    local_50 = 10;
  }
  iVar3 = FUN_001f67d0(&local_38);
  iVar2 = FUN_001f67d0(&param_5);
  if (iVar3 == iVar2) {
    __c = L'\0';
    bVar17 = false;
  }
  else {
    __c = FUN_001ef914(&local_38);
    bVar17 = __c == *(wchar_t *)(iVar10 + 0xbc);
    if ((!bVar17) && (__c != *(wchar_t *)(iVar10 + 0xc0))) {
      cVar9 = *(char *)(iVar10 + 0x10);
LAB_001fcff4:
      uVar13 = 0;
      bVar1 = false;
      do {
        if (((cVar9 != '\0') && (*(wchar_t *)(iVar10 + 0x28) == __c)) ||
           (*(wchar_t *)(iVar10 + 0x24) == __c)) {
LAB_001fd1dc:
          uVar11 = 0;
          goto joined_r0x001fd0d4;
        }
        if (*(wchar_t *)(iVar10 + 0xcc) == __c) {
          if ((bVar1) && (local_50 != 10)) goto LAB_001fd038;
          if (uVar11 == 0) {
            bVar1 = true;
            local_50 = 8;
            uVar13 = uVar11;
          }
          else {
            if (local_50 == 8) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar13 + 1;
            }
            bVar1 = true;
          }
        }
        else {
          if (!bVar1) {
            uVar11 = 0;
            goto joined_r0x001fd0d4;
          }
LAB_001fd038:
          if ((*(wchar_t *)(iVar10 + 0xc4) != __c) && (*(wchar_t *)(iVar10 + 200) != __c))
          goto LAB_001fd1dc;
          if (uVar11 == 0) {
            local_50 = 0x10;
            bVar1 = false;
            uVar13 = uVar11;
          }
          else {
            if (local_50 != 0x10) {
              uVar11 = 0;
              goto LAB_001fcb90;
            }
            bVar1 = false;
            uVar13 = 0;
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
          cVar9 = *(char *)(iVar10 + 0x10);
          uVar11 = 1;
          goto joined_r0x001fd0d4;
        }
        __c = FUN_001ef914(&local_38);
        if (!bVar1) goto LAB_001fd27c;
        cVar9 = *(char *)(iVar10 + 0x10);
      } while( true );
    }
    cVar9 = *(char *)(iVar10 + 0x10);
    if (((cVar9 != '\0') && (__c == *(wchar_t *)(iVar10 + 0x28))) ||
       (__c == *(wchar_t *)(iVar10 + 0x24))) goto LAB_001fcff4;
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
      cVar9 = *(char *)(iVar10 + 0x10);
      goto LAB_001fcff4;
    }
  }
  cVar9 = *(char *)(iVar10 + 0x10);
  uVar13 = 0;
  uVar11 = 1;
  bVar1 = false;
joined_r0x001fd0d4:
  if (local_50 == 0x10) {
    local_54 = 0x16;
  }
  else {
LAB_001fcb90:
    local_54 = local_50;
  }
  pvVar8 = *(void **)(DAT_001fd378 + 0x1fcba8);
  local_2c[0] = (int)pvVar8 + 0xc;
  if (cVar9 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  uVar4 = __udivsi3(0xffffffff,local_50);
  uVar14 = uVar11;
  uVar15 = uVar11;
  if (*(char *)(iVar10 + 0x124) == '\0') {
    if (uVar11 == 0) {
      while( true ) {
        if (local_54 < 0xb) {
          if (((uint)__c < 0x30) || ((uint)(local_54 + L'0') <= (uint)__c)) goto LAB_001fcf20;
          uVar6 = __c + L'\xffffffd0';
        }
        else {
          uVar6 = __c + L'\xffffffd0';
          if (9 < uVar6) {
            if ((uint)(__c + L'\xffffff9f') < 6) {
              uVar6 = __c + L'\xffffffa9';
            }
            else {
              if (5 < (uint)(__c + L'\xffffffbf')) goto LAB_001fcf20;
              uVar6 = __c + L'\xffffffc9';
            }
          }
        }
        if (uVar4 < uVar15) {
          uVar14 = 1;
        }
        else {
          uVar13 = uVar13 + 1;
          if (~uVar6 < local_50 * uVar15) {
            uVar14 = 1;
          }
          uVar15 = uVar6 + local_50 * uVar15;
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
LAB_001fce24:
      uVar4 = 0;
      uVar11 = 1;
    }
    else {
      uVar4 = 0;
      uVar14 = 0;
      uVar15 = 0;
    }
LAB_001fce2c:
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 == 0) {
      pvVar16 = (void *)(local_2c[0] + -0xc);
      iVar2 = local_2c[0];
    }
    else {
LAB_001fcf38:
      uVar6 = iVar3 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar6) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar6);
        iVar3 = *(int *)(local_2c[0] + -0xc);
      }
      iVar2 = local_2c[0];
      *(char *)(local_2c[0] + iVar3) = (char)uVar13;
      if ((void *)(local_2c[0] + -0xc) != pvVar8) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar6;
        *(undefined *)(local_2c[0] + uVar6) = 0;
      }
      pvVar16 = (void *)(local_2c[0] + -0xc);
      iVar3 = FUN_00204bac(*(undefined4 *)(iVar10 + 8),*(undefined4 *)(iVar10 + 0xc));
      if (iVar3 == 0) {
        *param_8 = 4;
      }
    }
  }
  else {
    if (uVar11 != 0) {
      uVar4 = 0;
      uVar14 = uVar4;
      uVar15 = uVar4;
      goto LAB_001fce2c;
    }
    if ((*(char *)(iVar10 + 0x10) != '\0') && (*(wchar_t *)(iVar10 + 0x28) == __c))
    goto LAB_001fccec;
    while (*(wchar_t *)(iVar10 + 0x24) != __c) {
      pwVar5 = wmemchr((wchar_t *)(iVar10 + 0xcc),__c,local_54);
      if (pwVar5 == (wchar_t *)0x0) {
        uVar4 = 0;
        goto LAB_001fce2c;
      }
      uVar6 = (int)pwVar5 - (int)(wchar_t *)(iVar10 + 0xcc) >> 2;
      if (0xf < (int)uVar6) {
        uVar6 = uVar6 - 6;
      }
      if (uVar4 < uVar15) {
        uVar14 = 1;
      }
      else {
        uVar13 = uVar13 + 1;
        if (~uVar6 < local_50 * uVar15) {
          uVar14 = 1;
        }
        uVar15 = uVar6 + local_50 * uVar15;
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
        if (iVar3 == iVar2) goto LAB_001fce24;
        __c = FUN_001ef914(&local_38);
        if ((*(char *)(iVar10 + 0x10) == '\0') || (*(wchar_t *)(iVar10 + 0x28) != __c)) break;
LAB_001fccec:
        if (uVar13 == 0) {
          uVar4 = 1;
          uVar13 = 0;
          goto LAB_001fce2c;
        }
        iVar3 = *(int *)(local_2c[0] + -0xc);
        uVar6 = iVar3 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar6) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar6);
          iVar3 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar3) = (char)uVar13;
        if ((void *)(local_2c[0] + -0xc) == pvVar8) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar6;
          *(undefined *)(local_2c[0] + uVar6) = 0;
        }
      }
    }
LAB_001fcf20:
    uVar4 = 0;
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 != 0) goto LAB_001fcf38;
    pvVar16 = (void *)(local_2c[0] + -0xc);
    iVar2 = local_2c[0];
  }
  if ((((uVar13 == 0) && (!bVar1)) && (*(int *)(iVar2 + -0xc) == 0)) || (uVar4 != 0)) {
    uVar13 = 0;
  }
  else {
    if (uVar14 == 0) {
      if (bVar17) {
        uVar15 = -uVar15;
      }
      *param_9 = uVar15;
      goto LAB_001fcea4;
    }
    uVar13 = 0xffffffff;
  }
  *param_9 = uVar13;
  *param_8 = 4;
LAB_001fcea4:
  if (uVar11 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar16 != pvVar8) && (iVar3 = FUN_0021100c(iVar2 + -4,0xffffffff), iVar3 < 1)) {
    operator_delete(pvVar16);
  }
  return param_1;
LAB_001fd27c:
  cVar9 = *(char *)(iVar10 + 0x10);
  uVar11 = 0;
  goto joined_r0x001fd0d4;
}


