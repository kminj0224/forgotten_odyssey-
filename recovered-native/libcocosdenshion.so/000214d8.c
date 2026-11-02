/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000214d8  Symbol: __aeabi_unwind_cpp_pr1 */

/* WARNING: Removing unreachable block (ram,0x00021170) */
/* WARNING: Removing unreachable block (ram,0x000211d0) */

undefined4 __aeabi_unwind_cpp_pr1(uint param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  
  local_30 = *(uint **)(param_2 + 0x4c) + 1;
  uVar8 = **(uint **)(param_2 + 0x4c);
  uVar11 = param_1 & 3;
  local_34 = uVar8 << 0x10;
  puVar9 = local_30 + (uVar8 >> 0x10 & 0xff);
  local_2b = (undefined)(uVar8 >> 0x10);
  local_2c = 2;
  if (uVar11 == 2) {
    puVar9 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar6 = param_2 + 0x58;
    bVar12 = false;
LAB_0002145c:
    do {
      while( true ) {
        if (*puVar9 == 0) goto LAB_00021468;
        uVar1 = *(ushort *)((int)puVar9 + 2);
        uVar2 = *(ushort *)puVar9;
        puVar5 = puVar9 + 1;
        uVar10 = (uVar1 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar8 = FUN_000210a4(param_3,0xf);
        if (uVar8 < uVar10) {
          bVar3 = false;
        }
        else if (uVar8 < uVar10 + (uVar2 & 0xfffffffe)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        uVar8 = uVar2 & 1 | (uVar1 & 1) << 1;
        if (uVar8 != 1) break;
        if (uVar11 == 0) {
          if (bVar3) {
            uVar8 = puVar9[2];
            if (uVar8 == 0xfffffffe) {
              return 9;
            }
            local_38 = iVar6;
            if (uVar8 != 0xffffffff) {
              if (uVar8 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined4 *)((int)puVar5 + uVar8 + 4);
              }
              iVar4 = __cxa_type_match(param_2,uVar7,*puVar5 >> 0x1f,&local_38);
              if (iVar4 == 0) {
                local_38 = 0;
              }
            }
            if (local_38 != 0) {
LAB_0002139c:
              uVar7 = FUN_000210a4(param_3,0xd);
              *(int *)(param_2 + 0x24) = local_38;
              *(uint **)(param_2 + 0x28) = puVar5;
              *(undefined4 *)(param_2 + 0x20) = uVar7;
              return 6;
            }
          }
        }
        else {
          iVar14 = *(int *)(param_2 + 0x20);
          iVar4 = FUN_000210a4(param_3,0xd);
          if ((iVar14 == iVar4) && (puVar5 == *(uint **)(param_2 + 0x28))) {
LAB_00021414:
            uVar7 = FUN_00020c9c(puVar5);
            FUN_00021110(param_3,0xf,uVar7);
            uVar7 = 0;
            goto LAB_000214b4;
          }
        }
        puVar9 = puVar9 + 3;
      }
      if (uVar8 != 0) {
        if (uVar8 != 2) {
          return 9;
        }
        uVar8 = *puVar5 & 0x7fffffff;
        if (uVar11 == 0) {
          if ((bVar3) && ((param_1 & 8) == 0 || uVar8 == 0)) {
            uVar10 = 0;
            puVar15 = puVar5;
            do {
              uVar13 = uVar10;
              if (uVar13 == uVar8) goto LAB_0002139c;
              puVar15 = puVar15 + 1;
              uVar10 = *puVar15;
              if (uVar10 != 0) {
                uVar10 = *(uint *)(uVar10 + (int)puVar15);
              }
              local_38 = iVar6;
              iVar4 = __cxa_type_match(param_2,uVar10,0,&local_38);
              uVar10 = uVar13 + 1;
            } while (iVar4 == 0);
            if (uVar13 == uVar8) goto LAB_0002139c;
          }
        }
        else {
          iVar14 = *(int *)(param_2 + 0x20);
          iVar4 = FUN_000210a4(param_3,0xd);
          if ((iVar14 == iVar4) && (puVar5 == *(uint **)(param_2 + 0x28))) {
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(uint *)(param_2 + 0x28) = uVar8;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar9 + 2;
            if (-1 < (int)*puVar5) {
              puVar5 = puVar5 + uVar8 + 1;
              goto LAB_00021414;
            }
            bVar12 = true;
          }
        }
        if ((int)*puVar5 < 0) {
          puVar5 = puVar9 + 2;
        }
        puVar9 = puVar5 + uVar8 + 1;
        goto LAB_0002145c;
      }
      if (uVar11 == 0) {
        bVar3 = false;
      }
      puVar9 = puVar9 + 2;
    } while (!bVar3);
    FUN_00020c9c(puVar5);
    *(uint **)(param_2 + 0x38) = puVar9;
    iVar6 = __cxa_begin_cleanup(param_2);
    if (iVar6 == 0) {
      return 9;
    }
    uVar7 = 0xf;
  }
  else {
    bVar12 = false;
LAB_00021468:
    iVar6 = __gnu_unwind_execute(param_3,&local_34);
    if (iVar6 != 0) {
      return 9;
    }
    if (!bVar12) {
      return 8;
    }
    uVar7 = FUN_000210a4(param_3,0xf);
    FUN_00021110(param_3,0xe,uVar7);
    uVar7 = 0xf;
  }
LAB_000214b4:
  FUN_00021110(param_3,uVar7);
  return 7;
}


