/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a0bd4  Symbol: FUN_001a0bd4 */

undefined4 FUN_001a0bd4(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint local_30;
  
  iVar10 = DAT_001a0e34 + 0x1a0be0;
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  iVar6 = *(int *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x74);
  uVar9 = *(undefined4 *)(param_1 + 0x78);
  iVar11 = *(int *)(param_1 + 0x18);
  FUN_0017c498();
  if ((*(int *)(param_2 + 4) != 9) && (*(int *)(param_2 + 4) != 0xd)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = *(int *)(param_2 + 0x3c);
    if ((*(int *)(param_2 + 0x3c) == 0) && (iVar3 = iVar6, *(int *)(param_2 + 0x4c) != 1)) {
      iVar3 = FUN_001a313c();
    }
  }
  else {
    *(int *)(param_2 + 0x3c) = *(int *)(param_1 + 0x10);
    iVar3 = iVar6;
  }
  if (((*(int *)(param_2 + 4) == 0xd) && ((*(uint *)(param_1 + 0x20) & 0x30) == 0)) ||
     ((int)(*(uint *)(param_1 + 0x20) << 0x19) < 0)) {
    if (iVar3 == 0) {
      iVar3 = FUN_0019b654(param_2);
      if (iVar3 == 0) {
        iVar3 = iVar10 + DAT_001a0e38;
      }
    }
    else {
      FUN_0019b378(param_2,iVar3);
    }
    if (((iVar6 == 0) && (*(int *)(iVar11 + 0xc) == 0)) &&
       ((*(int *)(iVar11 + 0x14) == 0 && (iVar6 = FUN_0019fcc4(param_1,iVar3), iVar6 < 0)))) {
      *(undefined4 *)(param_2 + 0x3c) = uVar2;
      return 0xffffffff;
    }
    FUN_0019b260(iVar11,param_2,iVar3,*(int *)(param_1 + 0x20) << 0x1f < 0);
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    *(undefined4 *)(param_2 + 0x3c) = uVar2;
    return 0;
  }
  if ((*(int *)(param_2 + 4) != 9) && ((*(uint *)(param_1 + 0x20) & 0x30) == 0)) {
    bVar1 = false;
    goto LAB_001a0e10;
  }
  uVar4 = FUN_001a3e20(iVar3);
  if ((iVar3 != 0) &&
     ((((iVar6 == 0 && (*(int *)(iVar11 + 0xc) == 0)) && (*(int *)(iVar11 + 0x14) == 0)) &&
      (-1 < *(int *)(param_1 + 0x20) << 0x1e)))) {
    if ((uVar4 < 2) || (uVar4 == 0x16)) {
      bVar1 = false;
    }
    else {
      iVar5 = FUN_0019fcc4(param_1,iVar3);
      if (iVar5 < 0) {
        *(undefined4 *)(param_2 + 0x3c) = uVar2;
        return 0xffffffff;
      }
      bVar1 = true;
    }
    if (*(int *)(param_1 + 0x74) == iVar10 + DAT_001a0e3c) {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    if (*(int *)(param_1 + 0x78) == iVar10 + DAT_001a0e3c) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
  }
  else {
    bVar1 = false;
  }
  if (-1 < *(int *)(param_1 + 0x20) << 0x1e) {
    FUN_00190950(iVar11,0xe,iVar10 + DAT_001a0e40);
    if (*(int *)(param_2 + 0x38) == 0) {
      FUN_00190950(iVar11,5,iVar10 + DAT_001a0e44);
    }
    else {
      FUN_0018ac20(*(undefined4 *)(iVar11 + 0x10));
    }
    if (iVar3 != 0) {
      FUN_00190950(iVar11,10,iVar10 + DAT_001a0e48);
      FUN_0018ac20(*(undefined4 *)(iVar11 + 0x10),iVar3);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      uVar7 = 0x10;
      iVar3 = DAT_001a0e4c;
LAB_001a0d9a:
      FUN_00190950(iVar11,uVar7,iVar10 + iVar3);
    }
    else if (*(int *)(param_2 + 0x28) == 1) {
      uVar7 = 0x11;
      iVar3 = DAT_001a0e50;
      goto LAB_001a0d9a;
    }
    FUN_00190950(iVar11,3,iVar10 + DAT_001a0e54);
  }
  local_30 = (uint)(*(int *)(param_1 + 0x20) << 0x1b) >> 0x1f;
  if (((-1 < *(int *)(param_1 + 0x20) << 0x1c) && (iVar3 = FUN_00189564(param_2), iVar3 != 0)) &&
     (local_30 = FUN_0019fec0(*(undefined4 *)(iVar3 + 0x38),*(undefined4 *)(iVar3 + 0x34)),
     (int)local_30 < 0)) {
    local_30 = 0;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 != 0) {
    iVar10 = iVar10 + DAT_001a0e58;
    do {
      *(undefined4 *)(param_1 + 0x24) = 0;
      if (local_30 == 0) {
        FUN_001a0e5c(param_1,iVar3);
      }
      else {
        FUN_001a0604(param_1,iVar3);
      }
      FUN_00190950(iVar11,1,iVar10);
      iVar3 = *(int *)(iVar3 + 0x18);
    } while (iVar3 != 0);
  }
LAB_001a0e10:
  if ((bVar1) && (iVar6 == 0)) {
    FUN_0019ff8c(param_1);
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x78) = uVar9;
  }
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  return 0;
}


