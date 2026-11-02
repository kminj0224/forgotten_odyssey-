/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00212768  Symbol: __aeabi_unwind_cpp_pr0 */

/* WARNING: Removing unreachable block (ram,0x00212410) */
/* WARNING: Removing unreachable block (ram,0x00212458) */

undefined4 __aeabi_unwind_cpp_pr0(uint param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int local_38;
  int local_34;
  uint *local_30;
  undefined local_2c;
  undefined local_2b;
  
  local_30 = (uint *)(*(int **)(param_2 + 0x4c) + 1);
  uVar11 = param_1 & 3;
  local_34 = **(int **)(param_2 + 0x4c) << 8;
  local_2b = 0;
  local_2c = 3;
  puVar9 = local_30;
  if (uVar11 == 2) {
    puVar9 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar7 = param_2 + 0x58;
    bVar12 = false;
LAB_002126e4:
    do {
      while( true ) {
        if (*puVar9 == 0) goto LAB_002126f0;
        uVar1 = *(ushort *)((int)puVar9 + 2);
        uVar2 = *(ushort *)puVar9;
        puVar6 = puVar9 + 1;
        uVar10 = (uVar1 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar4 = FUN_0021232c(param_3,0xf);
        if (uVar4 < uVar10) {
          bVar3 = false;
        }
        else if (uVar4 < uVar10 + (uVar2 & 0xfffffffe)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        uVar4 = uVar2 & 1 | (uVar1 & 1) << 1;
        if (uVar4 != 1) break;
        if (uVar11 == 0) {
          if (bVar3) {
            uVar4 = puVar9[2];
            if (uVar4 == 0xfffffffe) {
              return 9;
            }
            local_38 = iVar7;
            if (uVar4 != 0xffffffff) {
              if (uVar4 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)((int)puVar6 + uVar4 + 4);
              }
              iVar5 = __cxa_type_match(param_2,uVar8,*puVar6 >> 0x1f,&local_38);
              if (iVar5 == 0) {
                local_38 = 0;
              }
            }
            if (local_38 != 0) {
LAB_00212624:
              uVar8 = FUN_0021232c(param_3,0xd);
              *(int *)(param_2 + 0x24) = local_38;
              *(uint **)(param_2 + 0x28) = puVar6;
              *(undefined4 *)(param_2 + 0x20) = uVar8;
              return 6;
            }
          }
        }
        else {
          iVar14 = *(int *)(param_2 + 0x20);
          iVar5 = FUN_0021232c(param_3,0xd);
          if ((iVar14 == iVar5) && (puVar6 == *(uint **)(param_2 + 0x28))) {
LAB_0021269c:
            uVar8 = FUN_00211f24(puVar6);
            FUN_00212398(param_3,0xf,uVar8);
            uVar8 = 0;
            goto LAB_0021273c;
          }
        }
        puVar9 = puVar9 + 3;
      }
      if (uVar4 != 0) {
        if (uVar4 != 2) {
          return 9;
        }
        uVar4 = *puVar6 & 0x7fffffff;
        if (uVar11 == 0) {
          if ((bVar3) && ((param_1 & 8) == 0 || uVar4 == 0)) {
            uVar10 = 0;
            puVar15 = puVar6;
            do {
              uVar13 = uVar10;
              if (uVar13 == uVar4) goto LAB_00212624;
              puVar15 = puVar15 + 1;
              uVar10 = *puVar15;
              if (uVar10 != 0) {
                uVar10 = *(uint *)(uVar10 + (int)puVar15);
              }
              local_38 = iVar7;
              iVar5 = __cxa_type_match(param_2,uVar10,0,&local_38);
              uVar10 = uVar13 + 1;
            } while (iVar5 == 0);
            if (uVar13 == uVar4) goto LAB_00212624;
          }
        }
        else {
          iVar14 = *(int *)(param_2 + 0x20);
          iVar5 = FUN_0021232c(param_3,0xd);
          if ((iVar14 == iVar5) && (puVar6 == *(uint **)(param_2 + 0x28))) {
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(uint *)(param_2 + 0x28) = uVar4;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar9 + 2;
            if (-1 < (int)*puVar6) {
              puVar6 = puVar6 + uVar4 + 1;
              goto LAB_0021269c;
            }
            bVar12 = true;
          }
        }
        if ((int)*puVar6 < 0) {
          puVar6 = puVar9 + 2;
        }
        puVar9 = puVar6 + uVar4 + 1;
        goto LAB_002126e4;
      }
      if (uVar11 == 0) {
        bVar3 = false;
      }
      puVar9 = puVar9 + 2;
    } while (!bVar3);
    FUN_00211f24(puVar6);
    *(uint **)(param_2 + 0x38) = puVar9;
    iVar7 = __cxa_begin_cleanup(param_2);
    if (iVar7 == 0) {
      return 9;
    }
    uVar8 = 0xf;
  }
  else {
    bVar12 = false;
LAB_002126f0:
    iVar7 = __gnu_unwind_execute(param_3,&local_34);
    if (iVar7 != 0) {
      return 9;
    }
    if (!bVar12) {
      return 8;
    }
    uVar8 = FUN_0021232c(param_3,0xf);
    FUN_00212398(param_3,0xe,uVar8);
    uVar8 = 0xf;
  }
LAB_0021273c:
  FUN_00212398(param_3,uVar8);
  return 7;
}


