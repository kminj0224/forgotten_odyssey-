/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018b7c  Symbol: FUN_00018b7c */

/* WARNING: Type propagation algorithm not settling */

int * FUN_00018b7c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;
  byte bVar15;
  int **local_20;
  int *local_1c [2];
  
  pbVar8 = *(byte **)(param_1 + 0xc);
  uVar10 = (uint)*pbVar8;
  if ((uVar10 == 0x72 || uVar10 == 0x56) || (uVar10 == 0x4b)) {
    piVar2 = (int *)FUN_00018264(param_1,&local_20,0);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar3 = FUN_00018b7c(param_1);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      return (int *)0x0;
    }
    iVar3 = FUN_00018a78(param_1,local_20);
    goto joined_r0x00018d1c;
  }
  switch(uVar10) {
  case 0x30:
    goto LAB_00018f0c;
  case 0x31:
    goto LAB_00018f0c;
  case 0x32:
    goto LAB_00018f0c;
  case 0x33:
    goto LAB_00018f0c;
  case 0x34:
    goto LAB_00018f0c;
  case 0x35:
    goto LAB_00018f0c;
  case 0x36:
    goto LAB_00018f0c;
  case 0x37:
    goto LAB_00018f0c;
  case 0x38:
    goto LAB_00018f0c;
  case 0x39:
    goto LAB_00018f0c;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    break;
  case 0x40:
    break;
  case 0x41:
    pbVar7 = pbVar8 + 1;
    *(byte **)(param_1 + 0xc) = pbVar7;
    if (pbVar8[1] == 0x5f) {
      ppiVar5 = (int **)0x0;
LAB_00019208:
      *(byte **)(param_1 + 0xc) = pbVar7 + 1;
      uVar4 = FUN_00018b7c(param_1);
      local_20 = (int **)FUN_00017fe4(param_1,0x26,ppiVar5,uVar4);
    }
    else {
      pbVar12 = pbVar7;
      if (pbVar8[1] - 0x30 < 10) {
        do {
          pbVar9 = pbVar12 + 1;
          *(byte **)(param_1 + 0xc) = pbVar9;
          pbVar8 = pbVar12 + 1;
          pbVar12 = pbVar9;
        } while (*pbVar8 - 0x30 < 10);
        ppiVar5 = (int **)FUN_00018180(param_1,pbVar7,(int)pbVar9 - (int)pbVar7);
        local_20 = ppiVar5;
        if (ppiVar5 != (int **)0x0) {
LAB_00019118:
          pbVar7 = *(byte **)(param_1 + 0xc);
          if (*pbVar7 != 0x5f) goto LAB_0001912c;
          goto LAB_00019208;
        }
      }
      else {
        ppiVar5 = (int **)FUN_0001a624();
        if (ppiVar5 != (int **)0x0) goto LAB_00019118;
        local_20 = (int **)0x0;
      }
    }
    goto LAB_00018d58;
  case 0x42:
    break;
  case 0x43:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    uVar4 = FUN_00018b7c();
    local_20 = (int **)FUN_00017fe4(param_1,0x21,uVar4,0);
    goto LAB_00018d58;
  case 0x44:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    bVar15 = pbVar8[1];
    if (bVar15 == 0) {
      return (int *)0x0;
    }
    *(byte **)(param_1 + 0xc) = pbVar8 + 2;
    switch(bVar15) {
    case 0x46:
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 < *(int *)(param_1 + 0x18)) {
        *(int *)(param_1 + 0x14) = iVar3 + 1;
        local_20 = (int **)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
      }
      else {
        local_20 = (int **)0x0;
      }
      *local_20 = (int *)0x28;
      bVar14 = pbVar8[2] - 0x30 < 10;
      *(ushort *)(local_20 + 2) = (ushort)bVar14;
      if (bVar14) {
        FUN_000181e8();
      }
      ppiVar5 = local_20;
      piVar2 = (int *)FUN_00018b7c(param_1);
      ppiVar5[1] = piVar2;
      if (local_20[1] != (int *)0x0) {
        FUN_000181e8(param_1);
        bVar15 = **(byte **)(param_1 + 0xc);
        if (bVar15 != 0) {
          *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
          bVar15 = bVar15 == 0x73;
        }
        *(ushort *)((int)local_20 + 10) = (ushort)bVar15;
        return (int *)local_20;
      }
      return (int *)0x0;
    case 0x47:
      break;
    case 0x48:
      break;
    case 0x49:
      break;
    case 0x4a:
      break;
    case 0x4b:
      break;
    case 0x4c:
      break;
    case 0x4d:
      break;
    case 0x4e:
      break;
    case 0x4f:
      break;
    case 0x50:
      break;
    case 0x51:
      break;
    case 0x52:
      break;
    case 0x53:
      break;
    case 0x54:
      goto LAB_00018d74;
    case 0x55:
      break;
    case 0x56:
      break;
    case 0x57:
      break;
    case 0x58:
      break;
    case 0x59:
      break;
    case 0x5a:
      break;
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
      break;
    case 0x62:
      break;
    case 99:
      break;
    case 100:
      iVar3 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) <= iVar3) {
LAB_000195d4:
        piVar2 = (int *)0x0;
        iVar6 = iRam00000004;
        goto LAB_00019304;
      }
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (piVar2 != (int *)0x0) {
        iVar6 = DAT_00019670 + 0x197d0;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 0x23;
        piVar2[1] = iVar6;
        goto LAB_00019304;
      }
      goto LAB_00019628;
    case 0x65:
      iVar3 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) <= iVar3) goto LAB_000195d4;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (piVar2 != (int *)0x0) {
        iVar6 = DAT_0001966c + 0x19798;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 0x23;
        piVar2[1] = iVar6;
        goto LAB_00019304;
      }
      goto LAB_00019628;
    case 0x66:
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 < *(int *)(param_1 + 0x18)) {
        piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
        *(int *)(param_1 + 0x14) = iVar3 + 1;
        if (piVar2 != (int *)0x0) {
          iVar6 = DAT_00019668 + 0x19724;
          *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 0x23;
          piVar2[1] = iVar6;
          goto LAB_00019304;
        }
      }
      else {
LAB_00019624:
        piVar2 = (int *)0x0;
      }
      goto LAB_00019628;
    case 0x67:
      break;
    case 0x68:
      iVar3 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) <= iVar3) goto LAB_000195d4;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (piVar2 != (int *)0x0) {
        iVar6 = DAT_00019664 + 0x19714;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 0x23;
        piVar2[1] = iVar6;
        goto LAB_00019304;
      }
      goto LAB_00019628;
    case 0x69:
      iVar3 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) <= iVar3) goto LAB_000195d4;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (piVar2 != (int *)0x0) {
        iVar6 = DAT_00019660 + 0x196f0;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 0x23;
        piVar2[1] = iVar6;
        goto LAB_00019304;
      }
      goto LAB_00019628;
    case 0x6a:
      break;
    case 0x6b:
      break;
    case 0x6c:
      break;
    case 0x6d:
      break;
    case 0x6e:
      iVar3 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) <= iVar3) goto LAB_00019624;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (piVar2 != (int *)0x0) {
        iVar6 = DAT_0001965c + 0x196b8;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 0x23;
        piVar2[1] = iVar6;
        goto LAB_00019304;
      }
      goto LAB_00019628;
    case 0x6f:
      break;
    case 0x70:
      uVar4 = FUN_00018b7c();
      piVar2 = (int *)FUN_00017fe4(param_1,0x41,uVar4,0);
      return piVar2;
    case 0x71:
      break;
    case 0x72:
      break;
    case 0x73:
      iVar3 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) <= iVar3) goto LAB_000195d4;
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (piVar2 != (int *)0x0) {
        iVar6 = DAT_00019658 + 0x19614;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 0x23;
        piVar2[1] = iVar6;
        goto LAB_00019304;
      }
