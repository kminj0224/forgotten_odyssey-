/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aa894  Symbol: FUN_001aa894 */

undefined4 FUN_001aa894(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint *puVar7;
  byte **ppbVar8;
  byte *pbVar9;
  uint uVar10;
  
  ppbVar8 = (byte **)param_1[6];
  pbVar3 = ppbVar8[1];
  pbVar9 = *ppbVar8;
  param_1[0x37] = param_2;
  param_1[0x38] = param_3;
  param_1[0x39] = param_4;
  if (pbVar3 == (byte *)0x0) {
    iVar4 = (*(code *)ppbVar8[3])(param_1);
    if (iVar4 != 0) {
      pbVar9 = *ppbVar8;
      pbVar3 = ppbVar8[1];
      goto LAB_001aa8ba;
    }
LAB_001aaa82:
    uVar5 = 0;
  }
  else {
LAB_001aa8ba:
    bVar1 = *pbVar9;
    if (pbVar3 == (byte *)0x1) {
      iVar4 = (*(code *)ppbVar8[3])(param_1);
      if (iVar4 == 0) goto LAB_001aaa82;
      pbVar3 = ppbVar8[1] + -1;
      bVar2 = **ppbVar8;
      pbVar9 = *ppbVar8 + 1;
    }
    else {
      pbVar3 = pbVar3 + -2;
      bVar2 = pbVar9[1];
      pbVar9 = pbVar9 + 2;
    }
    if (pbVar3 == (byte *)0x0) {
      iVar4 = (*(code *)ppbVar8[3])(param_1);
      if (iVar4 == 0) goto LAB_001aaa82;
      pbVar9 = *ppbVar8;
      pbVar3 = ppbVar8[1];
    }
    param_1[0x35] = (uint)*pbVar9;
    if (pbVar3 == (byte *)0x1) {
      iVar4 = (*(code *)ppbVar8[3])(param_1);
      if (iVar4 == 0) goto LAB_001aaa82;
      pbVar3 = ppbVar8[1] + -1;
      pbVar6 = *ppbVar8 + 1;
      iVar4 = (uint)**ppbVar8 << 8;
      param_1[8] = iVar4;
      if (pbVar3 == (byte *)0x0) goto LAB_001aaaca;
LAB_001aa8f2:
      param_1[8] = (uint)*pbVar6 + iVar4;
    }
    else {
      pbVar3 = pbVar3 + -2;
      pbVar6 = pbVar9 + 2;
      iVar4 = (uint)pbVar9[1] << 8;
      param_1[8] = iVar4;
      if (pbVar3 != (byte *)0x0) goto LAB_001aa8f2;
LAB_001aaaca:
      iVar4 = (*(code *)ppbVar8[3])(param_1);
      if (iVar4 == 0) goto LAB_001aaa82;
      pbVar6 = *ppbVar8;
      pbVar3 = ppbVar8[1];
      param_1[8] = (uint)*pbVar6 + param_1[8];
    }
    pbVar3 = pbVar3 + -1;
    pbVar6 = pbVar6 + 1;
    if (pbVar3 == (byte *)0x0) {
      iVar4 = (*(code *)ppbVar8[3])(param_1);
      if (iVar4 == 0) goto LAB_001aaa82;
      pbVar6 = *ppbVar8;
      pbVar3 = ppbVar8[1];
    }
    pbVar3 = pbVar3 + -1;
    pbVar9 = pbVar6 + 1;
    iVar4 = (uint)*pbVar6 << 8;
    param_1[7] = iVar4;
    if (pbVar3 == (byte *)0x0) {
      iVar4 = (*(code *)ppbVar8[3])(param_1);
      if (iVar4 == 0) goto LAB_001aaa82;
      pbVar9 = *ppbVar8;
      pbVar3 = ppbVar8[1];
      iVar4 = param_1[7];
    }
    pbVar3 = pbVar3 + -1;
    pbVar6 = pbVar9 + 1;
    param_1[7] = (uint)*pbVar9 + iVar4;
    if (pbVar3 == (byte *)0x0) {
      iVar4 = (*(code *)ppbVar8[3])(param_1);
      if (iVar4 == 0) goto LAB_001aaa82;
      pbVar6 = *ppbVar8;
      pbVar3 = ppbVar8[1];
    }
    iVar4 = *param_1;
    pbVar9 = pbVar6 + 1;
    param_1[9] = (uint)*pbVar6;
    *(int *)(iVar4 + 0x18) = param_1[0x6d];
    pbVar3 = pbVar3 + -1;
    *(int *)(iVar4 + 0x1c) = param_1[7];
    *(int *)(iVar4 + 0x20) = param_1[8];
    *(int *)(iVar4 + 0x24) = param_1[9];
    *(undefined4 *)(*param_1 + 0x14) = 0x66;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (*(int *)(param_1[0x73] + 0x10) != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x3c;
      (**(code **)*param_1)(param_1);
    }
    if (((param_1[8] == 0) || (param_1[7] == 0)) || (iVar4 = param_1[9], iVar4 < 1)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x21;
      (**(code **)*param_1)(param_1);
      iVar4 = param_1[9];
    }
    if (iVar4 * 3 != (uint)bVar1 * 0x100 + -8 + (uint)bVar2) {
      *(undefined4 *)(*param_1 + 0x14) = 0xc;
      (**(code **)*param_1)(param_1);
      iVar4 = param_1[9];
    }
    puVar7 = (uint *)param_1[0x36];
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)(**(code **)param_1[1])(param_1,1,iVar4 * 0x58);
      iVar4 = param_1[9];
      param_1[0x36] = (int)puVar7;
    }
    if (0 < iVar4) {
      uVar10 = 0;
      while( true ) {
        puVar7[1] = uVar10;
        if (pbVar3 == (byte *)0x0) {
          iVar4 = (*(code *)ppbVar8[3])(param_1);
          if (iVar4 == 0) goto LAB_001aaa82;
          pbVar9 = *ppbVar8;
          pbVar3 = ppbVar8[1];
        }
        pbVar3 = pbVar3 + -1;
        *puVar7 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
        if (pbVar3 == (byte *)0x0) {
          iVar4 = (*(code *)ppbVar8[3])(param_1);
          if (iVar4 == 0) goto LAB_001aaa82;
          pbVar9 = *ppbVar8;
          pbVar3 = ppbVar8[1];
        }
        bVar1 = *pbVar9;
        pbVar3 = pbVar3 + -1;
        pbVar6 = pbVar9 + 1;
        puVar7[2] = (int)(uint)bVar1 >> 4;
        puVar7[3] = bVar1 & 0xf;
        if (pbVar3 == (byte *)0x0) {
          iVar4 = (*(code *)ppbVar8[3])(param_1);
          if (iVar4 == 0) goto LAB_001aaa82;
          pbVar6 = *ppbVar8;
          pbVar3 = ppbVar8[1];
        }
        pbVar3 = pbVar3 + -1;
        pbVar9 = pbVar6 + 1;
        puVar7[4] = (uint)*pbVar6;
        iVar4 = *param_1;
        uVar10 = uVar10 + 1;
        *(uint *)(iVar4 + 0x18) = *puVar7;
        *(uint *)(iVar4 + 0x1c) = puVar7[2];
        *(uint *)(iVar4 + 0x20) = puVar7[3];
        *(uint *)(iVar4 + 0x24) = puVar7[4];
        *(undefined4 *)(*param_1 + 0x14) = 0x67;
        (**(code **)(*param_1 + 4))(param_1,1);
        if (param_1[9] <= (int)uVar10) break;
        puVar7 = puVar7 + 0x16;
      }
    }
    uVar5 = 1;
    *(undefined4 *)(param_1[0x73] + 0x10) = 1;
    *ppbVar8 = pbVar9;
    ppbVar8[1] = pbVar3;
  }
  return uVar5;
}


