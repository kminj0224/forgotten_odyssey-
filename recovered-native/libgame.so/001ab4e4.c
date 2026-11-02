/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab4e4  Symbol: FUN_001ab4e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ab4e4(int *param_1)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  byte *pbVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  byte **ppbVar19;
  int iVar20;
  uint *puVar21;
  byte *pbVar22;
  uint **ppuVar23;
  undefined *unaff_r9;
  int *unaff_r10;
  undefined8 uVar24;
  undefined4 *puStack_15c;
  uint uStack_158;
  int iStack_150;
  byte *pbStack_148;
  byte *pbStack_144;
  undefined auStack_140 [256];
  undefined4 uStack_40;
  byte abStack_2f [3];
  int local_2c;
  
  iVar20 = DAT_001ab844;
  iVar7 = DAT_001ab840 + 0x1ab4fa;
  local_2c = **(int **)(iVar7 + DAT_001ab844);
  iVar12 = param_1[0x6d];
  piVar17 = param_1;
  iVar5 = iVar7;
  if (iVar12 != 0) goto LAB_001ab568;
  if (*(int *)(param_1[0x73] + 0xc) != 0) goto LAB_001ab59c;
LAB_001ab51a:
  ppbVar19 = (byte **)param_1[6];
  pbVar13 = ppbVar19[1];
  pbVar22 = *ppbVar19;
  if (pbVar13 == (byte *)0x0) {
    iVar5 = (*(code *)ppbVar19[3])(param_1);
    if (iVar5 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar22 = *ppbVar19;
    pbVar13 = ppbVar19[1];
    bVar2 = *pbVar22;
  }
  else {
    bVar2 = *pbVar22;
  }
  pbVar13 = pbVar13 + -1;
  unaff_r10 = (int *)(uint)bVar2;
  if (pbVar13 == (byte *)0x0) {
    piVar17 = (int *)(*(code *)ppbVar19[3])(param_1);
    if (piVar17 == (int *)0x0) {
      FUN_001ab60e();
      return;
    }
    pbVar13 = ppbVar19[1];
    bVar2 = **ppbVar19;
    pbVar22 = *ppbVar19 + 1;
  }
  else {
    bVar2 = pbVar22[1];
    pbVar22 = pbVar22 + 2;
    piVar17 = unaff_r10;
  }
  uVar15 = (uint)bVar2;
  if ((uVar15 == 0xd8) && (unaff_r10 == (int *)0xff)) {
    uVar24 = CONCAT44(0xff,piVar17);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x37;
    *(int **)(*param_1 + 0x18) = unaff_r10;
    *(uint *)(*param_1 + 0x1c) = uVar15;
    uVar24 = (**(code **)*param_1)(param_1);
  }
  iVar5 = (int)((ulonglong)uVar24 >> 0x20);
  piVar17 = (int *)uVar24;
  param_1[0x6d] = uVar15;
  *ppbVar19 = pbVar22;
  ppbVar19[1] = pbVar13 + -1;
  iVar12 = param_1[0x6d];
LAB_001ab568:
  uVar24 = CONCAT44(iVar5,piVar17);
  if (0xcf < iVar12) goto LAB_001ab5b0;
LAB_001ab56c:
  if (iVar12 < 0xcd) {
    if (iVar12 == 0xc4) {
      ppbVar19 = (byte **)param_1[6];
      pbVar13 = ppbVar19[1];
      pbVar22 = *ppbVar19;
      if (pbVar13 == (byte *)0x0) {
        iVar20 = (*(code *)ppbVar19[3])(param_1);
        if (iVar20 == 0) {
          FUN_001ab60e();
        }
        pbVar22 = *ppbVar19;
        pbVar13 = ppbVar19[1];
      }
      bVar2 = *pbVar22;
      pbVar13 = pbVar13 + -1;
      pbVar22 = pbVar22 + 1;
      if (pbVar13 == (byte *)0x0) {
        iVar20 = (*(code *)ppbVar19[3])(param_1);
        if (iVar20 == 0) {
          FUN_001ab60e();
        }
        pbVar22 = *ppbVar19;
        pbVar13 = ppbVar19[1];
      }
      pbVar8 = pbVar22 + 1;
      iStack_150 = (int)(int *)(uint)bVar2 * 0x100 + -2 + (uint)*pbVar22;
      pbVar13 = pbVar13 + -1;
      piVar17 = (int *)(uint)bVar2;
      if (0x10 < iStack_150) {
        puStack_15c = &uStack_40;
        pbStack_148 = (byte *)((int)&uStack_40 + 1);
        pbStack_144 = abStack_2f;
        unaff_r9 = auStack_140;
        piVar17 = param_1;
        goto LAB_001abd4a;
      }
LAB_001abf0e:
      if (iStack_150 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        (**(code **)*param_1)(param_1);
      }
      *ppbVar19 = pbVar8;
      ppbVar19[1] = pbVar13;
      FUN_001ab588();
      *(undefined4 *)(*param_1 + 0x14) = 0x57;
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x6d] = 0;
      FUN_001ab610(2);
      do {
        param_1 = piVar17;
        if ((int)unaff_r10 < 0x101) goto LAB_001abe64;
        do {
          *(undefined4 *)(*piVar17 + 0x14) = 9;
          (**(code **)*piVar17)(piVar17);
          param_1 = piVar17;
LAB_001abe64:
          if (unaff_r10 != (int *)0x0) {
            iVar20 = 0;
            do {
              while (pbVar13 == (byte *)0x0) {
                iVar5 = (*(code *)ppbVar19[3])(param_1);
                if (iVar5 == 0) {
                  FUN_001ab60e();
                }
                pbVar13 = ppbVar19[1] + -1;
                pbVar8 = *ppbVar19 + 1;
                unaff_r9[iVar20] = **ppbVar19;
                iVar20 = iVar20 + 1;
                if ((int)unaff_r10 <= iVar20) goto LAB_001abeb4;
              }
              bVar2 = *pbVar8;
              pbVar13 = pbVar13 + -1;
              pbVar8 = pbVar8 + 1;
              unaff_r9[iVar20] = bVar2;
              iVar20 = iVar20 + 1;
            } while (iVar20 < (int)unaff_r10);
          }
LAB_001abeb4:
          iStack_150 = iStack_150 - (int)unaff_r10;
          if ((int)(uStack_158 << 0x1b) < 0) {
            iVar20 = uStack_158 + 0x20;
            uStack_158 = uStack_158 - 0x10;
          }
          else {
            iVar20 = uStack_158 + 0x2c;
          }
          unaff_r10 = param_1 + iVar20 + 1;
          if (3 < uStack_158) {
            *(undefined4 *)(*param_1 + 0x14) = 0x1f;
            *(uint *)(*param_1 + 0x18) = uStack_158;
            (**(code **)*param_1)(param_1);
          }
          puVar11 = (undefined4 *)*unaff_r10;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)jpeg_alloc_huff_table(param_1);
            *unaff_r10 = (int)puVar11;
          }
          uVar9 = puStack_15c[1];
          uVar18 = puStack_15c[2];
          *puVar11 = *puStack_15c;
          puVar11[1] = uVar9;
          puVar11[2] = uVar18;
          puVar11[3] = puStack_15c[3];
          *(undefined *)(puVar11 + 4) = *(undefined *)(puStack_15c + 4);
          memcpy((void *)(*unaff_r10 + 0x11),unaff_r9,0x100);
          piVar17 = param_1;
          if (iStack_150 < 0x11) goto LAB_001abf0e;
LAB_001abd4a:
          if (pbVar13 == (byte *)0x0) {
            iVar20 = (*(code *)ppbVar19[3])(piVar17);
            if (iVar20 == 0) {
              FUN_001ab60e();
              return;
            }
            pbVar8 = *ppbVar19;
            pbVar13 = ppbVar19[1];
          }
          uStack_158 = (uint)*pbVar8;
          pbVar13 = pbVar13 + -1;
          *(undefined4 *)(*piVar17 + 0x14) = 0x52;
          pbVar8 = pbVar8 + 1;
          *(uint *)(*piVar17 + 0x18) = uStack_158;
          (**(code **)(*piVar17 + 4))(piVar17,1);
          *(undefined *)puStack_15c = 0;
          unaff_r10 = (int *)0x0;
          pbVar22 = pbStack_148;
          do {
            while (pbVar13 == (byte *)0x0) {
              iVar20 = (*(code *)ppbVar19[3])(piVar17);
              if (iVar20 == 0) {
                FUN_001ab60e();
                return;
              }
              bVar2 = **ppbVar19;
              pbVar13 = ppbVar19[1] + -1;
              pbVar8 = *ppbVar19 + 1;
              *pbVar22 = bVar2;
              pbVar22 = pbVar22 + 1;
              unaff_r10 = (int *)((int)unaff_r10 + (uint)bVar2);
              if (pbVar22 == pbStack_144) goto LAB_001abdca;
            }
            bVar2 = *pbVar8;
            pbVar13 = pbVar13 + -1;
            pbVar8 = pbVar8 + 1;
            *pbVar22 = bVar2;
            pbVar22 = pbVar22 + 1;
            unaff_r10 = (int *)((int)unaff_r10 + (uint)bVar2);
          } while (pbVar22 != pbStack_144);
LAB_001abdca:
          iStack_150 = iStack_150 + -0x11;
          iVar20 = *piVar17;
          *(uint *)(iVar20 + 0x18) = (uint)*(byte *)((int)puStack_15c + 1);
          *(uint *)(iVar20 + 0x1c) = (uint)*(byte *)((int)puStack_15c + 2);
          *(uint *)(iVar20 + 0x20) = (uint)*(byte *)((int)puStack_15c + 3);
          *(uint *)(iVar20 + 0x24) = (uint)*(byte *)(puStack_15c + 1);
          *(uint *)(iVar20 + 0x28) = (uint)*(byte *)((int)puStack_15c + 5);
          *(uint *)(iVar20 + 0x2c) = (uint)*(byte *)((int)puStack_15c + 6);
          *(uint *)(iVar20 + 0x30) = (uint)*(byte *)((int)puStack_15c + 7);
          *(uint *)(iVar20 + 0x34) = (uint)*(byte *)(puStack_15c + 2);
          *(undefined4 *)(*piVar17 + 0x14) = 0x58;
          (**(code **)(*piVar17 + 4))(piVar17,2);
          iVar20 = *piVar17;
          *(uint *)(iVar20 + 0x18) = (uint)*(byte *)((int)puStack_15c + 9);
          *(uint *)(iVar20 + 0x1c) = (uint)*(byte *)((int)puStack_15c + 10);
          *(uint *)(iVar20 + 0x20) = (uint)*(byte *)((int)puStack_15c + 0xb);
          *(uint *)(iVar20 + 0x24) = (uint)*(byte *)(puStack_15c + 3);
          *(uint *)(iVar20 + 0x28) = (uint)*(byte *)((int)puStack_15c + 0xd);
          *(uint *)(iVar20 + 0x2c) = (uint)*(byte *)((int)puStack_15c + 0xe);
          *(uint *)(iVar20 + 0x30) = (uint)*(byte *)((int)puStack_15c + 0xf);
          *(uint *)(iVar20 + 0x34) = (uint)*(byte *)(puStack_15c + 4);
          *(undefined4 *)(*piVar17 + 0x14) = 0x58;
          (**(code **)(*piVar17 + 4))(piVar17,2);
        } while (iStack_150 < (int)unaff_r10);
      } while( true );
    }
    if (0xc4 < iVar12) {
      if (iVar12 == 0xc9) {
        iVar5 = FUN_001aa894(param_1,0,0,1);
        if (iVar5 != 0) goto code_r0x001ab588;
        FUN_001ab60e();
        return;
      }
      if (iVar12 < 0xc9) {
        FUN_001ab570();
        return;
      }
      if (iVar12 == 0xcb) {
        FUN_001ab570();
        return;
      }
      if (iVar12 < 0xcc) {
        uVar24 = FUN_001ac11e();
      }
      pbVar22 = ((byte **)param_1[6])[1];
      pbVar13 = *(byte **)param_1[6];
      if (pbVar22 == (byte *)0x0) {
        uVar24 = FUN_001ac160();
      }
      bVar2 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      if (pbVar22 == (byte *)0x1) {
        uVar24 = FUN_001ac1d4();
      }
      if ((int)((uint)bVar2 * 0x100 + -2 + (uint)*pbVar13) < 1) {
        FUN_001ac0ba((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),pbVar13 + 1);
      }
      FUN_001ab7a8();
      return;
    }
    if (iVar12 == 0xc1) {
      iVar5 = FUN_001aa894(param_1,0,0,0);
      if (iVar5 != 0) goto code_r0x001ab588;
      FUN_001ab60e();
      return;
    }
    if (0xc1 < iVar12) {
      FUN_001abfba();
    }
    if (iVar12 == 1) goto LAB_001ab824;
    if (iVar12 != 0xc0) goto code_r0x001ab5d4;
    iVar5 = FUN_001aa894(param_1,1,0,0);
    if (iVar5 != 0) goto code_r0x001ab588;
