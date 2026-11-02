/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc398  Symbol: FUN_001dc398 */

void FUN_001dc398(undefined *param_1,undefined param_2,byte *param_3,int param_4,undefined *param_5,
                 undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  
  iVar8 = 0;
  uVar5 = (uint)*param_3;
  uVar4 = 0;
  pbVar7 = param_3;
  while ((((int)uVar5 < (int)param_6 - (int)param_5 && (uVar5 != 0 && -1 < (int)(uVar5 * 0x1000000))
          ) && (uVar5 != 0xff))) {
    param_6 = param_6 + -uVar5;
    if (uVar4 < param_4 - 1U) {
      uVar4 = uVar4 + 1;
      pbVar7 = param_3 + uVar4;
      uVar5 = (uint)*pbVar7;
    }
    else {
      iVar8 = iVar8 + 1;
    }
  }
  puVar1 = param_5;
  puVar6 = param_1;
  if (param_5 != param_6) {
    do {
      puVar2 = puVar1 + 1;
      *puVar6 = *puVar1;
      puVar1 = puVar2;
      puVar6 = puVar6 + 1;
    } while (puVar2 != param_6);
    iVar3 = (int)puVar2 - (int)param_5;
    param_5 = param_5 + iVar3;
    param_1 = param_1 + iVar3;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar1 = param_1 + 1;
    *param_1 = param_2;
    if (*pbVar7 != 0) {
      iVar3 = (byte)(*pbVar7 - 1) + 1;
      puVar2 = param_1 + iVar3;
      puVar6 = param_5;
      do {
        param_1 = param_1 + 1;
        *param_1 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (param_1 != puVar2);
      puVar1 = puVar1 + iVar3;
      param_5 = param_5 + iVar3;
    }
    param_1 = puVar1;
  }
  while (puVar1 = param_1, uVar4 != 0) {
    uVar4 = uVar4 - 1;
    param_1 = puVar1 + 1;
    *puVar1 = param_2;
    if (param_3[uVar4] != 0) {
      uVar5 = (uint)(byte)(param_3[uVar4] - 1);
      puVar6 = param_5;
      do {
        puVar1 = puVar1 + 1;
        *puVar1 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (puVar1 != param_1 + uVar5);
      iVar8 = uVar5 + 1;
      param_5 = param_5 + iVar8;
      param_1 = param_1 + iVar8;
    }
  }
  return;
}


