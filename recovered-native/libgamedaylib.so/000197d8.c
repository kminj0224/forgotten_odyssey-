/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000197d8  Symbol: FUN_000197d8 */

int FUN_000197d8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  pbVar6 = *(byte **)(param_1 + 0xc);
  bVar1 = *pbVar6;
  if (bVar1 == 0) {
    uVar10 = 0;
  }
  else {
    *(byte **)(param_1 + 0xc) = pbVar6 + 1;
    uVar10 = (uint)pbVar6[1];
    if (uVar10 != 0) {
      *(byte **)(param_1 + 0xc) = pbVar6 + 2;
    }
    if (bVar1 == 0x76) {
      if ((uVar10 - 0x30 & 0xff) < 10) {
        iVar8 = FUN_000188f4();
        iVar5 = *(int *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x18) <= iVar5) {
          return 0;
        }
        iVar9 = *(int *)(param_1 + 0x10) + iVar5 * 0xc;
        *(int *)(param_1 + 0x14) = iVar5 + 1;
        if (iVar9 == 0) {
          return 0;
        }
        if (iVar8 == 0) {
          iVar9 = 0;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar5 * 0xc) = 0x2d;
          *(uint *)(iVar9 + 4) = uVar10 - 0x30;
          *(int *)(iVar9 + 8) = iVar8;
        }
        return iVar9;
      }
    }
    else if (uVar10 == 0x76 && bVar1 == 99) {
      uVar3 = FUN_00018b7c();
      iVar8 = FUN_00017fe4(param_1,0x2e,uVar3,0);
      return iVar8;
    }
  }
  iVar5 = 0;
  iVar9 = DAT_00019948 + 0x19b8c;
  iVar8 = 0x34;
  do {
    iVar7 = iVar5 + (iVar8 - iVar5) / 2;
    pbVar6 = *(byte **)(iVar9 + iVar7 * 0x10);
    bVar2 = *pbVar6;
    if (bVar1 == bVar2) {
      uVar4 = (uint)pbVar6[1];
      if (uVar10 == uVar4) {
        iVar8 = *(int *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x18) <= iVar8) {
          return 0;
        }
        iVar5 = *(int *)(param_1 + 0x10) + iVar8 * 0xc;
        *(int *)(param_1 + 0x14) = iVar8 + 1;
        if (iVar5 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar8 * 0xc) = 0x2c;
          *(int *)(iVar5 + 4) = iVar9 + iVar7 * 0x10;
        }
        return iVar5;
      }
      if (uVar4 <= uVar10) goto LAB_00019888;
    }
    else if (bVar2 <= bVar1) {
LAB_00019888:
      iVar5 = iVar7 + 1;
      iVar7 = iVar8;
    }
    iVar8 = iVar7;
    if (iVar5 == iVar7) {
      return 0;
    }
  } while( true );
}