code_r0x001ab60e:
    if (local_2c != **(int **)(iVar7 + iVar20)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(0);
    }
    return;
  }
  iVar5 = *param_1;
  uVar9 = 0x3e;
  do {
    *(undefined4 *)(iVar5 + 0x14) = uVar9;
    *(int *)(*param_1 + 0x18) = param_1[0x6d];
    (**(code **)*param_1)(param_1);
code_r0x001ab588:
    while( true ) {
      param_1[0x6d] = 0;
      if (*(int *)(param_1[0x73] + 0xc) == 0) goto LAB_001ab51a;
LAB_001ab59c:
      uVar24 = FUN_001ab134(param_1);
      if ((int)uVar24 == 0) goto code_r0x001ab60e;
      iVar12 = param_1[0x6d];
      if (iVar12 < 0xd0) goto LAB_001ab56c;
LAB_001ab5b0:
      if (iVar12 == 0xdb) {
        ppbVar19 = (byte **)param_1[6];
        pbVar22 = ppbVar19[1];
        pbVar13 = *ppbVar19;
        if (pbVar22 == (byte *)0x0) {
          FUN_001ac14a();
        }
        bVar2 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        if (pbVar22 == (byte *)0x1) {
          FUN_001ac214();
        }
        pbVar8 = pbVar13 + 1;
        iVar20 = (uint)bVar2 * 0x100 + -2 + (uint)*pbVar13;
        pbVar22 = pbVar22 + -2;
        if (iVar20 < 1) goto LAB_001aba2a;
        iVar5 = iVar7 + DAT_001abb48;
        goto LAB_001ab8c8;
      }
      if (0xdb < iVar12) break;
      if (iVar12 == 0xd8) {
        *(undefined4 *)(*param_1 + 0x14) = 0x68;
        (**(code **)(*param_1 + 4))(param_1,1);
        if (*(int *)(param_1[0x73] + 0xc) != 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x3f;
          (**(code **)*param_1)(param_1);
        }
        iVar20 = 0;
        piVar17 = param_1 + 0x3a;
        do {
          *(undefined *)piVar17 = 0;
          iVar20 = iVar20 + 1;
          *(undefined *)(piVar17 + 4) = 1;
          *(undefined *)(piVar17 + 8) = 5;
          piVar17 = (int *)((int)piVar17 + 1);
        } while (iVar20 != 0x10);
        param_1[0x46] = 0;
        param_1[0x4c] = 0;
        param_1[0x47] = 0;
        *(undefined *)(param_1 + 0x48) = 1;
        iVar20 = _DAT_001ac034;
        param_1[10] = 0;
        *(undefined *)((int)param_1 + iVar20) = 1;
        *(undefined *)((int)param_1 + 0x122) = 0;
        *(undefined2 *)(param_1 + 0x49) = 1;
        *(undefined2 *)((int)param_1 + 0x126) = 1;
        param_1[0x4a] = 0;
        *(undefined *)(param_1 + 0x4b) = 0;
        *(undefined4 *)(param_1[0x73] + 0xc) = 1;
        FUN_001ab588();
        return;
      }
      if (0xd7 < iVar12) {
        if (iVar12 == 0xd9) {
          FUN_001abf2a();
        }
        if (iVar12 != 0xda) goto code_r0x001ab5d4;
        ppbVar19 = (byte **)param_1[6];
        pbVar13 = *ppbVar19;
        pbVar22 = ppbVar19[1];
        if (*(int *)(param_1[0x73] + 0x10) == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x40;
          (**(code **)*param_1)(param_1);
        }
        if (pbVar22 == (byte *)0x0) {
          iVar20 = (*(code *)ppbVar19[3])(param_1);
          if (iVar20 == 0) {
            FUN_001ab60e();
          }
          pbVar13 = *ppbVar19;
          pbVar22 = ppbVar19[1];
        }
        pbVar22 = pbVar22 + -1;
        pbVar8 = pbVar13 + 1;
        bVar2 = *pbVar13;
        if (pbVar22 == (byte *)0x0) {
          iVar20 = (*(code *)ppbVar19[3])(param_1);
          if (iVar20 == 0) {
            FUN_001ab60e();
          }
          pbVar8 = *ppbVar19;
          pbVar22 = ppbVar19[1];
        }
        pbVar22 = pbVar22 + -1;
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (pbVar22 == (byte *)0x0) {
          iVar20 = (*(code *)ppbVar19[3])(param_1);
          if (iVar20 == 0) {
            FUN_001ab60e();
            return;
          }
          pbVar8 = *ppbVar19;
          pbVar22 = ppbVar19[1];
        }
        pbVar22 = pbVar22 + -1;
        uVar15 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
        *(undefined4 *)(*param_1 + 0x14) = 0x69;
        *(uint *)(*param_1 + 0x18) = uVar15;
        (**(code **)(*param_1 + 4))(param_1,1);
        if (((uint)bVar3 + (uint)bVar2 * 0x100 == (uVar15 + 3) * 2) && (uVar15 < 5)) {
          if (uVar15 == 0) {
            if (param_1[0x38] == 0) goto LAB_001abae8;
            param_1[0x54] = 0;
            goto LAB_001abbb2;
          }
          param_1[0x54] = uVar15;
        }
        else {
LAB_001abae8:
          *(undefined4 *)(*param_1 + 0x14) = 0xc;
          (**(code **)*param_1)(param_1);
          param_1[0x54] = uVar15;
          if (uVar15 == 0) goto LAB_001abbb2;
        }
        iVar20 = 0;
        ppuVar23 = (uint **)(param_1 + 0x55);
        goto LAB_001abb0e;
      }
LAB_001ab824:
      *(undefined4 *)(*param_1 + 0x14) = 0x5e;
      *(int *)(*param_1 + 0x18) = param_1[0x6d];
      (**(code **)(*param_1 + 4))(param_1,1);
    }
    if (0xef < iVar12) {
      if (iVar12 != 0xfe) {
        FUN_001ab5d4();
        return;
      }
      iVar5 = (**(code **)(param_1[0x73] + 0x1c))(param_1);
      if (iVar5 == 0) {
        FUN_001ab60e();
        return;
      }
      goto code_r0x001ab588;
    }
    if (0xdf < iVar12) {
      iVar5 = (**(code **)((iVar12 + -0xd8) * 4 + param_1[0x73]))(param_1);
      if (iVar5 == 0) {
        FUN_001ab60e();
        return;
      }
      goto code_r0x001ab588;
    }
    if (iVar12 == 0xdc) {
      iVar20 = FUN_001ab0a8(param_1);
      if (iVar20 != 0) {
        FUN_001ab588();
        return;
      }
      FUN_001ab60e();
      return;
    }
    if (iVar12 == 0xdd) {
      ppbVar19 = (byte **)param_1[6];
      pbVar13 = ppbVar19[1];
      pbVar22 = *ppbVar19;
      if (pbVar13 == (byte *)0x0) {
        FUN_001ac176();
      }
      bVar2 = *pbVar22;
      if (pbVar13 == (byte *)0x1) {
        FUN_001ac1ea();
      }
      if ((uint)pbVar22[1] + (uint)bVar2 * 0x100 != 4) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        (**(code **)*param_1)(param_1);
      }
      if (pbVar13 == (byte *)0x2) {
        FUN_001ac22a();
      }
      bVar2 = pbVar22[2];
      pbVar13 = pbVar13 + -3;
      pbVar22 = pbVar22 + 3;
      if (pbVar13 == (byte *)0x0) {
        iVar5 = (*(code *)ppbVar19[3])(param_1);
        if (iVar5 == 0) goto code_r0x001ab60e;
        pbVar22 = *ppbVar19;
        pbVar13 = ppbVar19[1];
      }
      iVar20 = (uint)*pbVar22 + (uint)bVar2 * 0x100;
      *(undefined4 *)(*param_1 + 0x14) = 0x54;
      *(int *)(*param_1 + 0x18) = iVar20;
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x46] = iVar20;
      *ppbVar19 = pbVar22 + 1;
      ppbVar19[1] = pbVar13 + -1;
      FUN_001ab588();
      return;
    }
