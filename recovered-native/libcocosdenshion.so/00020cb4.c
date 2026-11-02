/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00020cb4  Symbol: FUN_00020cb4 */

undefined4 FUN_00020cb4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_2c [2];
  
  iVar8 = DAT_00020e6c + 0x20cc8;
  uVar9 = param_2 - 2;
  if (*(int *)(iVar8 + DAT_00020e70) == 0) {
    iVar2 = *(int *)(iVar8 + DAT_00020e78);
    local_2c[0] = *(int *)(iVar8 + DAT_00020e74) - iVar2 >> 3;
LAB_00020d10:
    if (local_2c[0] != 0) {
      iVar7 = local_2c[0] + -1;
      iVar11 = 0;
      iVar12 = iVar7;
      while( true ) {
        while( true ) {
          iVar1 = (iVar11 + iVar12) / 2;
          iVar10 = iVar2 + iVar1 * 8;
          uVar3 = FUN_00020c9c(iVar10);
          if (iVar1 == iVar7) {
            uVar4 = 0xffffffff;
          }
          else {
            iVar5 = FUN_00020c9c(iVar2 + (iVar1 + 1) * 8);
            uVar4 = iVar5 - 1;
          }
          if (uVar3 <= uVar9) break;
          if (iVar1 == iVar11) goto LAB_00020da4;
          iVar12 = iVar1 + -1;
        }
        if (uVar9 <= uVar4) break;
        iVar11 = iVar1 + 1;
      }
      if (iVar10 != 0) {
        uVar6 = FUN_00020c9c(iVar10);
        iVar2 = *(int *)(iVar10 + 4);
        bVar13 = iVar2 == 1;
        if (bVar13) {
          iVar2 = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        *(undefined4 *)(param_1 + 0x48) = uVar6;
        if (bVar13) {
          return 5;
        }
        if (iVar2 < 0) {
          *(int *)(param_1 + 0x4c) = iVar10 + 4;
        }
        else {
          uVar6 = FUN_00020c9c();
          *(undefined4 *)(param_1 + 0x4c) = uVar6;
        }
        *(uint *)(param_1 + 0x50) = (uint)(iVar2 < 0);
        if (-1 < (int)**(uint **)(param_1 + 0x4c)) {
          uVar6 = FUN_00020c9c();
          *(undefined4 *)(param_1 + 0x10) = uVar6;
          return 0;
        }
        uVar9 = **(uint **)(param_1 + 0x4c) >> 0x18 & 0xf;
        if (uVar9 == 0) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar8 + DAT_00020e7c);
          return 0;
        }
        iVar2 = DAT_00020e80;
        if ((uVar9 == 1) || (iVar2 = DAT_00020e84, uVar9 == 2)) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar8 + iVar2);
          return 0;
        }
        goto LAB_00020e50;
      }
    }
LAB_00020da4:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar2 = __gnu_Unwind_Find_exidx(uVar9,local_2c);
    if (iVar2 != 0) goto LAB_00020d10;
LAB_00020e50:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 9;
}