LAB_00019628:
      iVar6 = piVar2[1];
LAB_00019304:
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(iVar6 + 4);
      return piVar2;
    case 0x74:
LAB_00018d74:
      uVar4 = FUN_0001a624();
      piVar2 = (int *)FUN_00017fe4(param_1,0x3b,uVar4,0);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      cVar1 = **(char **)(param_1 + 0xc);
      if ((cVar1 != '\0') &&
         (*(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1, cVar1 == 'E')) {
        return piVar2;
      }
      break;
    case 0x75:
      break;
    case 0x76:
      if (pbVar8[2] == 0x5f) {
        *(byte **)(param_1 + 0xc) = pbVar8 + 3;
        iVar3 = FUN_0001a624();
        if (iVar3 == 0) {
          return (int *)0x0;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x18) <= iVar6) {
          return (int *)0x0;
        }
        iVar3 = *(int *)(param_1 + 0x10) + iVar6 * 0xc;
        *(int *)(param_1 + 0x14) = iVar6 + 1;
        if (iVar3 == 0) {
          return (int *)0x0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar6 * 0xc) = 0x3a;
        uVar4 = FUN_000181e8();
        *(undefined4 *)(iVar3 + 4) = uVar4;
      }
      if (**(char **)(param_1 + 0xc) == '_') {
        *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
        uVar4 = FUN_00018b7c(param_1);
        piVar2 = (int *)FUN_00017fe4(param_1,0x29,iVar3,uVar4);
        return piVar2;
      }
    }
    break;
  case 0x45:
    break;
  case 0x46:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    if (pbVar8[1] == 0x59) {
      *(byte **)(param_1 + 0xc) = pbVar8 + 2;
    }
    local_20 = (int **)FUN_00019768(param_1,1);
    if (**(char **)(param_1 + 0xc) == 'E') {
      *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    }
    else {
LAB_0001912c:
      local_20 = (int **)0x0;
    }
    goto LAB_00018d58;
  case 0x47:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    uVar4 = FUN_00018b7c();
    local_20 = (int **)FUN_00017fe4(param_1,0x22,uVar4,0);
    goto LAB_00018d58;
  case 0x48:
    break;
  case 0x49:
    break;
  case 0x4a:
    break;
  case 0x4b:
    break;
  case 0x4c:
    break;
  case 0x4d:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    uVar4 = FUN_00018b7c();
    ppiVar5 = (int **)FUN_00018264(param_1,local_1c,1);
    if (ppiVar5 == (int **)0x0) {
      local_20 = (int **)0x0;
    }
    else {
      local_20 = (int **)FUN_00018b7c(param_1);
      *ppiVar5 = (int *)local_20;
      if ((local_20 != (int **)0x0) &&
         (((ppiVar5 == local_1c || (*local_20 == (int *)0x25)) ||
          (local_20 = (int **)FUN_00018a78(param_1,local_1c[0]), local_20 != (int **)0x0)))) {
        local_20 = (int **)FUN_00017fe4(param_1,0x27,uVar4,local_1c[0]);
      }
    }
    goto LAB_00018d58;
  case 0x4e:
    goto LAB_00018f0c;
  case 0x4f:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    uVar4 = FUN_00018b7c();
    local_20 = (int **)FUN_00017fe4(param_1,0x20,uVar4,0);
    goto LAB_00018d58;
  case 0x50:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    uVar4 = FUN_00018b7c();
    local_20 = (int **)FUN_00017fe4(param_1,0x1e,uVar4,0);
    goto LAB_00018d58;
  case 0x51:
    break;
  case 0x52:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    uVar4 = FUN_00018b7c();
    local_20 = (int **)FUN_00017fe4(param_1,0x1f,uVar4,0);
    goto LAB_00018d58;
  case 0x53:
    uVar10 = (uint)pbVar8[1];
    bVar14 = 0x5e < uVar10;
    if (uVar10 != 0x5f) {
      bVar14 = 8 < uVar10 - 0x30;
    }
    if ((!bVar14 || (uVar10 == 0x5f || uVar10 - 0x30 == 9)) || (uVar10 - 0x41 < 0x1a)) {
      local_20 = (int **)FUN_0001843c(param_1,0);
      if (**(char **)(param_1 + 0xc) != 'I') {
        return (int *)local_20;
      }
LAB_00018f50:
      ppiVar5 = local_20;
      uVar4 = FUN_0001aa64(param_1);
      local_20 = (int **)FUN_00017fe4(param_1,4,ppiVar5,uVar4);
    }
    else {
      local_20 = (int **)FUN_0001ac40();
      if ((local_20 != (int **)0x0) && (*local_20 == (int *)0x16)) {
        return (int *)local_20;
      }
    }
    goto LAB_00018d58;
  case 0x54:
    local_20 = (int **)FUN_000183bc();
    if (**(char **)(param_1 + 0xc) == 'I') {
      iVar3 = FUN_00018a78(param_1,local_20);
      if (iVar3 == 0) {
        return (int *)0x0;
      }
      goto LAB_00018f50;
    }
    goto LAB_00018d58;
  case 0x55:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    local_20 = (int **)FUN_000188f4();
    uVar4 = FUN_00018b7c(param_1);
    local_20 = (int **)FUN_00017fe4(param_1,0x1d,uVar4,local_20);
    goto LAB_00018d58;
  case 0x56:
    break;
  case 0x57:
    break;
  case 0x58:
    break;
  case 0x59:
    break;
  case 0x5a:
