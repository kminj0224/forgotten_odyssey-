/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b037c  Symbol: FUN_001b037c */

undefined4 FUN_001b037c(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar7 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar8 = *(int *)(iVar7 + 0x44);
    if (iVar8 == 0) {
      FUN_001b0298(param_1,*(undefined4 *)(iVar7 + 0x48));
      iVar8 = *(int *)(param_1 + 0xec);
      *(int *)(iVar7 + 0x44) = iVar8;
      *(uint *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + 1U & 7;
    }
    *(int *)(iVar7 + 0x44) = iVar8 + -1;
  }
  iVar8 = *(int *)(param_1 + 0x17c);
  if (0 < *(int *)(param_1 + 0x13c)) {
    local_3c = 0;
    local_34 = 0;
    do {
      iVar9 = *(int *)(param_1 + local_3c + 0x140);
      psVar1 = *(short **)(param_2 + local_3c);
      iVar4 = *(int *)(param_1 + (iVar9 + 0x48) * 4 + 4);
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar16 = iVar3 + 0x12;
      iVar2 = iVar9 + 0xc;
      iVar11 = iVar7 + iVar2 * 4;
      iVar13 = *(int *)(iVar7 + iVar16 * 4 + 4) + *(int *)(iVar11 + 4);
      iVar10 = iVar7 + (iVar9 + 8) * 4;
      iVar9 = (int)*psVar1 - *(int *)(iVar10 + 4);
      if (iVar9 == 0) {
        FUN_001afee4(param_1,iVar13,0);
        *(undefined4 *)(iVar11 + 4) = 0;
      }
      else {
        *(int *)(iVar10 + 4) = (int)*psVar1;
        FUN_001afee4(param_1,iVar13,1);
        if (iVar9 < 1) {
          FUN_001afee4(param_1,iVar13 + 1,1);
          iVar9 = -iVar9;
          iVar13 = iVar13 + 3;
          *(undefined4 *)(iVar11 + 4) = 8;
        }
        else {
          FUN_001afee4(param_1,iVar13 + 1,0);
          iVar13 = iVar13 + 2;
          *(undefined4 *)(iVar11 + 4) = 4;
        }
        uVar15 = iVar9 - 1;
        if (uVar15 == 0) {
          uVar12 = 0;
          iVar9 = 0;
        }
        else {
          FUN_001afee4(param_1,iVar13,1);
          iVar10 = (int)uVar15 >> 1;
          iVar9 = 1;
          iVar13 = *(int *)(iVar7 + iVar16 * 4 + 4) + 0x14;
          uVar12 = 0;
          if (iVar10 != 0) {
            iVar9 = 1;
            do {
              iVar10 = iVar10 >> 1;
              FUN_001afee4(param_1,iVar13,1);
              iVar9 = iVar9 << 1;
              iVar13 = iVar13 + 1;
            } while (iVar10 != 0);
            uVar12 = iVar9 >> 1;
          }
        }
        FUN_001afee4(param_1,iVar13,0);
        iVar3 = param_1 + iVar3;
        if (iVar9 < (1 << *(sbyte *)(iVar3 + 0x98)) >> 1) {
          *(undefined4 *)(iVar7 + iVar2 * 4 + 4) = 0;
        }
        else if ((1 << *(sbyte *)(iVar3 + 0xa8)) >> 1 < iVar9) {
          iVar9 = iVar7 + iVar2 * 4;
          *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 8;
        }
        for (; uVar12 != 0; uVar12 = (int)uVar12 >> 1) {
          FUN_001afee4(param_1,iVar13 + 0xe,(uVar12 & uVar15) != 0);
        }
      }
      local_38 = *(int *)(iVar4 + 0x18);
      local_48 = *(int *)(param_1 + 0x180);
      if (0 < local_48) {
        if (psVar1[*(int *)(local_48 * 4 + iVar8)] == 0) {
          local_48 = local_48 + -1;
          piVar5 = (int *)(iVar8 + local_48 * 4);
          for (; local_48 != 0; local_48 = local_48 + -1) {
            iVar9 = *piVar5;
            piVar5 = piVar5 + -1;
            if (psVar1[iVar9] != 0) goto LAB_001b0538;
          }
          iVar9 = 1;
        }
        else {
LAB_001b0538:
          piVar5 = (int *)(iVar7 + (local_38 + 0x22) * 4 + 4);
          iVar9 = 1;
          do {
            iVar3 = *piVar5 + (iVar9 + -1) * 3;
            FUN_001afee4(param_1,iVar3,0);
            iVar2 = (int)psVar1[*(int *)(iVar9 * 4 + iVar8)];
            if (iVar2 == 0) {
              iVar9 = iVar9 + 1;
              piVar14 = (int *)(iVar8 + iVar9 * 4);
              while( true ) {
                FUN_001afee4(param_1,iVar3 + 1,0);
                iVar2 = *piVar14;
                piVar14 = piVar14 + 1;
                iVar3 = iVar3 + 3;
                iVar2 = (int)psVar1[iVar2];
                if (iVar2 != 0) break;
                iVar9 = iVar9 + 1;
              }
            }
            FUN_001afee4(param_1,iVar3 + 1,1);
            if (iVar2 < 1) {
              iVar2 = -iVar2;
              FUN_001afee4(param_1,iVar7 + 0xcc,1);
            }
            else {
              FUN_001afee4(param_1,iVar7 + 0xcc,0);
            }
            uVar15 = iVar2 - 1;
            iVar3 = iVar3 + 2;
            if ((uVar15 == 0) || (FUN_001afee4(param_1,iVar3,1), (int)uVar15 >> 1 == 0)) {
              FUN_001afee4(param_1,iVar3,0);
            }
            else {
              FUN_001afee4(param_1,iVar3,1);
              iVar2 = 0xbd;
              if ((int)(uint)*(byte *)(param_1 + local_38 + 0xb8) < iVar9) {
                iVar2 = 0xd9;
              }
              iVar2 = *piVar5 + iVar2;
              iVar3 = (int)uVar15 >> 2;
              if (iVar3 == 0) {
                FUN_001afee4(param_1,iVar2,0);
                iVar4 = iVar2 + 0xe;
                uVar12 = 1;
              }
              else {
                iVar10 = 2;
                do {
                  iVar4 = iVar2;
                  iVar3 = iVar3 >> 1;
                  FUN_001afee4(param_1,iVar4,1);
                  iVar10 = iVar10 << 1;
                  iVar2 = iVar4 + 1;
                } while (iVar3 != 0);
                uVar12 = iVar10 >> 1;
                FUN_001afee4(param_1,iVar4 + 1,0);
                if (uVar12 == 0) goto LAB_001b05d4;
                iVar4 = iVar4 + 0xf;
              }
              do {
                uVar6 = uVar12 & uVar15;
                uVar12 = (int)uVar12 >> 1;
                FUN_001afee4(param_1,iVar4,uVar6 != 0);
              } while (uVar12 != 0);
            }
LAB_001b05d4:
            iVar9 = iVar9 + 1;
          } while (iVar9 <= local_48);
          if (*(int *)(param_1 + 0x180) < iVar9) goto LAB_001b0492;
        }
        local_38 = local_38 + 0x22;
        FUN_001afee4(param_1,*(int *)(iVar7 + local_38 * 4 + 4) + (iVar9 + -1) * 3,1);
      }
LAB_001b0492:
      local_34 = local_34 + 1;
      local_3c = local_3c + 4;
    } while (local_34 < *(int *)(param_1 + 0x13c));
  }
  return 1;
}


