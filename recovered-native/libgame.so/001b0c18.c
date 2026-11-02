/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b0c18  Symbol: FUN_001b0c18 */

undefined4 FUN_001b0c18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_3c;
  
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
  if (0 < *(int *)(param_1 + 0x13c)) {
    iVar5 = 0;
    local_3c = 0;
    do {
      iVar6 = *(int *)(param_1 + iVar5 + 0x140);
      iVar3 = *(int *)(*(int *)(param_1 + (iVar6 + 0x48) * 4 + 4) + 0x14);
      iVar2 = (int)**(short **)(param_2 + iVar5) >> (*(uint *)(param_1 + 0x174) & 0xff);
      iVar12 = iVar3 + 0x12;
      iVar1 = iVar6 + 0xc;
      iVar7 = (iVar6 + 8) * 4 + iVar4;
      iVar8 = iVar1 * 4 + iVar4;
      iVar6 = iVar2 - *(int *)(iVar7 + 4);
      iVar11 = *(int *)(iVar12 * 4 + iVar4 + 4) + *(int *)(iVar8 + 4);
      if (iVar6 == 0) {
        FUN_001afee4(param_1,iVar11,0);
        *(undefined4 *)(iVar8 + 4) = 0;
      }
      else {
        *(int *)(iVar7 + 4) = iVar2;
        FUN_001afee4(param_1,iVar11,1);
        if (iVar6 < 1) {
          FUN_001afee4(param_1,iVar11 + 1,1);
          iVar6 = -iVar6;
          iVar11 = iVar11 + 3;
          *(undefined4 *)(iVar8 + 4) = 8;
        }
        else {
          FUN_001afee4(param_1,iVar11 + 1,0);
          iVar11 = iVar11 + 2;
          *(undefined4 *)(iVar8 + 4) = 4;
        }
        uVar10 = iVar6 - 1;
        if (uVar10 == 0) {
          uVar9 = 0;
          iVar2 = 0;
        }
        else {
          FUN_001afee4(param_1,iVar11,1);
          iVar2 = 1;
          iVar6 = (int)uVar10 >> 1;
          iVar11 = *(int *)(iVar12 * 4 + iVar4 + 4) + 0x14;
          uVar9 = 0;
          if (iVar6 != 0) {
            iVar2 = 1;
            do {
              iVar6 = iVar6 >> 1;
              FUN_001afee4(param_1,iVar11,1);
              iVar2 = iVar2 << 1;
              iVar11 = iVar11 + 1;
            } while (iVar6 != 0);
            uVar9 = iVar2 >> 1;
          }
        }
        FUN_001afee4(param_1,iVar11,0);
        iVar3 = param_1 + iVar3;
        if (iVar2 < (1 << *(sbyte *)(iVar3 + 0x98)) >> 1) {
          *(undefined4 *)(iVar1 * 4 + iVar4 + 4) = 0;
        }
        else if ((1 << *(sbyte *)(iVar3 + 0xa8)) >> 1 < iVar2) {
          iVar6 = iVar1 * 4 + iVar4;
          *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 8;
        }
        for (; uVar9 != 0; uVar9 = (int)uVar9 >> 1) {
          FUN_001afee4(param_1,iVar11 + 0xe,(uVar9 & uVar10) != 0);
        }
      }
      local_3c = local_3c + 1;
      iVar5 = iVar5 + 4;
    } while (local_3c < *(int *)(param_1 + 0x13c));
  }
  return 1;
}


