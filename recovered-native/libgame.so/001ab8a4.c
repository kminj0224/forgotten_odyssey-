/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab8a4  Symbol: FUN_001ab8a4 */

void FUN_001ab8a4(void)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *in_r3;
  int iVar7;
  ushort *puVar8;
  int *unaff_r4;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int unaff_r5;
  int iVar12;
  byte **unaff_r6;
  int unaff_r7;
  byte *pbVar13;
  int param_6;
  int param_8;
  
  pbVar5 = in_r3 + 1;
  iVar12 = unaff_r5 * 0x100 + -2 + (uint)*in_r3;
  pbVar13 = (byte *)(unaff_r7 + -1);
  if (0 < iVar12) {
    iVar7 = param_8 + DAT_001abb48;
    do {
      if (pbVar13 == (byte *)0x0) {
        iVar3 = (*(code *)unaff_r6[3])(unaff_r4);
        if (iVar3 == 0) {
          FUN_001ab60e();
          return;
        }
        pbVar5 = *unaff_r6;
        pbVar13 = unaff_r6[1];
      }
      iVar3 = (int)(uint)*pbVar5 >> 4;
      uVar9 = *pbVar5 & 0xf;
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x53;
      pbVar13 = pbVar13 + -1;
      *(uint *)(*unaff_r4 + 0x18) = uVar9;
      pbVar5 = pbVar5 + 1;
      *(int *)(*unaff_r4 + 0x1c) = iVar3;
      (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
      if (3 < uVar9) {
        *(undefined4 *)(*unaff_r4 + 0x14) = 0x20;
        *(uint *)(*unaff_r4 + 0x18) = uVar9;
        (**(code **)*unaff_r4)(unaff_r4);
      }
      puVar8 = (ushort *)unaff_r4[uVar9 + 0x29];
      if (puVar8 == (ushort *)0x0) {
        FUN_001ac24a();
      }
      iVar10 = iVar12 + -1;
      if (iVar3 == 0) {
        if (0x3f < iVar10) goto LAB_001ab932;
        iVar4 = 0;
        do {
          *(undefined2 *)((int)puVar8 + iVar4) = 1;
          iVar4 = iVar4 + 2;
        } while (iVar4 != 0x80);
        uVar9 = iVar12 - 5;
        param_6 = iVar10;
joined_r0x001abfac:
        if (uVar9 < 0x2e) {
                    /* WARNING: Could not recover jumptable at 0x001abfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(*(int *)(iVar7 + uVar9 * 4) + iVar7))();
          return;
        }
        if (0 < param_6) goto LAB_001ab936;
      }
      else {
        if (iVar10 < 0x80) {
          iVar12 = 0;
          do {
            *(undefined2 *)((int)puVar8 + iVar12) = 1;
            iVar12 = iVar12 + 2;
          } while (iVar12 != 0x80);
          uVar9 = (iVar10 >> 1) - 4;
          param_6 = iVar10 >> 1;
          goto joined_r0x001abfac;
        }
LAB_001ab932:
        param_6 = 0x40;
LAB_001ab936:
        piVar11 = *(int **)(param_8 + DAT_001abb4c);
        iVar12 = 0;
        do {
          while (iVar3 == 0) {
            if (pbVar13 == (byte *)0x0) {
              iVar4 = (*(code *)unaff_r6[3])(unaff_r4);
              if (iVar4 == 0) {
                FUN_001ab60e();
              }
              pbVar5 = *unaff_r6;
              pbVar13 = unaff_r6[1];
            }
            iVar4 = *piVar11;
            piVar11 = piVar11 + 1;
            bVar2 = *pbVar5;
            iVar12 = iVar12 + 1;
            pbVar13 = pbVar13 + -1;
            pbVar5 = pbVar5 + 1;
            puVar8[iVar4] = (ushort)bVar2;
            if (param_6 <= iVar12) goto LAB_001ab9ac;
          }
          if (pbVar13 == (byte *)0x0) {
            iVar4 = (*(code *)unaff_r6[3])(unaff_r4);
            if (iVar4 == 0) {
              FUN_001ab60e();
            }
            pbVar5 = *unaff_r6;
            pbVar13 = unaff_r6[1];
            bVar2 = *pbVar5;
          }
          else {
            bVar2 = *pbVar5;
          }
          pbVar13 = pbVar13 + -1;
          pbVar6 = pbVar5 + 1;
          if (pbVar13 == (byte *)0x0) {
            iVar4 = (*(code *)unaff_r6[3])(unaff_r4);
            if (iVar4 == 0) {
              FUN_001ab60e();
            }
            pbVar6 = *unaff_r6;
            pbVar13 = unaff_r6[1];
          }
          iVar12 = iVar12 + 1;
          iVar4 = *piVar11;
          piVar11 = piVar11 + 1;
          pbVar13 = pbVar13 + -1;
          pbVar5 = pbVar6 + 1;
          puVar8[iVar4] = (ushort)*pbVar6 + (ushort)bVar2 * 0x100;
        } while (iVar12 < param_6);
      }
LAB_001ab9ac:
      iVar12 = *unaff_r4;
      if (1 < *(int *)(iVar12 + 0x68)) {
        iVar4 = 0;
        while( true ) {
          *(uint *)(iVar12 + 0x18) = (uint)*puVar8;
          *(uint *)(iVar12 + 0x1c) = (uint)puVar8[1];
          iVar4 = iVar4 + 8;
          *(uint *)(iVar12 + 0x20) = (uint)puVar8[2];
          *(uint *)(iVar12 + 0x24) = (uint)puVar8[3];
          *(uint *)(iVar12 + 0x28) = (uint)puVar8[4];
          *(uint *)(iVar12 + 0x2c) = (uint)puVar8[5];
          *(uint *)(iVar12 + 0x30) = (uint)puVar8[6];
          puVar1 = puVar8 + 7;
          puVar8 = puVar8 + 8;
          *(uint *)(iVar12 + 0x34) = (uint)*puVar1;
          *(undefined4 *)(*unaff_r4 + 0x14) = 0x5f;
          (**(code **)(*unaff_r4 + 4))(unaff_r4,2);
          if (iVar4 == 0x40) break;
          iVar12 = *unaff_r4;
        }
      }
      iVar12 = iVar10 - param_6;
      if (iVar3 != 0) {
        iVar12 = iVar12 - param_6;
      }
    } while (0 < iVar12);
  }
  if (iVar12 != 0) {
    *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
    (**(code **)*unaff_r4)(unaff_r4);
  }
  *unaff_r6 = pbVar5;
  unaff_r6[1] = pbVar13;
  FUN_001ab588();
  return;
}


