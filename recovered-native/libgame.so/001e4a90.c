/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e4a90  Symbol: FUN_001e4a90 */

int ** FUN_001e4a90(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  size_t local_54;
  size_t local_50;
  int *local_38;
  int *local_34;
  int local_2c [2];
  
  iVar3 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  iVar2 = FUN_001c60f4(DAT_001e531c + 0x1e4aac);
  iVar13 = *(int *)(*(int *)(iVar3 + 0x6c) + 0xc);
  iVar11 = *(int *)(iVar13 + iVar2 * 4);
  if (iVar11 == 0) {
    piVar6 = (int *)operator_new(0x68);
    *piVar6 = DAT_001e5324 + 0x1e51dc;
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
  iVar3 = FUN_001df02c(&local_38);
  iVar2 = FUN_001df02c(&param_5);
  if (iVar3 == iVar2) {
    uVar10 = 0;
    bVar17 = false;
  }
  else {
    uVar10 = FUN_001d8014(&local_38);
    bVar17 = *(byte *)(iVar11 + 0x4a) == uVar10;
    if ((!bVar17) && (*(byte *)(iVar11 + 0x4b) != uVar10)) {
      cVar8 = *(char *)(iVar11 + 0x10);
LAB_001e4f9c:
      uVar14 = 0;
      bVar1 = false;
      do {
        if (((cVar8 != '\0') && (*(byte *)(iVar11 + 0x25) == uVar10)) ||
           (*(byte *)(iVar11 + 0x24) == uVar10)) {
LAB_001e5184:
          uVar12 = 0;
          goto joined_r0x001e507c;
        }
        if (*(byte *)(iVar11 + 0x4e) == uVar10) {
          if ((bVar1) && (local_50 != 10)) goto LAB_001e4fe0;
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
            goto joined_r0x001e507c;
          }
LAB_001e4fe0:
          if ((*(byte *)(iVar11 + 0x4c) != uVar10) && (*(byte *)(iVar11 + 0x4d) != uVar10))
          goto LAB_001e5184;
          if (uVar12 == 0) {
            local_50 = 0x10;
            bVar1 = false;
            uVar14 = uVar12;
          }
          else {
            if (local_50 != 0x10) {
              uVar12 = 0;
              goto LAB_001e4b2c;
            }
            bVar1 = false;
            uVar14 = 0;
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
          cVar8 = *(char *)(iVar11 + 0x10);
          uVar12 = 1;
          goto joined_r0x001e507c;
        }
        uVar10 = FUN_001d8014(&local_38);
        if (!bVar1) goto LAB_001e5224;
        cVar8 = *(char *)(iVar11 + 0x10);
      } while( true );
    }
    cVar8 = *(char *)(iVar11 + 0x10);
    if (((cVar8 != '\0') && (*(byte *)(iVar11 + 0x25) == uVar10)) ||
       (*(byte *)(iVar11 + 0x24) == uVar10)) goto LAB_001e4f9c;
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
      cVar8 = *(char *)(iVar11 + 0x10);
      goto LAB_001e4f9c;
    }
  }
  cVar8 = *(char *)(iVar11 + 0x10);
  uVar14 = 0;
  uVar12 = 1;
  bVar1 = false;
joined_r0x001e507c:
  if (local_50 == 0x10) {
    local_54 = 0x16;
  }
  else {
LAB_001e4b2c:
    local_54 = local_50;
  }
  pvVar7 = *(void **)(DAT_001e5320 + 0x1e4b44);
  local_2c[0] = (int)pvVar7 + 0xc;
  if (cVar8 != '\0') {
    FUN_001ee274(local_2c,0x20);
  }
  uVar4 = __udivsi3(0xffffffff,local_50);
  uVar15 = uVar12;
  uVar16 = uVar12;
  if (*(char *)(iVar11 + 100) == '\0') {
    if (uVar12 == 0) {
      while( true ) {
        if (local_54 < 0xb) {
          if ((uVar10 < 0x30) || (local_54 + 0x30 <= uVar10)) goto LAB_001e4ec8;
          uVar9 = uVar10 - 0x30;
        }
        else {
          uVar9 = uVar10 - 0x30;
          if (9 < (uVar9 & 0xff)) {
            if ((uVar10 - 0x61 & 0xff) < 6) {
              uVar9 = uVar10 - 0x57;
            }
            else {
              if (5 < (uVar10 - 0x41 & 0xff)) goto LAB_001e4ec8;
              uVar9 = uVar10 - 0x37;
            }
          }
        }
        if (uVar4 < uVar16) {
          uVar15 = 1;
        }
        else {
          uVar14 = uVar14 + 1;
          if (~uVar9 < local_50 * uVar16) {
            uVar15 = 1;
          }
          uVar16 = uVar9 + local_50 * uVar16;
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
LAB_001e4dc0:
      uVar10 = 0;
      uVar12 = 1;
    }
    else {
      uVar10 = 0;
      uVar15 = 0;
      uVar16 = 0;
    }
LAB_001e4dc8:
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 == 0) {
      pvVar5 = (void *)(local_2c[0] + -0xc);
      iVar2 = local_2c[0];
    }
    else {
LAB_001e4ee0:
      uVar4 = iVar3 + 1;
      if ((*(uint *)(local_2c[0] + -8) < uVar4) || (0 < *(int *)(local_2c[0] + -4))) {
        FUN_001ee274(local_2c,uVar4);
        iVar3 = *(int *)(local_2c[0] + -0xc);
      }
      iVar2 = local_2c[0];
      *(char *)(local_2c[0] + iVar3) = (char)uVar14;
      if ((void *)(local_2c[0] + -0xc) != pvVar7) {
        *(undefined4 *)(local_2c[0] + -4) = 0;
        *(uint *)(local_2c[0] + -0xc) = uVar4;
        *(undefined *)(local_2c[0] + uVar4) = 0;
      }
      pvVar5 = (void *)(local_2c[0] + -0xc);
      iVar3 = FUN_00204bac(*(undefined4 *)(iVar11 + 8),*(undefined4 *)(iVar11 + 0xc));
      if (iVar3 == 0) {
        *param_8 = 4;
      }
    }
  }
  else {
    if (uVar12 != 0) {
      uVar10 = 0;
      uVar15 = uVar10;
      uVar16 = uVar10;
      goto LAB_001e4dc8;
    }
    if ((*(char *)(iVar11 + 0x10) != '\0') && (*(byte *)(iVar11 + 0x25) == uVar10))
    goto LAB_001e4c84;
    while (*(byte *)(iVar11 + 0x24) != uVar10) {
      pvVar5 = memchr((void *)(iVar11 + 0x4e),uVar10,local_54);
      if (pvVar5 == (void *)0x0) {
        uVar10 = 0;
        goto LAB_001e4dc8;
      }
      uVar10 = (int)pvVar5 - (int)(void *)(iVar11 + 0x4e);
      if (0xf < (int)uVar10) {
        uVar10 = uVar10 - 6;
      }
      if (uVar4 < uVar16) {
        uVar15 = 1;
      }
      else {
        uVar14 = uVar14 + 1;
        if (~uVar10 < local_50 * uVar16) {
          uVar15 = 1;
        }
        uVar16 = uVar10 + local_50 * uVar16;
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
        if (iVar3 == iVar2) goto LAB_001e4dc0;
        uVar10 = FUN_001d8014(&local_38);
        if ((*(char *)(iVar11 + 0x10) == '\0') || (*(byte *)(iVar11 + 0x25) != uVar10)) break;
LAB_001e4c84:
        if (uVar14 == 0) {
          uVar10 = 1;
          uVar14 = 0;
          goto LAB_001e4dc8;
        }
        iVar3 = *(int *)(local_2c[0] + -0xc);
        uVar10 = iVar3 + 1;
        if ((*(uint *)(local_2c[0] + -8) < uVar10) || (0 < *(int *)(local_2c[0] + -4))) {
          FUN_001ee274(local_2c,uVar10);
          iVar3 = *(int *)(local_2c[0] + -0xc);
        }
        *(char *)(local_2c[0] + iVar3) = (char)uVar14;
        if ((void *)(local_2c[0] + -0xc) == pvVar7) {
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
LAB_001e4ec8:
    uVar10 = 0;
    iVar3 = *(int *)(local_2c[0] + -0xc);
    if (iVar3 != 0) goto LAB_001e4ee0;
    pvVar5 = (void *)(local_2c[0] + -0xc);
    iVar2 = local_2c[0];
  }
  if ((((uVar14 == 0) && (!bVar1)) && (*(int *)(iVar2 + -0xc) == 0)) || (uVar10 != 0)) {
    uVar10 = 0;
  }
  else {
    if (uVar15 == 0) {
      if (bVar17) {
        uVar16 = -uVar16;
      }
      *param_9 = uVar16;
      goto LAB_001e4e40;
    }
    uVar10 = 0xffffffff;
  }
  *param_9 = uVar10;
  *param_8 = 4;
LAB_001e4e40:
  if (uVar12 != 0) {
    *param_8 = *param_8 | 2;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  if ((pvVar5 != pvVar7) && (iVar3 = FUN_0021100c(iVar2 + -4,0xffffffff), iVar3 < 1)) {
    operator_delete(pvVar5);
  }
  return param_1;
LAB_001e5224:
  cVar8 = *(char *)(iVar11 + 0x10);
  uVar12 = 0;
  goto joined_r0x001e507c;
}


