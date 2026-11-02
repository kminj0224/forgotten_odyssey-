/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac1ea  Symbol: FUN_001ac1ea */

void FUN_001ac1ea(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int *unaff_r4;
  uint *puVar9;
  int unaff_r5;
  byte **ppbVar10;
  uint **ppuVar11;
  
  iVar4 = (**(code **)(unaff_r5 + 0xc))(unaff_r4);
  if (iVar4 == 0) {
    FUN_001ab60e();
  }
  ppbVar10 = *(byte ***)(unaff_r5 + 4);
  FUN_001ab664();
  iVar4 = (*(code *)ppbVar10[3])(unaff_r4);
  if (iVar4 == 0) {
    FUN_001ab60e();
  }
  pbVar7 = ppbVar10[1] + -1;
  bVar1 = **ppbVar10;
  pbVar5 = *ppbVar10 + 1;
  if (pbVar7 == (byte *)0x0) {
    iVar4 = (*(code *)ppbVar10[3])(unaff_r4);
    if (iVar4 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar5 = *ppbVar10;
    pbVar7 = ppbVar10[1];
  }
  pbVar7 = pbVar7 + -1;
  uVar8 = (uint)*pbVar5;
  pbVar5 = pbVar5 + 1;
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x69;
  *(uint *)(*unaff_r4 + 0x18) = uVar8;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  if (((uint)bVar1 + unaff_r5 * 0x100 == (uVar8 + 3) * 2) && (uVar8 < 5)) {
    if (uVar8 == 0) {
      if (unaff_r4[0x38] != 0) {
        unaff_r4[0x54] = 0;
        goto LAB_001abbb2;
      }
      goto LAB_001abae8;
    }
    unaff_r4[0x54] = uVar8;
  }
  else {
LAB_001abae8:
    *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
    (**(code **)*unaff_r4)(unaff_r4);
    unaff_r4[0x54] = uVar8;
    if (uVar8 == 0) goto LAB_001abbb2;
  }
  iVar4 = 0;
  ppuVar11 = (uint **)(unaff_r4 + 0x55);
  do {
    if (pbVar7 == (byte *)0x0) {
      iVar3 = (*(code *)ppbVar10[3])(unaff_r4);
      if (iVar3 == 0) {
        FUN_001ab60e();
      }
      pbVar7 = ppbVar10[1];
      pbVar5 = *ppbVar10;
      bVar1 = *pbVar5;
    }
    else {
      bVar1 = *pbVar5;
    }
    pbVar7 = pbVar7 + -1;
    pbVar5 = pbVar5 + 1;
    uVar2 = (uint)bVar1;
    if (pbVar7 == (byte *)0x0) {
      iVar3 = (*(code *)ppbVar10[3])(unaff_r4);
      if (iVar3 == 0) {
        FUN_001ab60e();
      }
      pbVar5 = *ppbVar10;
      pbVar7 = ppbVar10[1];
    }
    bVar1 = *pbVar5;
    pbVar7 = pbVar7 + -1;
    pbVar5 = pbVar5 + 1;
    puVar9 = (uint *)unaff_r4[0x36];
    if (unaff_r4[9] < 1) {
LAB_001abb5e:
      *(undefined4 *)(*unaff_r4 + 0x14) = 4;
      *(uint *)(*unaff_r4 + 0x18) = uVar2;
      (**(code **)*unaff_r4)(unaff_r4);
    }
    else {
      iVar3 = 0;
      uVar6 = *puVar9;
      while (uVar2 != uVar6) {
        iVar3 = iVar3 + 1;
        puVar9 = puVar9 + 0x16;
        if (unaff_r4[9] <= iVar3) goto LAB_001abb5e;
        uVar6 = *puVar9;
      }
    }
    *ppuVar11 = puVar9;
    puVar9[5] = (int)(uint)bVar1 >> 4;
    puVar9[6] = bVar1 & 0xf;
    iVar3 = *unaff_r4;
    *(uint *)(iVar3 + 0x18) = uVar2;
    *(uint *)(iVar3 + 0x1c) = puVar9[5];
    *(uint *)(iVar3 + 0x20) = puVar9[6];
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x6a;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    iVar4 = iVar4 + 1;
    ppuVar11 = ppuVar11 + 1;
  } while (iVar4 < (int)uVar8);
LAB_001abbb2:
  if (pbVar7 == (byte *)0x0) {
    iVar4 = (*(code *)ppbVar10[3])(unaff_r4);
    if (iVar4 == 0) {
      FUN_001ab60e();
    }
    pbVar5 = *ppbVar10;
    pbVar7 = ppbVar10[1];
  }
  pbVar7 = pbVar7 + -1;
  unaff_r4[0x66] = (uint)*pbVar5;
  pbVar5 = pbVar5 + 1;
  if (pbVar7 == (byte *)0x0) {
    iVar4 = (*(code *)ppbVar10[3])(unaff_r4);
    if (iVar4 == 0) {
      FUN_001ab60e();
    }
    pbVar5 = *ppbVar10;
    pbVar7 = ppbVar10[1];
  }
  pbVar7 = pbVar7 + -1;
  unaff_r4[0x67] = (uint)*pbVar5;
  pbVar5 = pbVar5 + 1;
  if (pbVar7 == (byte *)0x0) {
    iVar4 = (*(code *)ppbVar10[3])(unaff_r4);
    if (iVar4 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar5 = *ppbVar10;
    pbVar7 = ppbVar10[1];
  }
  bVar1 = *pbVar5;
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
  if (uVar8 != 0) {
    unaff_r4[0x24] = unaff_r4[0x24] + 1;
  }
  *ppbVar10 = pbVar5 + 1;
  ppbVar10[1] = pbVar7 + -1;
  unaff_r4[0x6d] = 0;
  FUN_001ab610(1);
  return;
}


