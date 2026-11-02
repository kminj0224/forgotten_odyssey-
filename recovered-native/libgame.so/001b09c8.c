/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b09c8  Symbol: FUN_001b09c8 */

undefined4 FUN_001b09c8(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  
  iVar4 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar5 = *(int *)(iVar4 + 0x44);
    if (iVar5 == 0) {
      FUN_001b0298(param_1,*(undefined4 *)(iVar4 + 0x48));
      iVar5 = *(int *)(param_1 + 0xec);
      *(int *)(iVar4 + 0x44) = iVar5;
      *(uint *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + 1U & 7;
    }
    *(int *)(iVar4 + 0x44) = iVar5 + -1;
  }
  iVar6 = *(int *)(param_1 + 0x17c);
  iVar10 = *param_2;
  iVar7 = *(int *)(*(int *)(param_1 + 0x124) + 0x18);
  iVar5 = *(int *)(param_1 + 0x16c);
  if (0 < iVar5) {
    piVar2 = (int *)(iVar6 + iVar5 * 4);
    do {
      iVar8 = (int)*(short *)(*piVar2 * 2 + iVar10);
      if (iVar8 < 0) {
        iVar8 = -iVar8 >> (*(uint *)(param_1 + 0x174) & 0xff);
      }
      else {
        iVar8 = iVar8 >> (*(uint *)(param_1 + 0x174) & 0xff);
      }
      if (iVar8 != 0) break;
      iVar5 = iVar5 + -1;
      piVar2 = piVar2 + -1;
    } while (0 < iVar5);
  }
  iVar8 = *(int *)(param_1 + 0x168);
  if (iVar5 < iVar8) {
LAB_001b0b0e:
    if (iVar8 <= *(int *)(param_1 + 0x16c)) {
      FUN_001afee4(param_1,*(int *)(iVar4 + (iVar7 + 0x22) * 4 + 4) + (iVar8 + -1) * 3,1);
    }
    return 1;
  }
  piVar2 = (int *)(iVar4 + (iVar7 + 0x22) * 4 + 4);
LAB_001b0a86:
  iVar11 = *piVar2 + (iVar8 + -1) * 3;
  FUN_001afee4(param_1,iVar11,0);
  piVar13 = (int *)(iVar6 + iVar8 * 4);
  do {
    iVar9 = (int)*(short *)(*piVar13 * 2 + iVar10);
    if (iVar9 < 0) {
      iVar9 = -iVar9 >> (*(uint *)(param_1 + 0x174) & 0xff);
      if (iVar9 != 0) break;
    }
    else {
      iVar9 = iVar9 >> (*(uint *)(param_1 + 0x174) & 0xff);
      if (iVar9 != 0) {
        FUN_001afee4(param_1,iVar11 + 1,1);
        FUN_001afee4(param_1,iVar4 + 0xcc,0);
        goto joined_r0x001b0b64;
      }
    }
    FUN_001afee4(param_1,iVar11 + 1,0);
    iVar11 = iVar11 + 3;
    iVar8 = iVar8 + 1;
    piVar13 = piVar13 + 1;
  } while( true );
  FUN_001afee4(param_1,iVar11 + 1,1);
  FUN_001afee4(param_1,iVar4 + 0xcc,1);
joined_r0x001b0b64:
  uVar1 = iVar9 - 1;
  if (uVar1 != 0) {
    FUN_001afee4(param_1,iVar11 + 2,1);
    if ((int)uVar1 >> 1 != 0) {
      FUN_001afee4(param_1,iVar11 + 2,1);
      iVar11 = 0xbd;
      if ((int)(uint)*(byte *)(param_1 + iVar7 + 0xb8) < iVar8) {
        iVar11 = 0xd9;
      }
      iVar11 = *piVar2 + iVar11;
      iVar9 = (int)uVar1 >> 2;
      if (iVar9 == 0) {
        FUN_001afee4(param_1,iVar11,0);
        uVar15 = 1;
        iVar12 = iVar11 + 0xe;
      }
      else {
        iVar14 = 2;
        do {
          iVar12 = iVar11;
          iVar9 = iVar9 >> 1;
          FUN_001afee4(param_1,iVar12,1);
          iVar14 = iVar14 << 1;
          iVar11 = iVar12 + 1;
        } while (iVar9 != 0);
        uVar15 = iVar14 >> 1;
        FUN_001afee4(param_1,iVar12 + 1,0);
        if (uVar15 == 0) goto LAB_001b0b04;
        iVar12 = iVar12 + 0xf;
      }
      do {
        uVar3 = uVar15 & uVar1;
        uVar15 = (int)uVar15 >> 1;
        FUN_001afee4(param_1,iVar12,uVar3 != 0);
      } while (uVar15 != 0);
      goto LAB_001b0b04;
    }
  }
  FUN_001afee4(param_1,iVar11 + 2,0);
LAB_001b0b04:
  iVar8 = iVar8 + 1;
  if (iVar5 < iVar8) goto LAB_001b0b0e;
  goto LAB_001b0a86;
}


