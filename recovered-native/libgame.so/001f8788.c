/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f8788  Symbol: FUN_001f8788 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int ** FUN_001f8788(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,uint *param_8,int param_9,wchar_t *param_10)

{
  wchar_t *__s;
  uint uVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  wchar_t wVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  wchar_t wVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *local_108;
  int *piStack_104;
  int *local_100;
  int *local_fc;
  int *local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined auStack_b0 [40];
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
  local_100 = param_3;
  local_fc = param_4;
  iVar2 = FUN_001f324c(iVar9);
  piVar3 = (int *)FUN_001f1db0(iVar9);
  uVar11 = 0;
  sVar4 = wcslen(__s);
  local_f4 = (int *)0x0;
  iVar9 = DAT_001f93f0 + 0x1f87e4;
  iVar13 = DAT_001f93f0 + 0x1f87ed;
  iVar10 = DAT_001f93f4 + 0x1f87f8;
  iVar14 = DAT_001f93f4 + 0x1f8801;
LAB_001f8808:
  while( true ) {
    iVar5 = FUN_001f67d0(&local_100);
    iVar6 = FUN_001f67d0(&param_5);
    if ((iVar5 == iVar6) || (local_f4 != (int *)0x0 || sVar4 <= uVar11)) {
      if (local_f4 != (int *)0x0 || uVar11 != sVar4) {
        *param_8 = *param_8 | 4;
      }
      *param_1 = local_100;
      param_1[1] = local_fc;
      return param_1;
    }
    iVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,__s[uVar11]);
    if (iVar5 == 0x25) break;
    wVar12 = __s[uVar11];
    wVar7 = FUN_001ef914(&local_100);
    if (wVar12 == wVar7) {
      if (local_100 == (int *)0x0) goto LAB_001f88b4;
      if ((uint)local_100[2] < (uint)local_100[3]) {
        local_100[2] = local_100[2] + 4;
      }
      else {
        (**(code **)(*local_100 + 0x28))();
      }
      local_fc = (int *)0xffffffff;
      uVar11 = uVar11 + 1;
    }
    else {
      local_f4 = (int *)((uint)local_f4 | 4);
LAB_001f88b4:
      uVar11 = uVar11 + 1;
    }
  }
  iVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,__s[uVar11 + 1],0);
  local_f0 = 0;
  uVar1 = uVar11 + 1;
  if (iVar5 == 0x45 || iVar5 == 0x4f) {
    iVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,__s[uVar11 + 2]);
    uVar1 = uVar11 + 2;
  }
  uVar11 = uVar1;
  switch(iVar5) {
  case 0x41:
    iVar5 = *(int *)(iVar2 + 8);
    local_cc = *(undefined4 *)(iVar5 + 0x2c);
    local_c8 = *(undefined4 *)(iVar5 + 0x30);
    local_c4 = *(undefined4 *)(iVar5 + 0x34);
    local_c0 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x38);
    local_bc = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x3c);
    local_b8 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x40);
    local_b4 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x44);
    puVar16 = &local_cc;
    goto LAB_001f8b38;
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
    puVar16 = &local_58;
    goto LAB_001f8c20;
  case 0x43:
    goto LAB_001f8c54;
  case 0x44:
    iVar8 = *piVar3;
    iVar5 = iVar10;
    iVar6 = iVar14;
    goto LAB_001f8ce8;
  case 0x45:
    break;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
    iVar5 = param_9 + 8;
    uVar17 = 0;
    uVar15 = 0x17;
    uVar18 = 2;
    goto LAB_001f8d84;
  case 0x49:
    iVar5 = param_9 + 8;
    uVar17 = 1;
    uVar15 = 0xc;
    uVar18 = 2;
    goto LAB_001f8d84;
  case 0x4a:
    break;
  case 0x4b:
    break;
  case 0x4c:
    break;
  case 0x4d:
    iVar5 = param_9 + 4;
    uVar17 = 0;
    uVar15 = 0x3b;
    goto LAB_001f8e1c;
  case 0x4e:
    break;
  case 0x4f:
    break;
  case 0x50:
    break;
  case 0x51:
    break;
  case 0x52:
    iVar8 = *piVar3;
    iVar5 = DAT_001f93fc + 0x1f8e3c;
    iVar6 = DAT_001f93fc + 0x1f8e42;
    goto LAB_001f8ce8;
  case 0x53:
    uVar17 = 0;
    uVar15 = 0x3d;
    iVar5 = param_9;
    goto LAB_001f8e1c;
  case 0x54:
    iVar8 = *piVar3;
    iVar5 = iVar9;
    iVar6 = iVar13;