code_r0x001ab5d4:
    iVar5 = *param_1;
    uVar9 = 0x46;
  } while( true );
LAB_001ab8c8:
  if (pbVar22 == (byte *)0x0) {
    iVar12 = (*(code *)ppbVar19[3])(param_1);
    if (iVar12 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar8 = *ppbVar19;
    pbVar22 = ppbVar19[1];
  }
  iVar12 = (int)(uint)*pbVar8 >> 4;
  uVar15 = *pbVar8 & 0xf;
  *(undefined4 *)(*param_1 + 0x14) = 0x53;
  pbVar22 = pbVar22 + -1;
  *(uint *)(*param_1 + 0x18) = uVar15;
  pbVar8 = pbVar8 + 1;
  *(int *)(*param_1 + 0x1c) = iVar12;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (3 < uVar15) {
    *(undefined4 *)(*param_1 + 0x14) = 0x20;
    *(uint *)(*param_1 + 0x18) = uVar15;
    (**(code **)*param_1)(param_1);
  }
  puVar14 = (ushort *)param_1[uVar15 + 0x29];
  if (puVar14 == (ushort *)0x0) {
    FUN_001ac24a();
  }
  iVar16 = iVar20 + -1;
  if (iVar12 == 0) {
    if (0x3f < iVar16) goto LAB_001ab932;
    iVar6 = 0;
    do {
      *(undefined2 *)((int)puVar14 + iVar6) = 1;
      iVar6 = iVar6 + 2;
    } while (iVar6 != 0x80);
    uVar15 = iVar20 - 5;
    puStack_15c = (undefined4 *)iVar16;
joined_r0x001abfac:
    if (uVar15 < 0x2e) {
                    /* WARNING: Could not recover jumptable at 0x001abfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(iVar5 + uVar15 * 4) + iVar5))();
      return;
    }
    if (0 < (int)puStack_15c) goto LAB_001ab936;
  }
  else {
    if (iVar16 < 0x80) {
      iVar20 = 0;
      do {
        *(undefined2 *)((int)puVar14 + iVar20) = 1;
        iVar20 = iVar20 + 2;
      } while (iVar20 != 0x80);
      uVar15 = (iVar16 >> 1) - 4;
      puStack_15c = (undefined4 *)(iVar16 >> 1);
      goto joined_r0x001abfac;
    }
LAB_001ab932:
    puStack_15c = (undefined4 *)0x40;
LAB_001ab936:
    piVar17 = *(int **)(iVar7 + DAT_001abb4c);
    iVar20 = 0;
    do {
      while (iVar12 == 0) {
        if (pbVar22 == (byte *)0x0) {
          iVar6 = (*(code *)ppbVar19[3])(param_1);
          if (iVar6 == 0) {
            FUN_001ab60e();
          }
          pbVar8 = *ppbVar19;
          pbVar22 = ppbVar19[1];
        }
        iVar6 = *piVar17;
        piVar17 = piVar17 + 1;
        bVar2 = *pbVar8;
        iVar20 = iVar20 + 1;
        pbVar22 = pbVar22 + -1;
        pbVar8 = pbVar8 + 1;
        puVar14[iVar6] = (ushort)bVar2;
        if ((int)puStack_15c <= iVar20) goto LAB_001ab9ac;
      }
      if (pbVar22 == (byte *)0x0) {
        iVar6 = (*(code *)ppbVar19[3])(param_1);
        if (iVar6 == 0) {
          FUN_001ab60e();
        }
        pbVar8 = *ppbVar19;
        pbVar22 = ppbVar19[1];
        bVar2 = *pbVar8;
      }
      else {
        bVar2 = *pbVar8;
      }
      pbVar22 = pbVar22 + -1;
      pbVar13 = pbVar8 + 1;
      if (pbVar22 == (byte *)0x0) {
        iVar6 = (*(code *)ppbVar19[3])(param_1);
        if (iVar6 == 0) {
          FUN_001ab60e();
        }
        pbVar13 = *ppbVar19;
        pbVar22 = ppbVar19[1];
      }
      iVar20 = iVar20 + 1;
      iVar6 = *piVar17;
      piVar17 = piVar17 + 1;
      pbVar22 = pbVar22 + -1;
      pbVar8 = pbVar13 + 1;
      puVar14[iVar6] = (ushort)*pbVar13 + (ushort)bVar2 * 0x100;
    } while (iVar20 < (int)puStack_15c);
  }
LAB_001ab9ac:
  iVar20 = *param_1;
  if (1 < *(int *)(iVar20 + 0x68)) {
    iVar6 = 0;
    while( true ) {
      *(uint *)(iVar20 + 0x18) = (uint)*puVar14;
      *(uint *)(iVar20 + 0x1c) = (uint)puVar14[1];
      iVar6 = iVar6 + 8;
      *(uint *)(iVar20 + 0x20) = (uint)puVar14[2];
      *(uint *)(iVar20 + 0x24) = (uint)puVar14[3];
      *(uint *)(iVar20 + 0x28) = (uint)puVar14[4];
      *(uint *)(iVar20 + 0x2c) = (uint)puVar14[5];
      *(uint *)(iVar20 + 0x30) = (uint)puVar14[6];
      puVar1 = puVar14 + 7;
      puVar14 = puVar14 + 8;
      *(uint *)(iVar20 + 0x34) = (uint)*puVar1;
      *(undefined4 *)(*param_1 + 0x14) = 0x5f;
      (**(code **)(*param_1 + 4))(param_1,2);
      if (iVar6 == 0x40) break;
      iVar20 = *param_1;
    }
  }
  iVar20 = iVar16 - (int)puStack_15c;
  if (iVar12 != 0) {
    iVar20 = iVar20 - (int)puStack_15c;
  }
  if (iVar20 < 1) {
LAB_001aba2a:
    if (iVar20 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0xc;
      (**(code **)*param_1)(param_1);
    }
    *ppbVar19 = pbVar8;
    ppbVar19[1] = pbVar22;
    FUN_001ab588();
    return;
  }
  goto LAB_001ab8c8;
LAB_001abb0e:
  if (pbVar22 == (byte *)0x0) {
    iVar5 = (*(code *)ppbVar19[3])(param_1);
    if (iVar5 == 0) {
      FUN_001ab60e();
    }
    pbVar22 = ppbVar19[1];
    pbVar8 = *ppbVar19;
    bVar2 = *pbVar8;
  }
  else {
    bVar2 = *pbVar8;
  }
  pbVar22 = pbVar22 + -1;
  pbVar8 = pbVar8 + 1;
  uVar4 = (uint)bVar2;
  if (pbVar22 == (byte *)0x0) {
    iVar5 = (*(code *)ppbVar19[3])(param_1);
    if (iVar5 == 0) {
      FUN_001ab60e();
    }
    pbVar8 = *ppbVar19;
    pbVar22 = ppbVar19[1];
  }
  bVar2 = *pbVar8;
  pbVar22 = pbVar22 + -1;
  pbVar8 = pbVar8 + 1;
  puVar21 = (uint *)param_1[0x36];
  if (param_1[9] < 1) {
LAB_001abb5e:
    *(undefined4 *)(*param_1 + 0x14) = 4;
    *(uint *)(*param_1 + 0x18) = uVar4;
    (**(code **)*param_1)(param_1);
  }
  else {
    iVar5 = 0;
    uVar10 = *puVar21;
    while (uVar4 != uVar10) {
      iVar5 = iVar5 + 1;
      puVar21 = puVar21 + 0x16;
      if (param_1[9] <= iVar5) goto LAB_001abb5e;
      uVar10 = *puVar21;
    }
  }
  *ppuVar23 = puVar21;
  puVar21[5] = (int)(uint)bVar2 >> 4;
  puVar21[6] = bVar2 & 0xf;
  iVar5 = *param_1;
  *(uint *)(iVar5 + 0x18) = uVar4;
  *(uint *)(iVar5 + 0x1c) = puVar21[5];
  *(uint *)(iVar5 + 0x20) = puVar21[6];
  *(undefined4 *)(*param_1 + 0x14) = 0x6a;
  (**(code **)(*param_1 + 4))(param_1,1);
  iVar20 = iVar20 + 1;
  ppuVar23 = ppuVar23 + 1;
  if ((int)uVar15 <= iVar20) {
LAB_001abbb2:
    if (pbVar22 == (byte *)0x0) {
      iVar20 = (*(code *)ppbVar19[3])(param_1);
      if (iVar20 == 0) {
        FUN_001ab60e();
      }
      pbVar8 = *ppbVar19;
      pbVar22 = ppbVar19[1];
    }
    pbVar22 = pbVar22 + -1;
    param_1[0x66] = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    if (pbVar22 == (byte *)0x0) {
      iVar20 = (*(code *)ppbVar19[3])(param_1);
      if (iVar20 == 0) {
        FUN_001ab60e();
      }
      pbVar8 = *ppbVar19;
      pbVar22 = ppbVar19[1];
    }
    pbVar22 = pbVar22 + -1;
    param_1[0x67] = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    if (pbVar22 == (byte *)0x0) {
      iVar20 = (*(code *)ppbVar19[3])(param_1);
      if (iVar20 == 0) {
        FUN_001ab60e();
        return;
      }
      pbVar8 = *ppbVar19;
      pbVar22 = ppbVar19[1];
    }
    bVar2 = *pbVar8;
    iVar20 = *param_1;
    param_1[0x68] = (uint)(bVar2 >> 4);
    param_1[0x69] = bVar2 & 0xf;
    *(int *)(iVar20 + 0x18) = param_1[0x66];
    *(int *)(iVar20 + 0x1c) = param_1[0x67];
    *(int *)(iVar20 + 0x20) = param_1[0x68];
    *(int *)(iVar20 + 0x24) = param_1[0x69];
    *(undefined4 *)(*param_1 + 0x14) = 0x6b;
    (**(code **)(*param_1 + 4))(param_1,1);
    *(undefined4 *)(param_1[0x73] + 0x14) = 0;
    if (uVar15 != 0) {
      param_1[0x24] = param_1[0x24] + 1;
    }
    *ppbVar19 = pbVar8 + 1;
    ppbVar19[1] = pbVar22 + -1;
    param_1[0x6d] = 0;
    FUN_001ab610(1);
    return;
  }
  goto LAB_001abb0e;
}


