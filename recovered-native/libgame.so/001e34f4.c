/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e34f4  Symbol: FUN_001e34f4 */

int ** FUN_001e34f4(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  uint *puVar7;
  void *pvVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  size_t local_58;
  size_t local_54;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar3 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar2 = FUN_001c60f4(DAT_001e3d34 + 0x1e3510);
  iVar14 = *(int *)(*(int *)(iVar3 + 0x6c) + 0xc);
  iVar13 = *(int *)(iVar14 + iVar2 * 4);
  if (iVar13 == 0) {
    piVar6 = (int *)operator_new(0x68);
    *piVar6 = DAT_001e3d3c + 0x1e3c1c;
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
    iVar13 = *(int *)(iVar14 + iVar2 * 4);
  }
  uVar12 = *(uint *)(iVar3 + 0xc) & 0x4a;
  if (uVar12 == 0x40) {
    local_54 = 8;
  }
  else if (uVar12 == 8) {
    local_54 = 0x10;
  }
  else {
    local_54 = 10;
  }
  iVar3 = FUN_001df02c(&local_38);
  iVar2 = FUN_001df02c(&param_5);
  if (iVar3 == iVar2) {
    uVar11 = 0;
    bVar18 = false;
  }
  else {
    uVar11 = FUN_001d8014(&local_38);
    bVar18 = *(byte *)(iVar13 + 0x4a) == uVar11;
    if ((!bVar18) && (*(byte *)(iVar13 + 0x4b) != uVar11)) {
      cVar9 = *(char *)(iVar13 + 0x10);
LAB_001e39c4:
      uVar15 = 0;
      bVar1 = false;
      do {
        if (((cVar9 != '\0') && (*(byte *)(iVar13 + 0x25) == uVar11)) ||
           (*(byte *)(iVar13 + 0x24) == uVar11)) {
LAB_001e3bc4:
          uVar12 = 0;
          goto joined_r0x001e3aa4;
        }
        if (*(byte *)(iVar13 + 0x4e) == uVar11) {
          if ((bVar1) && (local_54 != 10)) goto LAB_001e3a08;
          if (uVar12 == 0) {
            bVar1 = true;
            local_54 = 8;
            uVar15 = uVar12;
          }
          else {
            if (local_54 == 8) {
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
            uVar12 = 0;
            goto joined_r0x001e3aa4;
          }
LAB_001e3a08:
          if ((*(byte *)(iVar13 + 0x4c) != uVar11) && (*(byte *)(iVar13 + 0x4d) != uVar11))
          goto LAB_001e3bc4;
          if (uVar12 == 0) {
            local_54 = 0x10;
            bVar1 = false;
            uVar15 = uVar12;
          }
          else {
            if (local_54 != 0x10) {
              uVar12 = 0;
              goto LAB_001e3590;
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
          cVar9 = *(char *)(iVar13 + 0x10);
          uVar12 = 1;
          goto joined_r0x001e3aa4;
        }
        uVar11 = FUN_001d8014(&local_38);
        if (!bVar1) goto LAB_001e3c64;
        cVar9 = *(char *)(iVar13 + 0x10);
      } while( true );
    }
    cVar9 = *(char *)(iVar13 + 0x10);
    if (((cVar9 != '\0') && (*(byte *)(iVar13 + 0x25) == uVar11)) ||
       (*(byte *)(iVar13 + 0x24) == uVar11)) goto LAB_001e39c4;
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
      cVar9 = *(char *)(iVar13 + 0x10);
      goto LAB_001e39c4;
    }
  }
  cVar9 = *(char *)(iVar13 + 0x10);
  uVar15 = 0;
  uVar12 = 1;
  bVar1 = false;
joined_r0x001e3aa4:
  if (local_54 == 0x10) {
    local_58 = 0x16;
  }
  else {
LAB_001e3590:
    local_58 = local_54;
  }
  pvVar8 = *(void **)(DAT_001e3d38 + 0x1e35a8);
  local_2c[0] = (int)pvVar8 + 0xc;
  if (cVar9 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  if (bVar18) {
    iVar3 = -0x80000000;
  }
  else {
    iVar3 = 0x7fffffff;
  }
  uVar4 = __udivsi3(iVar3,local_54);
  uVar16 = uVar12;
  uVar17 = uVar12;
  if (*(char *)(iVar13 + 100) == '\0') {
    if (uVar12 == 0) {
      while( true ) {
        if (local_58 < 0xb) {
          if ((uVar11 < 0x30) || (local_58 + 0x30 <= uVar11)) goto LAB_001e3940;
          uVar10 = uVar11 - 0x30;
        }
        else {
          uVar10 = uVar11 - 0x30;
          if (9 < (uVar10 & 0xff)) {
            if ((uVar11 - 0x61 & 0xff) < 6) {
              uVar10 = uVar11 - 0x57;
            }
            else {
              if (5 < (uVar11 - 0x41 & 0xff)) goto LAB_001e3940;
              uVar10 = uVar11 - 0x37;
            }
          }
        }
        if (uVar4 < uVar17) {
          uVar16 = 1;
        }
        else {
          if (iVar3 - uVar10 < local_54 * uVar17) {
            uVar16 = 1;
          }
          uVar17 = uVar10 + local_54 * uVar17;
          uVar15 = uVar15 + 1;
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
        iVar14 = FUN_001df02c(&param_5);
        if (iVar2 == iVar14) break;
        uVar11 = FUN_001d8014(&local_38);
      }
LAB_001e3840:
      uVar11 = 0;
      uVar12 = 1;
    }
    else {
      uVar11 = 0;
      uVar16 = 0;
      uVar17 = 0;
    }
LAB_001e3848:
    iVar3 = *(int *)(local_2c[0] + -0xc);
  }
  else {
    if (uVar12 != 0) {
      uVar11 = 0;
      uVar16 = uVar11;
      uVar17 = uVar11;
      goto LAB_001e3848;
    }
    if ((*(char *)(iVar13 + 0x10) != '\0') && (*(byte *)(iVar13 + 0x25) == uVar11))
    goto LAB_001e3700;
    while (*(byte *)(iVar13 + 0x24) != uVar11) {
      pvVar5 = memchr((void *)(iVar13 + 0x4e),uVar11,local_58);
      if (pvVar5 == (void *)0x0) {
        uVar11 = 0;
        goto LAB_001e3848;
      }
      iVar2 = (int)pvVar5 - (int)(void *)(iVar13 + 0x4e);
      if (0xf < iVar2) {
        iVar2 = iVar2 + -6;
      }
      if (uVar4 < uVar17) {
        uVar16 = 1;
      }
      else {
        if ((uint)(iVar3 - iVar2) < local_54 * uVar17) {
          uVar16 = 1;
        }
        uVar17 = iVar2 + local_54 * uVar17;
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
        iVar2 = FUN_001df02c(&local_38);
        iVar14 = FUN_001df02c(&param_5);
        if (iVar2 == iVar14) goto LAB_001e3840;
        uVar11 = FUN_001d8014(&local_38);
        if ((*(char *)(iVar13 + 0x10) == '\0') || (*(byte *)(iVar13 + 0x25) != uVar11)) break;
LAB_001e3700:
        if (uVar15 == 0) {
          uVar11 = 1;
          uVar15 = 0;
          goto LAB_001e3848;
        }
        iVar2 = *(int *)(local_2c[0] + -0xc);
        uVar11 = iVar2 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar11) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar11);
          iVar2 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar2) = (char)uVar15;
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
LAB_001e3940:
    uVar11 = 0;
    iVar3 = *(int *)(local_2c[0] + -0xc);
  }
  if (iVar3 != 0) {
    FUN_001ee2f0(local_2c,uVar15 & 0xff);
    iVar3 = FUN_00204bac(*(undefined4 *)(iVar13 + 8),*(undefined4 *)(iVar13 + 0xc));
    if (iVar3 == 0) {
      *param_8 = 4;
    }
  }
  if ((((uVar15 == 0) && (!bVar1)) && (*(int *)(local_2c[0] + -0xc) == 0)) || (uVar11 != 0)) {
    uVar11 = 0;
  }
  else {
    if (uVar16 == 0) {
      if (bVar18) {
        uVar17 = -uVar17;
      }
      *param_9 = uVar17;
      puVar7 = param_9;
      goto LAB_001e38b4;
    }
    if (bVar18) {
      uVar11 = 0x80000000;
    }
    else {
      uVar11 = 0x7fffffff;
    }
  }
  *param_9 = uVar11;
  *param_8 = 4;
  puVar7 = param_8;
LAB_001e38b4:
  if (uVar12 != 0) {
    puVar7 = param_8;
  }
  pvVar5 = (void *)(local_2c[0] + -0xc);
  if (uVar12 != 0) {
    *puVar7 = *puVar7 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar5 != pvVar8) && (iVar3 = FUN_0021100c(local_2c[0] + -4,0xffffffff), iVar3 < 1)) {
    operator_delete(pvVar5);
  }
  return param_1;
LAB_001e3c64:
  cVar9 = *(char *)(iVar13 + 0x10);
  uVar12 = 0;
  goto joined_r0x001e3aa4;
}