LAB_001f8ce8:
    (**(code **)(iVar8 + 0x2c))(piVar3,iVar5,iVar6,auStack_b0);
    FUN_001f8788(&local_108,param_2,local_100,local_fc,param_5,param_6,param_7,&local_f4,param_9,
                 auStack_b0);
    local_100 = local_108;
    local_fc = piStack_104;
    uVar11 = uVar11 + 1;
    goto LAB_001f8808;
  case 0x55:
    break;
  case 0x56:
    break;
  case 0x57:
    break;
  case 0x58:
    uVar15 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x10);
    goto LAB_001f8a9c;
  case 0x59:
    goto LAB_001f8c54;
  case 0x5a:
    FUN_001ef914(&local_100);
    iVar5 = (**(code **)(*piVar3 + 8))(piVar3,1);
    if (iVar5 == 0) break;
    FUN_001f8470(&local_108,param_2,local_100,local_fc,param_5,param_6,&local_ec,
                 *(undefined4 *)(DAT_001f9400 + 0x1f8ee8),0xe,param_7,&local_f4);
    local_100 = local_108;
    local_fc = piStack_104;
    iVar5 = FUN_001f67d0(&local_100);
    iVar6 = FUN_001f67d0(&param_5);
    if (((iVar5 == iVar6) || (local_f4 != (int *)0x0)) || (local_ec != 0)) goto LAB_001f9374;
    iVar5 = FUN_001ef914(&local_100);
    iVar6 = (**(code **)(*piVar3 + 0x28))(piVar3,0x2d);
    if (iVar5 != iVar6) {
      iVar5 = FUN_001ef914(&local_100);
      iVar6 = (**(code **)(*piVar3 + 0x28))(piVar3,0x2b);
      if (iVar5 != iVar6) goto LAB_001f9374;
    }
    uVar15 = 0;
    FUN_001f683c(&local_108,param_2,local_100,local_fc,param_5,param_6,&local_ec,0,0x17,2,param_7,
                 &local_f4,0);
    local_100 = local_108;
    local_fc = piStack_104;
    FUN_001f683c(&local_108,param_2,local_108,piStack_104,param_5,param_6,&local_ec,uVar15,0x3b,2,
                 param_7,&local_f4);
    local_100 = local_108;
    local_fc = piStack_104;
    uVar11 = uVar11 + 1;
    goto LAB_001f8808;
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
    local_e8 = *(undefined4 *)(iVar5 + 0x48);
    local_e4 = *(undefined4 *)(iVar5 + 0x4c);
    local_e0 = *(undefined4 *)(iVar5 + 0x50);
    local_dc = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x54);
    local_d8 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x58);
    local_d4 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x5c);
    local_d0 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x60);
    puVar16 = &local_e8;
LAB_001f8b38:
    FUN_001f8470(&local_108,param_2,local_100,local_fc,param_5,param_6,param_9 + 0x18,puVar16,7,
                 param_7,&local_f4);
    local_100 = local_108;
    local_fc = piStack_104;
    uVar11 = uVar11 + 1;
    goto LAB_001f8808;
  case 0x62:
    goto LAB_001f90bc;
  case 99:
    uVar15 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x18);
    goto LAB_001f8a9c;
  case 100:
    uVar17 = 1;
    uVar15 = 0x1f;
    iVar5 = param_9 + 0xc;
