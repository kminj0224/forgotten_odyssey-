/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab5d4  Symbol: FUN_001ab5d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ab5d4(void)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  ushort *puVar14;
  int *unaff_r4;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  uint *puVar19;
  byte **ppbVar20;
  byte *pbVar21;
  uint **ppuVar22;
  undefined *unaff_r9;
  int *unaff_r10;
  undefined8 uVar23;
  undefined4 *in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  int iStack00000010;
  int in_stack_00000014;
  byte *in_stack_00000018;
  byte *in_stack_0000001c;
  int in_stack_00000134;
  
code_r0x001ab5d4:
  iVar11 = *unaff_r4;
  uVar8 = 0x46;
  do {
    *(undefined4 *)(iVar11 + 0x14) = uVar8;
    *(int *)(*unaff_r4 + 0x18) = unaff_r4[0x6d];
    (**(code **)*unaff_r4)(unaff_r4);
code_r0x001ab588:
    while (unaff_r4[0x6d] = 0, *(int *)(unaff_r4[0x73] + 0xc) == 0) {
      ppbVar20 = (byte **)unaff_r4[6];
      pbVar21 = *ppbVar20;
      if (ppbVar20[1] == (byte *)0x0) {
        iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
        if (iVar11 == 0) {
          FUN_001ab60e();
          return;
        }
        pbVar21 = *ppbVar20;
        piVar17 = (int *)(uint)*pbVar21;
        pbVar12 = ppbVar20[1] + -1;
        unaff_r10 = piVar17;
        if (pbVar12 == (byte *)0x0) goto LAB_001ab7fc;
LAB_001ab534:
        uVar15 = (uint)pbVar21[1];
        pbVar12 = pbVar12 + -1;
        pbVar21 = pbVar21 + 2;
        unaff_r10 = piVar17;
        if (uVar15 == 0xd8) goto LAB_001ab81a;
LAB_001ab542:
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x37;
        *(int **)(*unaff_r4 + 0x18) = unaff_r10;
        *(uint *)(*unaff_r4 + 0x1c) = uVar15;
        uVar23 = (**(code **)*unaff_r4)(unaff_r4);
      }
      else {
        piVar17 = (int *)(uint)*pbVar21;
        pbVar12 = ppbVar20[1] + -1;
        unaff_r10 = piVar17;
        if (pbVar12 != (byte *)0x0) goto LAB_001ab534;
LAB_001ab7fc:
        piVar17 = (int *)(*(code *)ppbVar20[3])(unaff_r4);
        if (piVar17 == (int *)0x0) {
          FUN_001ab60e();
          return;
        }
        uVar15 = (uint)**ppbVar20;
        pbVar12 = ppbVar20[1] + -1;
        pbVar21 = *ppbVar20 + 1;
        if (uVar15 != 0xd8) goto LAB_001ab542;
LAB_001ab81a:
        if (unaff_r10 != (int *)0xff) goto LAB_001ab542;
        uVar23 = CONCAT44(0xff,piVar17);
      }
      unaff_r4[0x6d] = uVar15;
      *ppbVar20 = pbVar21;
      ppbVar20[1] = pbVar12;
      iVar11 = unaff_r4[0x6d];
      if (iVar11 < 0xd0) goto LAB_001ab56c;
LAB_001ab5b0:
      if (iVar11 == 0xdb) {
        ppbVar20 = (byte **)unaff_r4[6];
        pbVar21 = ppbVar20[1];
        pbVar12 = *ppbVar20;
        if (pbVar21 == (byte *)0x0) {
          FUN_001ac14a();
        }
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (pbVar21 == (byte *)0x1) {
          FUN_001ac214();
        }
        pbVar7 = pbVar12 + 1;
        iVar11 = (uint)bVar2 * 0x100 + -2 + (uint)*pbVar12;
        pbVar21 = pbVar21 + -2;
        if (iVar11 < 1) goto LAB_001aba2a;
        iVar13 = in_stack_0000000c + DAT_001abb48;
        goto LAB_001ab8c8;
      }
      if (iVar11 < 0xdc) {
        if (iVar11 == 0xd8) {
          *(undefined4 *)(*unaff_r4 + 0x14) = 0x68;
          (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
          if (*(int *)(unaff_r4[0x73] + 0xc) != 0) {
            *(undefined4 *)(*unaff_r4 + 0x14) = 0x3f;
            (**(code **)*unaff_r4)(unaff_r4);
          }
          iVar11 = 0;
          piVar17 = unaff_r4 + 0x3a;
          do {
            *(undefined *)piVar17 = 0;
            iVar11 = iVar11 + 1;
            *(undefined *)(piVar17 + 4) = 1;
            *(undefined *)(piVar17 + 8) = 5;
            piVar17 = (int *)((int)piVar17 + 1);
          } while (iVar11 != 0x10);
          unaff_r4[0x46] = 0;
          unaff_r4[0x4c] = 0;
          unaff_r4[0x47] = 0;
          *(undefined *)(unaff_r4 + 0x48) = 1;
          iVar11 = _DAT_001ac034;
          unaff_r4[10] = 0;
          *(undefined *)((int)unaff_r4 + iVar11) = 1;
          *(undefined *)((int)unaff_r4 + 0x122) = 0;
          *(undefined2 *)(unaff_r4 + 0x49) = 1;
          *(undefined2 *)((int)unaff_r4 + 0x126) = 1;
          unaff_r4[0x4a] = 0;
          *(undefined *)(unaff_r4 + 0x4b) = 0;
          *(undefined4 *)(unaff_r4[0x73] + 0xc) = 1;
          FUN_001ab588();
          return;
        }
        if (iVar11 < 0xd8) goto LAB_001ab824;
        if (iVar11 == 0xd9) {
          FUN_001abf2a();
        }
        if (iVar11 != 0xda) goto code_r0x001ab5d4;
        ppbVar20 = (byte **)unaff_r4[6];
        pbVar12 = *ppbVar20;
        pbVar21 = ppbVar20[1];
        if (*(int *)(unaff_r4[0x73] + 0x10) == 0) {
          *(undefined4 *)(*unaff_r4 + 0x14) = 0x40;
          (**(code **)*unaff_r4)(unaff_r4);
        }
        if (pbVar21 == (byte *)0x0) {
          iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar11 == 0) {
            FUN_001ab60e();
          }
          pbVar12 = *ppbVar20;
          pbVar21 = ppbVar20[1];
        }
        pbVar21 = pbVar21 + -1;
        pbVar7 = pbVar12 + 1;
        bVar2 = *pbVar12;
        if (pbVar21 == (byte *)0x0) {
          iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar11 == 0) {
            FUN_001ab60e();
          }
          pbVar7 = *ppbVar20;
          pbVar21 = ppbVar20[1];
        }
        pbVar21 = pbVar21 + -1;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        if (pbVar21 == (byte *)0x0) {
          iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar11 == 0) {
            FUN_001ab60e();
            return;
          }
          pbVar7 = *ppbVar20;
          pbVar21 = ppbVar20[1];
        }
        pbVar21 = pbVar21 + -1;
        uVar15 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x69;
        *(uint *)(*unaff_r4 + 0x18) = uVar15;
        (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
        if (((uint)bVar3 + (uint)bVar2 * 0x100 == (uVar15 + 3) * 2) && (uVar15 < 5)) {
          if (uVar15 == 0) {
            if (unaff_r4[0x38] == 0) goto LAB_001abae8;
            unaff_r4[0x54] = 0;
            goto LAB_001abbb2;
          }
          unaff_r4[0x54] = uVar15;
        }
        else {
LAB_001abae8:
          *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
          (**(code **)*unaff_r4)(unaff_r4);
          unaff_r4[0x54] = uVar15;
          if (uVar15 == 0) goto LAB_001abbb2;
        }
        iVar11 = 0;
        ppuVar22 = (uint **)(unaff_r4 + 0x55);
        goto LAB_001abb0e;
      }
      if (iVar11 < 0xf0) {
        if (iVar11 < 0xe0) {
          if (iVar11 == 0xdc) {
            iVar11 = FUN_001ab0a8(unaff_r4);
            if (iVar11 == 0) {
              FUN_001ab60e();
              return;
            }
            FUN_001ab588();
            return;
          }
          if (iVar11 == 0xdd) {
            ppbVar20 = (byte **)unaff_r4[6];
            pbVar12 = ppbVar20[1];
            pbVar21 = *ppbVar20;
            if (pbVar12 == (byte *)0x0) {
              FUN_001ac176();
            }
            bVar2 = *pbVar21;
            if (pbVar12 == (byte *)0x1) {
              FUN_001ac1ea();
            }
            if ((uint)pbVar21[1] + (uint)bVar2 * 0x100 != 4) {
              *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
              (**(code **)*unaff_r4)(unaff_r4);
            }
            if (pbVar12 == (byte *)0x2) {
              FUN_001ac22a();
            }
            bVar2 = pbVar21[2];
            pbVar12 = pbVar12 + -3;
            pbVar21 = pbVar21 + 3;
            if (pbVar12 != (byte *)0x0) {
LAB_001ab6a4:
              iVar11 = (uint)*pbVar21 + (uint)bVar2 * 0x100;
              *(undefined4 *)(*unaff_r4 + 0x14) = 0x54;
              *(int *)(*unaff_r4 + 0x18) = iVar11;
              (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
              unaff_r4[0x46] = iVar11;
              *ppbVar20 = pbVar21 + 1;
              ppbVar20[1] = pbVar12 + -1;
              FUN_001ab588();
              return;
            }
            iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
            if (iVar11 != 0) {
              pbVar21 = *ppbVar20;
              pbVar12 = ppbVar20[1];
              goto LAB_001ab6a4;
            }
            goto code_r0x001ab60e;
          }
          goto code_r0x001ab5d4;
        }
        iVar11 = (**(code **)((iVar11 + -0xd8) * 4 + unaff_r4[0x73]))(unaff_r4);
        if (iVar11 == 0) {
          FUN_001ab60e();
          return;
        }
      }
      else {
        if (iVar11 != 0xfe) {
          FUN_001ab5d4();
          return;
        }
        iVar11 = (**(code **)(unaff_r4[0x73] + 0x1c))(unaff_r4);
        if (iVar11 == 0) {
          FUN_001ab60e();
          return;
        }
      }
    }
    uVar23 = FUN_001ab134(unaff_r4);
    if ((int)uVar23 == 0) goto code_r0x001ab60e;
    iVar11 = unaff_r4[0x6d];
    if (0xcf < iVar11) goto LAB_001ab5b0;
LAB_001ab56c:
    if (iVar11 < 0xcd) {
      if (iVar11 == 0xc4) {
        ppbVar20 = (byte **)unaff_r4[6];
        pbVar12 = ppbVar20[1];
        pbVar21 = *ppbVar20;
        if (pbVar12 == (byte *)0x0) {
          iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar11 == 0) {
            FUN_001ab60e();
          }
          pbVar21 = *ppbVar20;
          pbVar12 = ppbVar20[1];
        }
        bVar2 = *pbVar21;
        pbVar12 = pbVar12 + -1;
        pbVar21 = pbVar21 + 1;
        if (pbVar12 == (byte *)0x0) {
          iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar11 == 0) {
            FUN_001ab60e();
          }
          pbVar21 = *ppbVar20;
          pbVar12 = ppbVar20[1];
        }
        pbVar7 = pbVar21 + 1;
        iStack00000010 = (int)(int *)(uint)bVar2 * 0x100 + -2 + (uint)*pbVar21;
        pbVar12 = pbVar12 + -1;
        piVar17 = (int *)(uint)bVar2;
        if (0x10 < iStack00000010) {
          in_stack_00000004 = (undefined4 *)&stack0x00000120;
          in_stack_00000018 = &stack0x00000121;
          in_stack_0000001c = &stack0x00000131;
          unaff_r9 = &stack0x00000020;
          piVar17 = unaff_r4;
          goto LAB_001abd4a;
        }
        goto LAB_001abf0e;
      }
      if (iVar11 < 0xc5) {
        if (iVar11 == 0xc1) {
          iVar11 = FUN_001aa894(unaff_r4,0,0,0);
          if (iVar11 == 0) {
            FUN_001ab60e();
            return;
          }
        }
        else {
          if (0xc1 < iVar11) {
            FUN_001abfba();
          }
          if (iVar11 == 1) {
LAB_001ab824:
            *(undefined4 *)(*unaff_r4 + 0x14) = 0x5e;
            *(int *)(*unaff_r4 + 0x18) = unaff_r4[0x6d];
            (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
          }
          else {
            if (iVar11 != 0xc0) goto code_r0x001ab5d4;
            iVar11 = FUN_001aa894(unaff_r4,1,0,0);
            if (iVar11 == 0) {
code_r0x001ab60e:
              if (in_stack_00000134 == **(int **)(in_stack_0000000c + in_stack_00000014)) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(0);
            }
          }
        }
      }
      else {
        if (iVar11 != 0xc9) {
          if (iVar11 < 0xc9) {
            FUN_001ab570();
            return;
          }
          if (iVar11 != 0xcb) {
            if (iVar11 < 0xcc) {
              uVar23 = FUN_001ac11e();
            }
            pbVar21 = ((byte **)unaff_r4[6])[1];
            pbVar12 = *(byte **)unaff_r4[6];
            if (pbVar21 == (byte *)0x0) {
              uVar23 = FUN_001ac160();
            }
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            if (pbVar21 == (byte *)0x1) {
              uVar23 = FUN_001ac1d4();
            }
            if ((int)((uint)bVar2 * 0x100 + -2 + (uint)*pbVar12) < 1) {
              FUN_001ac0ba((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),pbVar12 + 1);
            }
            FUN_001ab7a8();
            return;
          }
          FUN_001ab570();
          return;
        }
        iVar11 = FUN_001aa894(unaff_r4,0,0,1);
        if (iVar11 == 0) {
          FUN_001ab60e();
          return;
        }
      }
      goto code_r0x001ab588;
    }
    iVar11 = *unaff_r4;
    uVar8 = 0x3e;
  } while( true );