LAB_00018f0c:
    local_20 = (int **)FUN_0001ac40();
    goto LAB_00018d58;
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
    goto LAB_00019014;
  case 0x62:
    goto LAB_00019014;
  case 99:
    goto LAB_00019014;
  case 100:
    goto LAB_00019014;
  case 0x65:
    goto LAB_00019014;
  case 0x66:
    goto LAB_00019014;
  case 0x67:
    goto LAB_00019014;
  case 0x68:
    goto LAB_00019014;
  case 0x69:
    goto LAB_00019014;
  case 0x6a:
    goto LAB_00019014;
  case 0x6b:
    break;
  case 0x6c:
    goto LAB_00019014;
  case 0x6d:
    goto LAB_00019014;
  case 0x6e:
    goto LAB_00019014;
  case 0x6f:
    goto LAB_00019014;
  case 0x70:
    break;
  case 0x71:
    break;
  case 0x72:
    break;
  case 0x73:
    goto LAB_00019014;
  case 0x74:
    goto LAB_00019014;
  case 0x75:
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    uVar4 = FUN_000188f4();
    local_20 = (int **)FUN_00017fe4(param_1,0x24,uVar4,0);
LAB_00018d58:
    iVar3 = FUN_00018a78(param_1,local_20);
joined_r0x00018d1c:
    if (iVar3 == 0) {
      return (int *)0x0;
    }
    return (int *)local_20;
  case 0x76:
    goto LAB_00019014;
  case 0x77:
    goto LAB_00019014;
  case 0x78:
    goto LAB_00019014;
  case 0x79:
    goto LAB_00019014;
  case 0x7a:
LAB_00019014:
    iVar3 = DAT_00019654 + 0x19024 + uVar10 * 0x14;
    iVar6 = iVar3 + -0x6d0;
    if (iVar6 == 0) {
      piVar2 = (int *)0x0;
      iVar3 = *(int *)(iVar3 + -0x6cc);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x14);
      if (iVar11 < *(int *)(param_1 + 0x18)) {
        iVar13 = *(int *)(param_1 + 0x10);
        piVar2 = (int *)(iVar13 + iVar11 * 0xc);
        *(int *)(param_1 + 0x14) = iVar11 + 1;
        iVar3 = iRam00000004;
        if (piVar2 != (int *)0x0) {
          piVar2[1] = iVar6;
          pbVar8 = *(byte **)(param_1 + 0xc);
          *(undefined4 *)(iVar13 + iVar11 * 0xc) = 0x23;
          iVar3 = iVar6;
        }
      }
      else {
        piVar2 = (int *)0x0;
        iVar3 = iRam00000004;
      }
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(iVar3 + 4);
    *(byte **)(param_1 + 0xc) = pbVar8 + 1;
    return piVar2;
  }
  return (int *)0x0;
}


