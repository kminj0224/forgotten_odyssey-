/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f3a68  Symbol: FUN_001f3a68 */

void FUN_001f3a68(undefined4 *param_1,undefined4 param_2,byte *param_3,int param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  
  iVar8 = 0;
  uVar4 = (uint)*param_3;
  uVar3 = 0;
  pbVar7 = param_3;
  while ((((int)uVar4 < (int)param_6 - (int)param_5 >> 2 &&
          (uVar4 != 0 && -1 < (int)(uVar4 * 0x1000000))) && (uVar4 != 0xff))) {
    param_6 = param_6 + -uVar4;
    if (uVar3 < param_4 - 1U) {
      uVar3 = uVar3 + 1;
      pbVar7 = param_3 + uVar3;
      uVar4 = (uint)*pbVar7;
    }
    else {
      iVar8 = iVar8 + 1;
    }
  }
  puVar1 = param_5;
  puVar5 = param_1;
  if (param_5 != param_6) {
    do {
      puVar2 = puVar1 + 1;
      *puVar5 = *puVar1;
      puVar1 = puVar2;
      puVar5 = puVar5 + 1;
    } while (param_6 != puVar2);
    iVar6 = ((int)param_6 - (int)(param_5 + 1) & 0xfffffffcU) + 4;
    param_5 = (undefined4 *)((int)param_5 + iVar6);
    param_1 = (undefined4 *)((int)param_1 + iVar6);
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar1 = param_1 + 1;
    *param_1 = param_2;
    if (*pbVar7 != 0) {
      uVar4 = (uint)(byte)(*pbVar7 - 1);
      puVar2 = param_1 + uVar4 + 1;
      puVar5 = param_5;
      do {
        param_1 = param_1 + 1;
        *param_1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (param_1 != puVar2);
      iVar6 = uVar4 + 1;
      puVar1 = puVar1 + iVar6;
      param_5 = param_5 + iVar6;
    }
    param_1 = puVar1;
  }
  while (puVar1 = param_1, uVar3 != 0) {
    uVar3 = uVar3 - 1;
    param_1 = puVar1 + 1;
    *puVar1 = param_2;
    if (param_3[uVar3] != 0) {
      uVar4 = (uint)(byte)(param_3[uVar3] - 1);
      puVar5 = param_5;
      do {
        puVar1 = puVar1 + 1;
        *puVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (puVar1 != param_1 + uVar4);
      iVar8 = uVar4 + 1;
      param_5 = param_5 + iVar8;
      param_1 = param_1 + iVar8;
    }
  }
  return;
}


