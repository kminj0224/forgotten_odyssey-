/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000209ec  Symbol: __aeabi_unwind_cpp_pr2 */

/* WARNING: Removing unreachable block (ram,0x0002068c) */
/* WARNING: Removing unreachable block (ram,0x000206f0) */

undefined4 __aeabi_unwind_cpp_pr2(uint param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  undefined uStack_2c;
  undefined uStack_2b;
  
  puStack_30 = *(uint **)(param_2 + 0x4c) + 1;
  uVar7 = **(uint **)(param_2 + 0x4c);
  uVar10 = param_1 & 3;
  iStack_34 = uVar7 << 0x10;
  puVar8 = puStack_30 + (uVar7 >> 0x10 & 0xff);
  uStack_2b = (undefined)(uVar7 >> 0x10);
  uStack_2c = 2;
  if (uVar10 == 2) {
    puVar8 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar5 = param_2 + 0x58;
    bVar11 = false;
LAB_00020978:
    do {
      while( true ) {
        uVar7 = *puVar8;
        if (uVar7 == 0) goto LAB_00020984;
        uVar13 = puVar8[1];
        puVar4 = puVar8 + 2;
        uVar9 = (uVar13 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar2 = FUN_000205c0(param_3,0xf);
        if (uVar2 < uVar9) {
          bVar1 = false;
        }
        else if (uVar2 < uVar9 + (uVar7 & 0xfffffffe)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar7 = uVar7 & 1 | (uVar13 & 1) << 1;
        if (uVar7 != 1) break;
        if (uVar10 == 0) {
          if (bVar1) {
            uVar7 = puVar8[3];
            if (uVar7 == 0xfffffffe) {
              return 9;
            }
            iStack_38 = iVar5;
            if (uVar7 != 0xffffffff) {
              if (uVar7 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined4 *)((int)puVar4 + uVar7 + 4);
              }
              iVar3 = __cxa_type_match(param_2,uVar6,*puVar4 >> 0x1f,&iStack_38);
              if (iVar3 == 0) {
                iStack_38 = 0;
              }
            }
            if (iStack_38 != 0) {
LAB_000208b8:
              uVar6 = FUN_000205c0(param_3,0xd);
              *(int *)(param_2 + 0x24) = iStack_38;
              *(uint **)(param_2 + 0x28) = puVar4;
              *(undefined4 *)(param_2 + 0x20) = uVar6;
              return 6;
            }
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_000205c0(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar4 == *(uint **)(param_2 + 0x28))) {
LAB_00020930:
            uVar6 = FUN_000201b8(puVar4);
            FUN_0002062c(param_3,0xf,uVar6);
            uVar6 = 0;
            goto LAB_000209d0;
          }
        }
        puVar8 = puVar8 + 4;
      }
      if (uVar7 != 0) {
        if (uVar7 != 2) {
          return 9;
        }
        uVar7 = *puVar4 & 0x7fffffff;
        if (uVar10 == 0) {
          if ((bVar1) && ((param_1 & 8) == 0 || uVar7 == 0)) {
            uVar2 = 0;
            puVar14 = puVar4;
            do {
              uVar9 = uVar2;
              if (uVar9 == uVar7) goto LAB_000208b8;
              puVar14 = puVar14 + 1;
              uVar2 = *puVar14;
              if (uVar2 != 0) {
                uVar2 = *(uint *)(uVar2 + (int)puVar14);
              }
              iStack_38 = iVar5;
              iVar3 = __cxa_type_match(param_2,uVar2,0,&iStack_38);
              uVar2 = uVar9 + 1;
            } while (iVar3 == 0);
            if (uVar9 == uVar7) goto LAB_000208b8;
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_000205c0(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar4 == *(uint **)(param_2 + 0x28))) {
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(uint *)(param_2 + 0x28) = uVar7;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar8 + 3;
            if (-1 < (int)*puVar4) {
              puVar4 = puVar4 + uVar7 + 1;
              goto LAB_00020930;
            }
            bVar11 = true;
          }
        }
        if ((int)*puVar4 < 0) {
          puVar4 = puVar8 + 3;
        }
        puVar8 = puVar4 + uVar7 + 1;
        goto LAB_00020978;
      }
      if (uVar10 == 0) {
        bVar1 = false;
      }
      puVar8 = puVar8 + 3;
    } while (!bVar1);
    FUN_000201b8(puVar4);
    *(uint **)(param_2 + 0x38) = puVar8;
    iVar5 = __cxa_begin_cleanup(param_2);
    if (iVar5 == 0) {
      return 9;
    }
    uVar6 = 0xf;
  }
  else {
    bVar11 = false;
LAB_00020984:
    iVar5 = __gnu_unwind_execute(param_3,&iStack_34);
    if (iVar5 != 0) {
      return 9;
    }
    if (!bVar11) {
      return 8;
    }
    uVar6 = FUN_000205c0(param_3,0xf);
    FUN_0002062c(param_3,0xe,uVar6);
    uVar6 = 0xf;
  }
LAB_000209d0:
  FUN_0002062c(param_3,uVar6);
  return 7;
}


