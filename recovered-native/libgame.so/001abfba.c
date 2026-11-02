/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001abfba  Symbol: FUN_001abfba */

void FUN_001abfba(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_r3;
  int *unaff_r4;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte **unaff_r7;
  uint **ppuVar9;
  byte *unaff_r9;
  byte *unaff_r10;
  int param_7;
  
  if (in_r3 != 0xc2) {
    if (in_r3 != 0xc3) {
      FUN_001ab5d4();
    }
    FUN_001ab570();
  }
  iVar3 = FUN_001aa894(unaff_r4,0,1,0);
  if (iVar3 != 0) {
    FUN_001ab588();
  }
  FUN_001ab60e();
  if (param_7 < 5) {
    if (param_7 == 0) {
      if (unaff_r4[0x38] != 0) {
        unaff_r4[0x54] = 0;
        goto LAB_001abbb2;
      }
      goto LAB_001abae8;
    }
    unaff_r4[0x54] = param_7;
  }
  else {
LAB_001abae8:
    *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
    (**(code **)*unaff_r4)(unaff_r4);
    unaff_r4[0x54] = param_7;
    if (param_7 == 0) goto LAB_001abbb2;
  }
  iVar3 = 0;
  ppuVar9 = (uint **)(unaff_r4 + 0x55);
  do {
    if (unaff_r10 == (byte *)0x0) {
      iVar4 = (*(code *)unaff_r7[3])(unaff_r4);
      if (iVar4 == 0) {
        FUN_001ab60e();
      }
      unaff_r10 = unaff_r7[1];
      unaff_r9 = *unaff_r7;
      bVar1 = *unaff_r9;
    }
    else {
      bVar1 = *unaff_r9;
    }
    pbVar7 = unaff_r10 + -1;
    pbVar8 = unaff_r9 + 1;
    uVar2 = (uint)bVar1;
    if (pbVar7 == (byte *)0x0) {
      iVar4 = (*(code *)unaff_r7[3])(unaff_r4);
      if (iVar4 == 0) {
        FUN_001ab60e();
      }
      pbVar8 = *unaff_r7;
      pbVar7 = unaff_r7[1];
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
      iVar4 = 0;
      uVar5 = *puVar6;
      while (uVar2 != uVar5) {
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 0x16;
        if (unaff_r4[9] <= iVar4) goto LAB_001abb5e;
        uVar5 = *puVar6;
      }
    }
    *ppuVar9 = puVar6;
    puVar6[5] = (int)(uint)bVar1 >> 4;
    puVar6[6] = bVar1 & 0xf;
    iVar4 = *unaff_r4;
    *(uint *)(iVar4 + 0x18) = uVar2;
    *(uint *)(iVar4 + 0x1c) = puVar6[5];
    *(uint *)(iVar4 + 0x20) = puVar6[6];
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x6a;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    iVar3 = iVar3 + 1;
    ppuVar9 = ppuVar9 + 1;
  } while (iVar3 < param_7);
LAB_001abbb2:
  if (unaff_r10 == (byte *)0x0) {
    iVar3 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar3 == 0) {
      FUN_001ab60e();
    }
    unaff_r9 = *unaff_r7;
    unaff_r10 = unaff_r7[1];
  }
  pbVar8 = unaff_r10 + -1;
  unaff_r4[0x66] = (uint)*unaff_r9;
  pbVar7 = unaff_r9 + 1;
  if (pbVar8 == (byte *)0x0) {
    iVar3 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar3 == 0) {
      FUN_001ab60e();
    }
    pbVar7 = *unaff_r7;
    pbVar8 = unaff_r7[1];
  }
  pbVar8 = pbVar8 + -1;
  unaff_r4[0x67] = (uint)*pbVar7;
  pbVar7 = pbVar7 + 1;
  if (pbVar8 == (byte *)0x0) {
    iVar3 = (*(code *)unaff_r7[3])(unaff_r4);
    if (iVar3 == 0) {
      FUN_001ab60e();
      return;
    }
    pbVar7 = *unaff_r7;
    pbVar8 = unaff_r7[1];
  }
  bVar1 = *pbVar7;
  iVar3 = *unaff_r4;
  unaff_r4[0x68] = (uint)(bVar1 >> 4);
  unaff_r4[0x69] = bVar1 & 0xf;
  *(int *)(iVar3 + 0x18) = unaff_r4[0x66];
  *(int *)(iVar3 + 0x1c) = unaff_r4[0x67];
  *(int *)(iVar3 + 0x20) = unaff_r4[0x68];
  *(int *)(iVar3 + 0x24) = unaff_r4[0x69];
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x6b;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  *(undefined4 *)(unaff_r4[0x73] + 0x14) = 0;
  if (param_7 != 0) {
    unaff_r4[0x24] = unaff_r4[0x24] + 1;
  }
  *unaff_r7 = pbVar7 + 1;
  unaff_r7[1] = pbVar8 + -1;
  unaff_r4[0x6d] = 0;
  FUN_001ab610(1);
  return;
}


