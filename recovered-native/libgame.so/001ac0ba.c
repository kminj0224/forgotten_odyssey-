/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac0ba  Symbol: FUN_001ac0ba */

void FUN_001ac0ba(void)

{
  byte bVar1;
  uint uVar2;
  uint **ppuVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *unaff_r4;
  uint *puVar10;
  undefined4 *unaff_r6;
  uint **unaff_r8;
  int unaff_r9;
  byte **unaff_r10;
  int unaff_r11;
  int in_stack_00000008;
  
  if (unaff_r9 != 0) {
    *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
    (**(code **)*unaff_r4)(unaff_r4);
  }
  *unaff_r6 = unaff_r10;
  unaff_r6[1] = unaff_r8;
  FUN_001ab588();
LAB_001ac0ce:
  iVar4 = (*(code *)unaff_r10[3])(unaff_r4);
  if (iVar4 == 0) {
    FUN_001ab60e();
  }
  pbVar7 = unaff_r10[1] + -1;
  bVar1 = **unaff_r10;
  pbVar9 = *unaff_r10 + 1;
  ppuVar3 = unaff_r8;
  do {
    uVar2 = (uint)bVar1;
    if (pbVar7 == (byte *)0x0) {
      iVar4 = (*(code *)unaff_r10[3])(unaff_r4);
      if (iVar4 == 0) {
        FUN_001ab60e();
      }
      pbVar9 = *unaff_r10;
      pbVar7 = unaff_r10[1];
    }
    bVar1 = *pbVar9;
    pbVar5 = pbVar7 + -1;
    pbVar8 = pbVar9 + 1;
    puVar10 = (uint *)unaff_r4[0x36];
    if (unaff_r4[9] < 1) {
LAB_001abb5e:
      *(undefined4 *)(*unaff_r4 + 0x14) = 4;
      *(uint *)(*unaff_r4 + 0x18) = uVar2;
      (**(code **)*unaff_r4)(unaff_r4);
    }
    else {
      iVar4 = 0;
      uVar6 = *puVar10;
      while (uVar2 != uVar6) {
        iVar4 = iVar4 + 1;
        puVar10 = puVar10 + 0x16;
        if (unaff_r4[9] <= iVar4) goto LAB_001abb5e;
        uVar6 = *puVar10;
      }
    }
    unaff_r8 = ppuVar3 + 1;
    *ppuVar3 = puVar10;
    puVar10[5] = (int)(uint)bVar1 >> 4;
    puVar10[6] = bVar1 & 0xf;
    iVar4 = *unaff_r4;
    *(uint *)(iVar4 + 0x18) = uVar2;
    *(uint *)(iVar4 + 0x1c) = puVar10[5];
    *(uint *)(iVar4 + 0x20) = puVar10[6];
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x6a;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    unaff_r11 = unaff_r11 + 1;
    if (in_stack_00000008 <= unaff_r11) {
      if (pbVar5 == (byte *)0x0) {
        iVar4 = (*(code *)unaff_r10[3])(unaff_r4);
        if (iVar4 == 0) {
          FUN_001ab60e();
        }
        pbVar8 = *unaff_r10;
        pbVar5 = unaff_r10[1];
      }
      pbVar5 = pbVar5 + -1;
      unaff_r4[0x66] = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      if (pbVar5 == (byte *)0x0) {
        iVar4 = (*(code *)unaff_r10[3])(unaff_r4);
        if (iVar4 == 0) {
          FUN_001ab60e();
        }
        pbVar8 = *unaff_r10;
        pbVar5 = unaff_r10[1];
      }
      pbVar5 = pbVar5 + -1;
      unaff_r4[0x67] = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      if (pbVar5 == (byte *)0x0) {
        iVar4 = (*(code *)unaff_r10[3])(unaff_r4);
        if (iVar4 == 0) {
          FUN_001ab60e();
          return;
        }
        pbVar8 = *unaff_r10;
        pbVar5 = unaff_r10[1];
      }
      bVar1 = *pbVar8;
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
      *unaff_r10 = pbVar8 + 1;
      unaff_r10[1] = pbVar5 + -1;
      unaff_r4[0x6d] = 0;
      FUN_001ab610(1);
      return;
    }
    if (pbVar5 == (byte *)0x0) goto LAB_001ac0ce;
    pbVar7 = pbVar7 + -2;
    bVar1 = *pbVar8;
    pbVar9 = pbVar9 + 2;
    ppuVar3 = unaff_r8;
  } while( true );
}


