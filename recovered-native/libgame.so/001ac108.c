/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac108  Symbol: FUN_001ac108 */

void FUN_001ac108(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int *unaff_r4;
  uint *puVar10;
  byte **unaff_r7;
  uint **ppuVar11;
  
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x1e;
  *(byte ***)(*unaff_r4 + 0x18) = unaff_r7;
  (**(code **)*unaff_r4)(unaff_r4);
  FUN_001ab79e();
  iVar5 = FUN_001aa894(unaff_r4,0,1,1);
  if (iVar5 != 0) {
    FUN_001ab588();
  }
  FUN_001ab60e();
  iVar5 = (*(code *)unaff_r7[3])(unaff_r4);
  if (iVar5 == 0) {
    FUN_001ab60e();
  }
  pbVar8 = unaff_r7[1] + -1;
  pbVar6 = *unaff_r7 + 1;
  bVar1 = **unaff_r7;
  if (pbVar8 == (byte *)0x0) {
    iVar5 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar5 == 0) {
      FUN_001ab60e();
    }
    pbVar6 = *unaff_r7;
    pbVar8 = unaff_r7[1];
  }
  pbVar8 = pbVar8 + -1;
  bVar2 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (pbVar8 == (byte *)0x0) {
    iVar5 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar5 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar6 = *unaff_r7;
    pbVar8 = unaff_r7[1];
  }
  pbVar8 = pbVar8 + -1;
  uVar9 = (uint)*pbVar6;
  pbVar6 = pbVar6 + 1;
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x69;
  *(uint *)(*unaff_r4 + 0x18) = uVar9;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  if (((uint)bVar2 + (uint)bVar1 * 0x100 == (uVar9 + 3) * 2) && (uVar9 < 5)) {
    if (uVar9 == 0) {
      if (unaff_r4[0x38] != 0) {
        unaff_r4[0x54] = 0;
        goto LAB_001abbb2;
      }
      goto LAB_001abae8;
    }
    unaff_r4[0x54] = uVar9;
  }
  else {
LAB_001abae8:
    *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
    (**(code **)*unaff_r4)(unaff_r4);
    unaff_r4[0x54] = uVar9;
    if (uVar9 == 0) goto LAB_001abbb2;
  }
  iVar5 = 0;
  ppuVar11 = (uint **)(unaff_r4 + 0x55);
  do {
    if (pbVar8 == (byte *)0x0) {
      iVar4 = (*(code *)unaff_r7[3])(unaff_r4);
      if (iVar4 == 0) {
        FUN_001ab60e();
      }
      pbVar8 = unaff_r7[1];
      pbVar6 = *unaff_r7;
      bVar1 = *pbVar6;
    }
    else {
      bVar1 = *pbVar6;
    }
    pbVar8 = pbVar8 + -1;
    pbVar6 = pbVar6 + 1;
    uVar3 = (uint)bVar1;
    if (pbVar8 == (byte *)0x0) {
      iVar4 = (*(code *)unaff_r7[3])(unaff_r4);
      if (iVar4 == 0) {
        FUN_001ab60e();
      }
      pbVar6 = *unaff_r7;
      pbVar8 = unaff_r7[1];
    }
    bVar1 = *pbVar6;
    pbVar8 = pbVar8 + -1;
    pbVar6 = pbVar6 + 1;
    puVar10 = (uint *)unaff_r4[0x36];
    if (unaff_r4[9] < 1) {
LAB_001abb5e:
      *(undefined4 *)(*unaff_r4 + 0x14) = 4;
      *(uint *)(*unaff_r4 + 0x18) = uVar3;
      (**(code **)*unaff_r4)(unaff_r4);
    }
    else {
      iVar4 = 0;
      uVar7 = *puVar10;
      while (uVar3 != uVar7) {
        iVar4 = iVar4 + 1;
        puVar10 = puVar10 + 0x16;
        if (unaff_r4[9] <= iVar4) goto LAB_001abb5e;
        uVar7 = *puVar10;
      }
    }
    *ppuVar11 = puVar10;
    puVar10[5] = (int)(uint)bVar1 >> 4;
    puVar10[6] = bVar1 & 0xf;
    iVar4 = *unaff_r4;
    *(uint *)(iVar4 + 0x18) = uVar3;
    *(uint *)(iVar4 + 0x1c) = puVar10[5];
    *(uint *)(iVar4 + 0x20) = puVar10[6];
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x6a;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    iVar5 = iVar5 + 1;
    ppuVar11 = ppuVar11 + 1;
  } while (iVar5 < (int)uVar9);
LAB_001abbb2:
  if (pbVar8 == (byte *)0x0) {
    iVar5 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar5 == 0) {
      FUN_001ab60e();
    }
    pbVar6 = *unaff_r7;
    pbVar8 = unaff_r7[1];
  }
  pbVar8 = pbVar8 + -1;
  unaff_r4[0x66] = (uint)*pbVar6;
  pbVar6 = pbVar6 + 1;
  if (pbVar8 == (byte *)0x0) {
    iVar5 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar5 == 0) {
      FUN_001ab60e();
    }
    pbVar6 = *unaff_r7;
    pbVar8 = unaff_r7[1];
  }
  pbVar8 = pbVar8 + -1;
  unaff_r4[0x67] = (uint)*pbVar6;
  pbVar6 = pbVar6 + 1;
  if (pbVar8 == (byte *)0x0) {
    iVar5 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar5 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar6 = *unaff_r7;
    pbVar8 = unaff_r7[1];
  }
  bVar1 = *pbVar6;
  iVar5 = *unaff_r4;
  unaff_r4[0x68] = (uint)(bVar1 >> 4);
  unaff_r4[0x69] = bVar1 & 0xf;
  *(int *)(iVar5 + 0x18) = unaff_r4[0x66];
  *(int *)(iVar5 + 0x1c) = unaff_r4[0x67];
  *(int *)(iVar5 + 0x20) = unaff_r4[0x68];
  *(int *)(iVar5 + 0x24) = unaff_r4[0x69];
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x6b;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  *(undefined4 *)(unaff_r4[0x73] + 0x14) = 0;
  if (uVar9 != 0) {
    unaff_r4[0x24] = unaff_r4[0x24] + 1;
  }
  *unaff_r7 = pbVar6 + 1;
  unaff_r7[1] = pbVar8 + -1;
  unaff_r4[0x6d] = 0;
  FUN_001ab610(1);
  return;
}


