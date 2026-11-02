/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f9bc8  Symbol: FUN_001f9bc8 */

int ** FUN_001f9bc8(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,undefined4 *param_8,int *param_9)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int *piVar6;
  char cVar7;
  wchar_t __c;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  undefined uVar12;
  int iVar13;
  void *pvVar14;
  bool bVar15;
  bool bVar16;
  undefined local_4c;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  piVar2 = param_9;
  iVar4 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar3 = FUN_001c60f4(DAT_001fa98c + 0x1f9be4);
  iVar13 = *(int *)(*(int *)(iVar4 + 0x6c) + 0xc);
  iVar11 = DAT_001fa990 + 0x1f9c04;
  iVar9 = *(int *)(iVar13 + iVar3 * 4);
  if (iVar9 == 0) {
    piVar6 = (int *)operator_new(0x128);
    *piVar6 = DAT_001fa998 + 0x1fa804;
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
    FUN_001f20dc(piVar6,iVar4 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(iVar4 + 0x6c),piVar6,iVar3);
    iVar9 = *(int *)(iVar13 + iVar3 * 4);
  }
  iVar4 = FUN_001f67d0(&local_38);
  iVar3 = FUN_001f67d0(&param_5);
  if (iVar4 == iVar3) {
    __c = L'\0';
    pvVar14 = *(void **)(iVar11 + DAT_001fa994);
LAB_001f9c38:
    iVar4 = 0;
    cVar7 = *(char *)(iVar9 + 0x10);
    bVar16 = false;
    bVar15 = true;
    goto LAB_001f9c4c;
  }
  __c = FUN_001ef914(&local_38);
  bVar16 = __c == *(wchar_t *)(iVar9 + 0xc0);
  if ((bVar16) || (__c == *(wchar_t *)(iVar9 + 0xbc))) {
    cVar7 = *(char *)(iVar9 + 0x10);
    if (((cVar7 != '\0') && (__c == *(wchar_t *)(iVar9 + 0x28))) ||
       (__c == *(wchar_t *)(iVar9 + 0x24))) goto LAB_001fa5ac;
    iVar3 = *piVar2;
    iVar4 = *(int *)(iVar3 + -0xc);
    uVar8 = iVar4 + 1;
    uVar12 = !bVar16 || bVar16;
    if (bVar16) {
      uVar12 = 0x2b;
    }
    if ((*(uint *)(iVar3 + -8) < uVar8) || (0 < *(int *)(iVar3 + -4))) {
      FUN_001ee274(piVar2,uVar8);
      iVar3 = *piVar2;
      iVar4 = *(int *)(iVar3 + -0xc);
    }
    *(undefined *)(iVar3 + iVar4) = uVar12;
    iVar4 = *piVar2;
    pvVar14 = *(void **)(iVar11 + DAT_001fa994);
    if ((void *)(iVar4 + -0xc) != pvVar14) {
      *(undefined4 *)(iVar4 + -4) = 0;
      *(uint *)(iVar4 + -0xc) = uVar8;
      *(undefined *)(iVar4 + uVar8) = 0;
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
    iVar4 = FUN_001f67d0(&local_38);
    iVar3 = FUN_001f67d0(&param_5);
    if (iVar4 == iVar3) goto LAB_001f9c38;
    __c = FUN_001ef914(&local_38);
    cVar7 = *(char *)(iVar9 + 0x10);
  }
  else {
    cVar7 = *(char *)(iVar9 + 0x10);
LAB_001fa5ac:
    pvVar14 = *(void **)(iVar11 + DAT_001fa994);
  }
  iVar4 = 0;
  bVar16 = false;
  while( true ) {
    if ((cVar7 != '\0') && (*(wchar_t *)(iVar9 + 0x28) == __c)) {
      bVar15 = false;
      goto LAB_001f9c4c;
    }
    if (*(wchar_t *)(iVar9 + 0x24) == __c) {
      bVar15 = false;
      goto LAB_001f9c4c;
    }
    if (*(wchar_t *)(iVar9 + 0xcc) != __c) {
      bVar15 = false;
      goto LAB_001f9c4c;
    }
    if (!bVar16) {
      iVar11 = *piVar2;
      iVar3 = *(int *)(iVar11 + -0xc);
      uVar8 = iVar3 + 1;
      if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
        FUN_001ee274(piVar2,uVar8);
        iVar11 = *piVar2;
        iVar3 = *(int *)(iVar11 + -0xc);
      }
      *(undefined *)(iVar11 + iVar3) = 0x30;
      iVar3 = *piVar2;
      if ((void *)(iVar3 + -0xc) != pvVar14) {
        *(undefined4 *)(iVar3 + -4) = 0;
        *(uint *)(iVar3 + -0xc) = uVar8;
        *(undefined *)(iVar3 + uVar8) = 0;
      }
      bVar16 = true;
    }
    iVar4 = iVar4 + 1;
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
    iVar11 = FUN_001f67d0(&param_5);
    if (iVar3 == iVar11) break;
    __c = FUN_001ef914(&local_38);
    cVar7 = *(char *)(iVar9 + 0x10);
  }
  cVar7 = *(char *)(iVar9 + 0x10);
  bVar15 = true;
