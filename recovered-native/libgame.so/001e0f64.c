/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e0f64  Symbol: FUN_001e0f64 */

int ** FUN_001e0f64(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,int param_9,char *param_10)

{
  byte bVar1;
  char *__s;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *local_e8;
  int *piStack_e4;
  int *local_e0;
  int *local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  __s = param_10;
  iVar9 = param_7 + 0x6c;
  local_e0 = param_3;
  local_dc = param_4;
  iVar2 = FUN_001dbb64(iVar9);
  piVar3 = (int *)FUN_001da5b8(iVar9);
  uVar10 = 0;
  sVar4 = strlen(__s);
  local_d8 = 0;
  iVar9 = DAT_001e1d24 + 0x1e0fc0;
  iVar12 = DAT_001e1d24 + 0x1e0fc9;
  iVar8 = DAT_001e1d28 + 0x1e0fd4;
  iVar13 = DAT_001e1d28 + 0x1e0fda;
LAB_001e0fe4:
  iVar5 = FUN_001df02c(&local_e0);
  iVar6 = FUN_001df02c(&param_5);
  if ((iVar5 == iVar6) || (local_d8 != 0 || sVar4 <= uVar10)) {
    if (local_d8 != 0 || uVar10 != sVar4) {
      *param_8 = *param_8 | 4;
    }
    *param_1 = local_e0;
    param_1[1] = local_dc;
    return param_1;
  }
  bVar1 = __s[uVar10];
  uVar7 = (uint)*(byte *)((int)piVar3 + bVar1 + 0x11d);
  if ((uVar7 == 0) && (uVar7 = (**(code **)(*piVar3 + 0x20))(piVar3), uVar7 != 0)) {
    *(char *)((int)piVar3 + bVar1 + 0x11d) = (char)uVar7;
  }
  if (uVar7 != 0x25) {
    bVar1 = __s[uVar10];
    uVar7 = FUN_001d8014(&local_e0);
    if (bVar1 == uVar7) {
      if (local_e0 != (int *)0x0) {
        if ((uint)local_e0[2] < (uint)local_e0[3]) {
          local_e0[2] = local_e0[2] + 1;
        }
        else {
          (**(code **)(*local_e0 + 0x28))();
        }
        local_dc = (int *)0xffffffff;
        uVar10 = uVar10 + 1;
        goto LAB_001e0fe4;
      }
    }
    else {
      local_d8 = local_d8 | 4;
    }
LAB_001e10b0:
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  }
  bVar1 = __s[uVar10 + 1];
  uVar7 = (uint)*(byte *)((int)piVar3 + bVar1 + 0x11d);
  if ((uVar7 == 0) && (uVar7 = (**(code **)(*piVar3 + 0x20))(piVar3), uVar7 != 0)) {
    *(char *)((int)piVar3 + bVar1 + 0x11d) = (char)uVar7;
  }
  local_d4 = 0;
  uVar11 = uVar10 + 1;
  if (uVar7 == 0x45 || uVar7 == 0x4f) {
    uVar11 = uVar10 + 2;
    bVar1 = __s[uVar11];
    uVar7 = (uint)*(byte *)((int)piVar3 + bVar1 + 0x11d);
    if ((uVar7 == 0) && (uVar7 = (**(code **)(*piVar3 + 0x20))(piVar3), uVar7 != 0)) {
      *(char *)((int)piVar3 + bVar1 + 0x11d) = (char)uVar7;
    }
  }
  uVar10 = uVar11;
  switch(uVar7) {
  case 0x41:
    iVar5 = *(int *)(iVar2 + 8);
    local_a4 = *(undefined4 *)(iVar5 + 0x2c);
    local_a0 = *(undefined4 *)(iVar5 + 0x30);
    local_9c = *(undefined4 *)(iVar5 + 0x34);
    local_98 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x38);
    local_94 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x3c);
    local_90 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x40);
    local_8c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x44);
    puVar15 = &local_a4;
    goto LAB_001e1650;
  case 0x42:
    iVar5 = *(int *)(iVar2 + 8);
    local_58 = *(undefined4 *)(iVar5 + 100);
    local_54 = *(undefined4 *)(iVar5 + 0x68);
    local_50 = *(undefined4 *)(iVar5 + 0x6c);
    local_4c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x70);
    local_48 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x74);
    local_44 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x78);
    local_40 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x7c);
    local_3c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x80);
    local_38 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x84);
    local_34 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x88);
    local_30 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x8c);
    local_2c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x90);
    puVar15 = &local_58;
    goto LAB_001e1734;
  case 0x43:
    goto LAB_001e1938;
  case 0x44:
    if (*(char *)(piVar3 + 7) == '\x01') {
      local_cc = *(undefined4 *)(DAT_001e1d38 + 0x1e1c80);
      local_c8 = *(undefined4 *)(DAT_001e1d38 + 0x1e1c84);
      local_c4 = (undefined)*(undefined4 *)(DAT_001e1d38 + 0x1e1c88);
    }
    else {
      if (*(char *)(piVar3 + 7) == '\0') {
        FUN_00204560(piVar3);
      }
      (**(code **)(*piVar3 + 0x1c))
                (piVar3,DAT_001e1d30 + 0x1e17b8,DAT_001e1d30 + 0x1e17c1,&local_cc);
    }
    goto LAB_001e1334;
  case 0x45:
    break;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
    iVar5 = param_9 + 8;
    uVar16 = 0;
    uVar14 = 0x17;
    uVar17 = 2;
    goto LAB_001e13b8;
  case 0x49:
    iVar5 = param_9 + 8;
    uVar16 = 1;
    uVar14 = 0xc;
    uVar17 = 2;
    goto LAB_001e13b8;
  case 0x4a:
    break;
  case 0x4b:
    break;
  case 0x4c:
    break;
  case 0x4d:
    iVar5 = param_9 + 4;
    uVar16 = 0;
    uVar14 = 0x3b;
    goto LAB_001e13ac;
  case 0x4e:
    break;
  case 0x4f:
    break;
  case 0x50:
    break;
  case 0x51:
    break;
  case 0x52:
    if (*(char *)(piVar3 + 7) == '\x01') {
      local_cc = *(undefined4 *)(DAT_001e1d40 + 0x1e1cc0);
      local_c8 = CONCAT22(local_c8._2_2_,(short)*(undefined4 *)(DAT_001e1d40 + 0x1e1cc4));
    }
    else {
      if (*(char *)(piVar3 + 7) == '\0') {
        FUN_00204560(piVar3);
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3,iVar8,iVar13,&local_cc);
    }
    goto LAB_001e1334;
  case 0x53:
    uVar16 = 0;
    uVar14 = 0x3d;
    iVar5 = param_9;
    goto LAB_001e13ac;
  case 0x54:
    if (*(char *)(piVar3 + 7) == '\x01') {
      local_cc = *(undefined4 *)(DAT_001e1d3c + 0x1e1ca0);
      local_c8 = *(undefined4 *)(DAT_001e1d3c + 0x1e1ca4);
      local_c4 = (undefined)*(undefined4 *)(DAT_001e1d3c + 0x1e1ca8);
    }
    else {
      if (*(char *)(piVar3 + 7) == '\0') {
        FUN_00204560(piVar3);
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3,iVar9,iVar12,&local_cc);
    }
