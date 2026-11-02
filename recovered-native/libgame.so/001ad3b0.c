/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad3b0  Symbol: FUN_001ad3b0 */

void FUN_001ad3b0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  
  param_4 = (undefined4 *)*param_4;
  iVar4 = *(int *)(param_1 + 0x1d8) + *(int *)(param_2 + 4);
  uVar5 = (uint)*(byte *)(iVar4 + 0x96);
  uVar7 = (uint)*(byte *)(iVar4 + 0x8c);
  if (0 < *(int *)(param_1 + 0x13c)) {
    iVar4 = 0;
    puVar9 = param_4;
    do {
      puVar3 = (undefined *)*puVar9;
      puVar6 = (undefined *)*param_3;
      puVar2 = puVar3 + *(int *)(param_1 + 0x70);
      while (puVar3 < puVar2) {
        while( true ) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          if (uVar7 == 0) break;
          puVar8 = puVar3 + uVar7;
          do {
            *puVar3 = uVar1;
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar8);
          if (puVar2 <= puVar3) goto LAB_001ad426;
        }
      }
LAB_001ad426:
      if (1 < uVar5) {
        jcopy_sample_rows(param_4,iVar4,param_4,iVar4 + 1,uVar5 - 1,*(undefined4 *)(param_1 + 0x70))
        ;
      }
      iVar4 = iVar4 + uVar5;
      param_3 = param_3 + 1;
      puVar9 = puVar9 + uVar5;
    } while (iVar4 < *(int *)(param_1 + 0x13c));
  }
  return;
}