LAB_001f9c4c:
  local_2c[0] = (int)pvVar14 + 0xc;
  if (cVar7 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  bVar1 = bVar15;
  if (*(char *)(iVar9 + 0x124) == '\0') {
    if (!bVar15) {
LAB_001f9f1c:
      if ((uint)__c < 0x30) goto LAB_001f9fe0;
      do {
        if (0x39 < (uint)__c) goto LAB_001f9fe0;
        iVar11 = *piVar2;
        iVar3 = *(int *)(iVar11 + -0xc);
        uVar8 = iVar3 + 1;
        if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
          FUN_001ee274(piVar2,uVar8);
          iVar11 = *piVar2;
          iVar3 = *(int *)(iVar11 + -0xc);
        }
        *(char *)(iVar11 + iVar3) = (char)__c;
        iVar3 = *piVar2;
        if ((void *)(iVar3 + -0xc) == pvVar14) {
          bVar16 = true;
        }
        else {
          *(undefined4 *)(iVar3 + -4) = 0;
          *(uint *)(iVar3 + -0xc) = uVar8;
          bVar16 = true;
          *(undefined *)(iVar3 + uVar8) = 0;
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
          iVar11 = FUN_001f67d0(&param_5);
          if (iVar3 == iVar11) goto LAB_001f9e98;
          __c = FUN_001ef914(&local_38);
          if (0x2f < (uint)__c) break;
LAB_001f9fe0:
          if (((*(wchar_t *)(iVar9 + 0x24) != __c) || (bVar1)) || (bVar15)) {
            if (((*(wchar_t *)(iVar9 + 0x104) != __c) && (*(wchar_t *)(iVar9 + 0x11c) != __c)) ||
               ((bVar15 || (!bVar16)))) goto LAB_001f9e98;
            iVar11 = *piVar2;
            iVar3 = *(int *)(iVar11 + -0xc);
            uVar8 = iVar3 + 1;
            if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
              FUN_001ee274(piVar2,uVar8);
              iVar11 = *piVar2;
              iVar3 = *(int *)(iVar11 + -0xc);
            }
            *(undefined *)(iVar11 + iVar3) = 0x65;
            iVar3 = *piVar2;
            if ((void *)(iVar3 + -0xc) != pvVar14) {
              *(undefined4 *)(iVar3 + -4) = 0;
              *(uint *)(iVar3 + -0xc) = uVar8;
              *(undefined *)(iVar3 + uVar8) = 0;
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
            iVar11 = FUN_001f67d0(&param_5);
            if (iVar3 == iVar11) {
              bVar15 = true;
              goto LAB_001f9e98;
            }
            __c = FUN_001ef914(&local_38);
            if (__c == *(wchar_t *)(iVar9 + 0xc0)) {
              local_4c = 0x2b;
            }
            else {
              if (__c != *(wchar_t *)(iVar9 + 0xbc)) {
                bVar15 = true;
                goto LAB_001f9f1c;
              }
              local_4c = 0x2d;
            }
            iVar11 = *piVar2;
            iVar3 = *(int *)(iVar11 + -0xc);
            uVar8 = iVar3 + 1;
            if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
              FUN_001ee274(piVar2,uVar8);
              iVar11 = *piVar2;
              iVar3 = *(int *)(iVar11 + -0xc);
            }
            *(undefined *)(iVar11 + iVar3) = local_4c;
            iVar3 = *piVar2;
            if ((void *)(iVar3 + -0xc) != pvVar14) {
              *(undefined4 *)(iVar3 + -4) = 0;
              *(uint *)(iVar3 + -0xc) = uVar8;
              *(undefined *)(iVar3 + uVar8) = 0;
            }
            bVar15 = true;
          }
          else {
            iVar11 = *piVar2;
            iVar3 = *(int *)(iVar11 + -0xc);
            uVar8 = iVar3 + 1;
            if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
              FUN_001ee274(piVar2,uVar8);
              iVar11 = *piVar2;
              iVar3 = *(int *)(iVar11 + -0xc);
            }
            *(undefined *)(iVar11 + iVar3) = 0x2e;
            iVar3 = *piVar2;
            if ((void *)(iVar3 + -0xc) == pvVar14) {
              bVar1 = true;
            }
            else {
              *(undefined4 *)(iVar3 + -4) = 0;
              *(uint *)(iVar3 + -0xc) = uVar8;
              bVar1 = true;
              *(undefined *)(iVar3 + uVar8) = 0;
            }
          }
        }
      } while( true );
    }
    bVar15 = false;
    bVar1 = false;
  }
  else {
    if (!bVar15) {
      cVar7 = *(char *)(iVar9 + 0x10);
LAB_001f9c94:
      if ((cVar7 != '\0') && (*(wchar_t *)(iVar9 + 0x28) == __c)) goto LAB_001f9e04;
LAB_001f9ca8:
      if (*(wchar_t *)(iVar9 + 0x24) == __c) {
        if ((bVar1) || (bVar15)) goto LAB_001f9e98;
        iVar3 = *(int *)(local_2c[0] + -0xc);
        if (iVar3 != 0) {
          uVar8 = iVar3 + 1;
          if ((*(uint *)(local_2c[0] + -8) < uVar8) || (0 < *(int *)(local_2c[0] + -4))) {
            FUN_001ee274(local_2c,uVar8);
            iVar3 = *(int *)(local_2c[0] + -0xc);
          }
          *(char *)(local_2c[0] + iVar3) = (char)iVar4;
          if ((void *)(local_2c[0] + -0xc) != pvVar14) {
            *(undefined4 *)(local_2c[0] + -4) = 0;
            *(uint *)(local_2c[0] + -0xc) = uVar8;
            *(undefined *)(local_2c[0] + uVar8) = 0;
          }
        }
        iVar11 = *piVar2;
        iVar3 = *(int *)(iVar11 + -0xc);
        uVar8 = iVar3 + 1;
        if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
          FUN_001ee274(piVar2,uVar8);
          iVar11 = *piVar2;
          iVar3 = *(int *)(iVar11 + -0xc);
        }
        *(undefined *)(iVar11 + iVar3) = 0x2e;
        iVar3 = *piVar2;
        if ((void *)(iVar3 + -0xc) == pvVar14) {
          bVar1 = true;
        }
        else {
          *(undefined4 *)(iVar3 + -4) = 0;
          *(uint *)(iVar3 + -0xc) = uVar8;
          bVar1 = true;
          *(undefined *)(iVar3 + uVar8) = 0;
        }
      }
      else {
        pwVar5 = wmemchr((wchar_t *)(iVar9 + 0xcc),__c,10);
        if (pwVar5 == (wchar_t *)0x0) {
          if ((((*(wchar_t *)(iVar9 + 0x104) != __c) && (*(wchar_t *)(iVar9 + 0x11c) != __c)) ||
              (bVar15)) || (!bVar16)) goto LAB_001f9e98;
          iVar3 = *(int *)(local_2c[0] + -0xc);
          if ((iVar3 != 0) && (!bVar1)) {
            uVar8 = iVar3 + 1;
            if ((*(uint *)(local_2c[0] + -8) < uVar8) || (0 < *(int *)(local_2c[0] + -4))) {
              FUN_001ee274(local_2c,uVar8);
              iVar3 = *(int *)(local_2c[0] + -0xc);
            }
            *(char *)(local_2c[0] + iVar3) = (char)iVar4;
            if ((void *)(local_2c[0] + -0xc) != pvVar14) {
              *(undefined4 *)(local_2c[0] + -4) = 0;
              *(uint *)(local_2c[0] + -0xc) = uVar8;
              *(undefined *)(local_2c[0] + uVar8) = 0;
            }
          }
          iVar11 = *piVar2;
          iVar3 = *(int *)(iVar11 + -0xc);
          uVar8 = iVar3 + 1;
          if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
            FUN_001ee274(piVar2,uVar8);
            iVar11 = *piVar2;
            iVar3 = *(int *)(iVar11 + -0xc);
          }
          *(undefined *)(iVar11 + iVar3) = 0x65;
          iVar3 = *piVar2;
          if ((void *)(iVar3 + -0xc) != pvVar14) {
            *(undefined4 *)(iVar3 + -4) = 0;
            *(uint *)(iVar3 + -0xc) = uVar8;
            *(undefined *)(iVar3 + uVar8) = 0;
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
          iVar11 = FUN_001f67d0(&param_5);
          if (iVar3 == iVar11) {
            bVar15 = true;
            goto LAB_001f9e98;
          }
          __c = FUN_001ef914(&local_38);
          bVar15 = __c != *(wchar_t *)(iVar9 + 0xc0);
          if ((bVar15) && (__c != *(wchar_t *)(iVar9 + 0xbc))) {
            cVar7 = *(char *)(iVar9 + 0x10);
            bVar15 = true;
            goto LAB_001f9c94;
          }
          cVar7 = *(char *)(iVar9 + 0x10);
          if ((cVar7 != '\0') && (__c == *(wchar_t *)(iVar9 + 0x28))) {
            bVar15 = true;
            goto LAB_001f9c94;
          }
          if (__c == *(wchar_t *)(iVar9 + 0x24)) goto LAB_001fa7cc;
          iVar3 = *piVar2;
          if (bVar15) {
            uVar12 = 0x2d;
          }
          else {
            uVar12 = 0x2b;
          }
          iVar11 = *(int *)(iVar3 + -0xc);
          uVar8 = iVar11 + 1;
          if ((*(uint *)(iVar3 + -8) < uVar8) || (0 < *(int *)(iVar3 + -4))) {
            FUN_001ee274(piVar2,uVar8);
            iVar3 = *piVar2;
            iVar11 = *(int *)(iVar3 + -0xc);
          }
          *(undefined *)(iVar3 + iVar11) = uVar12;
          iVar3 = *piVar2;
          if ((void *)(iVar3 + -0xc) != pvVar14) {
            *(undefined4 *)(iVar3 + -4) = 0;
            *(uint *)(iVar3 + -0xc) = uVar8;
            *(undefined *)(iVar3 + uVar8) = 0;
          }
          bVar15 = true;
        }
        else {
          iVar11 = *piVar2;
          iVar3 = *(int *)(iVar11 + -0xc);
          uVar8 = iVar3 + 1;
          if ((*(uint *)(iVar11 + -8) < uVar8) || (0 < *(int *)(iVar11 + -4))) {
            FUN_001ee274(piVar2,uVar8);
            iVar11 = *piVar2;
            iVar3 = *(int *)(iVar11 + -0xc);
          }
          iVar4 = iVar4 + 1;
          *(char *)(iVar11 + iVar3) =
               (char)((int)pwVar5 - (int)(wchar_t *)(iVar9 + 0xcc) >> 2) + '0';
          iVar3 = *piVar2;
          bVar16 = true;
          if ((void *)(iVar3 + -0xc) != pvVar14) {
            *(undefined4 *)(iVar3 + -4) = 0;
            *(uint *)(iVar3 + -0xc) = uVar8;
            *(undefined *)(iVar3 + uVar8) = 0;
          }
        }
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
        iVar11 = FUN_001f67d0(&param_5);
        if (iVar3 == iVar11) goto LAB_001f9e98;
        __c = FUN_001ef914(&local_38);
        if ((*(char *)(iVar9 + 0x10) == '\0') || (*(wchar_t *)(iVar9 + 0x28) != __c)) break;
LAB_001f9e04:
        if ((bVar1) || (bVar15)) goto LAB_001f9e98;
        if (iVar4 == 0) {
          FUN_001ed6f8(piVar2,0,*(undefined4 *)(*piVar2 + -0xc),0);
          goto LAB_001f9e98;
        }
        iVar3 = *(int *)(local_2c[0] + -0xc);
        uVar8 = iVar3 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar8) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar8);
          iVar3 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar3) = (char)iVar4;
        if ((void *)(local_2c[0] + -0xc) == pvVar14) {
          iVar4 = 0;
        }
        else {
          iVar4 = 0;
          *(undefined4 *)(local_2c[0] + -4) = 0;
          *(uint *)(local_2c[0] + -0xc) = uVar8;
          *(undefined *)(local_2c[0] + uVar8) = 0;
        }
      }
      goto LAB_001f9ca8;
    }
    bVar15 = false;
    bVar1 = false;
  }
LAB_001f9e98:
  iVar3 = *(int *)(local_2c[0] + -0xc);
  if (iVar3 == 0) {
    pvVar10 = (void *)(local_2c[0] + -0xc);
    iVar4 = local_2c[0];
  }
  else {
    if ((bVar1) || (bVar15)) {
      pvVar10 = (void *)(local_2c[0] + -0xc);
    }
    else {
      uVar8 = iVar3 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar8) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar8);
        iVar3 = *(int *)(local_2c[0] + -0xc);
      }
      *(char *)(local_2c[0] + iVar3) = (char)iVar4;
      pvVar10 = (void *)(local_2c[0] + -0xc);
      if (pvVar10 != pvVar14) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar8;
        *(undefined *)(local_2c[0] + uVar8) = 0;
        pvVar10 = (void *)(local_2c[0] + -0xc);
      }
    }
    iVar4 = local_2c[0];
    iVar3 = FUN_00204bac(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar10 != pvVar14) && (iVar4 = FUN_0021100c(iVar4 + -4,0xffffffff), iVar4 < 1)) {
    operator_delete(pvVar10);
  }
  return param_1;
LAB_001fa7cc:
  bVar15 = true;
  goto LAB_001f9c94;
}