LAB_001e1334:
    FUN_001e0f64(&local_e8,param_2,local_e0,local_dc,param_5,param_6,param_7,&local_d8,param_9,
                 &local_cc);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  case 0x55:
    break;
  case 0x56:
    break;
  case 0x57:
    break;
  case 0x58:
    uVar14 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x10);
    goto LAB_001e12d8;
  case 0x59:
    goto LAB_001e1938;
  case 0x5a:
    iVar5 = FUN_001d8014(&local_e0);
    if ((*(byte *)(piVar3[6] + iVar5) & 1) == 0) break;
    FUN_001e0c54(&local_e8,param_2,local_e0,local_dc,param_5,param_6,&local_d0,
                 *(undefined4 *)(DAT_001e1d2c + 0x1e1470),0xe,param_7,&local_d8);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    iVar5 = FUN_001df02c(&local_e0);
    iVar6 = FUN_001df02c(&param_5);
    if (((iVar5 == iVar6) || (local_d8 != 0)) || (local_d0 != 0)) goto LAB_001e1c00;
    uVar7 = FUN_001d8014(&local_e0);
    if (*(char *)(piVar3 + 7) == '\0') {
      FUN_00204560(piVar3);
      uVar11 = (**(code **)(*piVar3 + 0x18))(piVar3,0x2d);
    }
    else {
      uVar11 = (uint)*(byte *)((int)piVar3 + 0x4a);
    }
    if (uVar7 != uVar11) {
      uVar7 = FUN_001d8014(&local_e0);
      if (*(char *)(piVar3 + 7) == '\0') {
        FUN_00204560(piVar3);
        uVar11 = (**(code **)(*piVar3 + 0x18))(piVar3,0x2b);
      }
      else {
        uVar11 = (uint)*(byte *)(piVar3 + 0x12);
      }
      if (uVar7 != uVar11) goto LAB_001e1c00;
    }
    uVar14 = 0;
    FUN_001df09c(&local_e8,param_2,local_e0,local_dc,param_5,param_6,&local_d0,0,0x17,2,param_7,
                 &local_d8,0);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    FUN_001df09c(&local_e8,param_2,local_e8,piStack_e4,param_5,param_6,&local_d0,uVar14,0x3b,2,
                 param_7,&local_d8);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  case 0x5b:
    break;
  case 0x5c:
    break;
  case 0x5d:
    break;
  case 0x5e:
    break;
  case 0x5f:
    break;
  case 0x60:
    break;
  case 0x61:
    iVar5 = *(int *)(iVar2 + 8);
    local_c0 = *(undefined4 *)(iVar5 + 0x48);
    local_bc = *(undefined4 *)(iVar5 + 0x4c);
    local_b8 = *(undefined4 *)(iVar5 + 0x50);
    local_b4 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x54);
    local_b0 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x58);
    local_ac = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x5c);
    local_a8 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x60);
    puVar15 = &local_c0;