LAB_001f8e1c:
    uVar18 = 2;
    goto LAB_001f8d84;
  case 0x65:
    uVar15 = FUN_001ef914(&local_100);
    iVar5 = (**(code **)(*piVar3 + 8))(piVar3,8,uVar15);
    if (iVar5 == 0) {
      iVar5 = param_9 + 0xc;
      uVar17 = 10;
      uVar15 = 0x1f;
      uVar18 = 2;
    }
    else {
      if (local_100 != (int *)0x0) {
        if ((uint)local_100[2] < (uint)local_100[3]) {
          local_100[2] = local_100[2] + 4;
        }
        else {
          (**(code **)(*local_100 + 0x28))();
        }
        local_fc = (int *)0xffffffff;
      }
      iVar5 = param_9 + 0xc;
      uVar17 = 1;
      uVar15 = 9;
      uVar18 = 1;
    }
LAB_001f8d84:
    FUN_001f683c(&local_108,param_2,local_100,local_fc,param_5,param_6,iVar5,uVar17,uVar15,uVar18,
                 param_7,&local_f4);
    local_100 = local_108;
    local_fc = piStack_104;
    uVar11 = uVar11 + 1;
    goto LAB_001f8808;
  case 0x66:
    break;
  case 0x67:
    break;
  case 0x68:
LAB_001f90bc:
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
    puVar16 = &local_88;
LAB_001f8c20:
    FUN_001f8470(&local_108,param_2,local_100,local_fc,param_5,param_6,param_9 + 0x10,puVar16,0xc,
                 param_7,&local_f4);
    uVar11 = uVar11 + 1;
    local_100 = local_108;
    local_fc = piStack_104;
    goto LAB_001f8808;
  case 0x69:
    break;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    FUN_001f683c(&local_108,param_2,local_100,local_fc,param_5,param_6,&local_f0,1,0xc,2,param_7,
                 &local_f4);
    local_100 = local_108;
    local_fc = piStack_104;
    if (local_f4 != (int *)0x0) goto LAB_001f88b4;
    *(int *)(param_9 + 0x10) = local_f0 + -1;
    uVar11 = uVar11 + 1;
    goto LAB_001f8808;
  case 0x6e:
    uVar15 = FUN_001ef914(&local_100);
    iVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,uVar15);
    if (iVar5 == 10) {
LAB_001f930c:
      if (local_100 == (int *)0x0) goto LAB_001f9374;
      if ((uint)local_100[2] < (uint)local_100[3]) {
        local_100[2] = local_100[2] + 4;
      }
      else {
        (**(code **)(*local_100 + 0x28))();
      }
      local_fc = (int *)0xffffffff;
      uVar11 = uVar11 + 1;
      goto LAB_001f8808;
    }
    break;
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
    uVar15 = FUN_001ef914(&local_100);
    iVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,uVar15);
    if (iVar5 == 9) goto LAB_001f930c;
    break;
  case 0x75:
    break;
  case 0x76:
    break;
  case 0x77:
    break;
  case 0x78:
    uVar15 = *(undefined4 *)(*(int *)(iVar2 + 8) + 8);
LAB_001f8a9c:
    FUN_001f8788(&local_108,param_2,local_100,local_fc,param_5,param_6,param_7,&local_f4,param_9,
                 uVar15);
    local_100 = local_108;
    local_fc = piStack_104;
    uVar11 = uVar11 + 1;
    goto LAB_001f8808;
  case 0x79:
LAB_001f8c54:
    FUN_001f683c(&local_108,param_2,local_100,local_fc,param_5,param_6,&local_f0,0,DAT_001f93f8,4,
                 param_7,&local_f4);
    local_100 = local_108;
    local_fc = piStack_104;
    if (local_f4 == (int *)0x0) {
      if (local_f0 < 0) {
        iVar5 = local_f0 + 100;
      }
      else {
        iVar5 = local_f0 + -0x76c;
      }
      *(int *)(param_9 + 0x14) = iVar5;
      uVar11 = uVar11 + 1;
    }
    else {
LAB_001f9374:
      uVar11 = uVar11 + 1;
    }
    goto LAB_001f8808;
  }
  local_f4 = (int *)((uint)local_f4 | 4);
  uVar11 = uVar11 + 1;
  goto LAB_001f8808;
}