LAB_001ab8c8:
  if (pbVar21 == (byte *)0x0) {
    iVar5 = (*(code *)ppbVar20[3])(unaff_r4);
    if (iVar5 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar7 = *ppbVar20;
    pbVar21 = ppbVar20[1];
  }
  iVar5 = (int)(uint)*pbVar7 >> 4;
  uVar15 = *pbVar7 & 0xf;
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x53;
  pbVar21 = pbVar21 + -1;
  *(uint *)(*unaff_r4 + 0x18) = uVar15;
  pbVar7 = pbVar7 + 1;
  *(int *)(*unaff_r4 + 0x1c) = iVar5;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  if (3 < uVar15) {
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x20;
    *(uint *)(*unaff_r4 + 0x18) = uVar15;
    (**(code **)*unaff_r4)(unaff_r4);
  }
  puVar14 = (ushort *)unaff_r4[uVar15 + 0x29];
  if (puVar14 == (ushort *)0x0) {
    FUN_001ac24a();
  }
  iVar16 = iVar11 + -1;
  if (iVar5 == 0) {
    if (iVar16 < 0x40) {
      iVar6 = 0;
      do {
        *(undefined2 *)((int)puVar14 + iVar6) = 1;
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0x80);
      uVar15 = iVar11 - 5;
      in_stack_00000004 = (undefined4 *)iVar16;
      goto joined_r0x001abfac;
    }
LAB_001ab932:
    in_stack_00000004 = (undefined4 *)0x40;
LAB_001ab936:
    piVar17 = *(int **)(in_stack_0000000c + DAT_001abb4c);
    iVar11 = 0;
    do {
      while (iVar5 != 0) {
        if (pbVar21 == (byte *)0x0) {
          iVar6 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar6 == 0) {
            FUN_001ab60e();
          }
          pbVar7 = *ppbVar20;
          pbVar21 = ppbVar20[1];
          bVar2 = *pbVar7;
        }
        else {
          bVar2 = *pbVar7;
        }
        pbVar21 = pbVar21 + -1;
        pbVar12 = pbVar7 + 1;
        if (pbVar21 == (byte *)0x0) {
          iVar6 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar6 == 0) {
            FUN_001ab60e();
          }
          pbVar12 = *ppbVar20;
          pbVar21 = ppbVar20[1];
        }
        iVar11 = iVar11 + 1;
        iVar6 = *piVar17;
        piVar17 = piVar17 + 1;
        pbVar21 = pbVar21 + -1;
        pbVar7 = pbVar12 + 1;
        puVar14[iVar6] = (ushort)*pbVar12 + (ushort)bVar2 * 0x100;
        if ((int)in_stack_00000004 <= iVar11) goto LAB_001ab9ac;
      }
      if (pbVar21 == (byte *)0x0) {
        iVar6 = (*(code *)ppbVar20[3])(unaff_r4);
        if (iVar6 == 0) {
          FUN_001ab60e();
        }
        pbVar7 = *ppbVar20;
        pbVar21 = ppbVar20[1];
      }
      iVar6 = *piVar17;
      piVar17 = piVar17 + 1;
      bVar2 = *pbVar7;
      iVar11 = iVar11 + 1;
      pbVar21 = pbVar21 + -1;
      pbVar7 = pbVar7 + 1;
      puVar14[iVar6] = (ushort)bVar2;
    } while (iVar11 < (int)in_stack_00000004);
  }
  else {
    if (0x7f < iVar16) goto LAB_001ab932;
    iVar11 = 0;
    do {
      *(undefined2 *)((int)puVar14 + iVar11) = 1;
      iVar11 = iVar11 + 2;
    } while (iVar11 != 0x80);
    uVar15 = (iVar16 >> 1) - 4;
    in_stack_00000004 = (undefined4 *)(iVar16 >> 1);
joined_r0x001abfac:
    if (uVar15 < 0x2e) {
                    /* WARNING: Could not recover jumptable at 0x001abfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(iVar13 + uVar15 * 4) + iVar13))();
      return;
    }
    if (0 < (int)in_stack_00000004) goto LAB_001ab936;
  }
LAB_001ab9ac:
  iVar11 = *unaff_r4;
  if (1 < *(int *)(iVar11 + 0x68)) {
    iVar6 = 0;
    while( true ) {
      *(uint *)(iVar11 + 0x18) = (uint)*puVar14;
      *(uint *)(iVar11 + 0x1c) = (uint)puVar14[1];
      iVar6 = iVar6 + 8;
      *(uint *)(iVar11 + 0x20) = (uint)puVar14[2];
      *(uint *)(iVar11 + 0x24) = (uint)puVar14[3];
      *(uint *)(iVar11 + 0x28) = (uint)puVar14[4];
      *(uint *)(iVar11 + 0x2c) = (uint)puVar14[5];
      *(uint *)(iVar11 + 0x30) = (uint)puVar14[6];
      puVar1 = puVar14 + 7;
      puVar14 = puVar14 + 8;
      *(uint *)(iVar11 + 0x34) = (uint)*puVar1;
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x5f;
      (**(code **)(*unaff_r4 + 4))(unaff_r4,2);
      if (iVar6 == 0x40) break;
      iVar11 = *unaff_r4;
    }
  }
  iVar11 = iVar16 - (int)in_stack_00000004;
  if (iVar5 != 0) {
    iVar11 = iVar11 - (int)in_stack_00000004;
  }
  if (iVar11 < 1) {
LAB_001aba2a:
    if (iVar11 != 0) {
      *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
      (**(code **)*unaff_r4)(unaff_r4);
    }
    *ppbVar20 = pbVar7;
    ppbVar20[1] = pbVar21;
    FUN_001ab588();
    return;
  }
  goto LAB_001ab8c8;
LAB_001abb0e:
  if (pbVar21 == (byte *)0x0) {
    iVar13 = (*(code *)ppbVar20[3])(unaff_r4);
    if (iVar13 == 0) {
      FUN_001ab60e();
    }
    pbVar21 = ppbVar20[1];
    pbVar7 = *ppbVar20;
    bVar2 = *pbVar7;
  }
  else {
    bVar2 = *pbVar7;
  }
  pbVar21 = pbVar21 + -1;
  pbVar7 = pbVar7 + 1;
  uVar4 = (uint)bVar2;
  if (pbVar21 == (byte *)0x0) {
    iVar13 = (*(code *)ppbVar20[3])(unaff_r4);
    if (iVar13 == 0) {
      FUN_001ab60e();
    }
    pbVar7 = *ppbVar20;
    pbVar21 = ppbVar20[1];
  }
  bVar2 = *pbVar7;
  pbVar21 = pbVar21 + -1;
  pbVar7 = pbVar7 + 1;
  puVar19 = (uint *)unaff_r4[0x36];
  if (unaff_r4[9] < 1) {
LAB_001abb5e:
    *(undefined4 *)(*unaff_r4 + 0x14) = 4;
    *(uint *)(*unaff_r4 + 0x18) = uVar4;
    (**(code **)*unaff_r4)(unaff_r4);
  }
  else {
    iVar13 = 0;
    uVar9 = *puVar19;
    while (uVar4 != uVar9) {
      iVar13 = iVar13 + 1;
      puVar19 = puVar19 + 0x16;
      if (unaff_r4[9] <= iVar13) goto LAB_001abb5e;
      uVar9 = *puVar19;
    }
  }
  *ppuVar22 = puVar19;
  puVar19[5] = (int)(uint)bVar2 >> 4;
  puVar19[6] = bVar2 & 0xf;
  iVar13 = *unaff_r4;
  *(uint *)(iVar13 + 0x18) = uVar4;
  *(uint *)(iVar13 + 0x1c) = puVar19[5];
  *(uint *)(iVar13 + 0x20) = puVar19[6];
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x6a;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  iVar11 = iVar11 + 1;
  ppuVar22 = ppuVar22 + 1;
  if ((int)uVar15 <= iVar11) {
LAB_001abbb2:
    if (pbVar21 == (byte *)0x0) {
      iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
      if (iVar11 == 0) {
        FUN_001ab60e();
      }
      pbVar7 = *ppbVar20;
      pbVar21 = ppbVar20[1];
    }
    pbVar21 = pbVar21 + -1;
    unaff_r4[0x66] = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (pbVar21 == (byte *)0x0) {
      iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
      if (iVar11 == 0) {
        FUN_001ab60e();
      }
      pbVar7 = *ppbVar20;
      pbVar21 = ppbVar20[1];
    }
    pbVar21 = pbVar21 + -1;
    unaff_r4[0x67] = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (pbVar21 == (byte *)0x0) {
      iVar11 = (*(code *)ppbVar20[3])(unaff_r4);
      if (iVar11 == 0) {
        FUN_001ab60e();
        return;
      }
      pbVar7 = *ppbVar20;
      pbVar21 = ppbVar20[1];
    }
    bVar2 = *pbVar7;
    iVar11 = *unaff_r4;
    unaff_r4[0x68] = (uint)(bVar2 >> 4);
    unaff_r4[0x69] = bVar2 & 0xf;
    *(int *)(iVar11 + 0x18) = unaff_r4[0x66];
    *(int *)(iVar11 + 0x1c) = unaff_r4[0x67];
    *(int *)(iVar11 + 0x20) = unaff_r4[0x68];
    *(int *)(iVar11 + 0x24) = unaff_r4[0x69];
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x6b;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    *(undefined4 *)(unaff_r4[0x73] + 0x14) = 0;
    if (uVar15 != 0) {
      unaff_r4[0x24] = unaff_r4[0x24] + 1;
    }
    *ppbVar20 = pbVar7 + 1;
    ppbVar20[1] = pbVar21 + -1;
    unaff_r4[0x6d] = 0;
    FUN_001ab610(1);
    return;
  }
  goto LAB_001abb0e;
LAB_001abf0e:
  if (iStack00000010 != 0) {
    *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
    (**(code **)*unaff_r4)(unaff_r4);
  }
  *ppbVar20 = pbVar7;
  ppbVar20[1] = pbVar12;
  FUN_001ab588();
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x57;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  unaff_r4[0x6d] = 0;
  FUN_001ab610(2);
  do {
    unaff_r4 = piVar17;
    if ((int)unaff_r10 < 0x101) goto LAB_001abe64;
    do {
      *(undefined4 *)(*piVar17 + 0x14) = 9;
      (**(code **)*piVar17)(piVar17);
      unaff_r4 = piVar17;
LAB_001abe64:
      if (unaff_r10 != (int *)0x0) {
        iVar11 = 0;
        do {
          while (pbVar12 != (byte *)0x0) {
            bVar2 = *pbVar7;
            pbVar12 = pbVar12 + -1;
            pbVar7 = pbVar7 + 1;
            unaff_r9[iVar11] = bVar2;
            iVar11 = iVar11 + 1;
            if ((int)unaff_r10 <= iVar11) goto LAB_001abeb4;
          }
          iVar13 = (*(code *)ppbVar20[3])(unaff_r4);
          if (iVar13 == 0) {
            FUN_001ab60e();
          }
          pbVar12 = ppbVar20[1] + -1;
          pbVar7 = *ppbVar20 + 1;
          unaff_r9[iVar11] = **ppbVar20;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)unaff_r10);
      }
LAB_001abeb4:
      iStack00000010 = iStack00000010 - (int)unaff_r10;
      if ((int)(in_stack_00000008 << 0x1b) < 0) {
        iVar11 = in_stack_00000008 + 0x20;
        in_stack_00000008 = in_stack_00000008 - 0x10;
      }
      else {
        iVar11 = in_stack_00000008 + 0x2c;
      }
      unaff_r10 = unaff_r4 + iVar11 + 1;
      if (3 < in_stack_00000008) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x1f;
        *(uint *)(*unaff_r4 + 0x18) = in_stack_00000008;
        (**(code **)*unaff_r4)(unaff_r4);
      }
      puVar10 = (undefined4 *)*unaff_r10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)jpeg_alloc_huff_table(unaff_r4);
        *unaff_r10 = (int)puVar10;
      }
      uVar8 = in_stack_00000004[1];
      uVar18 = in_stack_00000004[2];
      *puVar10 = *in_stack_00000004;
      puVar10[1] = uVar8;
      puVar10[2] = uVar18;
      puVar10[3] = in_stack_00000004[3];
      *(undefined *)(puVar10 + 4) = *(undefined *)(in_stack_00000004 + 4);
      memcpy((void *)(*unaff_r10 + 0x11),unaff_r9,0x100);
      piVar17 = unaff_r4;
      if (iStack00000010 < 0x11) goto LAB_001abf0e;
LAB_001abd4a:
      if (pbVar12 == (byte *)0x0) {
        iVar11 = (*(code *)ppbVar20[3])(piVar17);
        if (iVar11 == 0) {
          FUN_001ab60e();
          return;
        }
        pbVar7 = *ppbVar20;
        pbVar12 = ppbVar20[1];
      }
      in_stack_00000008 = (uint)*pbVar7;
      pbVar12 = pbVar12 + -1;
      *(undefined4 *)(*piVar17 + 0x14) = 0x52;
      pbVar7 = pbVar7 + 1;
      *(uint *)(*piVar17 + 0x18) = in_stack_00000008;
      (**(code **)(*piVar17 + 4))(piVar17,1);
      *(undefined *)in_stack_00000004 = 0;
      unaff_r10 = (int *)0x0;
      pbVar21 = in_stack_00000018;
      do {
        while (pbVar12 != (byte *)0x0) {
          bVar2 = *pbVar7;
          pbVar12 = pbVar12 + -1;
          pbVar7 = pbVar7 + 1;
          *pbVar21 = bVar2;
          pbVar21 = pbVar21 + 1;
          unaff_r10 = (int *)((int)unaff_r10 + (uint)bVar2);
          if (pbVar21 == in_stack_0000001c) goto LAB_001abdca;
        }
        iVar11 = (*(code *)ppbVar20[3])(piVar17);
        if (iVar11 == 0) {
          FUN_001ab60e();
          return;
        }
        bVar2 = **ppbVar20;
        pbVar12 = ppbVar20[1] + -1;
        pbVar7 = *ppbVar20 + 1;
        *pbVar21 = bVar2;
        pbVar21 = pbVar21 + 1;
        unaff_r10 = (int *)((int)unaff_r10 + (uint)bVar2);
      } while (pbVar21 != in_stack_0000001c);
LAB_001abdca:
      iStack00000010 = iStack00000010 + -0x11;
      iVar11 = *piVar17;
      *(uint *)(iVar11 + 0x18) = (uint)*(byte *)((int)in_stack_00000004 + 1);
      *(uint *)(iVar11 + 0x1c) = (uint)*(byte *)((int)in_stack_00000004 + 2);
      *(uint *)(iVar11 + 0x20) = (uint)*(byte *)((int)in_stack_00000004 + 3);
      *(uint *)(iVar11 + 0x24) = (uint)*(byte *)(in_stack_00000004 + 1);
      *(uint *)(iVar11 + 0x28) = (uint)*(byte *)((int)in_stack_00000004 + 5);
      *(uint *)(iVar11 + 0x2c) = (uint)*(byte *)((int)in_stack_00000004 + 6);
      *(uint *)(iVar11 + 0x30) = (uint)*(byte *)((int)in_stack_00000004 + 7);
      *(uint *)(iVar11 + 0x34) = (uint)*(byte *)(in_stack_00000004 + 2);
      *(undefined4 *)(*piVar17 + 0x14) = 0x58;
      (**(code **)(*piVar17 + 4))(piVar17,2);
      iVar11 = *piVar17;
      *(uint *)(iVar11 + 0x18) = (uint)*(byte *)((int)in_stack_00000004 + 9);
      *(uint *)(iVar11 + 0x1c) = (uint)*(byte *)((int)in_stack_00000004 + 10);
      *(uint *)(iVar11 + 0x20) = (uint)*(byte *)((int)in_stack_00000004 + 0xb);
      *(uint *)(iVar11 + 0x24) = (uint)*(byte *)(in_stack_00000004 + 3);
      *(uint *)(iVar11 + 0x28) = (uint)*(byte *)((int)in_stack_00000004 + 0xd);
      *(uint *)(iVar11 + 0x2c) = (uint)*(byte *)((int)in_stack_00000004 + 0xe);
      *(uint *)(iVar11 + 0x30) = (uint)*(byte *)((int)in_stack_00000004 + 0xf);
      *(uint *)(iVar11 + 0x34) = (uint)*(byte *)(in_stack_00000004 + 4);
      *(undefined4 *)(*piVar17 + 0x14) = 0x58;
      (**(code **)(*piVar17 + 4))(piVar17,2);
    } while (iStack00000010 < (int)unaff_r10);
  } while( true );
}