LAB_001e1650:
    FUN_001e0c54(&local_e8,param_2,local_e0,local_dc,param_5,param_6,param_9 + 0x18,puVar15,7,
                 param_7,&local_d8);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  case 0x62:
    goto LAB_001e1684;
  case 99:
    uVar14 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x18);
    goto LAB_001e12d8;
  case 100:
    uVar16 = 1;
    uVar14 = 0x1f;
    iVar5 = param_9 + 0xc;
LAB_001e13ac:
    uVar17 = 2;
    goto LAB_001e13b8;
  case 0x65:
    iVar5 = FUN_001d8014(&local_e0);
    if ((*(byte *)(piVar3[6] + iVar5) & 8) == 0) {
      iVar5 = param_9 + 0xc;
      uVar16 = 10;
      uVar14 = 0x1f;
      uVar17 = 2;
    }
    else {
      if (local_e0 != (int *)0x0) {
        if ((uint)local_e0[2] < (uint)local_e0[3]) {
          local_e0[2] = local_e0[2] + 1;
        }
        else {
          (**(code **)(*local_e0 + 0x28))();
        }
        local_dc = (int *)0xffffffff;
      }
      iVar5 = param_9 + 0xc;
      uVar16 = 1;
      uVar14 = 9;
      uVar17 = 1;
    }
LAB_001e13b8:
    FUN_001df09c(&local_e8,param_2,local_e0,local_dc,param_5,param_6,iVar5,uVar16,uVar14,uVar17,
                 param_7,&local_d8);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  case 0x66:
    break;
  case 0x67:
    break;
  case 0x68:
