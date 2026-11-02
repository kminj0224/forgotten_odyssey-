/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac214  Symbol: FUN_001ac214 */

void FUN_001ac214(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_r4;
  uint *puVar6;
  byte *pbVar7;
  int unaff_r5;
  byte *pbVar8;
  int unaff_r6;
  byte **ppbVar9;
  uint **ppuVar10;
  byte *unaff_r9;
  byte *unaff_r10;
  int in_stack_00000008;
  
  iVar4 = (**(code **)(unaff_r6 + 0xc))(unaff_r4);
  if (iVar4 == 0) {
    FUN_001ab60e();
  }
  FUN_001ab8a4();
  iVar4 = (**(code **)(unaff_r5 + 0xc))(unaff_r4);
  if (iVar4 == 0) {
    FUN_001ab60e();
  }
  ppbVar9 = *(byte ***)(unaff_r5 + 4);
  FUN_001ab68a();
  unaff_r4[0x54] = in_stack_00000008;
  iVar4 = 0;
  ppuVar10 = (uint **)(unaff_r4 + 0x55);
  do {
    if (unaff_r10 == (byte *)0x0) {
      iVar3 = (*(code *)ppbVar9[3])(unaff_r4);
      if (iVar3 == 0) {
        FUN_001ab60e();
      }
      unaff_r10 = ppbVar9[1];
      unaff_r9 = *ppbVar9;
      bVar1 = *unaff_r9;
    }
    else {
      bVar1 = *unaff_r9;
    }
    pbVar7 = unaff_r10 + -1;
    pbVar8 = unaff_r9 + 1;
    uVar2 = (uint)bVar1;
    if (pbVar7 == (byte *)0x0) {
      iVar3 = (*(code *)ppbVar9[3])(unaff_r4);
      if (iVar3 == 0) {
        FUN_001ab60e();
      }
      pbVar8 = *ppbVar9;
      pbVar7 = ppbVar9[1];
    }
    bVar1 = *pbVar8;
    unaff_r10 = pbVar7 + -1;
    unaff_r9 = pbVar8 + 1;
    puVar6 = (uint *)unaff_r4[0x36];
    if (unaff_r4[9] < 1) {
LAB_001abb5e:
      *(undefined4 *)(*unaff_r4 + 0x14) = 4;
      *(uint *)(*unaff_r4 + 0x18) = uVar2;
      (**(code **)*unaff_r4)(unaff_r4);
    }
    else {
      iVar3 = 0;
      uVar5 = *puVar6;
      while (uVar2 != uVar5) {
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 0x16;
        if (unaff_r4[9] <= iVar3) goto LAB_001abb5e;
        uVar5 = *puVar6;
      }
    }
    *ppuVar10 = puVar6;
    puVar6[5] = (int)(uint)bVar1 >> 4;
    puVar6[6] = bVar1 & 0xf;
    iVar3 = *unaff_r4;
    *(uint *)(iVar3 + 0x18) = uVar2;
    *(uint *)(iVar3 + 0x1c) = puVar6[5];
    *(uint *)(iVar3 + 0x20) = puVar6[6];
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x6a;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    iVar4 = iVar4 + 1;
    ppuVar10 = ppuVar10 + 1;
    if (in_stack_00000008 <= iVar4) {
      if (unaff_r10 == (byte *)0x0) {
        iVar4 = (*(code *)ppbVar9[3])(unaff_r4);
        if (iVar4 == 0) {
          FUN_001ab60e();
        }
        unaff_r9 = *ppbVar9;
        unaff_r10 = ppbVar9[1];
      }
      pbVar8 = unaff_r10 + -1;
      unaff_r4[0x66] = (uint)*unaff_r9;
      pbVar7 = unaff_r9 + 1;
      if (pbVar8 == (byte *)0x0) {
        iVar4 = (*(code *)ppbVar9[3])(unaff_r4);
        if (iVar4 == 0) {
          FUN_001ab60e();
        }
        pbVar7 = *ppbVar9;
        pbVar8 = ppbVar9[1];
      }
      pbVar8 = pbVar8 + -1;
      unaff_r4[0x67] = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
      if (pbVar8 == (byte *)0x0) {
        iVar4 = (*(code *)ppbVar9[3])(unaff_r4);
        if (iVar4 == 0) {
          FUN_001ab60e();
          return;
        }
        pbVar7 = *ppbVar9;
        pbVar8 = ppbVar9[1];
      }
      bVar1 = *pbVar7;
      iVar4 = *unaff_r4;
      unaff_r4[0x68] = (uint)(bVar1 >> 4);
      unaff_r4[0x69] = bVar1 & 0xf;
      *(int *)(iVar4 + 0x18) = unaff_r4[0x66];
      *(int *)(iVar4 + 0x1c) = unaff_r4[0x67];
      *(int *)(iVar4 + 0x20) = unaff_r4[0x68];
      *(int *)(iVar4 + 0x24) = unaff_r4[0x69];
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x6b;
      (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
      *(undefined4 *)(unaff_r4[0x73] + 0x14) = 0;
      if (in_stack_00000008 != 0) {
        unaff_r4[0x24] = unaff_r4[0x24] + 1;
      }
      *ppbVar9 = pbVar7 + 1;
      ppbVar9[1] = pbVar8 + -1;
      unaff_r4[0x6d] = 0;
      FUN_001ab610(1);
      return;
    }
  } while( true );
}


