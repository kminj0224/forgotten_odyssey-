/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b072c  Symbol: FUN_001b072c */

undefined4 FUN_001b072c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar4 = *(int *)(iVar3 + 0x44);
    if (iVar4 == 0) {
      FUN_001b0298(param_1,*(undefined4 *)(iVar3 + 0x48));
      iVar4 = *(int *)(param_1 + 0xec);
      *(int *)(iVar3 + 0x44) = iVar4;
      *(uint *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1U & 7;
    }
    *(int *)(iVar3 + 0x44) = iVar4 + -1;
  }
  iVar4 = *(int *)(param_1 + 0x17c);
  iVar10 = *param_2;
  iVar5 = *(int *)(*(int *)(param_1 + 0x124) + 0x18);
  iVar6 = *(int *)(param_1 + 0x16c);
  if (0 < iVar6) {
    piVar1 = (int *)(iVar4 + iVar6 * 4);
    do {
      iVar7 = (uint)*(ushort *)(*piVar1 * 2 + iVar10) << 0x10;
      iVar2 = iVar7 >> 0x10;
      if (-1 < iVar2) {
        if (iVar2 >> (*(uint *)(param_1 + 0x174) & 0xff) == 0) goto LAB_001b0798;
LAB_001b07b8:
        if (0 < iVar6) {
          piVar1 = (int *)(iVar4 + (iVar6 + -1) * 4);
          iVar2 = iVar6;
          while( true ) {
            iVar7 = iVar7 >> 0x10;
            if (iVar7 < 0) {
              iVar7 = -iVar7 >> (*(uint *)(param_1 + 0x170) & 0xff);
            }
            else {
              iVar7 = iVar7 >> (*(uint *)(param_1 + 0x170) & 0xff);
            }
            if ((iVar7 != 0) || (iVar2 = iVar2 + -1, iVar2 < 1)) break;
            iVar7 = *piVar1;
            piVar1 = piVar1 + -1;
            iVar7 = (uint)*(ushort *)(iVar7 * 2 + iVar10) << 0x10;
          }
          iVar7 = *(int *)(param_1 + 0x168);
          if (iVar6 < iVar7) goto LAB_001b080c;
          goto LAB_001b0852;
        }
        break;
      }
      if (-iVar2 >> (*(uint *)(param_1 + 0x174) & 0xff) != 0) goto LAB_001b07b8;
LAB_001b0798:
      iVar6 = iVar6 + -1;
      piVar1 = piVar1 + -1;
    } while (0 < iVar6);
  }
  iVar7 = *(int *)(param_1 + 0x168);
  iVar2 = iVar6;
  if (iVar6 < iVar7) {
LAB_001b080c:
    if (iVar7 <= *(int *)(param_1 + 0x16c)) {
      FUN_001afee4(param_1,*(int *)(iVar3 + (iVar5 + 0x22) * 4 + 4) + (iVar7 + -1) * 3,1);
    }
    return 1;
  }
LAB_001b0852:
LAB_001b0872:
  iVar11 = *(int *)(iVar3 + (iVar5 + 0x22) * 4 + 4) + (iVar7 + -1) * 3;
  if (iVar2 < iVar7) {
    FUN_001afee4(param_1,iVar11,0);
  }
  piVar1 = (int *)(iVar4 + iVar7 * 4);
  do {
    iVar8 = (int)*(short *)(*piVar1 * 2 + iVar10);
    if (iVar8 < 0) {
      uVar9 = -iVar8 >> (*(uint *)(param_1 + 0x174) & 0xff);
      if (uVar9 != 0) break;
    }
    else {
      uVar9 = iVar8 >> (*(uint *)(param_1 + 0x174) & 0xff);
      if (uVar9 != 0) {
        if ((int)uVar9 >> 1 != 0) goto LAB_001b090c;
        FUN_001afee4(param_1,iVar11 + 1,1);
        FUN_001afee4(param_1,iVar3 + 0xcc,0);
        goto LAB_001b08e2;
      }
    }
    FUN_001afee4(param_1,iVar11 + 1,0);
    iVar11 = iVar11 + 3;
    iVar7 = iVar7 + 1;
    piVar1 = piVar1 + 1;
  } while( true );
  if ((int)uVar9 >> 1 == 0) {
    FUN_001afee4(param_1,iVar11 + 1,1);
    FUN_001afee4(param_1,iVar3 + 0xcc,1);
  }
  else {
LAB_001b090c:
    FUN_001afee4(param_1,iVar11 + 2,uVar9 & 1);
  }
LAB_001b08e2:
  iVar7 = iVar7 + 1;
  if (iVar6 < iVar7) goto LAB_001b080c;
  goto LAB_001b0872;
}