LAB_001e1684:
    iVar5 = *(int *)(iVar2 + 8);
    local_88 = *(undefined4 *)(iVar5 + 0x94);
    local_84 = *(undefined4 *)(iVar5 + 0x98);
    local_80 = *(undefined4 *)(iVar5 + 0x9c);
    local_7c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xa0);
    local_78 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xa4);
    local_74 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xa8);
    local_70 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xac);
    local_6c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xb0);
    local_68 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xb4);
    local_64 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xb8);
    local_60 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xbc);
    local_5c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc0);
    puVar15 = &local_88;
LAB_001e1734:
    FUN_001e0c54(&local_e8,param_2,local_e0,local_dc,param_5,param_6,param_9 + 0x10,puVar15,0xc,
                 param_7,&local_d8);
    uVar10 = uVar10 + 1;
    local_e0 = local_e8;
    local_dc = piStack_e4;
    goto LAB_001e0fe4;
  case 0x69:
    break;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    FUN_001df09c(&local_e8,param_2,local_e0,local_dc,param_5,param_6,&local_d4,1,0xc,2,param_7,
                 &local_d8);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    if (local_d8 != 0) goto LAB_001e10b0;
    *(int *)(param_9 + 0x10) = local_d4 + -1;
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  case 0x6e:
    iVar5 = FUN_001d8014(&local_e0);
    uVar7 = (uint)*(byte *)((int)piVar3 + iVar5 + 0x11d);
    if ((uVar7 == 0) && (uVar7 = (**(code **)(*piVar3 + 0x20))(piVar3,iVar5), uVar7 != 0)) {
      *(char *)((int)piVar3 + iVar5 + 0x11d) = (char)uVar7;
    }
    if (uVar7 != 10) break;
LAB_001e1ba4:
    if (local_e0 == (int *)0x0) goto LAB_001e1c00;
    if ((uint)local_e0[2] < (uint)local_e0[3]) {
      local_e0[2] = local_e0[2] + 1;
    }
    else {
      (**(code **)(*local_e0 + 0x28))();
    }
    local_dc = (int *)0xffffffff;
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  case 0x6f:
    break;
  case 0x70:
    break;
  case 0x71:
    break;
  case 0x72:
    break;
  case 0x73:
    break;
  case 0x74:
    iVar5 = FUN_001d8014(&local_e0);
    uVar7 = (uint)*(byte *)((int)piVar3 + iVar5 + 0x11d);
    if ((uVar7 == 0) && (uVar7 = (**(code **)(*piVar3 + 0x20))(piVar3,iVar5), uVar7 != 0)) {
      *(char *)((int)piVar3 + iVar5 + 0x11d) = (char)uVar7;
    }
    if (uVar7 == 9) goto LAB_001e1ba4;
    break;
  case 0x75:
    break;
  case 0x76:
    break;
  case 0x77:
    break;
  case 0x78:
    uVar14 = *(undefined4 *)(*(int *)(iVar2 + 8) + 8);
LAB_001e12d8:
    FUN_001e0f64(&local_e8,param_2,local_e0,local_dc,param_5,param_6,param_7,&local_d8,param_9,
                 uVar14);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    uVar10 = uVar10 + 1;
    goto LAB_001e0fe4;
  case 0x79:
LAB_001e1938:
    FUN_001df09c(&local_e8,param_2,local_e0,local_dc,param_5,param_6,&local_d4,0,DAT_001e1d34,4,
                 param_7,&local_d8);
    local_e0 = local_e8;
    local_dc = piStack_e4;
    if (local_d8 == 0) {
      if (local_d4 < 0) {
        iVar5 = local_d4 + 100;
      }
      else {
        iVar5 = local_d4 + -0x76c;
      }
      *(int *)(param_9 + 0x14) = iVar5;
      uVar10 = uVar10 + 1;
    }
    else {
LAB_001e1c00:
      uVar10 = uVar10 + 1;
    }
    goto LAB_001e0fe4;
  }
  local_d8 = local_d8 | 4;
  uVar10 = uVar10 + 1;
  goto LAB_001e0fe4;
}


