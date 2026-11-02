/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab91e  Symbol: FUN_001ab91e */

void FUN_001ab91e(void)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  byte *unaff_r5;
  byte **unaff_r6;
  byte *unaff_r7;
  int unaff_r8;
  ushort *unaff_r9;
  int *unaff_r10;
  int unaff_r11;
  int param_6;
  int param_7;
  int param_8;
  int param_9;
  
  do {
    param_7 = unaff_r8 + -1;
    if (unaff_r11 == 0) {
      if (0x3f < param_7) goto LAB_001ab932;
      iVar4 = 0;
      do {
        *(undefined2 *)((int)unaff_r9 + iVar4) = 1;
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0x80);
      uVar7 = unaff_r8 - 5;
      param_6 = param_7;
joined_r0x001abfac:
      if (uVar7 < 0x2e) {
                    /* WARNING: Could not recover jumptable at 0x001abfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(int *)(param_9 + uVar7 * 4) + param_9))();
        return;
      }
      if (0 < param_6) goto LAB_001ab936;
    }
    else {
      if (param_7 < 0x80) {
        iVar4 = 0;
        do {
          *(undefined2 *)((int)unaff_r9 + iVar4) = 1;
          iVar4 = iVar4 + 2;
        } while (iVar4 != 0x80);
        param_6 = param_7 >> 1;
        uVar7 = param_6 - 4;
        goto joined_r0x001abfac;
      }
LAB_001ab932:
      param_6 = 0x40;
LAB_001ab936:
      iVar4 = param_6;
      piVar8 = *(int **)(param_8 + DAT_001abb4c);
      iVar9 = 0;
      do {
        while (unaff_r11 == 0) {
          if (unaff_r7 == (byte *)0x0) {
            iVar3 = (*(code *)unaff_r6[3])(unaff_r10);
            if (iVar3 == 0) {
              FUN_001ab60e();
            }
            unaff_r5 = *unaff_r6;
            unaff_r7 = unaff_r6[1];
          }
          iVar3 = *piVar8;
          piVar8 = piVar8 + 1;
          bVar2 = *unaff_r5;
          iVar9 = iVar9 + 1;
          unaff_r7 = unaff_r7 + -1;
          unaff_r5 = unaff_r5 + 1;
          unaff_r9[iVar3] = (ushort)bVar2;
          if (iVar4 <= iVar9) goto LAB_001ab9ac;
        }
        if (unaff_r7 == (byte *)0x0) {
          iVar3 = (*(code *)unaff_r6[3])(unaff_r10);
          if (iVar3 == 0) {
            FUN_001ab60e();
          }
          unaff_r5 = *unaff_r6;
          unaff_r7 = unaff_r6[1];
          bVar2 = *unaff_r5;
        }
        else {
          bVar2 = *unaff_r5;
        }
        pbVar6 = unaff_r7 + -1;
        pbVar5 = unaff_r5 + 1;
        if (pbVar6 == (byte *)0x0) {
          iVar3 = (*(code *)unaff_r6[3])(unaff_r10);
          if (iVar3 == 0) {
            FUN_001ab60e();
          }
          pbVar5 = *unaff_r6;
          pbVar6 = unaff_r6[1];
        }
        iVar9 = iVar9 + 1;
        iVar3 = *piVar8;
        piVar8 = piVar8 + 1;
        unaff_r7 = pbVar6 + -1;
        unaff_r5 = pbVar5 + 1;
        unaff_r9[iVar3] = (ushort)*pbVar5 + (ushort)bVar2 * 0x100;
      } while (iVar9 < iVar4);
    }
LAB_001ab9ac:
    iVar4 = *unaff_r10;
    if (1 < *(int *)(iVar4 + 0x68)) {
      iVar9 = 0;
      while( true ) {
        *(uint *)(iVar4 + 0x18) = (uint)*unaff_r9;
        *(uint *)(iVar4 + 0x1c) = (uint)unaff_r9[1];
        iVar9 = iVar9 + 8;
        *(uint *)(iVar4 + 0x20) = (uint)unaff_r9[2];
        *(uint *)(iVar4 + 0x24) = (uint)unaff_r9[3];
        *(uint *)(iVar4 + 0x28) = (uint)unaff_r9[4];
        *(uint *)(iVar4 + 0x2c) = (uint)unaff_r9[5];
        *(uint *)(iVar4 + 0x30) = (uint)unaff_r9[6];
        puVar1 = unaff_r9 + 7;
        unaff_r9 = unaff_r9 + 8;
        *(uint *)(iVar4 + 0x34) = (uint)*puVar1;
        *(undefined4 *)(*unaff_r10 + 0x14) = 0x5f;
        (**(code **)(*unaff_r10 + 4))(unaff_r10,2);
        if (iVar9 == 0x40) break;
        iVar4 = *unaff_r10;
      }
    }
    unaff_r8 = param_7 - param_6;
    if (unaff_r11 != 0) {
      unaff_r8 = unaff_r8 - param_6;
    }
    if (unaff_r8 < 1) {
      if (unaff_r8 != 0) {
        *(undefined4 *)(*unaff_r10 + 0x14) = 0xc;
        (**(code **)*unaff_r10)(unaff_r10);
      }
      *unaff_r6 = unaff_r5;
      unaff_r6[1] = unaff_r7;
      FUN_001ab588();
      return;
    }
    if (unaff_r7 == (byte *)0x0) {
      iVar4 = (*(code *)unaff_r6[3])(unaff_r10);
      if (iVar4 == 0) {
        FUN_001ab60e();
        return;
      }
      unaff_r5 = *unaff_r6;
      unaff_r7 = unaff_r6[1];
    }
    unaff_r11 = (int)(uint)*unaff_r5 >> 4;
    uVar7 = *unaff_r5 & 0xf;
    *(undefined4 *)(*unaff_r10 + 0x14) = 0x53;
    unaff_r7 = unaff_r7 + -1;
    *(uint *)(*unaff_r10 + 0x18) = uVar7;
    unaff_r5 = unaff_r5 + 1;
    *(int *)(*unaff_r10 + 0x1c) = unaff_r11;
    (**(code **)(*unaff_r10 + 4))(unaff_r10,1);
    if (3 < uVar7) {
      *(undefined4 *)(*unaff_r10 + 0x14) = 0x20;
      *(uint *)(*unaff_r10 + 0x18) = uVar7;
      (**(code **)*unaff_r10)(unaff_r10);
    }
    unaff_r9 = (ushort *)unaff_r10[uVar7 + 0x29];
    if (unaff_r9 == (ushort *)0x0) {
      FUN_001ac24a();
    }
  } while( true );
}


